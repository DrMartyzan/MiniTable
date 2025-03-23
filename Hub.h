#pragma once
#include <windows.h>
#pragma comment(lib,"shell32")

namespace MiniTable {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class Hub : public System::Windows::Forms::Form
	{
	public:
		Hub(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Hub()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:





	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::Button^ button_1;
	private: System::Windows::Forms::Button^ button_2;
	private: System::Windows::Forms::Button^ button_3;
	private: System::Windows::Forms::Button^ button_4;
	private: System::Windows::Forms::Button^ button_5;
	private: System::Windows::Forms::Button^ button_;
	private: System::Windows::Forms::Button^ button_7;
	private: System::Windows::Forms::Button^ button_8;
	private: System::Windows::Forms::Button^ button_9;
	private: System::Windows::Forms::Button^ button_0;










	private: System::Windows::Forms::Button^ button_plus;
	private: System::Windows::Forms::Button^ button_minus;
	private: System::Windows::Forms::Button^ button_devide;
	private: System::Windows::Forms::Button^ button_times;




	private: System::Windows::Forms::Label^ Calc_Num;
	private: System::Windows::Forms::Button^ button_point;
	private: System::Windows::Forms::Button^ button_AC;
	private: System::Windows::Forms::Button^ button_minus_or_plus;
	private: System::Windows::Forms::Button^ button_proc;
	private: System::Windows::Forms::Button^ button_equal;
	private: float First_Num;
	private: char User_Act = ' ';
	private: bool Is_Equal = false;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ создатьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ добавитьToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ скрытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ калькуляторToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сайтПроектаToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ строкуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ линиюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сайтToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сайтПроектаToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ видToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ калькуляторToolStripMenuItem1;






	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Hub::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->создатьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->добавитьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->строкуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->линиюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->скрытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->калькуляторToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->видToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->калькуляторToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сайтToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сайтПроектаToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сайтПроектаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->button_1 = (gcnew System::Windows::Forms::Button());
			this->button_2 = (gcnew System::Windows::Forms::Button());
			this->button_3 = (gcnew System::Windows::Forms::Button());
			this->button_4 = (gcnew System::Windows::Forms::Button());
			this->button_5 = (gcnew System::Windows::Forms::Button());
			this->button_ = (gcnew System::Windows::Forms::Button());
			this->button_7 = (gcnew System::Windows::Forms::Button());
			this->button_8 = (gcnew System::Windows::Forms::Button());
			this->button_9 = (gcnew System::Windows::Forms::Button());
			this->button_0 = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button_devide = (gcnew System::Windows::Forms::Button());
			this->button_times = (gcnew System::Windows::Forms::Button());
			this->Calc_Num = (gcnew System::Windows::Forms::Label());
			this->button_point = (gcnew System::Windows::Forms::Button());
			this->button_AC = (gcnew System::Windows::Forms::Button());
			this->button_minus_or_plus = (gcnew System::Windows::Forms::Button());
			this->button_proc = (gcnew System::Windows::Forms::Button());
			this->button_equal = (gcnew System::Windows::Forms::Button());
			this->оПрограммеToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->файлToolStripMenuItem,
					this->скрытьToolStripMenuItem, this->видToolStripMenuItem, this->оПрограммеToolStripMenuItem, this->сайтToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(857, 33);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->создатьToolStripMenuItem,
					this->открытьToolStripMenuItem, this->добавитьToolStripMenuItem1
			});
			this->файлToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(69, 29);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// создатьToolStripMenuItem
			// 
			this->создатьToolStripMenuItem->Name = L"создатьToolStripMenuItem";
			this->создатьToolStripMenuItem->Size = System::Drawing::Size(192, 34);
			this->создатьToolStripMenuItem->Text = L"Создать";
			this->создатьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Hub::создатьToolStripMenuItem_Click_1);
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(192, 34);
			this->открытьToolStripMenuItem->Text = L"Открыть";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Hub::открытьToolStripMenuItem_Click);
			// 
			// добавитьToolStripMenuItem1
			// 
			this->добавитьToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->строкуToolStripMenuItem,
					this->линиюToolStripMenuItem
			});
			this->добавитьToolStripMenuItem1->Name = L"добавитьToolStripMenuItem1";
			this->добавитьToolStripMenuItem1->Size = System::Drawing::Size(192, 34);
			this->добавитьToolStripMenuItem1->Text = L"Добавить";
			// 
			// строкуToolStripMenuItem
			// 
			this->строкуToolStripMenuItem->Name = L"строкуToolStripMenuItem";
			this->строкуToolStripMenuItem->Size = System::Drawing::Size(172, 34);
			this->строкуToolStripMenuItem->Text = L"Строку";
			// 
			// линиюToolStripMenuItem
			// 
			this->линиюToolStripMenuItem->Name = L"линиюToolStripMenuItem";
			this->линиюToolStripMenuItem->Size = System::Drawing::Size(172, 34);
			this->линиюToolStripMenuItem->Text = L"Линию";
			// 
			// скрытьToolStripMenuItem
			// 
			this->скрытьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->калькуляторToolStripMenuItem });
			this->скрытьToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->скрытьToolStripMenuItem->Name = L"скрытьToolStripMenuItem";
			this->скрытьToolStripMenuItem->Size = System::Drawing::Size(88, 29);
			this->скрытьToolStripMenuItem->Text = L"Скрыть";
			// 
			// калькуляторToolStripMenuItem
			// 
			this->калькуляторToolStripMenuItem->Name = L"калькуляторToolStripMenuItem";
			this->калькуляторToolStripMenuItem->Size = System::Drawing::Size(216, 34);
			this->калькуляторToolStripMenuItem->Text = L"Калькулятор";
			this->калькуляторToolStripMenuItem->Click += gcnew System::EventHandler(this, &Hub::калькуляторToolStripMenuItem_Click);
			// 
			// видToolStripMenuItem
			// 
			this->видToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->калькуляторToolStripMenuItem1 });
			this->видToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->видToolStripMenuItem->Name = L"видToolStripMenuItem";
			this->видToolStripMenuItem->Size = System::Drawing::Size(58, 29);
			this->видToolStripMenuItem->Text = L"Вид";
			// 
			// калькуляторToolStripMenuItem1
			// 
			this->калькуляторToolStripMenuItem1->Name = L"калькуляторToolStripMenuItem1";
			this->калькуляторToolStripMenuItem1->Size = System::Drawing::Size(270, 34);
			this->калькуляторToolStripMenuItem1->Text = L"Калькулятор";
			this->калькуляторToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Hub::калькуляторToolStripMenuItem1_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->справкаToolStripMenuItem });
			this->оПрограммеToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(141, 29);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->справкаToolStripMenuItem->Text = L"Справка";
			this->справкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &Hub::справкаToolStripMenuItem_Click);
			// 
			// сайтToolStripMenuItem
			// 
			this->сайтToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->сайтПроектаToolStripMenuItem1 });
			this->сайтToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->сайтToolStripMenuItem->Name = L"сайтToolStripMenuItem";
			this->сайтToolStripMenuItem->Size = System::Drawing::Size(65, 29);
			this->сайтToolStripMenuItem->Text = L"Сайт";
			// 
			// сайтПроектаToolStripMenuItem1
			// 
			this->сайтПроектаToolStripMenuItem1->Name = L"сайтПроектаToolStripMenuItem1";
			this->сайтПроектаToolStripMenuItem1->Size = System::Drawing::Size(222, 34);
			this->сайтПроектаToolStripMenuItem1->Text = L"Сайт проекта";
			this->сайтПроектаToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Hub::сайтПроектаToolStripMenuItem1_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(80, 29);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &Hub::выходToolStripMenuItem_Click);
			// 
			// сайтПроектаToolStripMenuItem
			// 
			this->сайтПроектаToolStripMenuItem->Name = L"сайтПроектаToolStripMenuItem";
			this->сайтПроектаToolStripMenuItem->Size = System::Drawing::Size(32, 19);
			// 
			// listView1
			// 
			this->listView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(575, 12);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(282, 1042);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// button_1
			// 
			this->button_1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_1->ForeColor = System::Drawing::Color::White;
			this->button_1->Location = System::Drawing::Point(591, 233);
			this->button_1->Name = L"button_1";
			this->button_1->Size = System::Drawing::Size(59, 58);
			this->button_1->TabIndex = 2;
			this->button_1->Text = L"1";
			this->button_1->UseVisualStyleBackColor = false;
			this->button_1->Click += gcnew System::EventHandler(this, &Hub::Button_Num_Click);
			// 
			// button_2
			// 
			this->button_2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_2->ForeColor = System::Drawing::Color::White;
			this->button_2->Location = System::Drawing::Point(656, 233);
			this->button_2->Name = L"button_2";
			this->button_2->Size = System::Drawing::Size(59, 58);
			this->button_2->TabIndex = 3;
			this->button_2->Text = L"2";
			this->button_2->UseVisualStyleBackColor = false;
			this->button_2->Click += gcnew System::EventHandler(this, &Hub::Button_Num_Click);
			// 
			// button_3
			// 
			this->button_3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button_3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_3->ForeColor = System::Drawing::Color::White;
			this->button_3->Location = System::Drawing::Point(721, 233);
			this->button_3->Name = L"button_3";
			this->button_3->Size = System::Drawing::Size(59, 58);
			this->button_3->TabIndex = 4;
			this->button_3->Text = L"3";
			this->button_3->UseVisualStyleBackColor = false;
			this->button_3->Click += gcnew System::EventHandler(this, &Hub::Button_Num_Click);
			// 
			// button_4
			// 
			this->button_4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button_4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_4->ForeColor = System::Drawing::Color::White;
			this->button_4->Location = System::Drawing::Point(591, 297);
			this->button_4->Name = L"button_4";
			this->button_4->Size = System::Drawing::Size(59, 58);
			this->button_4->TabIndex = 5;
			this->button_4->Text = L"4";
			this->button_4->UseVisualStyleBackColor = false;
			this->button_4->Click += gcnew System::EventHandler(this, &Hub::Button_Num_Click);
			// 
			// button_5
			// 
			this->button_5->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button_5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_5->ForeColor = System::Drawing::Color::White;
			this->button_5->Location = System::Drawing::Point(656, 297);
			this->button_5->Name = L"button_5";
			this->button_5->Size = System::Drawing::Size(59, 58);
			this->button_5->TabIndex = 6;
			this->button_5->Text = L"5";
			this->button_5->UseVisualStyleBackColor = false;
			this->button_5->Click += gcnew System::EventHandler(this, &Hub::Button_Num_Click);
			// 
			// button_
			// 
			this->button_->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button_->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button_->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_->ForeColor = System::Drawing::Color::White;
			this->button_->Location = System::Drawing::Point(721, 297);
			this->button_->Name = L"button_";
			this->button_->Size = System::Drawing::Size(59, 58);
			this->button_->TabIndex = 7;
			this->button_->Text = L"6";
			this->button_->UseVisualStyleBackColor = false;
			this->button_->Click += gcnew System::EventHandler(this, &Hub::Button_Num_Click);
			// 
			// button_7
			// 
			this->button_7->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button_7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button_7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_7->ForeColor = System::Drawing::Color::White;
			this->button_7->Location = System::Drawing::Point(591, 361);
			this->button_7->Name = L"button_7";
			this->button_7->Size = System::Drawing::Size(59, 58);
			this->button_7->TabIndex = 8;
			this->button_7->Text = L"7";
			this->button_7->UseVisualStyleBackColor = false;
			this->button_7->Click += gcnew System::EventHandler(this, &Hub::Button_Num_Click);
			// 
			// button_8
			// 
			this->button_8->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button_8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button_8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_8->ForeColor = System::Drawing::Color::White;
			this->button_8->Location = System::Drawing::Point(656, 361);
			this->button_8->Name = L"button_8";
			this->button_8->Size = System::Drawing::Size(59, 58);
			this->button_8->TabIndex = 9;
			this->button_8->Text = L"8";
			this->button_8->UseVisualStyleBackColor = false;
			this->button_8->Click += gcnew System::EventHandler(this, &Hub::Button_Num_Click);
			// 
			// button_9
			// 
			this->button_9->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button_9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button_9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_9->ForeColor = System::Drawing::Color::White;
			this->button_9->Location = System::Drawing::Point(721, 361);
			this->button_9->Name = L"button_9";
			this->button_9->Size = System::Drawing::Size(59, 58);
			this->button_9->TabIndex = 10;
			this->button_9->Text = L"9";
			this->button_9->UseVisualStyleBackColor = false;
			this->button_9->Click += gcnew System::EventHandler(this, &Hub::Button_Num_Click);
			// 
			// button_0
			// 
			this->button_0->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button_0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button_0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_0->ForeColor = System::Drawing::Color::White;
			this->button_0->Location = System::Drawing::Point(591, 425);
			this->button_0->Name = L"button_0";
			this->button_0->Size = System::Drawing::Size(124, 58);
			this->button_0->TabIndex = 11;
			this->button_0->Text = L"0";
			this->button_0->UseVisualStyleBackColor = false;
			this->button_0->Click += gcnew System::EventHandler(this, &Hub::Button_Num_Click);
			// 
			// button_plus
			// 
			this->button_plus->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_plus->ForeColor = System::Drawing::Color::White;
			this->button_plus->Location = System::Drawing::Point(786, 169);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(59, 58);
			this->button_plus->TabIndex = 12;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = false;
			this->button_plus->Click += gcnew System::EventHandler(this, &Hub::button_plus_Click);
			// 
			// button_minus
			// 
			this->button_minus->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_minus->ForeColor = System::Drawing::Color::White;
			this->button_minus->Location = System::Drawing::Point(786, 233);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(59, 58);
			this->button_minus->TabIndex = 13;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = false;
			this->button_minus->Click += gcnew System::EventHandler(this, &Hub::button_minus_Click);
			// 
			// button_devide
			// 
			this->button_devide->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button_devide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_devide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_devide->ForeColor = System::Drawing::Color::White;
			this->button_devide->Location = System::Drawing::Point(786, 297);
			this->button_devide->Name = L"button_devide";
			this->button_devide->Size = System::Drawing::Size(59, 58);
			this->button_devide->TabIndex = 14;
			this->button_devide->Text = L"/";
			this->button_devide->UseVisualStyleBackColor = false;
			this->button_devide->Click += gcnew System::EventHandler(this, &Hub::button_devide_Click);
			// 
			// button_times
			// 
			this->button_times->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button_times->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_times->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_times->ForeColor = System::Drawing::Color::White;
			this->button_times->Location = System::Drawing::Point(786, 361);
			this->button_times->Name = L"button_times";
			this->button_times->Size = System::Drawing::Size(59, 58);
			this->button_times->TabIndex = 15;
			this->button_times->Text = L"*";
			this->button_times->UseVisualStyleBackColor = false;
			this->button_times->Click += gcnew System::EventHandler(this, &Hub::button_times_Click);
			// 
			// Calc_Num
			// 
			this->Calc_Num->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->Calc_Num->AutoSize = true;
			this->Calc_Num->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Calc_Num->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Calc_Num->ForeColor = System::Drawing::Color::White;
			this->Calc_Num->Location = System::Drawing::Point(597, 54);
			this->Calc_Num->MinimumSize = System::Drawing::Size(260, 64);
			this->Calc_Num->Name = L"Calc_Num";
			this->Calc_Num->Size = System::Drawing::Size(260, 64);
			this->Calc_Num->TabIndex = 16;
			this->Calc_Num->Text = L"0";
			this->Calc_Num->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_point
			// 
			this->button_point->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button_point->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button_point->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_point->ForeColor = System::Drawing::Color::White;
			this->button_point->Location = System::Drawing::Point(721, 425);
			this->button_point->Name = L"button_point";
			this->button_point->Size = System::Drawing::Size(59, 58);
			this->button_point->TabIndex = 17;
			this->button_point->Text = L".";
			this->button_point->UseVisualStyleBackColor = false;
			this->button_point->Click += gcnew System::EventHandler(this, &Hub::button_point_Click);
			// 
			// button_AC
			// 
			this->button_AC->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button_AC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button_AC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_AC->ForeColor = System::Drawing::Color::White;
			this->button_AC->Location = System::Drawing::Point(591, 169);
			this->button_AC->Name = L"button_AC";
			this->button_AC->Size = System::Drawing::Size(59, 58);
			this->button_AC->TabIndex = 18;
			this->button_AC->Text = L"AC";
			this->button_AC->UseVisualStyleBackColor = false;
			this->button_AC->Click += gcnew System::EventHandler(this, &Hub::button_AC_Click);
			// 
			// button_minus_or_plus
			// 
			this->button_minus_or_plus->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button_minus_or_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button_minus_or_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_minus_or_plus->ForeColor = System::Drawing::Color::White;
			this->button_minus_or_plus->Location = System::Drawing::Point(656, 169);
			this->button_minus_or_plus->Name = L"button_minus_or_plus";
			this->button_minus_or_plus->Size = System::Drawing::Size(59, 58);
			this->button_minus_or_plus->TabIndex = 19;
			this->button_minus_or_plus->Text = L"+ / -";
			this->button_minus_or_plus->UseVisualStyleBackColor = false;
			this->button_minus_or_plus->Click += gcnew System::EventHandler(this, &Hub::button_minus_or_plus_Click);
			// 
			// button_proc
			// 
			this->button_proc->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button_proc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->button_proc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_proc->ForeColor = System::Drawing::Color::White;
			this->button_proc->Location = System::Drawing::Point(721, 169);
			this->button_proc->Name = L"button_proc";
			this->button_proc->Size = System::Drawing::Size(59, 58);
			this->button_proc->TabIndex = 20;
			this->button_proc->Text = L"%";
			this->button_proc->UseVisualStyleBackColor = false;
			this->button_proc->Click += gcnew System::EventHandler(this, &Hub::button_proc_Click);
			// 
			// button_equal
			// 
			this->button_equal->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button_equal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_equal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_equal->ForeColor = System::Drawing::Color::White;
			this->button_equal->Location = System::Drawing::Point(786, 425);
			this->button_equal->Name = L"button_equal";
			this->button_equal->Size = System::Drawing::Size(59, 58);
			this->button_equal->TabIndex = 21;
			this->button_equal->Text = L"=";
			this->button_equal->UseVisualStyleBackColor = false;
			this->button_equal->Click += gcnew System::EventHandler(this, &Hub::button_equal_Click);
			// 
			// оПрограммеToolStripMenuItem1
			// 
			this->оПрограммеToolStripMenuItem1->Name = L"оПрограммеToolStripMenuItem1";
			this->оПрограммеToolStripMenuItem1->Size = System::Drawing::Size(270, 34);
			this->оПрограммеToolStripMenuItem1->Text = L"О программе";
			// 
			// Hub
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->ClientSize = System::Drawing::Size(857, 545);
			this->Controls->Add(this->button_equal);
			this->Controls->Add(this->button_proc);
			this->Controls->Add(this->button_minus_or_plus);
			this->Controls->Add(this->button_AC);
			this->Controls->Add(this->button_point);
			this->Controls->Add(this->Calc_Num);
			this->Controls->Add(this->button_times);
			this->Controls->Add(this->button_devide);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->button_0);
			this->Controls->Add(this->button_9);
			this->Controls->Add(this->button_8);
			this->Controls->Add(this->button_7);
			this->Controls->Add(this->button_);
			this->Controls->Add(this->button_5);
			this->Controls->Add(this->button_4);
			this->Controls->Add(this->button_3);
			this->Controls->Add(this->button_2);
			this->Controls->Add(this->button_1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::Color::White;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Hub";
			this->RightToLeftLayout = true;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MiniTable - Table";
			this->Click += gcnew System::EventHandler(this, &Hub::Button_Num_Click);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	

	private: System::Void Button_Num_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Calc_Num->ForeColor = Color::White;
		Button^ button = safe_cast<Button^>(sender);

		if (this->Calc_Num->Text == "0" || Is_Equal) {
			this->Calc_Num->Text = button->Text;
			Is_Equal = false;
		}

		else
			this->Calc_Num->Text = this->Calc_Num->Text + button->Text;
	}

	private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		Calc_Act('+');
	}

	private: System::Void button_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		Calc_Act('-');
	}

	private: System::Void button_devide_Click(System::Object^ sender, System::EventArgs^ e) {
		Calc_Act('/');
	}

	private: System::Void button_times_Click(System::Object^ sender, System::EventArgs^ e) {
		Calc_Act('*');
	}

    private: System::Void Calc_Act(char Act) {
		this->First_Num = System::Convert::ToDouble(this->Calc_Num->Text);
		this->User_Act = Act;
		this->Calc_Num->Text = "0";
	}

	private: System::Void button_equal_Click(System::Object^ sender, System::EventArgs^ e) {
		if (User_Act == ' ')
			return;

		float Second_Num = System::Convert::ToDouble(this->Calc_Num->Text);
		float Result;
		
		switch (this->User_Act) {
		case '+': Result = this->First_Num + Second_Num; break;
		case '-': Result = this->First_Num - Second_Num; break;
		case '/': 

			if (Second_Num == 0) {
				Result = 0;
				this->Calc_Num->ForeColor = Color::Red;
				MessageBox::Show(this, "Деления на ноль - запрещены!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				break;
			}

			else
				Result = this->First_Num / Second_Num; break;

		case '*': Result = this->First_Num * Second_Num; break;
		case '%': Result = this->First_Num * Second_Num / 100; break;
		}
		
		this->Is_Equal = true;
		this->Calc_Num->Text = System::Convert::ToString(Result);
	}

	private: System::Void button_AC_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Calc_Num->Text = "0";
		this->Calc_Num->ForeColor = Color::White;
		this->First_Num = 0;
		this->User_Act = ' ';
		this->Is_Equal = false;
	}

	private: System::Void button_minus_or_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		float Num = System::Convert::ToDouble(this->Calc_Num->Text);
		Num *= -1;
		this->Calc_Num->Text = System::Convert::ToString(Num);
	}

	private: System::Void button_proc_Click(System::Object^ sender, System::EventArgs^ e) {
		Calc_Act('%');
	}

	private: System::Void button_point_Click(System::Object^ sender, System::EventArgs^ e) { 
		String^ text = this->Calc_Num->Text;

		if (!text->Contains(","))
			this->Calc_Num->Text = text + ",";
	}

	private: System::Void создатьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Process::Start("Explorer.exe");
	}

	private: System::Void создатьToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Process::Start("Explorer.exe");
	}
	private: System::Void открытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Process::Start("Explorer.exe");
	}

	private: System::Void сайтПроектаToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		Process::Start("https://github.com/DrMartyzan/MiniTable");
	}

	private: System::Void калькуляторToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->button_0->Hide();
		this->button_1->Hide();
		this->button_2->Hide();
		this->button_3->Hide();
		this->button_4->Hide();
		this->button_5->Hide();
		this->button_->Hide();
		this->button_7->Hide();
		this->button_8->Hide();
		this->button_9->Hide();
		this->button_minus->Hide();
		this->button_plus->Hide();
		this->button_devide->Hide();
		this->button_times->Hide();
		this->button_AC->Hide();
		this->button_proc->Hide();
		this->button_point->Hide();
		this->button_equal->Hide();
		this->button_minus_or_plus->Hide();
		this->listView1->Hide();
		this->Calc_Num->Hide();
	}

	private: System::Void калькуляторToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->button_0->Show();
		this->button_1->Show();
		this->button_2->Show();
		this->button_3->Show();
		this->button_4->Show();
		this->button_5->Show();
		this->button_->Show();
		this->button_7->Show();
		this->button_8->Show();
		this->button_9->Show();
		this->button_minus->Show();
		this->button_plus->Show();
		this->button_devide->Show();
		this->button_times->Show();
		this->button_AC->Show();
		this->button_proc->Show();
		this->button_point->Show();
		this->button_equal->Show();
		this->button_minus_or_plus->Show();
		this->listView1->Show();
		this->Calc_Num->Show();
	}

	private: System::Void справкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(this, "C++, Windows Forms.\nDrMartyzan MiniTable 2025©", "О программе", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
};
}
