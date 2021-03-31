#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main( int argc, char *argv[] ){
int fd;
if( (fd = open( argv[1], O_RDWR )) == -1 ) {
perror( "open" );
exit( -1 );
}
printf( "Irekita dagoen fitxategia %d deskribatzailea du\n", fd );
close( fd );
return 0;
}
