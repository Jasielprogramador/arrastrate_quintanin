#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int main(void){
char **arg={"/bin/mkdir","lana",NULL};
if (execl("/bin/mkdir",arg,NULL)==-1){
perror("execl"); 
exit(EXIT_FAILURE);
}
puts("No debería llegar aqui");
exit(EXIT_SUCCESS);
}
