#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
void trapper(int sig){
printf("SIGUSR1\n");
}
int main(int argc, char *argv[]){
pid_t padre, hijo;
padre = getpid();
signal( SIGUSR1, trapper );
if ( (padre=fork()) != 0 ){
/* padre */
sleep(1);
kill(hijo,SIGUSR2);
for(;;);
}
else{
/*hijo */
sleep(2);
}
return 0;
}

