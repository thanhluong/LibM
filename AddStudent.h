#pragma once

namespace ThuVien {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddStudent
	/// </summary>
	public ref class AddStudent : public System::Windows::Forms::Form
	{
	public:
		AddStudent(void)
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
		~AddStudent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  StudentName;
	protected: 

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  StudentBirthday;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  StudentGender;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  OKBtn;
	private: System::Windows::Forms::Button^  SelectCover;
	private: System::Windows::Forms::OpenFileDialog^  StudentImg;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::NumericUpDown^  StudentMaxDay;

	private: System::Windows::Forms::PictureBox^  PreviewBox;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AddStudent::typeid));
			this->StudentName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->StudentBirthday = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->StudentGender = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->OKBtn = (gcnew System::Windows::Forms::Button());
			this->SelectCover = (gcnew System::Windows::Forms::Button());
			this->StudentImg = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->StudentMaxDay = (gcnew System::Windows::Forms::NumericUpDown());
			this->PreviewBox = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->StudentMaxDay))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PreviewBox))->BeginInit();
			this->SuspendLayout();
			// 
			// StudentName
			// 
			this->StudentName->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->StudentName->Location = System::Drawing::Point(190, 25);
			this->StudentName->Name = L"StudentName";
			this->StudentName->Size = System::Drawing::Size(192, 27);
			this->StudentName->TabIndex = 0;
			this->StudentName->Text = L"Tên học sinh";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Họ và tên";
			// 
			// StudentBirthday
			// 
			this->StudentBirthday->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->StudentBirthday->Location = System::Drawing::Point(190, 74);
			this->StudentBirthday->Name = L"StudentBirthday";
			this->StudentBirthday->Size = System::Drawing::Size(192, 27);
			this->StudentBirthday->TabIndex = 2;
			this->StudentBirthday->Text = L"Tháng/Ngày/Năm";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Ngày sinh";
			// 
			// StudentGender
			// 
			this->StudentGender->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->StudentGender->Location = System::Drawing::Point(190, 120);
			this->StudentGender->Name = L"StudentGender";
			this->StudentGender->Size = System::Drawing::Size(192, 27);
			this->StudentGender->TabIndex = 4;
			this->StudentGender->Text = L"Nam/Nữ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 18);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Giới tính";
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(292, 385);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 39);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Hủy";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddStudent::button1_Click);
			// 
			// OKBtn
			// 
			this->OKBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"OKBtn.Image")));
			this->OKBtn->Location = System::Drawing::Point(190, 385);
			this->OKBtn->Name = L"OKBtn";
			this->OKBtn->Size = System::Drawing::Size(90, 39);
			this->OKBtn->TabIndex = 7;
			this->OKBtn->Text = L"Xong";
			this->OKBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->OKBtn->UseVisualStyleBackColor = true;
			this->OKBtn->Click += gcnew System::EventHandler(this, &AddStudent::OKBtn_Click);
			// 
			// SelectCover
			// 
			this->SelectCover->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->SelectCover->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"SelectCover.Image")));
			this->SelectCover->Location = System::Drawing::Point(30, 232);
			this->SelectCover->Name = L"SelectCover";
			this->SelectCover->Size = System::Drawing::Size(128, 62);
			this->SelectCover->TabIndex = 8;
			this->SelectCover->Text = L"Tải ảnh thẻ";
			this->SelectCover->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->SelectCover->UseVisualStyleBackColor = true;
			this->SelectCover->Click += gcnew System::EventHandler(this, &AddStudent::SelectCover_Click);
			// 
			// StudentImg
			// 
			this->StudentImg->FileName = L"Image/default.png";
			this->StudentImg->Filter = L"Tệp hình ảnh (*.jpg) | *.jpg";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 171);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(146, 18);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Số ngày mượn tối đa";
			// 
			// StudentMaxDay
			// 
			this->StudentMaxDay->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->StudentMaxDay->Location = System::Drawing::Point(190, 168);
			this->StudentMaxDay->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1000, 0, 0, 0});
			this->StudentMaxDay->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {2, 0, 0, 0});
			this->StudentMaxDay->Name = L"StudentMaxDay";
			this->StudentMaxDay->Size = System::Drawing::Size(192, 27);
			this->StudentMaxDay->TabIndex = 11;
			this->StudentMaxDay->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->StudentMaxDay->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {30, 0, 0, 0});
			// 
			// PreviewBox
			// 
			this->PreviewBox->Location = System::Drawing::Point(190, 232);
			this->PreviewBox->Name = L"PreviewBox";
			this->PreviewBox->Size = System::Drawing::Size(105, 125);
			this->PreviewBox->TabIndex = 12;
			this->PreviewBox->TabStop = false;
			// 
			// AddStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(394, 436);
			this->Controls->Add(this->PreviewBox);
			this->Controls->Add(this->StudentMaxDay);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->SelectCover);
			this->Controls->Add(this->OKBtn);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->StudentGender);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->StudentBirthday);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->StudentName);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AddStudent";
			this->Text = L"Thêm học sinh";
			this->Load += gcnew System::EventHandler(this, &AddStudent::AddStudent_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->StudentMaxDay))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PreviewBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
private: System::Void OKBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 int NStudent=IsEditMode();
			 if (NStudent==0){
				 NStudent=GetNumberOfStudent()+1;
				 SetNumberOfStudent(NStudent);
			 }
			 SetStudentInfo(NStudent,0,StudentName->Text);
			 SetStudentInfo(NStudent,1,StudentBirthday->Text);
			 SetStudentInfo(NStudent,2,StudentGender->Text);
			 SetStudentInfo(NStudent,3,(StudentMaxDay->Value).ToString());
			 SetStudentInfo(NStudent,4,StudentImg->FileName);
			 this->Close();
		 }
private: System::Void SelectCover_Click(System::Object^  sender, System::EventArgs^  e) {
			 StudentImg->ShowDialog();
			 this->PreviewBox->Image=Image::FromFile(StudentImg->FileName);
		 }
private: System::Void AddStudent_Load(System::Object^  sender, System::EventArgs^  e) {
			 int i=Convert::ToInt32(IsEditMode());
			 if (i!=0){
				 this->Text=L"Chỉnh sửa thông tin";
				 this->StudentName->Text=GetStudentInfo(i,0);
				 this->StudentBirthday->Text=GetStudentInfo(i,1);
				 this->StudentGender->Text=GetStudentInfo(i,2);
				 this->StudentMaxDay->Value=Convert::ToInt32(GetStudentInfo(i,3));
				 this->PreviewBox->Image=Image::FromFile(GetStudentInfo(i,4));
			 }
		 }
};
}
