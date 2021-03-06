#include "DataTypes.h"
#include "AboutBox.h"
#include "Splash.h"
#include "AddBook.h"
#include "AddStudent.h"
#include "BorrowBook.h"

#pragma once

namespace ThuVien {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}



	protected: 

	protected: 


	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  hồSơToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  thêmMớiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sáchToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  họcSinhToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  lưuThayĐổiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  thoátToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  hiểnThịToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  bảngThôngBáoToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^  danhSáchEBookToolStripMenuItem;




	private: System::Windows::Forms::ToolStripMenuItem^  trợGiúpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  hướngDẫnSửDụngToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  giớiThiệuPhầnMềmToolStripMenuItem;









	private: System::Windows::Forms::ToolStripMenuItem^  danhSáchHọcSinhToolStripMenuItem;
	private: System::Windows::Forms::ImageList^  TabPageIcons;


	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::Timer^  SplashTime;
	private: System::Windows::Forms::TabPage^  DanhSachHocSinh;

	private: System::Windows::Forms::TabPage^  DanhSachSach;

	private: System::Windows::Forms::TabPage^  BangThongBao;


	private: System::Windows::Forms::TabControl^  TabsPage;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::TextBox^  SearchBookName;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  SearchBookBtn;

	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::Button^  SearchStudentBtn;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  SearchStudentBox;

	private: System::Windows::Forms::PictureBox^  BookPicture;

	private: System::Windows::Forms::Label^  BookNameInfo;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  BookAuthorInfo;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  BookPublisherInfo;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  BookCatInfo;
	private: System::Windows::Forms::Button^  PrevBookBtn;
	private: System::Windows::Forms::Button^  NextBookBtn;


	private: System::Windows::Forms::PictureBox^  StudentPicture;
	private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label7;

