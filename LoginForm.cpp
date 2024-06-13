//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "LoginForm.h"
#include "main.h"
#include "FileConversion.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"

#include "UnixSocketHelper.h"


TMyLoginForm *MyLoginForm;
//---------------------------------------------------------------------------
__fastcall TMyLoginForm::TMyLoginForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMyLoginForm::LoginButtonClick(TObject *Sender)
{
	AnsiString username = UsernameEdit->Text;
	AnsiString password = PasswordEdit->Text;
	String command = "LOGIN";

	String loginText = sendCredentials(username.c_str(), password.c_str(), AnsiString(command).c_str());

	if (loginText == "Login successful") {
		MyUploadFileForm->Show();
		this->Close();
	} else if (loginText == "Access denied") {
		String text = initializeWinsockAndConnect();

		if (text != "Admin connected to socket!") {
			ShowMessage(text);
			return;
		}

		text = sendLoginInfo(AnsiString(command).c_str(), username.c_str(), password.c_str());

		if (text == "ok") {
            this->Close();
			MyAdminForm->Show();
            return;
		}

        ShowMessage(text);




	} else {
		ShowMessage("Server response: " + loginText);
	}




	//


	//LoginForm->close();

}
//---------------------------------------------------------------------------

