#include  <dirent.h>
#include <stdio.h>
int main(){

  DIR * dir = opendir(".");
  if(!dir){
    perror("opendir");
    return -1;
   }else{
     struct dirent * dp;
    while(
    (dp=readdir(dir))!=NULL
    ){

    printf("%s\n",dp->d_name);
    }

}
  return 0;



}
