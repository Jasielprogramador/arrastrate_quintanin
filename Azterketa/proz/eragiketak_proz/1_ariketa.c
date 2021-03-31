#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main(int argc,char**argv){
int rc=0,status;
if(argc!=1){
printf("uso:%s\n",argv[0]);
rc=1;
}
else if(fork()){
wait(&status);
printf("GURASOA:pid=%8dppid=%8duser-id=%8d\n",getpid(),getppid(),getuid());
printf("Semeakitzuliduenegoera-kodea:%d\n",status);
}
else{printf("SEMEA:pid=%8d\n",getpid());
}
exit(rc);
}
