#include "MainForm.h"
#include "Sorter.h"
#include "Sequence.h"
#include <Windows.h>
#include <vector>
#include <string>
#include <utility>
#include <chrono>

using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms::DataVisualization::Charting;

int location_main_x = 0, location_main_y = 0;
Drawing::Point start_position_columns(30, 485);
int width_column = 14;
int diff_height = 15;
Sorter<int>* sorter;

const size_t count_functions = 2;

Color ColorFromHSV(double hue, double saturation, double value)
{
    int hi = Convert::ToInt32(Math::Floor(hue / 60)) % 6;
    double f = hue / 60 - Math::Floor(hue / 60);

    value = value * 255;
    int v = Convert::ToInt32(value);
    int p = Convert::ToInt32(value * (1 - saturation));
    int q = Convert::ToInt32(value * (1 - f * saturation));
    int t = Convert::ToInt32(value * (1 - (1 - f) * saturation));

    if (hi == 0)
        return Color::FromArgb(255, v, t, p);
    else if (hi == 1)
        return Color::FromArgb(255, q, v, p);
    else if (hi == 2)
        return Color::FromArgb(255, p, v, t);
    else if (hi == 3)
        return Color::FromArgb(255, p, q, v);
    else if (hi == 4)
        return Color::FromArgb(255, t, p, v);
    else
        return Color::FromArgb(255, v, p, q);
}

enum NameSorts
{
    InsertionSort = 0,
    ShellSort = 1
};

std::vector<std::pair<double, double>> GetTimePoints(Sorter<int>&& sorter, ProgressBar^ progress_bar, size_t N, size_t step)
{
    auto rand = gcnew Random();
    std::vector<std::pair<double, double>> time_points;
    for (size_t n = 100; n <= N; n += step)
    {
        Containers::ListSequence<int> sequence;
        for (size_t i = 0; i < n; i++)
            sequence.Append(rand->Next(INT_MIN, INT_MAX));
        auto start = std::chrono::high_resolution_clock::now();
        sorter(sequence);
        auto end = std::chrono::high_resolution_clock::now();
        time_points.emplace_back(n, std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count());
        progress_bar->Value++;
    }
    return time_points;
}

[STAThread]
int main(array<String^>^ arg) 
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Laboratorywork13rdsemester::MainForm form;
    Application::Run(% form);
}

System::Void Laboratorywork13rdsemester::MainForm::MainForm_Load(System::Object^ sender, System::EventArgs^ e)
{
}

System::Void Laboratorywork13rdsemester::MainForm::SortArrayButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Sorts->SelectedItem = this->Sorts->Items[0];

    for (size_t i = 0; i < 30; i++)
    {
        PictureBox^ new_picture = gcnew PictureBox();
        new_picture->BackColor = Color::Black;
        new_picture->Location = Point(start_position_columns.X + i*(width_column*1.5), start_position_columns.Y - i*diff_height);
        new_picture->Size = Drawing::Size(width_column, (i+1)*diff_height);
        this->columns.Add(new_picture);
        this->panel2->Controls->Add(this->columns[i]);
    }
    this->panel1->Visible = false;
    this->panel2->Visible = true;
    this->panel3->Visible = false;
    this->SortArrayButton->BackColor = Color::MediumSeaGreen;
    this->ComparisonButton->BackColor = Color::FromArgb(219, 199, 172);
}

System::Void Laboratorywork13rdsemester::MainForm::ComparisonButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->panel1->Visible = false;
    this->panel2->Visible = false;
    this->panel3->Visible = true;
    this->ComparisonButton->BackColor = Color::MediumSeaGreen;
    this->SortArrayButton->BackColor = Color::FromArgb(219, 199, 172);
}

System::Void Laboratorywork13rdsemester::MainForm::Heading_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->panel1->Visible = true;
    this->panel2->Visible = false;
    this->panel3->Visible = false;
    this->ComparisonButton->BackColor = Color::FromArgb(219, 199, 172);
    this->SortArrayButton->BackColor = Color::FromArgb(219, 199, 172);
}

