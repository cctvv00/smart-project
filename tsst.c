#include "stdio.h"
#include <unistd.h>
//#include<sys/types.h>
//#include<sys/stat.h>
#include<fcntl.h> 
    int main()
        {
      int fd1,fd2;
      char buf[10]={0};
      char buf_1[10]={0};
      fd1=open("test.txt",O_RDONLY,0);
      read(fd1,buf,3);
      //close(fd1);
      fd2=open("test.txt",O_RDONLY,0);
      read(fd2,buf_1,5);
      close(fd2);
      printf("%s\n",buf);
      printf("%s\n",buf_1);
      
}

