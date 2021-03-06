using namespace System;
using namespace System::IO;

Int32 GetNumberOfBook(void){
	StreamReader^ Fin=File::OpenText(L"BData/Number.cfg");
	Int32 Ret=Convert::ToInt32(Fin->ReadLine());
	Fin->Close();
	return Ret;
}

Int32 GetNumberOfStudent(void){
	StreamReader^ Fin=File::OpenText(L"SData/Number.cfg");
	Int32 Ret=Convert::ToInt32(Fin->ReadLine());
	Fin->Close();
	return Ret;
}

Int32 GetNumberOfNoti(void){
	StreamReader^ Fin=File::OpenText(L"NData/Number.cfg");
	Int32 Ret=Convert::ToInt32(Fin->ReadLine());
	Fin->Close();
	return Ret;
}

void SetNumberOfBook(Int32 _NBook){
	StreamWriter^ Fout=gcnew StreamWriter(L"BData/Number.cfg");
	Fout->WriteLine(_NBook);
	Fout->Close();
}

void SetNumberOfStudent(Int32 NStudent){
	StreamWriter^ Fout=gcnew StreamWriter(L"SData/Number.cfg");
	Fout->WriteLine(NStudent);
	Fout->Close();
}

void SetNumberOfNoti(Int32 NStudent){
	StreamWriter^ Fout=gcnew StreamWriter(L"NData/Number.cfg");
	Fout->WriteLine(NStudent);
	Fout->Close();
}

#define BOOK_FILE_NAME(BookID) "BData/"+BookID.ToString()+".bdat"
#define STUDENT_FILE_NAME(StudentID) "SData/"+StudentID.ToString()+".sdat"
#define NOTI_FILE_NAME(NotiID) "NData/"+NotiID.ToString()+".ndat"

void SetBookInfo(Int32 BookID,Int32 LineID,String^ NewInfo){
	int Idx=0;
	array<String^>^ Backup=gcnew array<String^>(10);
	StreamReader^ Fin=File::OpenText(BOOK_FILE_NAME(BookID));
	String^ Tmp;
	for (int i=0;i<8;i++){
		Tmp=Fin->ReadLine();
		if (i!=LineID) Backup[Idx++]=Tmp;
	}
	Fin->Close();
	StreamWriter^ Fout=gcnew StreamWriter(BOOK_FILE_NAME(BookID));
	Idx=0;
	for (int i=0;i<7;i++)
		if (i!=LineID)
			Fout->WriteLine(Backup[Idx++]);
		else
			Fout->WriteLine(NewInfo);
	Fout->Close();
}

void SetStudentInfo(Int32 StudentID,Int32 LineID,String^ NewInfo){
	StreamReader^ Fin=File::OpenText(STUDENT_FILE_NAME(StudentID));
	array<String^>^ Backup=gcnew array<String^>(10);
	String^ Tmp;
	int Idx=0;
	for (int i=0;i<8;i++){
		Tmp=Fin->ReadLine();
		if (i!=LineID) Backup[Idx++]=Tmp;
	}
	Fin->Close();
	StreamWriter^ Fout=gcnew StreamWriter(STUDENT_FILE_NAME(StudentID));
	Idx=0;
	for (int i=0;i<5;i++)
		if (i!=LineID)
			Fout->WriteLine(Backup[Idx++]);
		else
			Fout->WriteLine(NewInfo);
	Fout->Close();
}

String^ GetBookInfo(Int32 BookID,Int32 LineID){
	StreamReader^ Fin=File::OpenText(BOOK_FILE_NAME(BookID));
	String^ Ret;
	for (int i=0;i<7;i++){
		Ret=Fin->ReadLine();
		if (i==LineID) break;
	}
	Fin->Close();
	return Ret;
}

String^ GetStudentInfo(Int32 StudentID,Int32 LineID){
	StreamReader^ Fin=File::OpenText(STUDENT_FILE_NAME(StudentID));
	String^ Ret;
	for (int i=0;i<5;i++){
		Ret=Fin->ReadLine();
		if (i==LineID) break;
	}
	Fin->Close();
	return Ret;
}

Int32 IsEditMode(){
	StreamReader^ Fin=File::OpenText(L"EMode.em");
	Int32 Ret=Convert::ToInt32(Fin->ReadLine());
	Fin->Close();
	return Ret;
}

void SetEditMode(Int32 _Mode){
	StreamWriter^ Fout=gcnew StreamWriter(L"EMode.em");
	Fout->WriteLine(_Mode.ToString());
	Fout->Close();
}

Int32 GetCurBookID(){
	StreamReader^ Fin=File::OpenText(L"BData/ID.cfg");
	Int32 Ret=Convert::ToInt32(Fin->ReadLine());
	Fin->Close();
	return Ret;
}

Int32 GetCurStudentID(){
	StreamReader^ Fin=File::OpenText(L"SData/ID.cfg");
	Int32 Ret=Convert::ToInt32(Fin->ReadLine());
	Fin->Close();
	return Ret;
}

Int32 GetCurNotiID(){
	StreamReader^ Fin=File::OpenText(L"NData/ID.cfg");
	Int32 Ret=Convert::ToInt32(Fin->ReadLine());
	Fin->Close();
	return Ret;
}

void SetCurBookID(Int32 BookID){
	StreamWriter^ Fout=gcnew StreamWriter(L"BData/ID.cfg");
	Fout->WriteLine(BookID.ToString());
	Fout->Close();
}

void SetCurStudentID(Int32 StudentID){
	StreamWriter^ Fout=gcnew StreamWriter(L"SData/ID.cfg");
	Fout->WriteLine(StudentID.ToString());
	Fout->Close();
}

void SetCurNotiID(Int32 NotiID){
	StreamWriter^ Fout=gcnew StreamWriter(L"NData/ID.cfg");
	Fout->WriteLine(NotiID.ToString());
	Fout->Close();
}

String^ GetBorrowStatus(String^ Signal){
	return (Signal==L"0"?L"Chưa cho mượn":L"Đang được mượn");
}

Int32 SearchBook(String^ BookName){
	int n=GetNumberOfBook();
	for (int i=1;i<=n;i++)
		if (BookName==GetBookInfo(i,0))
			return i;
	return -1;
}

Int32 SearchStudent(String^ StudentName){
	int n=GetNumberOfStudent();
	for (int i=1;i<=n;i++)
		if (StudentName==GetStudentInfo(i,0))
			return i;
	return -1;
}