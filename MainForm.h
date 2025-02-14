//---------------------------------------------------------------------------

#ifndef MainFormH
#define MainFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Objects.hpp>
#include "UploadFile.h"
//---------------------------------------------------------------------------
class TMyMainForm : public TForm
{
__published:	// IDE-managed Components
	TButton *LoginNavigationButton;
	TButton *RegisterNavigationButton;
	TText *Text1;
	void __fastcall LoginNavigationButtonClick(TObject *Sender);
	void __fastcall RegisterNavigationButtonClick(TObject *Sender);
	void __fastcall MainUploadClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMyMainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMyMainForm *MyMainForm;
//---------------------------------------------------------------------------
#endif
