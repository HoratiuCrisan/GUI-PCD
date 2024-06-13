//---------------------------------------------------------------------------

#include <fmx.h>
#include <fstream>
#pragma hdrstop
#include "main.h"

#include "RegistrationForm.h"
using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMyRegistrationForm *MyRegistrationForm;
//---------------------------------------------------------------------------
__fastcall TMyRegistrationForm::TMyRegistrationForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TMyRegistrationForm::SaveButtonClick(TObject *Sender)
{
	AnsiString username = UsernameEdit->Text;
	AnsiString password = PasswordEdit->Text;
	String command = "REGISTER";

	sendCredentials(username.c_str(), password.c_str(), AnsiString(command).c_str());

    //RegistrationForm->Close();

}
//---------------------------------------------------------------------------

