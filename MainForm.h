#pragma once

namespace Laboratorywork13rdsemester {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Generic::List<PictureBox^> columns;
	private: System::Windows::Forms::PictureBox^ Board;
	private: System::Windows::Forms::Button^ SortArrayButton;
	private: System::Windows::Forms::Label^ Heading;
	private: System::Windows::Forms::PictureBox^ Logo;
	private: System::Windows::Forms::Button^ ComparisonButton;
	private: System::Windows::Forms::Label^ Speech;
	private: System::Windows::Forms::PictureBox^ Emblem;
	private: System::Windows::Forms::PictureBox^ Line;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ SortButton;
	private: System::Windows::Forms::Button^ ShuffleButton;
	private: System::Windows::Forms::ComboBox^ Sorts;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ BuildGraphsButton;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Label^ loading_lable;
	private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			this->Board = (gcnew System::Windows::Forms::PictureBox());
			this->SortArrayButton = (gcnew System::Windows::Forms::Button());
			this->Heading = (gcnew System::Windows::Forms::Label());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			this->ComparisonButton = (gcnew System::Windows::Forms::Button());
			this->Speech = (gcnew System::Windows::Forms::Label());
			this->Emblem = (gcnew System::Windows::Forms::PictureBox());
			this->Line = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->loading_lable = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->BuildGraphsButton = (gcnew System::Windows::Forms::Button());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Sorts = (gcnew System::Windows::Forms::ComboBox());
			this->ShuffleButton = (gcnew System::Windows::Forms::Button());
			this->SortButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Board))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Emblem))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Line))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// Board
			// 
			this->Board->Dock = System::Windows::Forms::DockStyle::Left;
			this->Board->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Board.Image")));
			this->Board->Location = System::Drawing::Point(0, 0);
			this->Board->Name = L"Board";
			this->Board->Size = System::Drawing::Size(295, 729);
			this->Board->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Board->TabIndex = 0;
			this->Board->TabStop = false;
			// 
			// SortArrayButton
			// 
			this->SortArrayButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->SortArrayButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SortArrayButton->FlatAppearance->BorderColor = System::Drawing::Color::MediumSeaGreen;
			this->SortArrayButton->FlatAppearance->BorderSize = 3;
			this->SortArrayButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::MediumSeaGreen;
			this->SortArrayButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MediumSeaGreen;
			this->SortArrayButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SortArrayButton->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SortArrayButton->ForeColor = System::Drawing::Color::LemonChiffon;
			this->SortArrayButton->Location = System::Drawing::Point(35, 120);
			this->SortArrayButton->Name = L"SortArrayButton";
			this->SortArrayButton->Size = System::Drawing::Size(180, 50);
			this->SortArrayButton->TabIndex = 1;
			this->SortArrayButton->Text = L"Sorting visualization";
			this->SortArrayButton->UseVisualStyleBackColor = false;
			this->SortArrayButton->Click += gcnew System::EventHandler(this, &MainForm::SortArrayButton_Click);
			// 
			// Heading
			// 
			this->Heading->AutoSize = true;
			this->Heading->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->Heading->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Heading->Font = (gcnew System::Drawing::Font(L"Lucida Sans Typewriter", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Heading->ForeColor = System::Drawing::Color::DarkGreen;
			this->Heading->Location = System::Drawing::Point(72, 37);
			this->Heading->Name = L"Heading";
			this->Heading->Size = System::Drawing::Size(143, 39);
			this->Heading->TabIndex = 2;
			this->Heading->Text = L"Sorter";
			this->Heading->Click += gcnew System::EventHandler(this, &MainForm::Heading_Click);
			// 
			// Logo
			// 
			this->Logo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->Logo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logo.Image")));
			this->Logo->Location = System::Drawing::Point(35, 37);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(40, 39);
			this->Logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Logo->TabIndex = 3;
			this->Logo->TabStop = false;
			this->Logo->Click += gcnew System::EventHandler(this, &MainForm::Logo_Click);
			// 
			// ComparisonButton
			// 
			this->ComparisonButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)), static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->ComparisonButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ComparisonButton->FlatAppearance->BorderColor = System::Drawing::Color::MediumSeaGreen;
			this->ComparisonButton->FlatAppearance->BorderSize = 3;
			this->ComparisonButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::MediumSeaGreen;
			this->ComparisonButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MediumSeaGreen;
			this->ComparisonButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ComparisonButton->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ComparisonButton->ForeColor = System::Drawing::Color::LemonChiffon;
			this->ComparisonButton->Location = System::Drawing::Point(35, 195);
			this->ComparisonButton->Name = L"ComparisonButton";
			this->ComparisonButton->Size = System::Drawing::Size(180, 50);
			this->ComparisonButton->TabIndex = 4;
			this->ComparisonButton->Text = L"Comparison of sorts";
			this->ComparisonButton->UseVisualStyleBackColor = false;
			this->ComparisonButton->Click += gcnew System::EventHandler(this, &MainForm::ComparisonButton_Click);
			// 
			// Speech
			// 
			this->Speech->AutoSize = true;
			this->Speech->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Speech->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(107)));
			this->Speech->Location = System::Drawing::Point(29, 480);
			this->Speech->Name = L"Speech";
			this->Speech->Size = System::Drawing::Size(627, 135);
			this->Speech->TabIndex = 5;
			this->Speech->Text = resources->GetString(L"Speech.Text");
			this->Speech->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Emblem
			// 
			this->Emblem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Emblem.Image")));
			this->Emblem->Location = System::Drawing::Point(187, 92);
			this->Emblem->Name = L"Emblem";
			this->Emblem->Size = System::Drawing::Size(311, 317);
			this->Emblem->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Emblem->TabIndex = 10;
			this->Emblem->TabStop = false;
			// 
			// Line
			// 
			this->Line->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->Line->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Line.Image")));
			this->Line->Location = System::Drawing::Point(35, 92);
			this->Line->Name = L"Line";
			this->Line->Size = System::Drawing::Size(180, 2);
			this->Line->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Line->TabIndex = 7;
			this->Line->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->Emblem);
			this->panel1->Controls->Add(this->Speech);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(295, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(713, 729);
			this->panel1->TabIndex = 11;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->loading_lable);
			this->panel3->Controls->Add(this->progressBar1);
			this->panel3->Controls->Add(this->BuildGraphsButton);
			this->panel3->Controls->Add(this->chart);
			this->panel3->Location = System::Drawing::Point(295, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(713, 729);
			this->panel3->TabIndex = 0;
			this->panel3->Visible = false;
			// 
			// loading_lable
			// 
			this->loading_lable->AutoSize = true;
			this->loading_lable->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loading_lable->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->loading_lable->Location = System::Drawing::Point(80, 606);
			this->loading_lable->Name = L"loading_lable";
			this->loading_lable->Size = System::Drawing::Size(71, 18);
			this->loading_lable->TabIndex = 14;
			this->loading_lable->Text = L"Loading";
			this->loading_lable->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(23, 628);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(180, 28);
			this->progressBar1->TabIndex = 13;
			// 
			// BuildGraphsButton
			// 
			this->BuildGraphsButton->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->BuildGraphsButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BuildGraphsButton->FlatAppearance->BorderColor = System::Drawing::Color::MediumSeaGreen;
			this->BuildGraphsButton->FlatAppearance->BorderSize = 0;
			this->BuildGraphsButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGreen;
			this->BuildGraphsButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGreen;
			this->BuildGraphsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BuildGraphsButton->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BuildGraphsButton->ForeColor = System::Drawing::Color::LemonChiffon;
			this->BuildGraphsButton->Location = System::Drawing::Point(466, 606);
			this->BuildGraphsButton->Name = L"BuildGraphsButton";
			this->BuildGraphsButton->Size = System::Drawing::Size(180, 50);
			this->BuildGraphsButton->TabIndex = 12;
			this->BuildGraphsButton->Text = L"Build graphs";
			this->BuildGraphsButton->UseVisualStyleBackColor = false;
			this->BuildGraphsButton->Click += gcnew System::EventHandler(this, &MainForm::BuildGraphsButton_Click);
			// 
			// chart
			// 
			this->chart->BackColor = System::Drawing::Color::MediumSeaGreen;
			chartArea1->AxisX->IsLabelAutoFit = false;
			chartArea1->AxisX->LabelStyle->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			chartArea1->AxisX->LabelStyle->ForeColor = System::Drawing::Color::LemonChiffon;
			chartArea1->AxisX->LineColor = System::Drawing::Color::Empty;
			chartArea1->AxisX->MajorGrid->LineColor = System::Drawing::Color::LemonChiffon;
			chartArea1->AxisX->MajorTickMark->LineColor = System::Drawing::Color::LemonChiffon;
			chartArea1->AxisX->MajorTickMark->LineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::NotSet;
			chartArea1->AxisX->MinorGrid->LineColor = System::Drawing::Color::LemonChiffon;
			chartArea1->AxisX->MinorTickMark->LineColor = System::Drawing::Color::LemonChiffon;
			chartArea1->AxisY->IsLabelAutoFit = false;
			chartArea1->AxisY->LabelStyle->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			chartArea1->AxisY->LabelStyle->ForeColor = System::Drawing::Color::LemonChiffon;
			chartArea1->AxisY->LineColor = System::Drawing::Color::LemonChiffon;
			chartArea1->AxisY->MajorGrid->LineColor = System::Drawing::Color::LemonChiffon;
			chartArea1->AxisY->MajorTickMark->LineColor = System::Drawing::Color::LemonChiffon;
			chartArea1->AxisY->MinorGrid->LineColor = System::Drawing::Color::LemonChiffon;
			chartArea1->AxisY->MinorTickMark->LineColor = System::Drawing::Color::LemonChiffon;
			chartArea1->AxisY->TitleForeColor = System::Drawing::Color::Empty;
			chartArea1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			chartArea1->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea1);
			legend1->BackColor = System::Drawing::Color::MediumSeaGreen;
			legend1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend1->Font = (gcnew System::Drawing::Font(L"Lucida Sans Typewriter", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			legend1->ForeColor = System::Drawing::Color::LemonChiffon;
			legend1->IsTextAutoFit = false;
			legend1->LegendStyle = System::Windows::Forms::DataVisualization::Charting::LegendStyle::Row;
			legend1->Name = L"Legend1";
			legend1->TableStyle = System::Windows::Forms::DataVisualization::Charting::LegendTableStyle::Tall;
			this->chart->Legends->Add(legend1);
			this->chart->Location = System::Drawing::Point(23, 62);
			this->chart->Name = L"chart";
			this->chart->Size = System::Drawing::Size(623, 483);
			this->chart->TabIndex = 0;
			this->chart->Text = L"chart";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->Sorts);
			this->panel2->Controls->Add(this->ShuffleButton);
			this->panel2->Controls->Add(this->SortButton);
			this->panel2->Location = System::Drawing::Point(295, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(713, 729);
			this->panel2->TabIndex = 11;
			this->panel2->Visible = false;
			// 
			// Sorts
			// 
			this->Sorts->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->Sorts->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Sorts->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Sorts->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Sorts->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sorts->ForeColor = System::Drawing::Color::LemonChiffon;
			this->Sorts->FormattingEnabled = true;
			this->Sorts->ItemHeight = 18;
			this->Sorts->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Insertion sort", L"Shell sort" });
			this->Sorts->Location = System::Drawing::Point(37, 551);
			this->Sorts->Name = L"Sorts";
			this->Sorts->Size = System::Drawing::Size(180, 26);
			this->Sorts->TabIndex = 2;
			// 
			// ShuffleButton
			// 
			this->ShuffleButton->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->ShuffleButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ShuffleButton->FlatAppearance->BorderSize = 0;
			this->ShuffleButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGreen;
			this->ShuffleButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGreen;
			this->ShuffleButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ShuffleButton->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ShuffleButton->ForeColor = System::Drawing::Color::LemonChiffon;
			this->ShuffleButton->Location = System::Drawing::Point(479, 551);
			this->ShuffleButton->Name = L"ShuffleButton";
			this->ShuffleButton->Size = System::Drawing::Size(180, 49);
			this->ShuffleButton->TabIndex = 1;
			this->ShuffleButton->Text = L"Shuffle";
			this->ShuffleButton->UseVisualStyleBackColor = false;
			this->ShuffleButton->Click += gcnew System::EventHandler(this, &MainForm::ShuffleButton_Click);
			// 
			// SortButton
			// 
			this->SortButton->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->SortButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SortButton->FlatAppearance->BorderSize = 0;
			this->SortButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGreen;
			this->SortButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGreen;
			this->SortButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SortButton->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SortButton->ForeColor = System::Drawing::Color::LemonChiffon;
			this->SortButton->Location = System::Drawing::Point(479, 628);
			this->SortButton->Name = L"SortButton";
			this->SortButton->Size = System::Drawing::Size(180, 49);
			this->SortButton->TabIndex = 0;
			this->SortButton->Text = L"Sort";
			this->SortButton->UseVisualStyleBackColor = false;
			this->SortButton->Click += gcnew System::EventHandler(this, &MainForm::SortButton_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1008, 729);
			this->Controls->Add(this->Line);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->ComparisonButton);
			this->Controls->Add(this->Logo);
			this->Controls->Add(this->Heading);
			this->Controls->Add(this->SortArrayButton);
			this->Controls->Add(this->Board);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sorter";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Board))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Emblem))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Line))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void SortArrayButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ComparisonButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Heading_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Logo_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void SortButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: void SwapColumns(size_t i, size_t j, double delay);
	private: System::Void ShuffleButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void BuildGraphsButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
