#pragma once
#include "PersonnelAjouterForm.h"
#include "PersonnelModifierForm.h"

namespace POOProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonPersonnel;
	private: System::Windows::Forms::Button^ buttonClients;
	private: System::Windows::Forms::Button^ buttonCommandes;
	private: System::Windows::Forms::Button^ buttonStock;
	private: System::Windows::Forms::Button^ buttonStatistiques;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ labelCategories;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Panel^ panelPersonnel;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textboxPersonnelNom;




	private: System::Windows::Forms::TextBox^ textboxPersonnelID;



	private: System::Windows::Forms::Button^ buttonPersonnelSupprimer;
	private: System::Windows::Forms::Button^ buttonPersonnelModifier;
	private: System::Windows::Forms::Button^ buttonPersonnelAjouter;
	private: System::Windows::Forms::Panel^ panelClients;




	private: System::Windows::Forms::Button^ buttonClientsSupprimer;

	private: System::Windows::Forms::Button^ buttonClientsModifier;

	private: System::Windows::Forms::Button^ buttonClientsAjouter;



	private: System::Windows::Forms::TextBox^ textboxClientsPrenom;
	private: System::Windows::Forms::TextBox^ textboxClientsNom;
	private: System::Windows::Forms::TextBox^ textboxClientsNumero;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ buttonClientsRechercher;
	private: System::Windows::Forms::Panel^ panelCommandes;














	private: System::Windows::Forms::Button^ buttonCommandesSupprimer;
	private: System::Windows::Forms::Button^ buttonCommandesModifier;
	private: System::Windows::Forms::Button^ buttonCommandesAjouter;




	private: System::Windows::Forms::TextBox^ textBoxCommandesRef;




	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Panel^ panelStock;
	private: System::Windows::Forms::Button^ buttonStockRechercher;




	private: System::Windows::Forms::Button^ buttonStockSupprimer;
	private: System::Windows::Forms::Button^ buttonStockModifier;
	private: System::Windows::Forms::Button^ buttonStockAjouter;




	private: System::Windows::Forms::TextBox^ textBoxStockRef;




	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Button^ buttonPersonnelRechercher;
	private: System::Windows::Forms::Button^ buttonCommandesRechercher;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ textBoxPersonnelPrenom;


	private: System::ComponentModel::IContainer^ components;















	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->buttonPersonnel = (gcnew System::Windows::Forms::Button());
			this->buttonClients = (gcnew System::Windows::Forms::Button());
			this->buttonCommandes = (gcnew System::Windows::Forms::Button());
			this->buttonStock = (gcnew System::Windows::Forms::Button());
			this->buttonStatistiques = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelCategories = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->panelPersonnel = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxPersonnelPrenom = (gcnew System::Windows::Forms::TextBox());
			this->buttonPersonnelRechercher = (gcnew System::Windows::Forms::Button());
			this->buttonPersonnelSupprimer = (gcnew System::Windows::Forms::Button());
			this->buttonPersonnelModifier = (gcnew System::Windows::Forms::Button());
			this->buttonPersonnelAjouter = (gcnew System::Windows::Forms::Button());
			this->textboxPersonnelNom = (gcnew System::Windows::Forms::TextBox());
			this->textboxPersonnelID = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panelClients = (gcnew System::Windows::Forms::Panel());
			this->buttonClientsRechercher = (gcnew System::Windows::Forms::Button());
			this->buttonClientsSupprimer = (gcnew System::Windows::Forms::Button());
			this->buttonClientsModifier = (gcnew System::Windows::Forms::Button());
			this->buttonClientsAjouter = (gcnew System::Windows::Forms::Button());
			this->textboxClientsPrenom = (gcnew System::Windows::Forms::TextBox());
			this->textboxClientsNom = (gcnew System::Windows::Forms::TextBox());
			this->textboxClientsNumero = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panelCommandes = (gcnew System::Windows::Forms::Panel());
			this->buttonCommandesRechercher = (gcnew System::Windows::Forms::Button());
			this->buttonCommandesSupprimer = (gcnew System::Windows::Forms::Button());
			this->buttonCommandesModifier = (gcnew System::Windows::Forms::Button());
			this->buttonCommandesAjouter = (gcnew System::Windows::Forms::Button());
			this->textBoxCommandesRef = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->panelStock = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonStockRechercher = (gcnew System::Windows::Forms::Button());
			this->buttonStockSupprimer = (gcnew System::Windows::Forms::Button());
			this->buttonStockModifier = (gcnew System::Windows::Forms::Button());
			this->buttonStockAjouter = (gcnew System::Windows::Forms::Button());
			this->textBoxStockRef = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->panelPersonnel->SuspendLayout();
			this->panelClients->SuspendLayout();
			this->panelCommandes->SuspendLayout();
			this->panelStock->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonPersonnel
			// 
			this->buttonPersonnel->FlatAppearance->BorderSize = 0;
			this->buttonPersonnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPersonnel->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPersonnel->Location = System::Drawing::Point(282, 12);
			this->buttonPersonnel->Name = L"buttonPersonnel";
			this->buttonPersonnel->Size = System::Drawing::Size(119, 30);
			this->buttonPersonnel->TabIndex = 0;
			this->buttonPersonnel->Text = L"Peronnel";
			this->buttonPersonnel->UseVisualStyleBackColor = true;
			this->buttonPersonnel->Click += gcnew System::EventHandler(this, &MainForm::buttonPersonnel_Click);
			// 
			// buttonClients
			// 
			this->buttonClients->FlatAppearance->BorderSize = 0;
			this->buttonClients->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClients->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClients->Location = System::Drawing::Point(407, 12);
			this->buttonClients->Name = L"buttonClients";
			this->buttonClients->Size = System::Drawing::Size(119, 30);
			this->buttonClients->TabIndex = 1;
			this->buttonClients->Text = L"Clients";
			this->buttonClients->UseVisualStyleBackColor = true;
			this->buttonClients->Click += gcnew System::EventHandler(this, &MainForm::buttonClients_Click);
			// 
			// buttonCommandes
			// 
			this->buttonCommandes->FlatAppearance->BorderSize = 0;
			this->buttonCommandes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCommandes->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCommandes->Location = System::Drawing::Point(532, 12);
			this->buttonCommandes->Name = L"buttonCommandes";
			this->buttonCommandes->Size = System::Drawing::Size(119, 30);
			this->buttonCommandes->TabIndex = 2;
			this->buttonCommandes->Text = L"Commandes";
			this->buttonCommandes->UseVisualStyleBackColor = true;
			this->buttonCommandes->Click += gcnew System::EventHandler(this, &MainForm::buttonCommandes_Click);
			// 
			// buttonStock
			// 
			this->buttonStock->FlatAppearance->BorderSize = 0;
			this->buttonStock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStock->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStock->Location = System::Drawing::Point(657, 12);
			this->buttonStock->Name = L"buttonStock";
			this->buttonStock->Size = System::Drawing::Size(119, 30);
			this->buttonStock->TabIndex = 3;
			this->buttonStock->Text = L"Stock";
			this->buttonStock->UseVisualStyleBackColor = true;
			this->buttonStock->Click += gcnew System::EventHandler(this, &MainForm::buttonStock_Click);
			// 
			// buttonStatistiques
			// 
			this->buttonStatistiques->FlatAppearance->BorderSize = 0;
			this->buttonStatistiques->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStatistiques->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStatistiques->Location = System::Drawing::Point(972, 12);
			this->buttonStatistiques->Name = L"buttonStatistiques";
			this->buttonStatistiques->Size = System::Drawing::Size(125, 30);
			this->buttonStatistiques->TabIndex = 4;
			this->buttonStatistiques->Text = L"Statistiques";
			this->buttonStatistiques->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(11, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 19);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Catégories";
			// 
			// labelCategories
			// 
			this->labelCategories->AutoSize = true;
			this->labelCategories->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCategories->Location = System::Drawing::Point(12, 66);
			this->labelCategories->Name = L"labelCategories";
			this->labelCategories->Size = System::Drawing::Size(270, 19);
			this->labelCategories->TabIndex = 9;
			this->labelCategories->Text = L"Aucune catégorie sélectionnée";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(288, 66);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(815, 266);
			this->dataGridView1->TabIndex = 10;
			// 
			// panelPersonnel
			// 
			this->panelPersonnel->Controls->Add(this->label5);
			this->panelPersonnel->Controls->Add(this->textBoxPersonnelPrenom);
			this->panelPersonnel->Controls->Add(this->buttonPersonnelRechercher);
			this->panelPersonnel->Controls->Add(this->buttonPersonnelSupprimer);
			this->panelPersonnel->Controls->Add(this->buttonPersonnelModifier);
			this->panelPersonnel->Controls->Add(this->buttonPersonnelAjouter);
			this->panelPersonnel->Controls->Add(this->textboxPersonnelNom);
			this->panelPersonnel->Controls->Add(this->textboxPersonnelID);
			this->panelPersonnel->Controls->Add(this->label2);
			this->panelPersonnel->Controls->Add(this->label3);
			this->panelPersonnel->Location = System::Drawing::Point(15, 110);
			this->panelPersonnel->Name = L"panelPersonnel";
			this->panelPersonnel->Size = System::Drawing::Size(263, 222);
			this->panelPersonnel->TabIndex = 11;
			this->panelPersonnel->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(-1, 89);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 19);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Nom";
			// 
			// textBoxPersonnelPrenom
			// 
			this->textBoxPersonnelPrenom->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPersonnelPrenom->Location = System::Drawing::Point(81, 87);
			this->textBoxPersonnelPrenom->Name = L"textBoxPersonnelPrenom";
			this->textBoxPersonnelPrenom->Size = System::Drawing::Size(179, 25);
			this->textBoxPersonnelPrenom->TabIndex = 14;
			// 
			// buttonPersonnelRechercher
			// 
			this->buttonPersonnelRechercher->FlatAppearance->BorderSize = 0;
			this->buttonPersonnelRechercher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPersonnelRechercher->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPersonnelRechercher->Location = System::Drawing::Point(164, 130);
			this->buttonPersonnelRechercher->Name = L"buttonPersonnelRechercher";
			this->buttonPersonnelRechercher->Size = System::Drawing::Size(96, 27);
			this->buttonPersonnelRechercher->TabIndex = 13;
			this->buttonPersonnelRechercher->Text = L"Rechercher";
			this->buttonPersonnelRechercher->UseVisualStyleBackColor = true;
			// 
			// buttonPersonnelSupprimer
			// 
			this->buttonPersonnelSupprimer->FlatAppearance->BorderSize = 0;
			this->buttonPersonnelSupprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPersonnelSupprimer->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPersonnelSupprimer->Location = System::Drawing::Point(171, 187);
			this->buttonPersonnelSupprimer->Name = L"buttonPersonnelSupprimer";
			this->buttonPersonnelSupprimer->Size = System::Drawing::Size(89, 27);
			this->buttonPersonnelSupprimer->TabIndex = 12;
			this->buttonPersonnelSupprimer->Text = L"Supprimer";
			this->buttonPersonnelSupprimer->UseVisualStyleBackColor = true;
			this->buttonPersonnelSupprimer->Click += gcnew System::EventHandler(this, &MainForm::buttonPersonnelSupprimer_Click);
			// 
			// buttonPersonnelModifier
			// 
			this->buttonPersonnelModifier->FlatAppearance->BorderSize = 0;
			this->buttonPersonnelModifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPersonnelModifier->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPersonnelModifier->Location = System::Drawing::Point(84, 187);
			this->buttonPersonnelModifier->Name = L"buttonPersonnelModifier";
			this->buttonPersonnelModifier->Size = System::Drawing::Size(81, 27);
			this->buttonPersonnelModifier->TabIndex = 11;
			this->buttonPersonnelModifier->Text = L"Modifier";
			this->buttonPersonnelModifier->UseVisualStyleBackColor = true;
			this->buttonPersonnelModifier->Click += gcnew System::EventHandler(this, &MainForm::buttonPersonnelModifier_Click);
			// 
			// buttonPersonnelAjouter
			// 
			this->buttonPersonnelAjouter->FlatAppearance->BorderSize = 0;
			this->buttonPersonnelAjouter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPersonnelAjouter->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPersonnelAjouter->Location = System::Drawing::Point(6, 187);
			this->buttonPersonnelAjouter->Name = L"buttonPersonnelAjouter";
			this->buttonPersonnelAjouter->Size = System::Drawing::Size(72, 27);
			this->buttonPersonnelAjouter->TabIndex = 10;
			this->buttonPersonnelAjouter->Text = L"Ajouter";
			this->buttonPersonnelAjouter->UseVisualStyleBackColor = true;
			this->buttonPersonnelAjouter->Click += gcnew System::EventHandler(this, &MainForm::buttonPersonnelAjouter_Click);
			// 
			// textboxPersonnelNom
			// 
			this->textboxPersonnelNom->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textboxPersonnelNom->Location = System::Drawing::Point(81, 47);
			this->textboxPersonnelNom->Name = L"textboxPersonnelNom";
			this->textboxPersonnelNom->Size = System::Drawing::Size(179, 25);
			this->textboxPersonnelNom->TabIndex = 6;
			// 
			// textboxPersonnelID
			// 
			this->textboxPersonnelID->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textboxPersonnelID->Location = System::Drawing::Point(81, 9);
			this->textboxPersonnelID->Name = L"textboxPersonnelID";
			this->textboxPersonnelID->Size = System::Drawing::Size(179, 25);
			this->textboxPersonnelID->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(-1, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Prénom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(-1, 11);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 19);
			this->label3->TabIndex = 0;
			this->label3->Text = L"ID";
			// 
			// panelClients
			// 
			this->panelClients->Controls->Add(this->buttonClientsRechercher);
			this->panelClients->Controls->Add(this->buttonClientsSupprimer);
			this->panelClients->Controls->Add(this->buttonClientsModifier);
			this->panelClients->Controls->Add(this->buttonClientsAjouter);
			this->panelClients->Controls->Add(this->textboxClientsPrenom);
			this->panelClients->Controls->Add(this->textboxClientsNom);
			this->panelClients->Controls->Add(this->textboxClientsNumero);
			this->panelClients->Controls->Add(this->label9);
			this->panelClients->Controls->Add(this->label10);
			this->panelClients->Controls->Add(this->label11);
			this->panelClients->Location = System::Drawing::Point(15, 110);
			this->panelClients->Name = L"panelClients";
			this->panelClients->Size = System::Drawing::Size(263, 222);
			this->panelClients->TabIndex = 13;
			this->panelClients->Visible = false;
			// 
			// buttonClientsRechercher
			// 
			this->buttonClientsRechercher->FlatAppearance->BorderSize = 0;
			this->buttonClientsRechercher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClientsRechercher->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClientsRechercher->Location = System::Drawing::Point(164, 130);
			this->buttonClientsRechercher->Name = L"buttonClientsRechercher";
			this->buttonClientsRechercher->Size = System::Drawing::Size(96, 27);
			this->buttonClientsRechercher->TabIndex = 17;
			this->buttonClientsRechercher->Text = L"Rechercher";
			this->buttonClientsRechercher->UseVisualStyleBackColor = true;
			// 
			// buttonClientsSupprimer
			// 
			this->buttonClientsSupprimer->FlatAppearance->BorderSize = 0;
			this->buttonClientsSupprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClientsSupprimer->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClientsSupprimer->Location = System::Drawing::Point(168, 187);
			this->buttonClientsSupprimer->Name = L"buttonClientsSupprimer";
			this->buttonClientsSupprimer->Size = System::Drawing::Size(89, 27);
			this->buttonClientsSupprimer->TabIndex = 12;
			this->buttonClientsSupprimer->Text = L"Supprimer";
			this->buttonClientsSupprimer->UseVisualStyleBackColor = true;
			// 
			// buttonClientsModifier
			// 
			this->buttonClientsModifier->FlatAppearance->BorderSize = 0;
			this->buttonClientsModifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClientsModifier->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClientsModifier->Location = System::Drawing::Point(81, 187);
			this->buttonClientsModifier->Name = L"buttonClientsModifier";
			this->buttonClientsModifier->Size = System::Drawing::Size(81, 27);
			this->buttonClientsModifier->TabIndex = 11;
			this->buttonClientsModifier->Text = L"Modifier";
			this->buttonClientsModifier->UseVisualStyleBackColor = true;
			// 
			// buttonClientsAjouter
			// 
			this->buttonClientsAjouter->FlatAppearance->BorderSize = 0;
			this->buttonClientsAjouter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClientsAjouter->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClientsAjouter->Location = System::Drawing::Point(3, 187);
			this->buttonClientsAjouter->Name = L"buttonClientsAjouter";
			this->buttonClientsAjouter->Size = System::Drawing::Size(72, 27);
			this->buttonClientsAjouter->TabIndex = 10;
			this->buttonClientsAjouter->Text = L"Ajouter";
			this->buttonClientsAjouter->UseVisualStyleBackColor = true;
			// 
			// textboxClientsPrenom
			// 
			this->textboxClientsPrenom->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textboxClientsPrenom->Location = System::Drawing::Point(81, 90);
			this->textboxClientsPrenom->Name = L"textboxClientsPrenom";
			this->textboxClientsPrenom->Size = System::Drawing::Size(179, 25);
			this->textboxClientsPrenom->TabIndex = 7;
			// 
			// textboxClientsNom
			// 
			this->textboxClientsNom->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textboxClientsNom->Location = System::Drawing::Point(81, 47);
			this->textboxClientsNom->Name = L"textboxClientsNom";
			this->textboxClientsNom->Size = System::Drawing::Size(179, 25);
			this->textboxClientsNom->TabIndex = 6;
			// 
			// textboxClientsNumero
			// 
			this->textboxClientsNumero->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textboxClientsNumero->Location = System::Drawing::Point(81, 9);
			this->textboxClientsNumero->Name = L"textboxClientsNumero";
			this->textboxClientsNumero->Size = System::Drawing::Size(179, 25);
			this->textboxClientsNumero->TabIndex = 5;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(-1, 92);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(63, 19);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Prénom";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(-1, 49);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(36, 19);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Nom";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(-1, 11);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(63, 19);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Numéro";
			// 
			// panelCommandes
			// 
			this->panelCommandes->Controls->Add(this->buttonCommandesRechercher);
			this->panelCommandes->Controls->Add(this->buttonCommandesSupprimer);
			this->panelCommandes->Controls->Add(this->buttonCommandesModifier);
			this->panelCommandes->Controls->Add(this->buttonCommandesAjouter);
			this->panelCommandes->Controls->Add(this->textBoxCommandesRef);
			this->panelCommandes->Controls->Add(this->label20);
			this->panelCommandes->Location = System::Drawing::Point(15, 110);
			this->panelCommandes->Name = L"panelCommandes";
			this->panelCommandes->Size = System::Drawing::Size(263, 152);
			this->panelCommandes->TabIndex = 17;
			this->panelCommandes->Visible = false;
			// 
			// buttonCommandesRechercher
			// 
			this->buttonCommandesRechercher->FlatAppearance->BorderSize = 0;
			this->buttonCommandesRechercher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCommandesRechercher->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCommandesRechercher->Location = System::Drawing::Point(164, 49);
			this->buttonCommandesRechercher->Name = L"buttonCommandesRechercher";
			this->buttonCommandesRechercher->Size = System::Drawing::Size(96, 27);
			this->buttonCommandesRechercher->TabIndex = 27;
			this->buttonCommandesRechercher->Text = L"Rechercher";
			this->buttonCommandesRechercher->UseVisualStyleBackColor = true;
			// 
			// buttonCommandesSupprimer
			// 
			this->buttonCommandesSupprimer->FlatAppearance->BorderSize = 0;
			this->buttonCommandesSupprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCommandesSupprimer->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCommandesSupprimer->Location = System::Drawing::Point(168, 114);
			this->buttonCommandesSupprimer->Name = L"buttonCommandesSupprimer";
			this->buttonCommandesSupprimer->Size = System::Drawing::Size(89, 27);
			this->buttonCommandesSupprimer->TabIndex = 12;
			this->buttonCommandesSupprimer->Text = L"Supprimer";
			this->buttonCommandesSupprimer->UseVisualStyleBackColor = true;
			// 
			// buttonCommandesModifier
			// 
			this->buttonCommandesModifier->FlatAppearance->BorderSize = 0;
			this->buttonCommandesModifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCommandesModifier->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCommandesModifier->Location = System::Drawing::Point(81, 114);
			this->buttonCommandesModifier->Name = L"buttonCommandesModifier";
			this->buttonCommandesModifier->Size = System::Drawing::Size(81, 27);
			this->buttonCommandesModifier->TabIndex = 11;
			this->buttonCommandesModifier->Text = L"Modifier";
			this->buttonCommandesModifier->UseVisualStyleBackColor = true;
			// 
			// buttonCommandesAjouter
			// 
			this->buttonCommandesAjouter->FlatAppearance->BorderSize = 0;
			this->buttonCommandesAjouter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCommandesAjouter->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCommandesAjouter->Location = System::Drawing::Point(3, 114);
			this->buttonCommandesAjouter->Name = L"buttonCommandesAjouter";
			this->buttonCommandesAjouter->Size = System::Drawing::Size(72, 27);
			this->buttonCommandesAjouter->TabIndex = 10;
			this->buttonCommandesAjouter->Text = L"Ajouter";
			this->buttonCommandesAjouter->UseVisualStyleBackColor = true;
			// 
			// textBoxCommandesRef
			// 
			this->textBoxCommandesRef->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxCommandesRef->Location = System::Drawing::Point(95, 9);
			this->textBoxCommandesRef->Name = L"textBoxCommandesRef";
			this->textBoxCommandesRef->Size = System::Drawing::Size(165, 25);
			this->textBoxCommandesRef->TabIndex = 5;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(-1, 11);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(90, 19);
			this->label20->TabIndex = 0;
			this->label20->Text = L"Référence";
			// 
			// panelStock
			// 
			this->panelStock->Controls->Add(this->label4);
			this->panelStock->Controls->Add(this->textBox1);
			this->panelStock->Controls->Add(this->buttonStockRechercher);
			this->panelStock->Controls->Add(this->buttonStockSupprimer);
			this->panelStock->Controls->Add(this->buttonStockModifier);
			this->panelStock->Controls->Add(this->buttonStockAjouter);
			this->panelStock->Controls->Add(this->textBoxStockRef);
			this->panelStock->Controls->Add(this->label37);
			this->panelStock->Location = System::Drawing::Point(15, 110);
			this->panelStock->Name = L"panelStock";
			this->panelStock->Size = System::Drawing::Size(263, 185);
			this->panelStock->TabIndex = 27;
			this->panelStock->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(-1, 55);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 19);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Nom";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(95, 49);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(165, 25);
			this->textBox1->TabIndex = 18;
			// 
			// buttonStockRechercher
			// 
			this->buttonStockRechercher->FlatAppearance->BorderSize = 0;
			this->buttonStockRechercher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStockRechercher->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStockRechercher->Location = System::Drawing::Point(164, 89);
			this->buttonStockRechercher->Name = L"buttonStockRechercher";
			this->buttonStockRechercher->Size = System::Drawing::Size(96, 27);
			this->buttonStockRechercher->TabIndex = 17;
			this->buttonStockRechercher->Text = L"Rechercher";
			this->buttonStockRechercher->UseVisualStyleBackColor = true;
			// 
			// buttonStockSupprimer
			// 
			this->buttonStockSupprimer->FlatAppearance->BorderSize = 0;
			this->buttonStockSupprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStockSupprimer->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStockSupprimer->Location = System::Drawing::Point(168, 151);
			this->buttonStockSupprimer->Name = L"buttonStockSupprimer";
			this->buttonStockSupprimer->Size = System::Drawing::Size(89, 27);
			this->buttonStockSupprimer->TabIndex = 12;
			this->buttonStockSupprimer->Text = L"Supprimer";
			this->buttonStockSupprimer->UseVisualStyleBackColor = true;
			// 
			// buttonStockModifier
			// 
			this->buttonStockModifier->FlatAppearance->BorderSize = 0;
			this->buttonStockModifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStockModifier->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStockModifier->Location = System::Drawing::Point(81, 151);
			this->buttonStockModifier->Name = L"buttonStockModifier";
			this->buttonStockModifier->Size = System::Drawing::Size(81, 27);
			this->buttonStockModifier->TabIndex = 11;
			this->buttonStockModifier->Text = L"Modifier";
			this->buttonStockModifier->UseVisualStyleBackColor = true;
			// 
			// buttonStockAjouter
			// 
			this->buttonStockAjouter->FlatAppearance->BorderSize = 0;
			this->buttonStockAjouter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStockAjouter->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStockAjouter->Location = System::Drawing::Point(3, 151);
			this->buttonStockAjouter->Name = L"buttonStockAjouter";
			this->buttonStockAjouter->Size = System::Drawing::Size(72, 27);
			this->buttonStockAjouter->TabIndex = 10;
			this->buttonStockAjouter->Text = L"Ajouter";
			this->buttonStockAjouter->UseVisualStyleBackColor = true;
			// 
			// textBoxStockRef
			// 
			this->textBoxStockRef->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxStockRef->Location = System::Drawing::Point(95, 9);
			this->textBoxStockRef->Name = L"textBoxStockRef";
			this->textBoxStockRef->Size = System::Drawing::Size(165, 25);
			this->textBoxStockRef->TabIndex = 5;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(-1, 11);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(90, 19);
			this->label37->TabIndex = 0;
			this->label37->Text = L"Référence";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1109, 341);
			this->Controls->Add(this->panelStock);
			this->Controls->Add(this->panelCommandes);
			this->Controls->Add(this->panelClients);
			this->Controls->Add(this->panelPersonnel);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->labelCategories);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonStatistiques);
			this->Controls->Add(this->buttonStock);
			this->Controls->Add(this->buttonCommandes);
			this->Controls->Add(this->buttonClients);
			this->Controls->Add(this->buttonPersonnel);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->panelPersonnel->ResumeLayout(false);
			this->panelPersonnel->PerformLayout();
			this->panelClients->ResumeLayout(false);
			this->panelClients->PerformLayout();
			this->panelCommandes->ResumeLayout(false);
			this->panelCommandes->PerformLayout();
			this->panelStock->ResumeLayout(false);
			this->panelStock->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

