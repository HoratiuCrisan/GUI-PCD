#ifndef mainH
#define mainH
#include <string.h>
#include <string>
#include <iostream>
#include <fstream>


//---------------------------------------------------------------------------
std::string convert_windows_to_linux_path(const std::string& windows_path);

String sendCredentials(const std::string &username, const std::string &password, const std::string &command);

String uploadFile(const std::string &command, const std::string &filePath);
String downloadFile(const std::string &command);

String clientLogout(const std::string &command);
#endif
