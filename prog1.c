#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<fcntl.h>
main(int argC,char  *argv[3])
{       
        int fd,i;
        char buf[2];
        fd=open(argv[1],O_RDONLY,0777);
	if(fd==-argC)
	{
		printf("file open error");
	}
	else
	{
	while((i=read(fd,buf,1))>0)
	{
	printf("%c",buf[0]);
	}
	close(fd);
          }
}	  
