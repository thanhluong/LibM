#pragma once

namespace ThuVien {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TestForm
	/// </summary>
	public ref class TestForm : public System::Windows::Forms::Form
	{
	public:
		TestForm(void)
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
		~TestForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^  OpenDialog;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TestForm::typeid));
			this->OpenDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// OpenDialog
			// 
			this->OpenDialog->FileName = L"openFileDialog1";
			this->OpenDialog->Filter = L"Tệp hình ảnh (*.jxg) | *.jpg";
			this->OpenDialog->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &TestForm::OpenDialog_FileOk);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(16, 7);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(165, 198);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(197, 8);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 55);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TestForm::button1_Click);
			// 
			// TestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"TestForm";
			this->Text = L"TestForm";
			this->Load += gcnew System::EventHandler(this, &TestForm::TestForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void TestForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 //using namespace System::IO;
				 //StreamReader^ Fin=File::OpenText(L"BData\\010.bdat");
				 //this->Text=Fin->ReadLine();;
				 //Fin->Close();
				 OpenDialog->ShowDialog();
				 //StreamWriter^ Fout=gcnew StreamWriter(L"YêuĐương.txt");
				 //Fout->WriteLine(L"Lương yêu"+L" My Ny dễ thương");
				 //Fout->Close();
			 }
	private: System::Void OpenDialog_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
				 using namespace System::IO;
				 StreamWriter^ Fout=gcnew StreamWriter(L"Tệp.txt");
				 Fout->WriteLine(OpenDialog->FileName);
				 Fout->Close();
				 StreamReader^ Fin=File::OpenText(L"Tệp.txt");
				 this->pictureBox1->Image=System::Drawing::Image::FromFile(Fin->ReadLine(),false);
				 Fin->Close();
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->pictureBox1->Image=System::Drawing::Image::FromFile(L"Image/None.png",false);
			 }
	};
}
