#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
int main(int argc,char **argv)
{
	int fd,nfd;
	if(argc<2)
	{
		printf("usage:%s pathname \n",argv);
		exit(1);
	}
	if((fd=open(argv[1],O_WRONLY))<0)
	{
		perror("problem in opening the file");
		exit(1);
	}
	if((nfd=fcntl(fd,F_DUPFD,0))==-1)
	{
		perror("problem in duplicating fd");
		exit(1);
	
          }
	printf("FD %d  IS DUPLICATED WITH %d\n",fd,nfd);
      close(fd);
      close(nfd);
}