private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Button^  EditBookBtn;
private: System::Windows::Forms::Button^  BorrowBookBtn;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  BorrowStatus;
private: System::Windows::Forms::Button^  ComeBackBtn;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::PictureBox^  LateBox;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  LateBookName;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  LateStudentName;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  LateDate;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Label^  StudentNameInfo;
private: System::Windows::Forms::Label^  StudentBirthdayInfo;
private: System::Windows::Forms::Label^  StudentGenderInfo;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  StudentMaxDayInfo;
private: System::Windows::Forms::Button^  button5;



























	private: System::ComponentModel::IContainer^  components;




























	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->TabPageIcons = (gcnew System::Windows::Forms::ImageList(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->hồSơToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->thêmMớiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sáchToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->họcSinhToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lưuThayĐổiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->thoátToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hiểnThịToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bảngThôngBáoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->danhSáchEBookToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->danhSáchHọcSinhToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->trợGiúpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hướngDẫnSửDụngToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->giớiThiệuPhầnMềmToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->SplashTime = (gcnew System::Windows::Forms::Timer(this->components));
			this->DanhSachHocSinh = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->SearchStudentBtn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SearchStudentBox = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->StudentMaxDayInfo = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->StudentGenderInfo = (gcnew System::Windows::Forms::Label());
			this->StudentBirthdayInfo = (gcnew System::Windows::Forms::Label());
			this->StudentNameInfo = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->StudentPicture = (gcnew System::Windows::Forms::PictureBox());
			this->DanhSachSach = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->SearchBookBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SearchBookName = (gcnew System::Windows::Forms::TextBox());
			this->ComeBackBtn = (gcnew System::Windows::Forms::Button());
			this->BorrowStatus = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->BorrowBookBtn = (gcnew System::Windows::Forms::Button());
			this->EditBookBtn = (gcnew System::Windows::Forms::Button());
			this->NextBookBtn = (gcnew System::Windows::Forms::Button());
			this->PrevBookBtn = (gcnew System::Windows::Forms::Button());
			this->BookCatInfo = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->BookPublisherInfo = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->BookAuthorInfo = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->BookNameInfo = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->BookPicture = (gcnew System::Windows::Forms::PictureBox());
			this->BangThongBao = (gcnew System::Windows::Forms::TabPage());
			this->LateDate = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->LateStudentName = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->LateBookName = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->LateBox = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->TabsPage = (gcnew System::Windows::Forms::TabControl());
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->DanhSachHocSinh->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->StudentPicture))->BeginInit();
			this->DanhSachSach->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->BookPicture))->BeginInit();
			this->BangThongBao->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->LateBox))->BeginInit();
			this->TabsPage->SuspendLayout();
			this->SuspendLayout();
			// 
			// TabPageIcons
			// 
			this->TabPageIcons->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"TabPageIcons.ImageStream")));
			this->TabPageIcons->TransparentColor = System::Drawing::Color::Transparent;
			this->TabPageIcons->Images->SetKeyName(0, L"noti.png");
			this->TabPageIcons->Images->SetKeyName(1, L"book.png");
			this->TabPageIcons->Images->SetKeyName(2, L"ebook.png");
			this->TabPageIcons->Images->SetKeyName(3, L"book.png");
			this->TabPageIcons->Images->SetKeyName(4, L"ebook.png");
			this->TabPageIcons->Images->SetKeyName(5, L"student.png");
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->hồSơToolStripMenuItem, 
				this->hiểnThịToolStripMenuItem, this->trợGiúpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(770, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// hồSơToolStripMenuItem
			// 
			this->hồSơToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->thêmMớiToolStripMenuItem, 
				this->lưuThayĐổiToolStripMenuItem, this->thoátToolStripMenuItem});
			this->hồSơToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"hồSơToolStripMenuItem.Image")));
			this->hồSơToolStripMenuItem->Name = L"hồSơToolStripMenuItem";
			this->hồSơToolStripMenuItem->Size = System::Drawing::Size(66, 20);
			this->hồSơToolStripMenuItem->Text = L"Hồ sơ";
			// 
			// thêmMớiToolStripMenuItem
			// 
			this->thêmMớiToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->sáchToolStripMenuItem, 
				this->họcSinhToolStripMenuItem});
			this->thêmMớiToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"thêmMớiToolStripMenuItem.Image")));
			this->thêmMớiToolStripMenuItem->Name = L"thêmMớiToolStripMenuItem";
			this->thêmMớiToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->thêmMớiToolStripMenuItem->Text = L"Thêm mới";
			this->thêmMớiToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::thêmMớiToolStripMenuItem_Click);
			// 
			// sáchToolStripMenuItem
			// 
			this->sáchToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"sáchToolStripMenuItem.Image")));
			this->sáchToolStripMenuItem->Name = L"sáchToolStripMenuItem";
			this->sáchToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::B));
			this->sáchToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->sáchToolStripMenuItem->Text = L"Sách";
			this->sáchToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::sáchToolStripMenuItem_Click);
			// 
			// họcSinhToolStripMenuItem
			// 
			this->họcSinhToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"họcSinhToolStripMenuItem.Image")));
			this->họcSinhToolStripMenuItem->Name = L"họcSinhToolStripMenuItem";
			this->họcSinhToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::S));
			this->họcSinhToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->họcSinhToolStripMenuItem->Text = L"Học sinh";
			this->họcSinhToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::họcSinhToolStripMenuItem_Click);
			// 
			// lưuThayĐổiToolStripMenuItem
			// 
			this->lưuThayĐổiToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"lưuThayĐổiToolStripMenuItem.Image")));
			this->lưuThayĐổiToolStripMenuItem->Name = L"lưuThayĐổiToolStripMenuItem";
			this->lưuThayĐổiToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->lưuThayĐổiToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->lưuThayĐổiToolStripMenuItem->Text = L"Lưu thay đổi";
			// 
			// thoátToolStripMenuItem
			// 
			this->thoátToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"thoátToolStripMenuItem.Image")));
			this->thoátToolStripMenuItem->Name = L"thoátToolStripMenuItem";
			this->thoátToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Q));
			this->thoátToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->thoátToolStripMenuItem->Text = L"Thoát";
			this->thoátToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::thoátToolStripMenuItem_Click);
			// 
			// hiểnThịToolStripMenuItem
			// 
			this->hiểnThịToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->bảngThôngBáoToolStripMenuItem, 
				this->danhSáchEBookToolStripMenuItem, this->danhSáchHọcSinhToolStripMenuItem});
			this->hiểnThịToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"hiểnThịToolStripMenuItem.Image")));
			this->hiểnThịToolStripMenuItem->Name = L"hiểnThịToolStripMenuItem";
			this->hiểnThịToolStripMenuItem->Size = System::Drawing::Size(77, 20);
			this->hiểnThịToolStripMenuItem->Text = L"Hiển thị";
			// 
			// bảngThôngBáoToolStripMenuItem
			// 
			this->bảngThôngBáoToolStripMenuItem->Checked = true;
			this->bảngThôngBáoToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->bảngThôngBáoToolStripMenuItem->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->bảngThôngBáoToolStripMenuItem->Name = L"bảngThôngBáoToolStripMenuItem";
			this->bảngThôngBáoToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F2;
			this->bảngThôngBáoToolStripMenuItem->Size = System::Drawing::Size(196, 22);
			this->bảngThôngBáoToolStripMenuItem->Text = L"Bảng thông báo";
			this->bảngThôngBáoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::bảngThôngBáoToolStripMenuItem_Click);
			// 
			// danhSáchEBookToolStripMenuItem
			// 
			this->danhSáchEBookToolStripMenuItem->Checked = true;
			this->danhSáchEBookToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->danhSáchEBookToolStripMenuItem->Name = L"danhSáchEBookToolStripMenuItem";
			this->danhSáchEBookToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F5;
			this->danhSáchEBookToolStripMenuItem->Size = System::Drawing::Size(196, 22);
			this->danhSáchEBookToolStripMenuItem->Text = L"Danh sách sách";
			this->danhSáchEBookToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::danhSáchEBookToolStripMenuItem_Click);
			// 
			// danhSáchHọcSinhToolStripMenuItem
			// 
			this->danhSáchHọcSinhToolStripMenuItem->Checked = true;
			this->danhSáchHọcSinhToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->danhSáchHọcSinhToolStripMenuItem->Name = L"danhSáchHọcSinhToolStripMenuItem";
			this->danhSáchHọcSinhToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F7;
			this->danhSáchHọcSinhToolStripMenuItem->Size = System::Drawing::Size(196, 22);
			this->danhSáchHọcSinhToolStripMenuItem->Text = L"Danh sách học sinh";
			this->danhSáchHọcSinhToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::danhSáchHọcSinhToolStripMenuItem_Click);
			// 
			// trợGiúpToolStripMenuItem
			// 
			this->trợGiúpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->hướngDẫnSửDụngToolStripMenuItem, 
				this->giớiThiệuPhầnMềmToolStripMenuItem});
			this->trợGiúpToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"trợGiúpToolStripMenuItem.Image")));
			this->trợGiúpToolStripMenuItem->Name = L"trợGiúpToolStripMenuItem";
			this->trợGiúpToolStripMenuItem->Size = System::Drawing::Size(80, 20);
			this->trợGiúpToolStripMenuItem->Text = L"Trợ giúp";
			// 
			// hướngDẫnSửDụngToolStripMenuItem
			// 
			this->hướngDẫnSửDụngToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"hướngDẫnSửDụngToolStripMenuItem.Image")));
			this->hướngDẫnSửDụngToolStripMenuItem->Name = L"hướngDẫnSửDụngToolStripMenuItem";
			this->hướngDẫnSửDụngToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F1;
			this->hướngDẫnSửDụngToolStripMenuItem->Size = System::Drawing::Size(224, 22);
			this->hướngDẫnSửDụngToolStripMenuItem->Text = L"Hướng dẫn sử dụng";
			this->hướngDẫnSửDụngToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::hướngDẫnSửDụngToolStripMenuItem_Click);
			// 
			// giớiThiệuPhầnMềmToolStripMenuItem
			// 
			this->giớiThiệuPhầnMềmToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"giớiThiệuPhầnMềmToolStripMenuItem.Image")));
			this->giớiThiệuPhầnMềmToolStripMenuItem->Name = L"giớiThiệuPhầnMềmToolStripMenuItem";
			this->giớiThiệuPhầnMềmToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::A));
			this->giớiThiệuPhầnMềmToolStripMenuItem->Size = System::Drawing::Size(224, 22);
			this->giớiThiệuPhầnMềmToolStripMenuItem->Text = L"Giới thiệu phần mềm";
			this->giớiThiệuPhầnMềmToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::giớiThiệuPhầnMềmToolStripMenuItem_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Visible;
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel1});
			this->statusStrip1->Location = System::Drawing::Point(0, 540);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(770, 22);
			this->statusStrip1->TabIndex = 2;
			this->statusStrip1->Text = L"LibM - Library Management";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(155, 17);
			this->toolStripStatusLabel1->Text = L"LibM - Library Management";
			// 
			// SplashTime
			// 
			this->SplashTime->Interval = 2400;
			this->SplashTime->Tick += gcnew System::EventHandler(this, &MainForm::SplashTime_Tick);
			// 
			// DanhSachHocSinh
			// 
			this->DanhSachHocSinh->Controls->Add(this->splitContainer2);
			this->DanhSachHocSinh->ImageIndex = 5;
			this->DanhSachHocSinh->Location = System::Drawing::Point(4, 25);
			this->DanhSachHocSinh->Name = L"DanhSachHocSinh";
			this->DanhSachHocSinh->Size = System::Drawing::Size(762, 509);
			this->DanhSachHocSinh->TabIndex = 5;
			this->DanhSachHocSinh->Text = L"Danh sách học sinh";
			this->DanhSachHocSinh->UseVisualStyleBackColor = true;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->splitContainer2->Panel1->Controls->Add(this->SearchStudentBtn);
			this->splitContainer2->Panel1->Controls->Add(this->label2);
			this->splitContainer2->Panel1->Controls->Add(this->SearchStudentBox);
			this->splitContainer2->Panel1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->button5);
			this->splitContainer2->Panel2->Controls->Add(this->StudentMaxDayInfo);
			this->splitContainer2->Panel2->Controls->Add(this->label8);
			this->splitContainer2->Panel2->Controls->Add(this->StudentGenderInfo);
			this->splitContainer2->Panel2->Controls->Add(this->StudentBirthdayInfo);
			this->splitContainer2->Panel2->Controls->Add(this->StudentNameInfo);
			this->splitContainer2->Panel2->Controls->Add(this->button4);
			this->splitContainer2->Panel2->Controls->Add(this->button3);
			this->splitContainer2->Panel2->Controls->Add(this->label9);
			this->splitContainer2->Panel2->Controls->Add(this->label7);
			this->splitContainer2->Panel2->Controls->Add(this->label6);
			this->splitContainer2->Panel2->Controls->Add(this->StudentPicture);
			this->splitContainer2->Size = System::Drawing::Size(762, 509);
			this->splitContainer2->SplitterDistance = 293;
			this->splitContainer2->TabIndex = 1;
			// 
			// SearchStudentBtn
			// 
			this->SearchStudentBtn->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->SearchStudentBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"SearchStudentBtn.Image")));
			this->SearchStudentBtn->Location = System::Drawing::Point(8, 101);
			this->SearchStudentBtn->Name = L"SearchStudentBtn";
			this->SearchStudentBtn->Size = System::Drawing::Size(111, 50);
			this->SearchStudentBtn->TabIndex = 2;
			this->SearchStudentBtn->Text = L"Tìm kiếm";
			this->SearchStudentBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->SearchStudentBtn->UseVisualStyleBackColor = true;
			this->SearchStudentBtn->Click += gcnew System::EventHandler(this, &MainForm::SearchStudentBtn_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(8, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(140, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Tìm kiếm học sinh";
			// 
			// SearchStudentBox
			// 
			this->SearchStudentBox->Location = System::Drawing::Point(8, 56);
			this->SearchStudentBox->Name = L"SearchStudentBox";
			this->SearchStudentBox->Size = System::Drawing::Size(271, 27);
			this->SearchStudentBox->TabIndex = 0;
			this->SearchStudentBox->Text = L"Nhập tên học sinh";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(332, 284);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(102, 60);
			this->button5->TabIndex = 18;
			this->button5->Text = L"Chỉnh sửa";
			this->button5->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// StudentMaxDayInfo
			// 
			this->StudentMaxDayInfo->AutoSize = true;
			this->StudentMaxDayInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->StudentMaxDayInfo->Location = System::Drawing::Point(186, 365);
			this->StudentMaxDayInfo->Name = L"StudentMaxDayInfo";
			this->StudentMaxDayInfo->Size = System::Drawing::Size(29, 20);
			this->StudentMaxDayInfo->TabIndex = 17;
			this->StudentMaxDayInfo->Text = L"30";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(23, 369);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(153, 16);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Số ngày mượn tối đa:";
			// 
			// StudentGenderInfo
			// 
			this->StudentGenderInfo->AutoSize = true;
			this->StudentGenderInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->StudentGenderInfo->Location = System::Drawing::Point(186, 325);
			this->StudentGenderInfo->Name = L"StudentGenderInfo";
			this->StudentGenderInfo->Size = System::Drawing::Size(76, 20);
			this->StudentGenderInfo->TabIndex = 15;
			this->StudentGenderInfo->Text = L"Giới tính";
			// 
			// StudentBirthdayInfo
			// 
			this->StudentBirthdayInfo->AutoSize = true;
			this->StudentBirthdayInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->StudentBirthdayInfo->Location = System::Drawing::Point(186, 287);
			this->StudentBirthdayInfo->Name = L"StudentBirthdayInfo";
			this->StudentBirthdayInfo->Size = System::Drawing::Size(87, 20);
			this->StudentBirthdayInfo->TabIndex = 14;
			this->StudentBirthdayInfo->Text = L"Ngày sinh";
			// 
			// StudentNameInfo
			// 
			this->StudentNameInfo->AutoSize = true;
			this->StudentNameInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->StudentNameInfo->Location = System::Drawing::Point(186, 251);
			this->StudentNameInfo->Name = L"StudentNameInfo";
			this->StudentNameInfo->Size = System::Drawing::Size(111, 20);
			this->StudentNameInfo->TabIndex = 13;
			this->StudentNameInfo->Text = L"Tên học sinh";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(24, 421);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(99, 44);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Lùi về";
			this->button4->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(332, 421);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(114, 44);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Tiếp theo";
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(23, 328);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(68, 16);
			this->label9->TabIndex = 5;
			this->label9->Text = L"Giới tính:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(23, 287);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(81, 16);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Ngày sinh:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(23, 251);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 16);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Tên học sinh:";
			// 
			// StudentPicture
			// 
			this->StudentPicture->Location = System::Drawing::Point(155, 24);
			this->StudentPicture->Name = L"StudentPicture";
			this->StudentPicture->Size = System::Drawing::Size(150, 200);
			this->StudentPicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->StudentPicture->TabIndex = 1;
			this->StudentPicture->TabStop = false;
			// 
			// DanhSachSach
			// 
			this->DanhSachSach->Controls->Add(this->splitContainer1);
			this->DanhSachSach->ImageIndex = 3;
			this->DanhSachSach->Location = System::Drawing::Point(4, 25);
			this->DanhSachSach->Name = L"DanhSachSach";
			this->DanhSachSach->Size = System::Drawing::Size(762, 509);
			this->DanhSachSach->TabIndex = 3;
			this->DanhSachSach->Text = L"Danh sách Sách";
			this->DanhSachSach->UseVisualStyleBackColor = true;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->splitContainer1->Panel1->Controls->Add(this->SearchBookBtn);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			this->splitContainer1->Panel1->Controls->Add(this->SearchBookName);
			this->splitContainer1->Panel1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->ComeBackBtn);
			this->splitContainer1->Panel2->Controls->Add(this->BorrowStatus);
			this->splitContainer1->Panel2->Controls->Add(this->label11);
			this->splitContainer1->Panel2->Controls->Add(this->BorrowBookBtn);
			this->splitContainer1->Panel2->Controls->Add(this->EditBookBtn);
			this->splitContainer1->Panel2->Controls->Add(this->NextBookBtn);
			this->splitContainer1->Panel2->Controls->Add(this->PrevBookBtn);
			this->splitContainer1->Panel2->Controls->Add(this->BookCatInfo);
			this->splitContainer1->Panel2->Controls->Add(this->label5);
			this->splitContainer1->Panel2->Controls->Add(this->BookPublisherInfo);
			this->splitContainer1->Panel2->Controls->Add(this->label4);
			this->splitContainer1->Panel2->Controls->Add(this->BookAuthorInfo);
			this->splitContainer1->Panel2->Controls->Add(this->label3);
			this->splitContainer1->Panel2->Controls->Add(this->BookNameInfo);
			this->splitContainer1->Panel2->Controls->Add(this->label10);
			this->splitContainer1->Panel2->Controls->Add(this->BookPicture);
			this->splitContainer1->Panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::splitContainer1_Panel2_Paint);
			this->splitContainer1->Size = System::Drawing::Size(762, 509);
			this->splitContainer1->SplitterDistance = 293;
			this->splitContainer1->TabIndex = 0;
			// 
			// SearchBookBtn
			// 
			this->SearchBookBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->SearchBookBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"SearchBookBtn.Image")));
			this->SearchBookBtn->Location = System::Drawing::Point(8, 101);
			this->SearchBookBtn->Name = L"SearchBookBtn";
			this->SearchBookBtn->Size = System::Drawing::Size(111, 50);
			this->SearchBookBtn->TabIndex = 2;
			this->SearchBookBtn->Text = L"Tìm kiếm";
			this->SearchBookBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->SearchBookBtn->UseVisualStyleBackColor = true;
			this->SearchBookBtn->Click += gcnew System::EventHandler(this, &MainForm::SearchBookBtn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(8, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Tìm kiếm sách";
			// 
			// SearchBookName
			// 
			this->SearchBookName->Location = System::Drawing::Point(8, 56);
			this->SearchBookName->Name = L"SearchBookName";
			this->SearchBookName->Size = System::Drawing::Size(271, 27);
			this->SearchBookName->TabIndex = 0;
			this->SearchBookName->Text = L"Nhập tên sách";
			// 
			// ComeBackBtn
			// 
			this->ComeBackBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ComeBackBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ComeBackBtn.Image")));
			this->ComeBackBtn->Location = System::Drawing::Point(331, 176);
			this->ComeBackBtn->Name = L"ComeBackBtn";
			this->ComeBackBtn->Size = System::Drawing::Size(102, 60);
			this->ComeBackBtn->TabIndex = 16;
			this->ComeBackBtn->Text = L"Nhận trả";
			this->ComeBackBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->ComeBackBtn->UseVisualStyleBackColor = false;
			this->ComeBackBtn->Click += gcnew System::EventHandler(this, &MainForm::ComeBackBtn_Click);
			// 
			// BorrowStatus
			// 
			this->BorrowStatus->AutoSize = true;
			this->BorrowStatus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->BorrowStatus->ForeColor = System::Drawing::Color::Red;
			this->BorrowStatus->Location = System::Drawing::Point(151, 397);
			this->BorrowStatus->Name = L"BorrowStatus";
			this->BorrowStatus->Size = System::Drawing::Size(134, 20);
			this->BorrowStatus->TabIndex = 15;
			this->BorrowStatus->Text = L"Chưa cho mượn";
			this->BorrowStatus->Click += gcnew System::EventHandler(this, &MainForm::label12_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(23, 400);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(78, 16);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Trạng thái";
			// 
			// BorrowBookBtn
			// 
			this->BorrowBookBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->BorrowBookBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"BorrowBookBtn.Image")));
			this->BorrowBookBtn->Location = System::Drawing::Point(331, 99);
			this->BorrowBookBtn->Name = L"BorrowBookBtn";
			this->BorrowBookBtn->Size = System::Drawing::Size(102, 60);
			this->BorrowBookBtn->TabIndex = 13;
			this->BorrowBookBtn->Text = L"Cho mượn";
			this->BorrowBookBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->BorrowBookBtn->UseVisualStyleBackColor = false;
			this->BorrowBookBtn->Click += gcnew System::EventHandler(this, &MainForm::BorrowBookBtn_Click);
			// 
			// EditBookBtn
			// 
			this->EditBookBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->EditBookBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"EditBookBtn.Image")));
			this->EditBookBtn->Location = System::Drawing::Point(331, 24);
			this->EditBookBtn->Name = L"EditBookBtn";
			this->EditBookBtn->Size = System::Drawing::Size(102, 60);
			this->EditBookBtn->TabIndex = 12;
			this->EditBookBtn->Text = L"Chỉnh sửa";
			this->EditBookBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->EditBookBtn->UseVisualStyleBackColor = false;
			this->EditBookBtn->Click += gcnew System::EventHandler(this, &MainForm::EditBookBtn_Click);
			// 
			// NextBookBtn
			// 
			this->NextBookBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->NextBookBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"NextBookBtn.Image")));
			this->NextBookBtn->Location = System::Drawing::Point(319, 441);
			this->NextBookBtn->Name = L"NextBookBtn";
			this->NextBookBtn->Size = System::Drawing::Size(114, 44);
			this->NextBookBtn->TabIndex = 10;
			this->NextBookBtn->Text = L"Tiếp theo";
			this->NextBookBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->NextBookBtn->UseVisualStyleBackColor = false;
			this->NextBookBtn->Click += gcnew System::EventHandler(this, &MainForm::NextBookBtn_Click);
			// 
			// PrevBookBtn
			// 
			this->PrevBookBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->PrevBookBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"PrevBookBtn.Image")));
			this->PrevBookBtn->Location = System::Drawing::Point(26, 441);
			this->PrevBookBtn->Name = L"PrevBookBtn";
			this->PrevBookBtn->Size = System::Drawing::Size(99, 44);
			this->PrevBookBtn->TabIndex = 9;
			this->PrevBookBtn->Text = L"Lùi về";
			this->PrevBookBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->PrevBookBtn->UseVisualStyleBackColor = false;
			this->PrevBookBtn->Click += gcnew System::EventHandler(this, &MainForm::PrevBookBtn_Click);
			// 
			// BookCatInfo
			// 
			this->BookCatInfo->AutoSize = true;
			this->BookCatInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BookCatInfo->Location = System::Drawing::Point(151, 353);
			this->BookCatInfo->Name = L"BookCatInfo";
			this->BookCatInfo->Size = System::Drawing::Size(72, 20);
			this->BookCatInfo->TabIndex = 8;
			this->BookCatInfo->Text = L"Thể loại";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(23, 357);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 16);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Thể loại";
			// 
			// BookPublisherInfo
			// 
			this->BookPublisherInfo->AutoSize = true;
			this->BookPublisherInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BookPublisherInfo->Location = System::Drawing::Point(151, 311);
			this->BookPublisherInfo->Name = L"BookPublisherInfo";
			this->BookPublisherInfo->Size = System::Drawing::Size(115, 20);
			this->BookPublisherInfo->TabIndex = 6;
			this->BookPublisherInfo->Text = L"Nhà xuất bản";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 314);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Nhà xuất bản:";
			// 
			// BookAuthorInfo
			// 
			this->BookAuthorInfo->AutoSize = true;
			this->BookAuthorInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BookAuthorInfo->Location = System::Drawing::Point(151, 271);
			this->BookAuthorInfo->Name = L"BookAuthorInfo";
			this->BookAuthorInfo->Size = System::Drawing::Size(67, 20);
			this->BookAuthorInfo->TabIndex = 4;
			this->BookAuthorInfo->Text = L"Tác giả";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(23, 271);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Tác giả:";
			// 
			// BookNameInfo
			// 
			this->BookNameInfo->AutoSize = true;
			this->BookNameInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BookNameInfo->Location = System::Drawing::Point(151, 226);
			this->BookNameInfo->Name = L"BookNameInfo";
			this->BookNameInfo->Size = System::Drawing::Size(82, 20);
			this->BookNameInfo->TabIndex = 2;
			this->BookNameInfo->Text = L"Tên sách";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(23, 229);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(76, 16);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Tên sách:";
			// 
			// BookPicture
			// 
			this->BookPicture->Location = System::Drawing::Point(185, 24);
			this->BookPicture->Name = L"BookPicture";
			this->BookPicture->Size = System::Drawing::Size(120, 180);
			this->BookPicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->BookPicture->TabIndex = 0;
			this->BookPicture->TabStop = false;
			// 
			// BangThongBao
			// 
			this->BangThongBao->Controls->Add(this->LateDate);
			this->BangThongBao->Controls->Add(this->label15);
			this->BangThongBao->Controls->Add(this->LateStudentName);
			this->BangThongBao->Controls->Add(this->label13);
			this->BangThongBao->Controls->Add(this->LateBookName);
			this->BangThongBao->Controls->Add(this->label14);
			this->BangThongBao->Controls->Add(this->label12);
			this->BangThongBao->Controls->Add(this->LateBox);
			this->BangThongBao->Controls->Add(this->button2);
			this->BangThongBao->Controls->Add(this->button1);
			this->BangThongBao->Cursor = System::Windows::Forms::Cursors::Default;
			this->BangThongBao->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BangThongBao->ImageIndex = 0;
			this->BangThongBao->Location = System::Drawing::Point(4, 25);
			this->BangThongBao->Name = L"BangThongBao";
			this->BangThongBao->Padding = System::Windows::Forms::Padding(3);
			this->BangThongBao->Size = System::Drawing::Size(762, 509);
			this->BangThongBao->TabIndex = 0;
			this->BangThongBao->Text = L"Bảng thông báo";
			this->BangThongBao->UseVisualStyleBackColor = true;
			// 
			// LateDate
			// 
			this->LateDate->AutoSize = true;
			this->LateDate->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LateDate->ForeColor = System::Drawing::Color::Red;
			this->LateDate->Location = System::Drawing::Point(254, 388);
			this->LateDate->Name = L"LateDate";
			this->LateDate->Size = System::Drawing::Size(102, 18);
			this->LateDate->TabIndex = 19;
			this->LateDate->Text = L"Thời gian trả";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(131, 388);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(97, 18);
			this->label15->TabIndex = 18;
			this->label15->Text = L"Ngày mượn:";
			// 
			// LateStudentName
			// 
			this->LateStudentName->AutoSize = true;
			this->LateStudentName->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LateStudentName->ForeColor = System::Drawing::Color::Red;
			this->LateStudentName->Location = System::Drawing::Point(254, 351);
			this->LateStudentName->Name = L"LateStudentName";
			this->LateStudentName->Size = System::Drawing::Size(126, 18);
			this->LateStudentName->TabIndex = 17;
			this->LateStudentName->Text = L"Tên người mượn";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(131, 351);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(103, 18);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Người mượn:";
			// 
			// LateBookName
			// 
			this->LateBookName->AutoSize = true;
			this->LateBookName->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LateBookName->ForeColor = System::Drawing::Color::Red;
			this->LateBookName->Location = System::Drawing::Point(254, 314);
			this->LateBookName->Name = L"LateBookName";
			this->LateBookName->Size = System::Drawing::Size(73, 18);
			this->LateBookName->TabIndex = 14;
			this->LateBookName->Text = L"Tên sách";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Red;
			this->label14->Location = System::Drawing::Point(380, 278);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 18);
			this->label14->TabIndex = 16;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(131, 314);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(106, 18);
			this->label12->TabIndex = 13;
			this->label12->Text = L"Sách trễ hạn:";
			// 
			// LateBox
			// 
			this->LateBox->BackColor = System::Drawing::Color::Black;
			this->LateBox->Location = System::Drawing::Point(289, 30);
			this->LateBox->Name = L"LateBox";
			this->LateBox->Size = System::Drawing::Size(170, 240);
			this->LateBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->LateBox->TabIndex = 12;
			this->LateBox->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(626, 435);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(114, 44);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Tiếp theo";
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(23, 435);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 44);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Lùi về";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click_1);
			// 
			// TabsPage
			// 
			this->TabsPage->Controls->Add(this->BangThongBao);
			this->TabsPage->Controls->Add(this->DanhSachSach);
			this->TabsPage->Controls->Add(this->DanhSachHocSinh);
			this->TabsPage->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TabsPage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TabsPage->ImageList = this->TabPageIcons;
			this->TabsPage->Location = System::Drawing::Point(0, 24);
			this->TabsPage->Name = L"TabsPage";
			this->TabsPage->SelectedIndex = 0;
			this->TabsPage->ShowToolTips = true;
			this->TabsPage->Size = System::Drawing::Size(770, 538);
			this->TabsPage->TabIndex = 0;
			// 
			// MainForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(770, 562);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->TabsPage);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LibM - Chương trình quản lý thư viện";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->DanhSachHocSinh->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel1->PerformLayout();
			this->splitContainer2->Panel2->ResumeLayout(false);
			this->splitContainer2->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->StudentPicture))->EndInit();
			this->DanhSachSach->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->BookPicture))->EndInit();
			this->BangThongBao->ResumeLayout(false);
			this->BangThongBao->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->LateBox))->EndInit();
			this->TabsPage->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


