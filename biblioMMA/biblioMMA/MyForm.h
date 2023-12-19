#pragma once

namespace ExampleCPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			
		}

	protected:
		
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ äåéñòâèÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çàãğóçèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ äîáàâèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îáíîâèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ óäàëèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îáÏğîãğàììåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button_delete;

	private: System::Windows::Forms::Button^ button_update;

	private: System::Windows::Forms::Button^ button_add;

	private: System::Windows::Forms::Button^ button_download;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Author;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ quantity;






	private:
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->äåéñòâèÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàãğóçèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîáàâèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îáíîâèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->óäàëèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îáÏğîãğàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Author = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button_delete = (gcnew System::Windows::Forms::Button());
			this->button_update = (gcnew System::Windows::Forms::Button());
			this->button_add = (gcnew System::Windows::Forms::Button());
			this->button_download = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->äåéñòâèÿToolStripMenuItem,
					this->îáÏğîãğàììåToolStripMenuItem, this->âûõîäToolStripMenuItem
			});
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// äåéñòâèÿToolStripMenuItem
			// 
			resources->ApplyResources(this->äåéñòâèÿToolStripMenuItem, L"äåéñòâèÿToolStripMenuItem");
			this->äåéñòâèÿToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->çàãğóçèòüToolStripMenuItem,
					this->äîáàâèòüToolStripMenuItem, this->îáíîâèòüToolStripMenuItem, this->óäàëèòüToolStripMenuItem
			});
			this->äåéñòâèÿToolStripMenuItem->Name = L"äåéñòâèÿToolStripMenuItem";
			// 
			// çàãğóçèòüToolStripMenuItem
			// 
			resources->ApplyResources(this->çàãğóçèòüToolStripMenuItem, L"çàãğóçèòüToolStripMenuItem");
			this->çàãğóçèòüToolStripMenuItem->Name = L"çàãğóçèòüToolStripMenuItem";
			// 
			// äîáàâèòüToolStripMenuItem
			// 
			resources->ApplyResources(this->äîáàâèòüToolStripMenuItem, L"äîáàâèòüToolStripMenuItem");
			this->äîáàâèòüToolStripMenuItem->Name = L"äîáàâèòüToolStripMenuItem";
			// 
			// îáíîâèòüToolStripMenuItem
			// 
			resources->ApplyResources(this->îáíîâèòüToolStripMenuItem, L"îáíîâèòüToolStripMenuItem");
			this->îáíîâèòüToolStripMenuItem->Name = L"îáíîâèòüToolStripMenuItem";
			// 
			// óäàëèòüToolStripMenuItem
			// 
			resources->ApplyResources(this->óäàëèòüToolStripMenuItem, L"óäàëèòüToolStripMenuItem");
			this->óäàëèòüToolStripMenuItem->Name = L"óäàëèòüToolStripMenuItem";
			// 
			// îáÏğîãğàììåToolStripMenuItem
			// 
			resources->ApplyResources(this->îáÏğîãğàììåToolStripMenuItem, L"îáÏğîãğàììåToolStripMenuItem");
			this->îáÏğîãğàììåToolStripMenuItem->Name = L"îáÏğîãğàììåToolStripMenuItem";
			this->îáÏğîãğàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::îáÏğîãğàììåToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			resources->ApplyResources(this->âûõîäToolStripMenuItem, L"âûõîäToolStripMenuItem");
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			resources->ApplyResources(this->dataGridView1, L"dataGridView1");
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->id, this->name,
					this->Author, this->quantity
			});
			this->dataGridView1->Name = L"dataGridView1";
			// 
			// id
			// 
			resources->ApplyResources(this->id, L"id");
			this->id->Name = L"id";
			// 
			// name
			// 
			resources->ApplyResources(this->name, L"name");
			this->name->Name = L"name";
			// 
			// Author
			// 
			resources->ApplyResources(this->Author, L"Author");
			this->Author->Name = L"Author";
			// 
			// quantity
			// 
			resources->ApplyResources(this->quantity, L"quantity");
			this->quantity->Name = L"quantity";
			// 
			// groupBox1
			// 
			resources->ApplyResources(this->groupBox1, L"groupBox1");
			this->groupBox1->Controls->Add(this->button_delete);
			this->groupBox1->Controls->Add(this->button_update);
			this->groupBox1->Controls->Add(this->button_add);
			this->groupBox1->Controls->Add(this->button_download);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->TabStop = false;
			// 
			// button_delete
			// 
			resources->ApplyResources(this->button_delete, L"button_delete");
			this->button_delete->Name = L"button_delete";
			this->button_delete->UseVisualStyleBackColor = true;
			this->button_delete->Click += gcnew System::EventHandler(this, &MyForm::button_delete_Click);
			// 
			// button_update
			// 
			resources->ApplyResources(this->button_update, L"button_update");
			this->button_update->Name = L"button_update";
			this->button_update->UseVisualStyleBackColor = true;
			this->button_update->Click += gcnew System::EventHandler(this, &MyForm::button_update_Click);
			// 
			// button_add
			// 
			resources->ApplyResources(this->button_add, L"button_add");
			this->button_add->Name = L"button_add";
			this->button_add->UseVisualStyleBackColor = true;
			this->button_add->Click += gcnew System::EventHandler(this, &MyForm::button_add_Click);
			// 
			// button_download
			// 
			resources->ApplyResources(this->button_download, L"button_download");
			this->button_download->Name = L"button_download";
			this->button_download->UseVisualStyleBackColor = true;
			this->button_download->Click += gcnew System::EventHandler(this, &MyForm::button_download_Click);
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void îáÏğîãğàììåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_download_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_add_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_update_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_delete_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