System::Void Laboratorywork13rdsemester::MainForm::Logo_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->panel1->Visible = true;
    this->panel2->Visible = false;
    this->panel3->Visible = false;
    this->ComparisonButton->BackColor = Color::FromArgb(219, 199, 172);
    this->SortArrayButton->BackColor = Color::FromArgb(219, 199, 172);
}

System::Void Laboratorywork13rdsemester::MainForm::SortButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    Containers::ListSequence<int> heights;
    for (size_t i = 0; i < this->columns.Count; i++)
    {
        heights.Append(this->columns[i]->Size.Height);
    }
    switch (this->Sorts->SelectedIndex)
    {
    case NameSorts::InsertionSort:
        sorter = new InsertionSorter<int>{};
        break;
    case NameSorts::ShellSort:
        sorter = new ShellSorter<int>{};
        break;
    }
    (*sorter)(heights);
    std::vector<std::pair<size_t, size_t>> swaps = sorter->GetSwaps();
    delete sorter;
    for (size_t i = 0; i < swaps.size(); i++)
    {
        SwapColumns(swaps[i].first, swaps[i].second, 100);
        PictureBox^ buff = this->columns[swaps[i].first];
        this->columns[swaps[i].first] = this->columns[swaps[i].second];
        this->columns[swaps[i].second] = buff;
    }
}

void Laboratorywork13rdsemester::MainForm::SwapColumns(size_t i, size_t j, double delay)
{
    this->columns[i]->BackColor = Color::Red;
    this->columns[j]->BackColor = Color::Red;
    this->panel2->Update();
    Sleep(delay);
    this->columns[i]->BackColor = Color::Black;
    this->columns[j]->BackColor = Color::Black;
    int buff = this->columns[i]->Location.X;
    this->columns[i]->Location = Point(this->columns[j]->Location.X, this->columns[i]->Location.Y);
    this->columns[j]->Location = Point(buff, this->columns[j]->Location.Y);
    this->panel2->Update();
}

System::Void Laboratorywork13rdsemester::MainForm::ShuffleButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    auto rand = gcnew Random();
    for (size_t i = 0; i < 50; i++)
    {
        size_t j = rand->Next(0, 30);
        size_t k = rand->Next(0, 30);
        SwapColumns(j, k, 20);
        PictureBox^ buff = this->columns[j];
        this->columns[j] = this->columns[k];
        this->columns[k] = buff;
    }
}

System::Void Laboratorywork13rdsemester::MainForm::BuildGraphsButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->chart->Series->Clear();
    std::vector<std::pair<std::string, std::vector<std::pair<double, double>>>> functions;
    size_t N = 900, step = 200;
    this->progressBar1->Minimum = 0;
    this->progressBar1->Maximum = N * count_functions / step + 1;
    this->progressBar1->Value = 0;
    functions.emplace_back("Insertion Sort", GetTimePoints(InsertionSorter<int>{}, this->progressBar1, N, step));
    functions.emplace_back("Shell Sort", GetTimePoints(ShellSorter<int>{}, this->progressBar1, N, step));
    for (size_t i = 0; i < functions.size(); i++)
    {
        Dictionary<double, double> function;
        for (size_t j = 0; j < functions[i].second.size(); j++)
        {
            function.Add(functions[i].second[j].first, functions[i].second[j].second);
        }
        Series^ new_series = gcnew Series();
        new_series->ChartType = SeriesChartType::Spline;
        new_series->Points->DataBindXY(function.Keys, function.Values);
        new_series->Color = ColorFromHSV(i * 360 / functions.size(), 1, 1);
        new_series->BorderWidth = 2;
        String^ name = gcnew String(functions[i].first.c_str());
        new_series->Name = name;
        this->chart->Series->Add(new_series);
    }
}