#define STATE_CHECK System::Windows::Forms::CheckState::Checked
#define STATE_UNCHECK System::Windows::Forms::CheckState::Unchecked


private: System::Void bảngThôngBáoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (this->bảngThôngBáoToolStripMenuItem->CheckState==STATE_CHECK){
				this->bảngThôngBáoToolStripMenuItem->CheckState=STATE_UNCHECK;
				this->TabsPage->TabPages->Remove(this->BangThongBao);
			 }
			 else{
				 this->bảngThôngBáoToolStripMenuItem->CheckState=STATE_CHECK;
				 this->TabsPage->TabPages->Add(this->BangThongBao);
			 }
		 }

private: System::Void danhSáchEBookToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (danhSáchEBookToolStripMenuItem->CheckState==STATE_CHECK){
				 danhSáchEBookToolStripMenuItem->CheckState=STATE_UNCHECK;
				 this->TabsPage->TabPages->Remove(this->DanhSachSach);
			 }
			 else{
				 danhSáchEBookToolStripMenuItem->CheckState=STATE_CHECK;
				 this->TabsPage->TabPages->Add(this->DanhSachSach);
			 }
		 }

private: System::Void danhSáchHọcSinhToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (danhSáchHọcSinhToolStripMenuItem->CheckState==STATE_CHECK){
				 danhSáchHọcSinhToolStripMenuItem->CheckState=STATE_UNCHECK;
				 this->TabsPage->TabPages->Remove(this->DanhSachHocSinh);
			 }
			 else{
				 danhSáchHọcSinhToolStripMenuItem->CheckState=STATE_CHECK;
				 this->TabsPage->TabPages->Add(this->DanhSachHocSinh);
			 }
		 }
