#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
void trapper(int sig);
void kaixo(int sig);
void r2(int sig);
void cont(int sig);
void stop(int sig);
void ill(int sig);
int main(int argc, char *argv[]){
int i;
signal(10,kaixo);
signal(12,r2);
signal(18,cont);
signal(19,stop);
signal(9,ill);
for(i=1;i<=9;i++){
signal(i, trapper);
}
printf("Identificador del proceso: %d\n", getpid() );
pause();
printf("Continuando...\n");
return 0;
}
void trapper(int sig){
signal(sig, trapper);
printf("Señal que he recogido: %d\n", sig);
}
void kaixo(int sig){
printf("Kaixo");
}
void r2(int sig){
printf("r2");
}
void cont(int sig){
printf("cont");
}
void stop(int sig){
printf("stop");
}
void ill(int sig){
printf("kill");
}
