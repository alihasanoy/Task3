#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>


int main(int argc,char *argv) {

pid_t pid;

pid = fork();


if (pid<0) {
printf("fork is failuer\n");
}
  else if (pid==0) {
printf("iam ababy my pid is %d \n",(int) getpid());
char * args[]={"1","2","3","4",NULL};

execv(args);

}
else if(pid >0) {
printf("iam father my pid is %d \n",(int) getpid());

}

return 0;

}
