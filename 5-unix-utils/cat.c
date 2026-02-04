#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>


int main (int argc, char *argv[]){
  int fd = open(argv[1],O_RDONLY);
  char buff[9999];
  if(argc < 1){
    perror("No file was provided");
    return -1;
  }
  
  if(read(fd,buff,sizeof(buff))==-1){
    perror("read");
  }else{
    printf("%s",buff);
  }
}