private: System::Void thoátToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void giớiThiệuPhầnMềmToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 AboutBox^ AB=gcnew AboutBox;
			 AB->ShowDialog();
		 }

private: Splash^ Splasher;

private: void InitializeLists(){
			 for (int i=1;i<=10;i++){
			 }
		 }

private: void ViewNoti(){
			 StreamReader^ Fin=File::OpenText(NOTI_FILE_NAME(GetCurNotiID()));
			 int i=Convert::ToInt32(Fin->ReadLine());
			 int j=Convert::ToInt32(Fin->ReadLine());
			 this->LateBookName->Text=GetBookInfo(i,0);
			 this->LateDate->Text=GetBookInfo(i,6);
			 this->LateBox->Image=Image::FromFile(GetBookInfo(i,4));
			 this->LateStudentName->Text=GetStudentInfo(j,0);
			 Fin->Close();
}

private: void RefreshNoti(){
			 SetNumberOfNoti(0);
			 int n=GetNumberOfBook();
			 for (int i=1;i<=n;i++){
				 int j=Convert::ToInt32(GetBookInfo(i,5));
				 if (j!=0){
					 DateTime BorrowTime=DateTime::Parse(GetBookInfo(i,6));
					 TimeSpan BorrowSpan=DateTime::Now.Subtract(BorrowTime);
					 String^ MaxDayStr=GetStudentInfo(j,3);
					 if (BorrowSpan.Days>=Convert::ToInt32(MaxDayStr)){
						 int NNoti=GetNumberOfNoti()+1;
						 SetNumberOfNoti(NNoti);
						 StreamWriter^ Fout=gcnew StreamWriter(NOTI_FILE_NAME(NNoti));
						 Fout->WriteLine(i.ToString());
						 Fout->WriteLine(j.ToString());
						 Fout->Close();
					 }
				 }
			 }
			 if (GetNumberOfNoti()>0){
				 SetCurNotiID(1);
				 ViewNoti();
			 }
			 else{
				 this->LateBookName->Text=L"";
				 this->LateStudentName->Text=L"";
				 this->LateDate->Text=L"";
				 this->LateBox->Image=Image::FromFile(L"Image/default.png");
			 }
		 }

