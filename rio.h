#ifndef _RIO__H_
#define _RIO__H_

#include <error.h>

#define RIO_BUFSIZE 8192
#define MAXLINE 8192


class rio_t{
    private:
        int rio_fd;
        int rio_cnt;
        char *rio_bufptr;
        char rio_buf[RIO_BUFSIZE];

    public:
        rio_t() = delete;

        rio_t(int fd): rio_fd(fd), rio_cnt(0), rio_bufptr(rio_buf){};

    

};









#endif