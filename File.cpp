//---------------------------------------------------------------------------

#include <fmx.h>

#pragma hdrstop

#include "File.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------
// ValidCtrCheck is used to assure that the components created do not have
// any pure virtual functions.
//

static inline void ValidCtrCheck(TOpenDialog1 *)
{
	new TOpenDialog1(NULL);
}
//---------------------------------------------------------------------------
__fastcall TOpenDialog1::TOpenDialog1(TComponent* Owner)
	: TOpenDialog(Owner)
{
}
//---------------------------------------------------------------------------
namespace File
{
	void __fastcall PACKAGE Register()
	{
		TComponentClass classes[1] = {__classid(TOpenDialog1)};
		RegisterComponents(L"Samples", classes, 0);
	}
}
//---------------------------------------------------------------------------
