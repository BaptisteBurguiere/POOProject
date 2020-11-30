#pragma once

namespace POOProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
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
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textboxPersonnelDateEmbauche;
	private: System::Windows::Forms::TextBox^ textboxPersonnelAdresse;
	private: System::Windows::Forms::TextBox^ textboxPersonnelSuperieur;
	private: System::Windows::Forms::TextBox^ textboxPersonnelPrenom;
	private: System::Windows::Forms::TextBox^ textboxPersonnelNom;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ buttonPersonnelSupprimer;
	private: System::Windows::Forms::Button^ buttonPersonnelModifier;
	private: System::Windows::Forms::Button^ buttonPersonnelAjouter;
	private: System::Windows::Forms::Panel^ panelClients;
	private: System::Windows::Forms::TextBox^ textboxClients1Achat;
	private: System::Windows::Forms::TextBox^ textboxClientsNaissance;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ buttonClientsSupprimer;

	private: System::Windows::Forms::Button^ buttonClientsModifier;

	private: System::Windows::Forms::Button^ buttonClientsAjouter;

	private: System::Windows::Forms::TextBox^ textboxClientsLivraison;
	private: System::Windows::Forms::TextBox^ textboxClientsFacturation;
	private: System::Windows::Forms::TextBox^ textboxClientsPrenom;
	private: System::Windows::Forms::TextBox^ textboxClientsNom;
	private: System::Windows::Forms::TextBox^ textboxClientsNumero;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ buttonClientsRechercher;
	private: System::Windows::Forms::Panel^ panelCommandes;
	private: System::Windows::Forms::TextBox^ textBoxCommandesTotalTTC;
	private: System::Windows::Forms::TextBox^ textBoxCommandesTotalTVA;
	private: System::Windows::Forms::TextBox^ textBoxCommandesTotalHT;
	private: System::Windows::Forms::TextBox^ textBoxCommandesTotalArticles;
	private: System::Windows::Forms::TextBox^ textBoxCommandesQuantiteArticle;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBoxCommandesRefArticle;
	private: System::Windows::Forms::TextBox^ textBoxCommandesDateReglement;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ buttonCommandesSupprimer;
	private: System::Windows::Forms::Button^ buttonCommandesModifier;
	private: System::Windows::Forms::Button^ buttonCommandesAjouter;
	private: System::Windows::Forms::TextBox^ textBoxCommandesMoyPaiement;
	private: System::Windows::Forms::TextBox^ textBoxCommandesDatePaiement;
	private: System::Windows::Forms::TextBox^ textBoxCommandesDateEmission;
	private: System::Windows::Forms::TextBox^ textBoxCommandesDateLivraison;
	private: System::Windows::Forms::TextBox^ textBoxCommandesRef;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Panel^ panelStock;
	private: System::Windows::Forms::Button^ buttonStockRechercher;
	private: System::Windows::Forms::TextBox^ textBoxStockCouleur;
	private: System::Windows::Forms::TextBox^ textBoxStockSeuilReapro;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Button^ buttonStockSupprimer;
	private: System::Windows::Forms::Button^ buttonStockModifier;
	private: System::Windows::Forms::Button^ buttonStockAjouter;
	private: System::Windows::Forms::TextBox^ textBoxStockQuantiteStock;
	private: System::Windows::Forms::TextBox^ textBoxStockTauxTVA;
	private: System::Windows::Forms::TextBox^ textBoxStockPrixHT;
	private: System::Windows::Forms::TextBox^ textBoxStockDesignation;
	private: System::Windows::Forms::TextBox^ textBoxStockRef;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Button^ buttonPersonnelRechercher;
	private: System::Windows::Forms::Button^ buttonCommandesRechercher;















	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonPersonnel = (gcnew System::Windows::Forms::Button());
			this->buttonClients = (gcnew System::Windows::Forms::Button());
			this->buttonCommandes = (gcnew System::Windows::Forms::Button());
			this->buttonStock = (gcnew System::Windows::Forms::Button());
			this->buttonStatistiques = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelCategories = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panelPersonnel = (gcnew System::Windows::Forms::Panel());
			this->buttonPersonnelRechercher = (gcnew System::Windows::Forms::Button());
			this->buttonPersonnelSupprimer = (gcnew System::Windows::Forms::Button());
			this->buttonPersonnelModifier = (gcnew System::Windows::Forms::Button());
			this->buttonPersonnelAjouter = (gcnew System::Windows::Forms::Button());
			this->textboxPersonnelDateEmbauche = (gcnew System::Windows::Forms::TextBox());
			this->textboxPersonnelAdresse = (gcnew System::Windows::Forms::TextBox());
			this->textboxPersonnelSuperieur = (gcnew System::Windows::Forms::TextBox());
			this->textboxPersonnelPrenom = (gcnew System::Windows::Forms::TextBox());
			this->textboxPersonnelNom = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panelClients = (gcnew System::Windows::Forms::Panel());
			this->buttonClientsRechercher = (gcnew System::Windows::Forms::Button());
			this->textboxClients1Achat = (gcnew System::Windows::Forms::TextBox());
			this->textboxClientsNaissance = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->buttonClientsSupprimer = (gcnew System::Windows::Forms::Button());
			this->buttonClientsModifier = (gcnew System::Windows::Forms::Button());
			this->buttonClientsAjouter = (gcnew System::Windows::Forms::Button());
			this->textboxClientsLivraison = (gcnew System::Windows::Forms::TextBox());
			this->textboxClientsFacturation = (gcnew System::Windows::Forms::TextBox());
			this->textboxClientsPrenom = (gcnew System::Windows::Forms::TextBox());
			this->textboxClientsNom = (gcnew System::Windows::Forms::TextBox());
			this->textboxClientsNumero = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panelCommandes = (gcnew System::Windows::Forms::Panel());
			this->buttonCommandesRechercher = (gcnew System::Windows::Forms::Button());
			this->textBoxCommandesTotalTTC = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCommandesTotalTVA = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCommandesTotalHT = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCommandesTotalArticles = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCommandesQuantiteArticle = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBoxCommandesRefArticle = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCommandesDateReglement = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->buttonCommandesSupprimer = (gcnew System::Windows::Forms::Button());
			this->buttonCommandesModifier = (gcnew System::Windows::Forms::Button());
			this->buttonCommandesAjouter = (gcnew System::Windows::Forms::Button());
			this->textBoxCommandesMoyPaiement = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCommandesDatePaiement = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCommandesDateEmission = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCommandesDateLivraison = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCommandesRef = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->panelStock = (gcnew System::Windows::Forms::Panel());
			this->buttonStockRechercher = (gcnew System::Windows::Forms::Button());
			this->textBoxStockCouleur = (gcnew System::Windows::Forms::TextBox());
			this->textBoxStockSeuilReapro = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->buttonStockSupprimer = (gcnew System::Windows::Forms::Button());
			this->buttonStockModifier = (gcnew System::Windows::Forms::Button());
			this->buttonStockAjouter = (gcnew System::Windows::Forms::Button());
			this->textBoxStockQuantiteStock = (gcnew System::Windows::Forms::TextBox());
			this->textBoxStockTauxTVA = (gcnew System::Windows::Forms::TextBox());
			this->textBoxStockPrixHT = (gcnew System::Windows::Forms::TextBox());
			this->textBoxStockDesignation = (gcnew System::Windows::Forms::TextBox());
			this->textBoxStockRef = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			this->buttonPersonnel->Click += gcnew System::EventHandler(this, &MyForm::buttonPersonnel_Click);
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
			this->buttonClients->Click += gcnew System::EventHandler(this, &MyForm::buttonClients_Click);
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
			this->buttonCommandes->Click += gcnew System::EventHandler(this, &MyForm::buttonCommandes_Click);
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
			this->buttonStock->Click += gcnew System::EventHandler(this, &MyForm::buttonStock_Click);
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
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(282, 66);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(815, 653);
			this->dataGridView1->TabIndex = 10;
			// 
			// panelPersonnel
			// 
			this->panelPersonnel->Controls->Add(this->buttonPersonnelRechercher);
			this->panelPersonnel->Controls->Add(this->buttonPersonnelSupprimer);
			this->panelPersonnel->Controls->Add(this->buttonPersonnelModifier);
			this->panelPersonnel->Controls->Add(this->buttonPersonnelAjouter);
			this->panelPersonnel->Controls->Add(this->textboxPersonnelDateEmbauche);
			this->panelPersonnel->Controls->Add(this->textboxPersonnelAdresse);
			this->panelPersonnel->Controls->Add(this->textboxPersonnelSuperieur);
			this->panelPersonnel->Controls->Add(this->textboxPersonnelPrenom);
			this->panelPersonnel->Controls->Add(this->textboxPersonnelNom);
			this->panelPersonnel->Controls->Add(this->label6);
			this->panelPersonnel->Controls->Add(this->label5);
			this->panelPersonnel->Controls->Add(this->label4);
			this->panelPersonnel->Controls->Add(this->label2);
			this->panelPersonnel->Controls->Add(this->label3);
			this->panelPersonnel->Location = System::Drawing::Point(15, 110);
			this->panelPersonnel->Name = L"panelPersonnel";
			this->panelPersonnel->Size = System::Drawing::Size(263, 302);
			this->panelPersonnel->TabIndex = 11;
			this->panelPersonnel->Visible = false;
			// 
			// buttonPersonnelRechercher
			// 
			this->buttonPersonnelRechercher->FlatAppearance->BorderSize = 0;
			this->buttonPersonnelRechercher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPersonnelRechercher->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPersonnelRechercher->Location = System::Drawing::Point(164, 215);
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
			this->buttonPersonnelSupprimer->Location = System::Drawing::Point(165, 271);
			this->buttonPersonnelSupprimer->Name = L"buttonPersonnelSupprimer";
			this->buttonPersonnelSupprimer->Size = System::Drawing::Size(89, 27);
			this->buttonPersonnelSupprimer->TabIndex = 12;
			this->buttonPersonnelSupprimer->Text = L"Supprimer";
			this->buttonPersonnelSupprimer->UseVisualStyleBackColor = true;
			// 
			// buttonPersonnelModifier
			// 
			this->buttonPersonnelModifier->FlatAppearance->BorderSize = 0;
			this->buttonPersonnelModifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPersonnelModifier->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPersonnelModifier->Location = System::Drawing::Point(78, 271);
			this->buttonPersonnelModifier->Name = L"buttonPersonnelModifier";
			this->buttonPersonnelModifier->Size = System::Drawing::Size(81, 27);
			this->buttonPersonnelModifier->TabIndex = 11;
			this->buttonPersonnelModifier->Text = L"Modifier";
			this->buttonPersonnelModifier->UseVisualStyleBackColor = true;
			// 
			// buttonPersonnelAjouter
			// 
			this->buttonPersonnelAjouter->FlatAppearance->BorderSize = 0;
			this->buttonPersonnelAjouter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPersonnelAjouter->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPersonnelAjouter->Location = System::Drawing::Point(0, 271);
			this->buttonPersonnelAjouter->Name = L"buttonPersonnelAjouter";
			this->buttonPersonnelAjouter->Size = System::Drawing::Size(72, 27);
			this->buttonPersonnelAjouter->TabIndex = 10;
			this->buttonPersonnelAjouter->Text = L"Ajouter";
			this->buttonPersonnelAjouter->UseVisualStyleBackColor = true;
			// 
			// textboxPersonnelDateEmbauche
			// 
			this->textboxPersonnelDateEmbauche->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textboxPersonnelDateEmbauche->Location = System::Drawing::Point(160, 173);
			this->textboxPersonnelDateEmbauche->Name = L"textboxPersonnelDateEmbauche";
			this->textboxPersonnelDateEmbauche->Size = System::Drawing::Size(100, 25);
			this->textboxPersonnelDateEmbauche->TabIndex = 9;
			// 
			// textboxPersonnelAdresse
			// 
			this->textboxPersonnelAdresse->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textboxPersonnelAdresse->Location = System::Drawing::Point(160, 131);
			this->textboxPersonnelAdresse->Name = L"textboxPersonnelAdresse";
			this->textboxPersonnelAdresse->Size = System::Drawing::Size(100, 25);
			this->textboxPersonnelAdresse->TabIndex = 8;
			// 
			// textboxPersonnelSuperieur
			// 
			this->textboxPersonnelSuperieur->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textboxPersonnelSuperieur->Location = System::Drawing::Point(160, 90);
			this->textboxPersonnelSuperieur->Name = L"textboxPersonnelSuperieur";
			this->textboxPersonnelSuperieur->Size = System::Drawing::Size(100, 25);
			this->textboxPersonnelSuperieur->TabIndex = 7;
			// 
			// textboxPersonnelPrenom
			// 
			this->textboxPersonnelPrenom->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textboxPersonnelPrenom->Location = System::Drawing::Point(160, 47);
			this->textboxPersonnelPrenom->Name = L"textboxPersonnelPrenom";
			this->textboxPersonnelPrenom->Size = System::Drawing::Size(100, 25);
			this->textboxPersonnelPrenom->TabIndex = 6;
			// 
			// textboxPersonnelNom
			// 
			this->textboxPersonnelNom->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textboxPersonnelNom->Location = System::Drawing::Point(160, 9);
			this->textboxPersonnelNom->Name = L"textboxPersonnelNom";
			this->textboxPersonnelNom->Size = System::Drawing::Size(100, 25);
			this->textboxPersonnelNom->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(-2, 175);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(126, 19);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Date embauche";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(-1, 133);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 19);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Adresse";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(-1, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 19);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Supérieur";
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
			this->label3->Size = System::Drawing::Size(36, 19);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Nom";
			// 
			// panelClients
			// 
			this->panelClients->Controls->Add(this->buttonClientsRechercher);
			this->panelClients->Controls->Add(this->textboxClients1Achat);
			this->panelClients->Controls->Add(this->textboxClientsNaissance);
			this->panelClients->Controls->Add(this->label13);
			this->panelClients->Controls->Add(this->label12);
			this->panelClients->Controls->Add(this->buttonClientsSupprimer);
			this->panelClients->Controls->Add(this->buttonClientsModifier);
			this->panelClients->Controls->Add(this->buttonClientsAjouter);
			this->panelClients->Controls->Add(this->textboxClientsLivraison);
			this->panelClients->Controls->Add(this->textboxClientsFacturation);
			this->panelClients->Controls->Add(this->textboxClientsPrenom);
			this->panelClients->Controls->Add(this->textboxClientsNom);
			this->panelClients->Controls->Add(this->textboxClientsNumero);
			this->panelClients->Controls->Add(this->label7);
			this->panelClients->Controls->Add(this->label8);
			this->panelClients->Controls->Add(this->label9);
			this->panelClients->Controls->Add(this->label10);
			this->panelClients->Controls->Add(this->label11);
			this->panelClients->Location = System::Drawing::Point(15, 110);
			this->panelClients->Name = L"panelClients";
			this->panelClients->Size = System::Drawing::Size(263, 400);
			this->panelClients->TabIndex = 13;
			this->panelClients->Visible = false;
			// 
			// buttonClientsRechercher
			// 
			this->buttonClientsRechercher->FlatAppearance->BorderSize = 0;
			this->buttonClientsRechercher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClientsRechercher->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClientsRechercher->Location = System::Drawing::Point(164, 306);
			this->buttonClientsRechercher->Name = L"buttonClientsRechercher";
			this->buttonClientsRechercher->Size = System::Drawing::Size(96, 27);
			this->buttonClientsRechercher->TabIndex = 17;
			this->buttonClientsRechercher->Text = L"Rechercher";
			this->buttonClientsRechercher->UseVisualStyleBackColor = true;
			// 
			// textboxClients1Achat
			// 
			this->textboxClients1Achat->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textboxClients1Achat->Location = System::Drawing::Point(160, 262);
			this->textboxClients1Achat->Name = L"textboxClients1Achat";
			this->textboxClients1Achat->Size = System::Drawing::Size(100, 25);
			this->textboxClients1Achat->TabIndex = 16;
			// 
			// textboxClientsNaissance
			// 
			this->textboxClientsNaissance->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textboxClientsNaissance->Location = System::Drawing::Point(160, 218);
			this->textboxClientsNaissance->Name = L"textboxClientsNaissance";
			this->textboxClientsNaissance->Size = System::Drawing::Size(100, 25);
			this->textboxClientsNaissance->TabIndex = 15;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(-1, 264);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(135, 19);
			this->label13->TabIndex = 14;
			this->label13->Text = L"Date 1er achat";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(-1, 220);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(135, 19);
			this->label12->TabIndex = 13;
			this->label12->Text = L"Date Naissance";
			// 
			// buttonClientsSupprimer
			// 
			this->buttonClientsSupprimer->FlatAppearance->BorderSize = 0;
			this->buttonClientsSupprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClientsSupprimer->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClientsSupprimer->Location = System::Drawing::Point(160, 363);
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
			this->buttonClientsModifier->Location = System::Drawing::Point(80, 363);
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
			this->buttonClientsAjouter->Location = System::Drawing::Point(2, 363);
			this->buttonClientsAjouter->Name = L"buttonClientsAjouter";
			this->buttonClientsAjouter->Size = System::Drawing::Size(72, 27);
			this->buttonClientsAjouter->TabIndex = 10;
			this->buttonClientsAjouter->Text = L"Ajouter";
			this->buttonClientsAjouter->UseVisualStyleBackColor = true;
			// 
			// textboxClientsLivraison
			// 
			this->textboxClientsLivraison->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textboxClientsLivraison->Location = System::Drawing::Point(160, 173);
			this->textboxClientsLivraison->Name = L"textboxClientsLivraison";
			this->textboxClientsLivraison->Size = System::Drawing::Size(100, 25);
			this->textboxClientsLivraison->TabIndex = 9;
			// 
			// textboxClientsFacturation
			// 
			this->textboxClientsFacturation->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textboxClientsFacturation->Location = System::Drawing::Point(160, 131);
			this->textboxClientsFacturation->Name = L"textboxClientsFacturation";
			this->textboxClientsFacturation->Size = System::Drawing::Size(100, 25);
			this->textboxClientsFacturation->TabIndex = 8;
			// 
			// textboxClientsPrenom
			// 
			this->textboxClientsPrenom->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textboxClientsPrenom->Location = System::Drawing::Point(160, 90);
			this->textboxClientsPrenom->Name = L"textboxClientsPrenom";
			this->textboxClientsPrenom->Size = System::Drawing::Size(100, 25);
			this->textboxClientsPrenom->TabIndex = 7;
			// 
			// textboxClientsNom
			// 
			this->textboxClientsNom->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textboxClientsNom->Location = System::Drawing::Point(160, 47);
			this->textboxClientsNom->Name = L"textboxClientsNom";
			this->textboxClientsNom->Size = System::Drawing::Size(100, 25);
			this->textboxClientsNom->TabIndex = 6;
			// 
			// textboxClientsNumero
			// 
			this->textboxClientsNumero->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textboxClientsNumero->Location = System::Drawing::Point(160, 9);
			this->textboxClientsNumero->Name = L"textboxClientsNumero";
			this->textboxClientsNumero->Size = System::Drawing::Size(100, 25);
			this->textboxClientsNumero->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(-2, 175);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(162, 19);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Adresse livraison";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(-1, 133);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(144, 19);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Adresse facture";
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
			this->panelCommandes->Controls->Add(this->textBoxCommandesTotalTTC);
			this->panelCommandes->Controls->Add(this->textBoxCommandesTotalTVA);
			this->panelCommandes->Controls->Add(this->textBoxCommandesTotalHT);
			this->panelCommandes->Controls->Add(this->textBoxCommandesTotalArticles);
			this->panelCommandes->Controls->Add(this->textBoxCommandesQuantiteArticle);
			this->panelCommandes->Controls->Add(this->label25);
			this->panelCommandes->Controls->Add(this->label24);
			this->panelCommandes->Controls->Add(this->label23);
			this->panelCommandes->Controls->Add(this->label22);
			this->panelCommandes->Controls->Add(this->label21);
			this->panelCommandes->Controls->Add(this->textBoxCommandesRefArticle);
			this->panelCommandes->Controls->Add(this->textBoxCommandesDateReglement);
			this->panelCommandes->Controls->Add(this->label14);
			this->panelCommandes->Controls->Add(this->label15);
			this->panelCommandes->Controls->Add(this->buttonCommandesSupprimer);
			this->panelCommandes->Controls->Add(this->buttonCommandesModifier);
			this->panelCommandes->Controls->Add(this->buttonCommandesAjouter);
			this->panelCommandes->Controls->Add(this->textBoxCommandesMoyPaiement);
			this->panelCommandes->Controls->Add(this->textBoxCommandesDatePaiement);
			this->panelCommandes->Controls->Add(this->textBoxCommandesDateEmission);
			this->panelCommandes->Controls->Add(this->textBoxCommandesDateLivraison);
			this->panelCommandes->Controls->Add(this->textBoxCommandesRef);
			this->panelCommandes->Controls->Add(this->label16);
			this->panelCommandes->Controls->Add(this->label17);
			this->panelCommandes->Controls->Add(this->label18);
			this->panelCommandes->Controls->Add(this->label19);
			this->panelCommandes->Controls->Add(this->label20);
			this->panelCommandes->Location = System::Drawing::Point(15, 110);
			this->panelCommandes->Name = L"panelCommandes";
			this->panelCommandes->Size = System::Drawing::Size(263, 609);
			this->panelCommandes->TabIndex = 17;
			this->panelCommandes->Visible = false;
			// 
			// buttonCommandesRechercher
			// 
			this->buttonCommandesRechercher->FlatAppearance->BorderSize = 0;
			this->buttonCommandesRechercher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCommandesRechercher->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCommandesRechercher->Location = System::Drawing::Point(164, 514);
			this->buttonCommandesRechercher->Name = L"buttonCommandesRechercher";
			this->buttonCommandesRechercher->Size = System::Drawing::Size(96, 27);
			this->buttonCommandesRechercher->TabIndex = 27;
			this->buttonCommandesRechercher->Text = L"Rechercher";
			this->buttonCommandesRechercher->UseVisualStyleBackColor = true;
			// 
			// textBoxCommandesTotalTTC
			// 
			this->textBoxCommandesTotalTTC->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxCommandesTotalTTC->Location = System::Drawing::Point(160, 472);
			this->textBoxCommandesTotalTTC->Name = L"textBoxCommandesTotalTTC";
			this->textBoxCommandesTotalTTC->Size = System::Drawing::Size(100, 25);
			this->textBoxCommandesTotalTTC->TabIndex = 26;
			// 
			// textBoxCommandesTotalTVA
			// 
			this->textBoxCommandesTotalTVA->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxCommandesTotalTVA->Location = System::Drawing::Point(160, 430);
			this->textBoxCommandesTotalTVA->Name = L"textBoxCommandesTotalTVA";
			this->textBoxCommandesTotalTVA->Size = System::Drawing::Size(100, 25);
			this->textBoxCommandesTotalTVA->TabIndex = 25;
			// 
			// textBoxCommandesTotalHT
			// 
			this->textBoxCommandesTotalHT->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxCommandesTotalHT->Location = System::Drawing::Point(160, 389);
			this->textBoxCommandesTotalHT->Name = L"textBoxCommandesTotalHT";
			this->textBoxCommandesTotalHT->Size = System::Drawing::Size(100, 25);
			this->textBoxCommandesTotalHT->TabIndex = 24;
			// 
			// textBoxCommandesTotalArticles
			// 
			this->textBoxCommandesTotalArticles->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxCommandesTotalArticles->Location = System::Drawing::Point(160, 348);
			this->textBoxCommandesTotalArticles->Name = L"textBoxCommandesTotalArticles";
			this->textBoxCommandesTotalArticles->Size = System::Drawing::Size(100, 25);
			this->textBoxCommandesTotalArticles->TabIndex = 23;
			// 
			// textBoxCommandesQuantiteArticle
			// 
			this->textBoxCommandesQuantiteArticle->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxCommandesQuantiteArticle->Location = System::Drawing::Point(160, 306);
			this->textBoxCommandesQuantiteArticle->Name = L"textBoxCommandesQuantiteArticle";
			this->textBoxCommandesQuantiteArticle->Size = System::Drawing::Size(100, 25);
			this->textBoxCommandesQuantiteArticle->TabIndex = 22;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(-1, 474);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(90, 19);
			this->label25->TabIndex = 21;
			this->label25->Text = L"Total TTC";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(-1, 432);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(90, 19);
			this->label24->TabIndex = 20;
			this->label24->Text = L"Total TVA";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(-1, 391);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(81, 19);
			this->label23->TabIndex = 19;
			this->label23->Text = L"Total HT";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(-1, 350);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(135, 19);
			this->label22->TabIndex = 18;
			this->label22->Text = L"Total articles";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(-2, 308);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(153, 19);
			this->label21->TabIndex = 17;
			this->label21->Text = L"Quantité article";
			// 
			// textBoxCommandesRefArticle
			// 
			this->textBoxCommandesRefArticle->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxCommandesRefArticle->Location = System::Drawing::Point(160, 262);
			this->textBoxCommandesRefArticle->Name = L"textBoxCommandesRefArticle";
			this->textBoxCommandesRefArticle->Size = System::Drawing::Size(100, 25);
			this->textBoxCommandesRefArticle->TabIndex = 16;
			// 
			// textBoxCommandesDateReglement
			// 
			this->textBoxCommandesDateReglement->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxCommandesDateReglement->Location = System::Drawing::Point(160, 218);
			this->textBoxCommandesDateReglement->Name = L"textBoxCommandesDateReglement";
			this->textBoxCommandesDateReglement->Size = System::Drawing::Size(100, 25);
			this->textBoxCommandesDateReglement->TabIndex = 15;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(-1, 264);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(162, 19);
			this->label14->TabIndex = 14;
			this->label14->Text = L"Référence article";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(-1, 220);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(135, 19);
			this->label15->TabIndex = 13;
			this->label15->Text = L"Date règlement";
			// 
			// buttonCommandesSupprimer
			// 
			this->buttonCommandesSupprimer->FlatAppearance->BorderSize = 0;
			this->buttonCommandesSupprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCommandesSupprimer->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCommandesSupprimer->Location = System::Drawing::Point(167, 578);
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
			this->buttonCommandesModifier->Location = System::Drawing::Point(80, 578);
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
			this->buttonCommandesAjouter->Location = System::Drawing::Point(2, 578);
			this->buttonCommandesAjouter->Name = L"buttonCommandesAjouter";
			this->buttonCommandesAjouter->Size = System::Drawing::Size(72, 27);
			this->buttonCommandesAjouter->TabIndex = 10;
			this->buttonCommandesAjouter->Text = L"Ajouter";
			this->buttonCommandesAjouter->UseVisualStyleBackColor = true;
			// 
			// textBoxCommandesMoyPaiement
			// 
			this->textBoxCommandesMoyPaiement->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxCommandesMoyPaiement->Location = System::Drawing::Point(160, 173);
			this->textBoxCommandesMoyPaiement->Name = L"textBoxCommandesMoyPaiement";
			this->textBoxCommandesMoyPaiement->Size = System::Drawing::Size(100, 25);
			this->textBoxCommandesMoyPaiement->TabIndex = 9;
			// 
			// textBoxCommandesDatePaiement
			// 
			this->textBoxCommandesDatePaiement->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxCommandesDatePaiement->Location = System::Drawing::Point(160, 131);
			this->textBoxCommandesDatePaiement->Name = L"textBoxCommandesDatePaiement";
			this->textBoxCommandesDatePaiement->Size = System::Drawing::Size(100, 25);
			this->textBoxCommandesDatePaiement->TabIndex = 8;
			// 
			// textBoxCommandesDateEmission
			// 
			this->textBoxCommandesDateEmission->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxCommandesDateEmission->Location = System::Drawing::Point(160, 90);
			this->textBoxCommandesDateEmission->Name = L"textBoxCommandesDateEmission";
			this->textBoxCommandesDateEmission->Size = System::Drawing::Size(100, 25);
			this->textBoxCommandesDateEmission->TabIndex = 7;
			// 
			// textBoxCommandesDateLivraison
			// 
			this->textBoxCommandesDateLivraison->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxCommandesDateLivraison->Location = System::Drawing::Point(160, 47);
			this->textBoxCommandesDateLivraison->Name = L"textBoxCommandesDateLivraison";
			this->textBoxCommandesDateLivraison->Size = System::Drawing::Size(100, 25);
			this->textBoxCommandesDateLivraison->TabIndex = 6;
			// 
			// textBoxCommandesRef
			// 
			this->textBoxCommandesRef->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxCommandesRef->Location = System::Drawing::Point(160, 9);
			this->textBoxCommandesRef->Name = L"textBoxCommandesRef";
			this->textBoxCommandesRef->Size = System::Drawing::Size(100, 25);
			this->textBoxCommandesRef->TabIndex = 5;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(-2, 175);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(135, 19);
			this->label16->TabIndex = 4;
			this->label16->Text = L"Moyen paiement";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(-1, 133);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(126, 19);
			this->label17->TabIndex = 3;
			this->label17->Text = L"Date paiement";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(-1, 92);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(126, 19);
			this->label18->TabIndex = 2;
			this->label18->Text = L"Date émission";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(-1, 49);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(135, 19);
			this->label19->TabIndex = 1;
			this->label19->Text = L"Date livraison";
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
			this->panelStock->Controls->Add(this->buttonStockRechercher);
			this->panelStock->Controls->Add(this->textBoxStockCouleur);
			this->panelStock->Controls->Add(this->textBoxStockSeuilReapro);
			this->panelStock->Controls->Add(this->label31);
			this->panelStock->Controls->Add(this->label32);
			this->panelStock->Controls->Add(this->buttonStockSupprimer);
			this->panelStock->Controls->Add(this->buttonStockModifier);
			this->panelStock->Controls->Add(this->buttonStockAjouter);
			this->panelStock->Controls->Add(this->textBoxStockQuantiteStock);
			this->panelStock->Controls->Add(this->textBoxStockTauxTVA);
			this->panelStock->Controls->Add(this->textBoxStockPrixHT);
			this->panelStock->Controls->Add(this->textBoxStockDesignation);
			this->panelStock->Controls->Add(this->textBoxStockRef);
			this->panelStock->Controls->Add(this->label33);
			this->panelStock->Controls->Add(this->label34);
			this->panelStock->Controls->Add(this->label35);
			this->panelStock->Controls->Add(this->label36);
			this->panelStock->Controls->Add(this->label37);
			this->panelStock->Location = System::Drawing::Point(15, 110);
			this->panelStock->Name = L"panelStock";
			this->panelStock->Size = System::Drawing::Size(263, 402);
			this->panelStock->TabIndex = 27;
			this->panelStock->Visible = false;
			// 
			// buttonStockRechercher
			// 
			this->buttonStockRechercher->FlatAppearance->BorderSize = 0;
			this->buttonStockRechercher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStockRechercher->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStockRechercher->Location = System::Drawing::Point(164, 308);
			this->buttonStockRechercher->Name = L"buttonStockRechercher";
			this->buttonStockRechercher->Size = System::Drawing::Size(96, 27);
			this->buttonStockRechercher->TabIndex = 17;
			this->buttonStockRechercher->Text = L"Rechercher";
			this->buttonStockRechercher->UseVisualStyleBackColor = true;
			// 
			// textBoxStockCouleur
			// 
			this->textBoxStockCouleur->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxStockCouleur->Location = System::Drawing::Point(160, 262);
			this->textBoxStockCouleur->Name = L"textBoxStockCouleur";
			this->textBoxStockCouleur->Size = System::Drawing::Size(100, 25);
			this->textBoxStockCouleur->TabIndex = 16;
			// 
			// textBoxStockSeuilReapro
			// 
			this->textBoxStockSeuilReapro->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxStockSeuilReapro->Location = System::Drawing::Point(160, 218);
			this->textBoxStockSeuilReapro->Name = L"textBoxStockSeuilReapro";
			this->textBoxStockSeuilReapro->Size = System::Drawing::Size(100, 25);
			this->textBoxStockSeuilReapro->TabIndex = 15;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(-1, 264);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(72, 19);
			this->label31->TabIndex = 14;
			this->label31->Text = L"Couleur";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(-1, 220);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(117, 19);
			this->label32->TabIndex = 13;
			this->label32->Text = L"Seuil réapro";
			// 
			// buttonStockSupprimer
			// 
			this->buttonStockSupprimer->FlatAppearance->BorderSize = 0;
			this->buttonStockSupprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStockSupprimer->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStockSupprimer->Location = System::Drawing::Point(168, 371);
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
			this->buttonStockModifier->Location = System::Drawing::Point(81, 371);
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
			this->buttonStockAjouter->Location = System::Drawing::Point(3, 371);
			this->buttonStockAjouter->Name = L"buttonStockAjouter";
			this->buttonStockAjouter->Size = System::Drawing::Size(72, 27);
			this->buttonStockAjouter->TabIndex = 10;
			this->buttonStockAjouter->Text = L"Ajouter";
			this->buttonStockAjouter->UseVisualStyleBackColor = true;
			// 
			// textBoxStockQuantiteStock
			// 
			this->textBoxStockQuantiteStock->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxStockQuantiteStock->Location = System::Drawing::Point(160, 173);
			this->textBoxStockQuantiteStock->Name = L"textBoxStockQuantiteStock";
			this->textBoxStockQuantiteStock->Size = System::Drawing::Size(100, 25);
			this->textBoxStockQuantiteStock->TabIndex = 9;
			// 
			// textBoxStockTauxTVA
			// 
			this->textBoxStockTauxTVA->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxStockTauxTVA->Location = System::Drawing::Point(160, 131);
			this->textBoxStockTauxTVA->Name = L"textBoxStockTauxTVA";
			this->textBoxStockTauxTVA->Size = System::Drawing::Size(100, 25);
			this->textBoxStockTauxTVA->TabIndex = 8;
			// 
			// textBoxStockPrixHT
			// 
			this->textBoxStockPrixHT->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxStockPrixHT->Location = System::Drawing::Point(160, 90);
			this->textBoxStockPrixHT->Name = L"textBoxStockPrixHT";
			this->textBoxStockPrixHT->Size = System::Drawing::Size(100, 25);
			this->textBoxStockPrixHT->TabIndex = 7;
			// 
			// textBoxStockDesignation
			// 
			this->textBoxStockDesignation->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxStockDesignation->Location = System::Drawing::Point(160, 47);
			this->textBoxStockDesignation->Name = L"textBoxStockDesignation";
			this->textBoxStockDesignation->Size = System::Drawing::Size(100, 25);
			this->textBoxStockDesignation->TabIndex = 6;
			// 
			// textBoxStockRef
			// 
			this->textBoxStockRef->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxStockRef->Location = System::Drawing::Point(160, 9);
			this->textBoxStockRef->Name = L"textBoxStockRef";
			this->textBoxStockRef->Size = System::Drawing::Size(100, 25);
			this->textBoxStockRef->TabIndex = 5;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(-2, 175);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(162, 19);
			this->label33->TabIndex = 4;
			this->label33->Text = L"Quantité en stock";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(-1, 133);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(81, 19);
			this->label34->TabIndex = 3;
			this->label34->Text = L"Taux TVA";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(-1, 92);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(72, 19);
			this->label35->TabIndex = 2;
			this->label35->Text = L"Prix HT";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(-1, 49);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(108, 19);
			this->label36->TabIndex = 1;
			this->label36->Text = L"Désignation";
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1109, 733);
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
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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

		// PERSONNEL
	private: System::Void buttonPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {

		labelCategories->Text = "Personnel";
		panelPersonnel->Visible = true;
		panelClients->Visible = false;
		panelCommandes->Visible = false;
		panelStock->Visible = false;
	}

		   // CLIENTS
	private: System::Void buttonClients_Click(System::Object^ sender, System::EventArgs^ e) {

		labelCategories->Text = "Clients";
		panelPersonnel->Visible = false;
		panelClients->Visible = true;
		panelCommandes->Visible = false;
		panelStock->Visible = false;
	}

		   // COMMANDES
	private: System::Void buttonCommandes_Click(System::Object^ sender, System::EventArgs^ e) {

		labelCategories->Text = "Commandes";
		panelPersonnel->Visible = false;
		panelClients->Visible = false;
		panelCommandes->Visible = true;
		panelStock->Visible = false;
	}

		   // STOCK
	private: System::Void buttonStock_Click(System::Object^ sender, System::EventArgs^ e) {

		labelCategories->Text = "Stock";
		panelPersonnel->Visible = false;
		panelClients->Visible = false;
		panelCommandes->Visible = false;
		panelStock->Visible = true;
	}




	};
}
