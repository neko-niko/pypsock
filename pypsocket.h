#include <iostream>
#include <sys/socket.h>
#include <string>
#include <vector>
#include <error.h>

using namespace std;



class FdStatus{
    public:
        int fd;
        bool non_blocking;
        bool ipv6;
        bool bind;
        bool connect;


        FdStatus() = delete;
        FdStatus(int f):fd(f), non_blocking(false), ipv6(false), bind(false), connect(false){};
        FdStatus(int f, bool v6):FdStatus(f){ipv6 = v6;};
};


class Socket{
    public:
        FdStatus *fd;
                

        Socket() = delete;
        Socket(int family, int type)


}