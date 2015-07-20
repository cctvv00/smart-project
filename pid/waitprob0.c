#include "sys/types.h"
#include "unistd.h"
#include "sys/wait.h"
#include "stdio.h"
#include "stdlib.h"
int main()
    {
     pid_t temp=0;
        if(fork()==0)
        {
            printf("a \n");            
        }
        else
        {
	    printf("b \n");
            temp=waitpid(-1,NULL,0);
            printf("%d\n",temp);
         }
        printf("c \n");
        exit(0);
    return 0;
    }
