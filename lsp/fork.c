#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
         int  pid,ppid;
	    pid=fork();
	 
     printf("process id %d\n",getpid());
    if(pid==0)
    {
	    sleep(5);
      printf("iam a child proces\n");
      printf("child proces id %d\n",getpid());
     printf("child parents process id %d\n",getppid());
    }
    else
{
	wait();
	printf("iam a parents process\n");
	printf("parents process id %d\n",getpid());
	printf(" parents parent  process id %d\n",getppid());
}
}
