//---------------------------------------------------------------------------

#pragma hdrstop

#include "WindowsUtils.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

#include <fmx.h>
#pragma hdrstop
#include "WindowsUtils.h"

String SelectFolder(HWND hwndOwner)
{
    wchar_t szDir[MAX_PATH];
    BROWSEINFO bInfo;
    ZeroMemory(&bInfo, sizeof(bInfo));
    bInfo.hwndOwner = hwndOwner;
    bInfo.pidlRoot = NULL;
    bInfo.pszDisplayName = szDir;
    bInfo.lpszTitle = L"Select a folder";
    bInfo.ulFlags = BIF_RETURNONLYFSDIRS | BIF_NEWDIALOGSTYLE;
    bInfo.lpfn = NULL;
    bInfo.lParam = 0;
    bInfo.iImage = -1;

    LPITEMIDLIST lpItem = SHBrowseForFolder(&bInfo);
    if (lpItem != NULL)
    {
        SHGetPathFromIDList(lpItem, szDir);
        String folderPath = szDir;
        CoTaskMemFree(lpItem);
        return folderPath;
    }
    return "";
}