// ========================================================================================================================================
// =================================================      PERSONNEL      ==================================================================
// ========================================================================================================================================


// -------------------------------------------------   bouton Principal   -----------------------------------------------------------------

	private: System::Void buttonPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {

		labelCategories->Text = "Personnel";
		panelPersonnel->Visible = true;
		panelClients->Visible = false;
		panelCommandes->Visible = false;
		panelStock->Visible = false;
	}

// -------------------------------------------------    bouton Ajouter    -----------------------------------------------------------------

	private: System::Void buttonPersonnelAjouter_Click(System:: Object ^ sender, System::EventArgs^ e) {

		PersonnelAjouterForm^ pa = gcnew PersonnelAjouterForm();
		pa->ShowDialog();
	}

// -------------------------------------------------   bouton Modifier    -----------------------------------------------------------------

	private: System::Void buttonPersonnelModifier_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			int PersonnelID = Int32::Parse(textboxPersonnelID->Text);
			PersonnelModifierForm^ pm = gcnew PersonnelModifierForm(textboxPersonnelNom->Text, textBoxPersonnelPrenom->Text);
			pm->ShowDialog();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Entrez l'ID du personnel à modifier", "Erreur");
		}
	}

// -------------------------------------------------   bouton Supprimer   -----------------------------------------------------------------

	private: System::Void buttonPersonnelSupprimer_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			int PersonnelID = Int32::Parse(textboxPersonnelID->Text);
			MessageBoxButtons buttons = MessageBoxButtons::OKCancel;
			String^ message = "Voulez vous vraiment supprimer ce personnel ?";
			String^ title = "Confirmation";

			if (MessageBox::Show(message, title, buttons) == System::Windows::Forms::DialogResult::OK) {

				MessageBox::Show("Personnel supprimé");
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Entrez l'ID du personnel à supprimer", "Erreur");
		}
	}




