#pragma once

namespace ThuVien {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BorrowBook
	/// </summary>
	public ref class BorrowBook : public System::Windows::Forms::Form
	{
	public:
		BorrowBook(void)
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
		~BorrowBook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  BookName;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  StudentName;
	private: System::Windows::Forms::Button^  Cancel;
	private: System::Windows::Forms::Button^  button1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(BorrowBook::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BookName = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->StudentName = (gcnew System::Windows::Forms::TextBox());
			this->Cancel = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->PreviewBox = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PreviewBox))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(29, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Cho mượn cuốn";
			// 
			// BookName
			// 
			this->BookName->AutoSize = true;
			this->BookName->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BookName->ForeColor = System::Drawing::Color::Red;
			this->BookName->Location = System::Drawing::Point(150, 28);
			this->BookName->Name = L"BookName";
			this->BookName->Size = System::Drawing::Size(81, 19);
			this->BookName->TabIndex = 1;
			this->BookName->Text = L"Tên sách";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(104, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Tên học sinh mượn";
			this->label2->Click += gcnew System::EventHandler(this, &BorrowBook::label2_Click);
			// 
			// StudentName
			// 
			this->StudentName->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->StudentName->Location = System::Drawing::Point(228, 117);
			this->StudentName->Name = L"StudentName";
			this->StudentName->Size = System::Drawing::Size(216, 23);
			this->StudentName->TabIndex = 3;
			this->StudentName->Text = L"Tên học sinh";
			// 
			// Cancel
			// 
			this->Cancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Cancel->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Cancel->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Cancel.Image")));
			this->Cancel->Location = System::Drawing::Point(360, 186);
			this->Cancel->Name = L"Cancel";
			this->Cancel->Size = System::Drawing::Size(84, 44);
			this->Cancel->TabIndex = 4;
			this->Cancel->Text = L"Hủy";
			this->Cancel->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Cancel->UseVisualStyleBackColor = false;
			this->Cancel->Click += gcnew System::EventHandler(this, &BorrowBook::Cancel_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(250, 186);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 44);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Cho mượn";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &BorrowBook::button1_Click);
			// 
			// PreviewBox
			// 
			this->PreviewBox->Location = System::Drawing::Point(33, 72);
			this->PreviewBox->Name = L"PreviewBox";
			this->PreviewBox->Size = System::Drawing::Size(65, 91);
			this->PreviewBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PreviewBox->TabIndex = 6;
			this->PreviewBox->TabStop = false;
			// 
			// BorrowBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(456, 241);
			this->Controls->Add(this->PreviewBox);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Cancel);
			this->Controls->Add(this->StudentName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->BookName);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"BorrowBook";
			this->Text = L"Cho mượn sách";
			this->Load += gcnew System::EventHandler(this, &BorrowBook::BorrowBook_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PreviewBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Cancel_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
private: System::Void BorrowBook_Load(System::Object^  sender, System::EventArgs^  e) {
			 int Idx=GetCurBookID();
			 this->BookName->Text=GetBookInfo(Idx,0);
			 this->PreviewBox->Image=Image::FromFile(GetBookInfo(Idx,4));
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 int Idx=SearchStudent(this->StudentName->Text);
			 this->Text=GetStudentInfo(1,0);
			 if (Idx==-1)
				 MessageBox::Show(L"Không tìm thấy học sinh");
			 else{
				 int BookID=GetCurBookID();
				 SetBookInfo(BookID,5,Idx.ToString());
				 SetBookInfo(BookID,6,DateTime::Now.ToString("MM/dd/yyyy"));
				 this->Close();
			 }
		 }
};
}
