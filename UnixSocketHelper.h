//---------------------------------------------------------------------------

#ifndef UnixSocketHelperH
#define UnixSocketHelperH
#include <main.h>

#include <string.h>

//---------------------------------------------------------------------------
String initializeWinsockAndConnect();
String sendMessage(const std::string &message);
String logout(const std::string &message);
String viewUsers(const std::string &message);
String viewLogs(const std::string &message);
String blockUser(const std::string &command, const std::string &username);
String unblockUser(const std::string &command, const std::string &username);
String deleteFile(const std::string &command, const std::string &path);
String sendLoginInfo(const std::string &command, const std::string &username, const std::string &password);
#endif