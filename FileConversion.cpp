//---------------------------------------------------------------------------

#include <fmx.h>
#include "File.h"
#pragma hdrstop

#include "FileConversion.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMyFileConversion *MyFileConversion;
//---------------------------------------------------------------------------
__fastcall TMyFileConversion::TMyFileConversion(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

