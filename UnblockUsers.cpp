//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "UnblockUsers.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMyUnblockUsersForm *MyUnblockUsersForm;
//---------------------------------------------------------------------------
__fastcall TMyUnblockUsersForm::TMyUnblockUsersForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMyUnblockUsersForm::ViewUsersButtonClick(TObject *Sender)
{
	UsersList->Clear();
	String command = "VIEW_ALL_USERS";
	String users = viewUsers(AnsiString(command).c_str());

		//ShowMessage(users);

	TStringList *lines = new TStringList();
	lines->Text = users;

	for (int i = 0; i < lines->Count; i++) {
		UsersList->Items->Add(lines->Strings[i]);
	}
}
//---------------------------------------------------------------------------
void __fastcall TMyUnblockUsersForm::UnblockUserButtonClick(TObject *Sender)
{
    AnsiString username = UnblockUsersEdit->Text;

    String command = "UNBLOCK_USER";

	if (username.IsEmpty()) {
		ShowMessage("Please enter the user you want to unblock");
		return;
	}

	String text = unblockUser(AnsiString(command).c_str()	, username.c_str());

	ShowMessage(text);
}
//---------------------------------------------------------------------------
