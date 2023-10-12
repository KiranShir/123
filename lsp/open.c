 #include <sys/types.h>
       #include <sys/stat.h>
       #include <fcntl.h>
      #include<errno.h>
int main()
{
     int fd;
     fd=fopen("fork.c","O_RDONLY");
     if(fd==-1)
     {
	     printf("file is not exit%d",errno);
     }
	     else
		     {
			     printf("sucessfully executed%d",fd);
		     }


}
