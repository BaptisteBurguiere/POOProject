#pragma once

namespace POOProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de CommandeModifierForm
	/// </summary>
	public ref class CommandeModifierForm : public System::Windows::Forms::Form
	{
	public:
		CommandeModifierForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~CommandeModifierForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// CommandeModifierForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Name = L"CommandeModifierForm";
			this->Text = L"CommandeModifierForm";
			this->Load += gcnew System::EventHandler(this, &CommandeModifierForm::CommandeModifierForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CommandeModifierForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
