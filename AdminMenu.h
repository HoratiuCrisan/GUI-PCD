//---------------------------------------------------------------------------

#ifndef AdminMenuH
#define AdminMenuH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include "UnixSocketHelper.h"
#include "BlockUsers.h"
#include <FMX.Dialogs.hpp>
#include "main.h"
#include "UnblockUsers.h"
//---------------------------------------------------------------------------
class TMyAdminForm : public TForm
{
__published:	// IDE-managed Components
	TText *AdminText;
	TButton *ViewLogsButton;
	TButton *ViewUsersButton;
	TButton *BlockUserButton;
	TButton *UnblockUserButton;
	TButton *LogoutButton;
	TButton *DeleteFileButton;
	TOpenDialog *FileDeleteDialog;
	void __fastcall LogoutButtonClick(TObject *Sender);
	void __fastcall ViewUsersButtonClick(TObject *Sender);
	void __fastcall BlockUserButtonClick(TObject *Sender);
	void __fastcall ViewLogsButtonClick(TObject *Sender);
	void __fastcall UnblockUserButtonClick(TObject *Sender);
	void __fastcall DeleteFileButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMyAdminForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMyAdminForm *MyAdminForm;
//---------------------------------------------------------------------------
#endif