private: void RefreshBookInfo(){
			 Int32 BookID=GetCurBookID();
			 this->BookNameInfo->Text=GetBookInfo(BookID,0);
			 this->BookAuthorInfo->Text=GetBookInfo(BookID,1);
			 this->BookPublisherInfo->Text=GetBookInfo(BookID,2);
			 this->BookCatInfo->Text=GetBookInfo(BookID,3);
			 this->BookPicture->Image=Image::FromFile(GetBookInfo(BookID,4));
			 this->BorrowStatus->Text=GetBorrowStatus(GetBookInfo(BookID,5));
		 }

private: void RefreshStudentInfo(){
			 int i=GetCurStudentID();
			 this->StudentNameInfo->Text=GetStudentInfo(i,0);
			 this->StudentBirthdayInfo->Text=GetStudentInfo(i,1);
			 this->StudentGenderInfo->Text=GetStudentInfo(i,2);
			 this->StudentMaxDayInfo->Text=GetStudentInfo(i,3);
			 this->StudentPicture->Image=Image::FromFile(GetStudentInfo(i,4));
		 }

private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 Splasher=gcnew Splash;
			 Splasher->Show();
			 this->Opacity=0;
			 SplashTime->Enabled=true;
		 }
private: System::Void SplashTime_Tick(System::Object^  sender, System::EventArgs^  e) {
			this->SplashTime->Enabled=false;
			Splasher->Close();
			this->Opacity=100;
			SetCurBookID(1); SetCurStudentID(1);
			RefreshBookInfo();
			RefreshNoti();
			RefreshStudentInfo();
			//InitializeLists();
			//RefreshBookList();
		 }
