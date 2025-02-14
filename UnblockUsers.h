//---------------------------------------------------------------------------

#ifndef UnblockUsersH
#define UnblockUsersH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include "UnixSocketHelper.h"
//---------------------------------------------------------------------------
class TMyUnblockUsersForm : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TButton *UnblockUserButton;
	TEdit *UnblockUsersEdit;
	TText *Text1;
	TButton *ViewUsersButton;
	TListBox *UsersList;
	void __fastcall ViewUsersButtonClick(TObject *Sender);
	void __fastcall UnblockUserButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMyUnblockUsersForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMyUnblockUsersForm *MyUnblockUsersForm;
//---------------------------------------------------------------------------
#endif
