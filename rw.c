#include "stdio.h"
#include <unistd.h>
#include<fcntl.h> 
    int main()
{
    char buf[10];
    int n;

    while((n=read(0,buf,1))>0)
        write(1,buf,n);
    return 0;
      
}