private: System::Void sáchToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 SetEditMode(0);
			 AddBook^ Diag=gcnew AddBook;
			 Diag->ShowDialog();
			 RefreshBookInfo();
		 }
private: System::Void thêmMớiToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void họcSinhToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 SetEditMode(0);
			 AddStudent^ Diag=gcnew AddStudent;
			 Diag->ShowDialog();
		 }
private: System::Void splitContainer1_Panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void BorrowBookBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (GetBookInfo(GetCurBookID(),5)!=L"0") return; 
			 BorrowBook^ Diag=gcnew BorrowBook;
			 Diag->ShowDialog();
			 RefreshBookInfo();
		 }
private: System::Void EditBookBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 SetEditMode(GetCurBookID());
			 AddBook^ Diag=gcnew AddBook;
			 Diag->ShowDialog();
			 RefreshBookInfo();
		 }
private: System::Void NextBookBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 int Idx=GetCurBookID();
			 if (Idx<GetNumberOfBook()){
				SetCurBookID(Idx+1);
				RefreshBookInfo();
			 }
		 }
private: System::Void PrevBookBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 int Idx=GetCurBookID();
			 if (Idx>1){
				 SetCurBookID(Idx-1);
				 RefreshBookInfo();
			 }
		 }
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void ComeBackBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 SetBookInfo(GetCurBookID(),5,"0");
			 RefreshBookInfo();
			 RefreshNoti();
		 }
