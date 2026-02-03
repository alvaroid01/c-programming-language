#include <stdio.h>
#include <sys/stat.h>

int main (int argc, char *argv[]){
  if(argc  <= 1) {printf("Please specify a folder name"); return 1;}
  if(mkdir(argv[1],0777)==-1){
    perror("mkdir");
  }else{
    printf("Folder created succesfully");
  }
  return 0;
}
