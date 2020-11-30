#pragma once

#ifndef DEF_BOUTONSASMR
#define DEF_BOUTONSASMR

#include<string>

using namespace std;

class BoutonsASMR
{
public:

	BoutonsASMR(string nrequete);
	virtual void Action();


protected:

	string b_requete;
	string b_adrBDD;

};


class BoutonAjouter : public BoutonsASMR {

public:

	void Action();


protected:

};


#endif // !DEF_BOUTONSASMR



