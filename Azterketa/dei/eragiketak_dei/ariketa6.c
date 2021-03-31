#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define STDOUT 1
#define SIZE 16
int main( int argc, char *argv[] ){
int fd, readbytes;
char buffer[SIZE];
if( (fd = open( argv[1], O_RDWR )) == -1 ) {
perror( "open" );
exit( -1 );
}
lseek( fd,200, SEEK_SET );
while( (readbytes = read( fd, buffer, SIZE )) != 0 ) { 
write( STDOUT, buffer, SIZE ); 
}
close(fd);
return 0;
}
