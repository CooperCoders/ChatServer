
#include <winsock2.h>
#include <string>
#include <sstream>

class Socket
{
  private:
  int sock_;
  struct sockaddr_in sockAddr_;
  unsigned short port_;
  public:
  Socket();
  ~Socket();
  bool isBound;
  int bindSocket(unsigned short);
  int recvMessage(struct sockaddr_in*, char*);
  int sendMessage(struct sockaddr_in*, std::string);
  void close();
};