// ==========================================================================================================================================
// ================================================       CLIENTS       =====================================================================
// ==========================================================================================================================================


// ------------------------------------------------   bouton Principal   --------------------------------------------------------------------

	private: System::Void buttonClients_Click(System::Object^ sender, System::EventArgs^ e) {

		labelCategories->Text = "Clients";
		panelPersonnel->Visible = false;
		panelClients->Visible = true;
		panelCommandes->Visible = false;
		panelStock->Visible = false;
	}




// ==========================================================================================================================================
// ================================================      COMMANDES     ======================================================================
// ==========================================================================================================================================


// -----------------------------------------------   bouton Principal   ---------------------------------------------------------------------

	private: System::Void buttonCommandes_Click(System::Object^ sender, System::EventArgs^ e) {

		labelCategories->Text = "Commandes";
		panelPersonnel->Visible = false;
		panelClients->Visible = false;
		panelCommandes->Visible = true;
		panelStock->Visible = false;
	}




// ==========================================================================================================================================
// ================================================       STOCK       =======================================================================
// ==========================================================================================================================================


// -----------------------------------------------   bouton Principal   ---------------------------------------------------------------------

	private: System::Void buttonStock_Click(System::Object^ sender, System::EventArgs^ e) {

		labelCategories->Text = "Stock";
		panelPersonnel->Visible = false;
		panelClients->Visible = false;
		panelCommandes->Visible = false;
		panelStock->Visible = true;
	}

};
}
