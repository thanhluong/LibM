#pragma once

namespace ThuVien {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddBook
	/// </summary>
	public ref class AddBook : public System::Windows::Forms::Form
	{
	public:
		AddBook(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddBook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  BookName;
	private: System::Windows::Forms::OpenFileDialog^  CoverImg;
	private: System::Windows::Forms::Button^  SelectCover;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  OKBtn;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  BookAuthor;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  BookPublisher;
	private: System::Windows::Forms::TextBox^  BookCat;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  PreviewBox;




	protected: 

	protected: 

	protected: 

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AddBook::typeid));
			this->BookName = (gcnew System::Windows::Forms::TextBox());
			this->CoverImg = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SelectCover = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->OKBtn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->BookAuthor = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->BookPublisher = (gcnew System::Windows::Forms::TextBox());
			this->BookCat = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->PreviewBox = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PreviewBox))->BeginInit();
			this->SuspendLayout();
			// 
			// BookName
			// 
			this->BookName->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BookName->Location = System::Drawing::Point(162, 25);
			this->BookName->Name = L"BookName";
			this->BookName->Size = System::Drawing::Size(206, 27);
			this->BookName->TabIndex = 0;
			this->BookName->Text = L"Tên sách";
			// 
			// CoverImg
			// 
			this->CoverImg->FileName = L"Image/default.png";
			this->CoverImg->Filter = L"Tệp hình ảnh (*.jpg) | *.jpg";
			this->CoverImg->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &AddBook::CoverImg_FileOk);
			// 
			// SelectCover
			// 
			this->SelectCover->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->SelectCover->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"SelectCover.Image")));
			this->SelectCover->Location = System::Drawing::Point(5, 215);
			this->SelectCover->Name = L"SelectCover";
			this->SelectCover->Size = System::Drawing::Size(128, 62);
			this->SelectCover->TabIndex = 1;
			this->SelectCover->Text = L"Chọn ảnh bìa";
			this->SelectCover->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->SelectCover->UseVisualStyleBackColor = true;
			this->SelectCover->Click += gcnew System::EventHandler(this, &AddBook::SelectCover_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(2, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 18);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Tên sách";
			// 
			// OKBtn
			// 
			this->OKBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"OKBtn.Image")));
			this->OKBtn->Location = System::Drawing::Point(182, 325);
			this->OKBtn->Name = L"OKBtn";
			this->OKBtn->Size = System::Drawing::Size(90, 39);
			this->OKBtn->TabIndex = 3;
			this->OKBtn->Text = L"Xong";
			this->OKBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->OKBtn->UseVisualStyleBackColor = true;
			this->OKBtn->Click += gcnew System::EventHandler(this, &AddBook::OKBtn_Click);
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(278, 325);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 39);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Hủy";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddBook::button1_Click);
			// 
			// BookAuthor
			// 
			this->BookAuthor->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BookAuthor->Location = System::Drawing::Point(162, 71);
			this->BookAuthor->Name = L"BookAuthor";
			this->BookAuthor->Size = System::Drawing::Size(206, 27);
			this->BookAuthor->TabIndex = 5;
			this->BookAuthor->Text = L"Tên tác giả";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(2, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 18);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Tên tác giả";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(2, 123);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 18);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Nhà xuất bản";
			// 
			// BookPublisher
			// 
			this->BookPublisher->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BookPublisher->Location = System::Drawing::Point(162, 119);
			this->BookPublisher->Name = L"BookPublisher";
			this->BookPublisher->Size = System::Drawing::Size(206, 27);
			this->BookPublisher->TabIndex = 8;
			this->BookPublisher->Text = L"Nhà xuất bản";
			// 
			// BookCat
			// 
			this->BookCat->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BookCat->Location = System::Drawing::Point(162, 169);
			this->BookCat->Name = L"BookCat";
			this->BookCat->Size = System::Drawing::Size(206, 27);
			this->BookCat->TabIndex = 9;
			this->BookCat->Text = L"Thể loại";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(2, 173);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 18);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Thể loại";
			// 
			// PreviewBox
			// 
			this->PreviewBox->Location = System::Drawing::Point(162, 215);
			this->PreviewBox->Name = L"PreviewBox";
			this->PreviewBox->Size = System::Drawing::Size(80, 91);
			this->PreviewBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PreviewBox->TabIndex = 11;
			this->PreviewBox->TabStop = false;
			// 
			// AddBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(375, 376);
			this->Controls->Add(this->PreviewBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->BookCat);
			this->Controls->Add(this->BookPublisher);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->BookAuthor);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->OKBtn);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->SelectCover);
			this->Controls->Add(this->BookName);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AddBook";
			this->Text = L"Thêm sách";
			this->Load += gcnew System::EventHandler(this, &AddBook::AddBook_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PreviewBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void SelectCover_Click(System::Object^  sender, System::EventArgs^  e) {
				 CoverImg->ShowDialog();
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }

private: System::Void OKBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 int NBook=IsEditMode();
			 if (NBook==0)
				 NBook=GetNumberOfBook()+1;
			 SetNumberOfBook(NBook);
			 SetBookInfo(NBook,0,BookName->Text);
			 SetBookInfo(NBook,1,BookAuthor->Text);
			 SetBookInfo(NBook,2,BookPublisher->Text);
			 SetBookInfo(NBook,3,BookCat->Text);
			 SetBookInfo(NBook,4,CoverImg->FileName);
			 SetBookInfo(NBook,5,L"0");
			 SetBookInfo(NBook,6,L"01/06/2003");
			 SetCurBookID(NBook);
			 /*
			 StreamWriter^ NewBook=gcnew StreamWriter("BData/"+NBook.ToString()+".bdat");
			 NewBook->WriteLine(BookName->Text);
			 NewBook->WriteLine(BookAuthor->Text);
			 NewBook->WriteLine(BookPublisher->Text);
			 NewBook->WriteLine(BookCat->Text);
			 NewBook->WriteLine(CoverImg->FileName);
			 NewBook->WriteLine("0");
			 NewBook->WriteLine("01/06/2003");
			 NewBook->WriteLine("0");
			 NewBook->Close();
			 */
			 this->Close();
		 }
private: System::Void CoverImg_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 this->PreviewBox->Image=Image::FromFile(this->CoverImg->FileName);
		 }
private: System::Void AddBook_Load(System::Object^  sender, System::EventArgs^  e) {
			 int Idx=IsEditMode();
			 if (Idx){
				 //this->Text=GetBookInfo(1,0);
				 
				 this->Text=L"Chỉnh sửa thông tin sách";
				 this->BookName->Text=GetBookInfo(Idx,0);
				 this->BookAuthor->Text=GetBookInfo(Idx,1);
				 this->BookPublisher->Text=GetBookInfo(Idx,2);
				 this->BookCat->Text=GetBookInfo(Idx,3);
				 this->CoverImg->FileName=GetBookInfo(Idx,4);
				 this->PreviewBox->Image=Image::FromFile(GetBookInfo(Idx,4));
			 }
		 }
};
}
