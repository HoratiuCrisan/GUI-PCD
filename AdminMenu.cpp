//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "AdminMenu.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#include <FMX.Dialogs.hpp>


TMyAdminForm *MyAdminForm;
//---------------------------------------------------------------------------
__fastcall TMyAdminForm::TMyAdminForm(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TMyAdminForm::LogoutButtonClick(TObject *Sender)
{
	String command = "LOGOUT";

	String text = logout(AnsiString(command).c_str());

	if (text == "Logout successfully!") {
		ShowMessage(text);
		this->Close();
		return;
	}

	ShowMessage(text);
}
//---------------------------------------------------------------------------
void __fastcall TMyAdminForm::ViewUsersButtonClick(TObject *Sender)
{
	String command = "VIEW_USERS";

	String text = viewUsers(AnsiString(command).c_str());

	ShowMessage(text);
}
//---------------------------------------------------------------------------
void __fastcall TMyAdminForm::BlockUserButtonClick(TObject *Sender)
{
	MyBlockUsersForm->Show();
	return;
}
//---------------------------------------------------------------------------


void __fastcall TMyAdminForm::ViewLogsButtonClick(TObject *Sender)
{
    UnicodeString SelectedDir;
    if (SelectDirectory(L"Select a folder", L"", SelectedDir))
    {
        // Convert SelectedDir (UnicodeString) to std::string
        std::string selectedDirStr = AnsiString(SelectedDir).c_str();

        // Convert Windows path to Linux path
        std::string linuxPath = convert_windows_to_linux_path(selectedDirStr);

        // Convert the result back to UnicodeString
        UnicodeString path = UnicodeString(linuxPath.c_str());

        String command = "VIEW_LOGS ";
        String message = command + path;

        // Convert message (String) to AnsiString
        AnsiString ansiMessage = message;

        // Call viewLogs with the AnsiString message
		String text = viewLogs(ansiMessage.c_str());

        // Show the result
        ShowMessage(text);
    }
}
//---------------------------------------------------------------------------


void __fastcall TMyAdminForm::UnblockUserButtonClick(TObject *Sender)
{
    MyUnblockUsersForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TMyAdminForm::DeleteFileButtonClick(TObject *Sender)
{
		if (FileDeleteDialog->Execute()) {
		String selectedFile = FileDeleteDialog->FileName;

		//ShowMessage("Selected file: " + selectedFile);

		String command = "DELETE_FILE";

        //ShowMessage(selectedFile);

        String text = deleteFile(AnsiString(command).c_str(), AnsiString(selectedFile).c_str());

        ShowMessage(text);
	}
}
//---------------------------------------------------------------------------

