//---------------------------------------------------------------------------

#include <fmx.h>
#ifdef _WIN32
#include <tchar.h>
#endif
#pragma hdrstop
#include <System.StartUpCopy.hpp>
//---------------------------------------------------------------------------
USEFORM("RegistrationForm.cpp", MyRegistrationForm);
USEFORM("UploadFile.cpp", MyUploadFileForm);
USEFORM("AdminMenu.cpp", MyAdminForm);
USEFORM("BlockUsers.cpp", MyBlockUsersForm);
USEFORM("LoginForm.cpp", MyLoginForm);
USEFORM("MainForm.cpp", MyMainForm);
USEFORM("UnblockUsers.cpp", MyUnblockUsersForm);
//---------------------------------------------------------------------------
extern "C" int FMXmain()
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(TMyMainForm), &MyMainForm);
		Application->CreateForm(__classid(TMyRegistrationForm), &MyRegistrationForm);
		Application->CreateForm(__classid(TMyLoginForm), &MyLoginForm);
		Application->CreateForm(__classid(TMyUploadFileForm), &MyUploadFileForm);
		Application->CreateForm(__classid(TMyAdminForm), &MyAdminForm);
		Application->CreateForm(__classid(TMyBlockUsersForm), &MyBlockUsersForm);
		Application->CreateForm(__classid(TMyUnblockUsersForm), &MyUnblockUsersForm);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
