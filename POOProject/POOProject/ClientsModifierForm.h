#pragma once
#include "ClassCat.h"

namespace POOProject {

	using namespace ClassCat;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Description résumée de ClientsModifierForm
	/// </summary>
	public ref class ClientsModifierForm : public System::Windows::Forms::Form
	{
	public:
		ClientsModifierForm(String^ NUM)
		{
			InitializeComponent();

			this->NUM = NUM;

			try {

				String^ constr = "Server=51.75.246.94;Uid=project_team;Pwd=UeKXm3VYEQTe;Database=TEST groupe 3";
				MySqlConnection^ con = gcnew MySqlConnection(constr);

				MySqlCommand^ cmd = gcnew MySqlCommand("SELECT PERNOM, PERPRENOM, ADRESSE, DATE, ID_SUPERIEUR FROM PERSONNEL, DATE, ADRESSE WHERE PERSONNEL.ID_PERSONNEL='" + ID + "' AND PERSONNEL.ID_ADRESSE = ADRESSE.ID_ADRESSE AND PERSONNEL.ID_DATE = DATE.ID_DATE", con);
				MySqlDataReader^ dr;
				con->Open();
				dr = cmd->ExecuteReader();

				while (dr->Read()) {

					
					textBoxNom->Text = dr->GetString(0);
					textBoxPrenom->Text = dr->GetString(1);
					textBoxAdrFact->Text = dr->GetString(2);
					textBoxAdrLivr->Text = dr->GetString(3);
					textBoxDateNaiss->Text = dr->GetString(4);
					textBoxDate1er->Text = dr->GetString(5);
					
				}

				con->Close();
			}

			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

	protected:

		String^ NUM;

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~ClientsModifierForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonModifier;
	private: System::Windows::Forms::Button^ buttonAnnuler;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxNum;
	private: System::Windows::Forms::TextBox^ textBoxNom;
	private: System::Windows::Forms::TextBox^ textBoxPrenom;
	private: System::Windows::Forms::TextBox^ textBoxAdrFact;
	private: System::Windows::Forms::TextBox^ textBoxAdrLivr;
	private: System::Windows::Forms::TextBox^ textBoxDate1er;






	private: System::Windows::Forms::TextBox^ textBoxDateNaiss;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;




	protected:

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
			this->buttonModifier = (gcnew System::Windows::Forms::Button());
			this->buttonAnnuler = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxNum = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrenom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAdrFact = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAdrLivr = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDate1er = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDateNaiss = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonModifier
			// 
			this->buttonModifier->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonModifier->Location = System::Drawing::Point(411, 350);
			this->buttonModifier->Name = L"buttonModifier";
			this->buttonModifier->Size = System::Drawing::Size(73, 27);
			this->buttonModifier->TabIndex = 0;
			this->buttonModifier->Text = L"Modifier";
			this->buttonModifier->UseVisualStyleBackColor = true;
			this->buttonModifier->Click += gcnew System::EventHandler(this, &ClientsModifierForm::buttonModifier_Click);
			// 
			// buttonAnnuler
			// 
			this->buttonAnnuler->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAnnuler->Location = System::Drawing::Point(290, 350);
			this->buttonAnnuler->Name = L"buttonAnnuler";
			this->buttonAnnuler->Size = System::Drawing::Size(72, 27);
			this->buttonAnnuler->TabIndex = 1;
			this->buttonAnnuler->Text = L"Annuler";
			this->buttonAnnuler->UseVisualStyleBackColor = true;
			this->buttonAnnuler->Click += gcnew System::EventHandler(this, &ClientsModifierForm::buttonAnnuler_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Numéro";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Nom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Prénom";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 129);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Adresse Fact";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 169);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Adresse Livr";
			// 
			// textBoxNum
			// 
			this->textBoxNum->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxNum->Location = System::Drawing::Point(168, 8);
			this->textBoxNum->Name = L"textBoxNum";
			this->textBoxNum->Size = System::Drawing::Size(316, 25);
			this->textBoxNum->TabIndex = 7;
			// 
			// textBoxNom
			// 
			this->textBoxNom->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxNom->Location = System::Drawing::Point(168, 48);
			this->textBoxNom->Name = L"textBoxNom";
			this->textBoxNom->Size = System::Drawing::Size(316, 25);
			this->textBoxNom->TabIndex = 8;
			// 
			// textBoxPrenom
			// 
			this->textBoxPrenom->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPrenom->Location = System::Drawing::Point(168, 88);
			this->textBoxPrenom->Name = L"textBoxPrenom";
			this->textBoxPrenom->Size = System::Drawing::Size(316, 25);
			this->textBoxPrenom->TabIndex = 9;
			// 
			// textBoxAdrFact
			// 
			this->textBoxAdrFact->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAdrFact->Location = System::Drawing::Point(168, 128);
			this->textBoxAdrFact->Name = L"textBoxAdrFact";
			this->textBoxAdrFact->Size = System::Drawing::Size(316, 25);
			this->textBoxAdrFact->TabIndex = 10;
			this->textBoxAdrFact->Text = L"numéroRue nomRue, ville, codePostal";
			// 
			// textBoxAdrLivr
			// 
			this->textBoxAdrLivr->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAdrLivr->Location = System::Drawing::Point(168, 168);
			this->textBoxAdrLivr->Name = L"textBoxAdrLivr";
			this->textBoxAdrLivr->Size = System::Drawing::Size(316, 25);
			this->textBoxAdrLivr->TabIndex = 11;
			this->textBoxAdrLivr->Text = L"numéroRue nomRue, ville, codePostal";
			// 
			// textBoxDate1er
			// 
			this->textBoxDate1er->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxDate1er->Location = System::Drawing::Point(168, 248);
			this->textBoxDate1er->Name = L"textBoxDate1er";
			this->textBoxDate1er->Size = System::Drawing::Size(316, 25);
			this->textBoxDate1er->TabIndex = 15;
			this->textBoxDate1er->Text = L"AAAA-MM-JJ";
			// 
			// textBoxDateNaiss
			// 
			this->textBoxDateNaiss->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxDateNaiss->Location = System::Drawing::Point(168, 208);
			this->textBoxDateNaiss->Name = L"textBoxDateNaiss";
			this->textBoxDateNaiss->Size = System::Drawing::Size(316, 25);
			this->textBoxDateNaiss->TabIndex = 14;
			this->textBoxDateNaiss->Text = L"AAAA-MM-JJ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 249);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(131, 20);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Date 1er Achat";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(12, 209);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(136, 20);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Date Naissance";
			// 
			// PersonnelModifierForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(496, 389);
			this->Controls->Add(this->textBoxDate1er);
			this->Controls->Add(this->textBoxDateNaiss);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBoxAdrLivr);
			this->Controls->Add(this->textBoxAdrFact);
			this->Controls->Add(this->textBoxPrenom);
			this->Controls->Add(this->textBoxNom);
			this->Controls->Add(this->textBoxNum);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonAnnuler);
			this->Controls->Add(this->buttonModifier);
			this->Name = L"PersonnelModifierForm";
			this->Text = L"PersonnelModifierForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonAnnuler_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide();
	}

	private: System::Void buttonModifier_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ nom = textBoxNom->Text;
		String^ prenom = textBoxPrenom->Text;
		String^ adrFact = textBoxAdrFact->Text;
		String^ adrLivr = textBoxAdrLivr->Text;
		String^ dateNaiss = textBoxDateNaiss->Text;
		String^ date1er = textBoxDate1er->Text;

		if (nom == "" || prenom == "" || adrFact == "" || adrLivr == "" || dateNaiss == "" || date1er == "") {

			MessageBox::Show("Remplissez tous les champs !", "Erreur");
		}
		else {

			Client monClient(this->NUM, nom, prenom, adrFact, adrLivr, dateNaiss, date1er);
			monClient.Modifier();

			this->Hide();
		}
	}
	};
}
