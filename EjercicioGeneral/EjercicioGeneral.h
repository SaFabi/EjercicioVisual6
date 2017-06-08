#pragma once  //______________________________________ EjercicioGeneral.h  
#include "Resource.h"
#include "JavierDlg.h"
class EjercicioGeneral : public Win::Dialog
{
public:
	EjercicioGeneral()
	{
	}
	~EjercicioGeneral()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Button btJavier;
	Win::Button btMolina;
	Win::Button btJesus;
	Win::Button btAngel;
	Win::Button btFabi;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::CentimetersToDlgUnitX(15.68979);
		dlgTemplate.cy = Sys::Convert::CentimetersToDlgUnitY(1.27000);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"EjercicioGeneral";
		btJavier.CreateX(NULL, L"Javier", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 0.23813, 0.37042, 2.77812, 0.68792, hWnd, 1000);
		btMolina.CreateX(NULL, L"Molina", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 3.51896, 0.39688, 2.88396, 0.68792, hWnd, 1001);
		btJesus.CreateX(NULL, L"Jesus", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 6.93208, 0.37042, 2.59292, 0.68792, hWnd, 1002);
		btAngel.CreateX(NULL, L"Angel", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 9.94833, 0.37042, 2.56646, 0.68792, hWnd, 1003);
		btFabi.CreateX(NULL, L"Fabi", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 13.04396, 0.34396, 2.46062, 0.68792, hWnd, 1004);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		btJavier.Font = fontArial009A;
		btMolina.Font = fontArial009A;
		btJesus.Font = fontArial009A;
		btAngel.Font = fontArial009A;
		btFabi.Font = fontArial009A;
	}
	//_________________________________________________
	void btJavier_Click(Win::Event& e);
	void btMolina_Click(Win::Event& e);
	void btJesus_Click(Win::Event& e);
	void btAngel_Click(Win::Event& e);
	void btFabi_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btJavier.IsEvent(e, BN_CLICKED)) { btJavier_Click(e); return true; }
		if (btMolina.IsEvent(e, BN_CLICKED)) { btMolina_Click(e); return true; }
		if (btJesus.IsEvent(e, BN_CLICKED)) { btJesus_Click(e); return true; }
		if (btAngel.IsEvent(e, BN_CLICKED)) { btAngel_Click(e); return true; }
		if (btFabi.IsEvent(e, BN_CLICKED)) { btFabi_Click(e); return true; }
		return false;
	}
};
