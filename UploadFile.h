//---------------------------------------------------------------------------

#ifndef UploadFileH
#define UploadFileH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Dialogs.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FireDAC.Comp.BatchMove.hpp>
#include <FireDAC.Comp.BatchMove.Text.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FMX.Objects.hpp>
#include "main.h"
//---------------------------------------------------------------------------
class TMyUploadFileForm : public TForm
{
__published:	// IDE-managed Components
	TOpenDialog *XMLFileUpload;
	TButton *SelectFile;
	TText *Text1;
	TButton *LogoutButton;
	TButton *DownloadFile;
	void __fastcall SelectFileClick(TObject *Sender);
	void __fastcall LogoutButtonClick(TObject *Sender);
	void __fastcall DownloadFileClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMyUploadFileForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMyUploadFileForm *MyUploadFileForm;
//---------------------------------------------------------------------------
#endif
