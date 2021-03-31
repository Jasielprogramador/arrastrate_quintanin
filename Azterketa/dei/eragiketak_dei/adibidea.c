#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h> 
#include <stdlib.h> 
#include <stdio.h> 
int main( int argc, char *argv[] ) { 
struct stat estructura; 
if( ( lstat( argv[1], &estructura ) ) < 0 ) { 
perror( "lstat" ); 
exit( -1 );
}
printf( "Fitxategiaren propietateak” <%s>\n", argv[1] ); 
printf( "i-nodo: %lu\n", estructura.st_ino ); 
printf( "modua: %#o\n", estructura.st_mode ); 
printf( "loturak: %ld\n", estructura.st_nlink ); 
printf( "jabea: %d\n", estructura.st_uid ); 
printf( "taldea: %d\n", estructura.st_gid );
printf( "dispositibo mota: %ld\n", estructura.st_rdev ); 
printf( "tamaina totala, byte-tan: %ld\n", estructura.st_size ); 
printf( "blokearen gustuko tamaina: %ld\n", estructura.st_blksize ); 
printf( "esleitutako bloke kopurua: %ld\n", estructura.st_blocks ); 
return 0;
}