private: System::Void SearchBookBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 int Idx=SearchBook(this->SearchBookName->Text);
			 if (Idx==-1)
				 MessageBox::Show(L"Không tìm thấy sách");
			 else{
				 SetCurBookID(Idx);
				 RefreshBookInfo();
			 }
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 int Idx=GetCurNotiID();
			 if (Idx>1){
				 SetCurNotiID(Idx-1);
				 ViewNoti();
			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 int Idx=GetCurNotiID();
			 if (Idx<GetNumberOfNoti()){
				 SetCurNotiID(Idx+1);
				 ViewNoti();
			 }
		 }
private: System::Void SearchStudentBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 int Idx=SearchStudent(this->SearchStudentBox->Text);
			 if (Idx==-1)
				 MessageBox::Show(L"Không tìm thấy học sinh");
			 else{
				 SetCurStudentID(Idx);
				 RefreshStudentInfo();
			 }
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 int Idx=GetCurStudentID();
			 SetEditMode(Idx);
			 AddStudent^ Diag=gcnew AddStudent;
			 Diag->ShowDialog();
			 RefreshStudentInfo();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 int i=GetCurStudentID();
			 if (i>1){
				 SetCurStudentID(i-1);
				 RefreshStudentInfo();
			 }
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 int i=GetCurStudentID();
			 if (i<GetNumberOfStudent()){
				SetCurStudentID(i+1);
				RefreshStudentInfo();
			 }
		 }
private: System::Void hướngDẫnSửDụngToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show(L"Xem ở tệp Readme.doc");
		 }
};
}
