//---------------------------------------------------------------------------

#ifndef FileConversionH
#define FileConversionH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <Datasnap.DSHTTP.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include "File.h"
#include <FMX.Dialogs.hpp>
//---------------------------------------------------------------------------
class TMyFileConversion : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TOpenDialog *OpenDialog1;
	void __fastcall Button1Click(TObject* Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMyFileConversion(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMyFileConversion *MyFileConversion;
//---------------------------------------------------------------------------
#endif

