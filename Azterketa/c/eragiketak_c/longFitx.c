#include<stdio.h>
#define MAXSTR 100
int main(){
	FILE *fd;
	char fitx[MAXSTR];
	char c;
	int kont;

	printf("Sartu fitxategi izena: ");
	scanf("%s",fitx);
	
	fd=fopen(fitx,"r");
	c=fgetc(fd);
	while(c!=EOF){
		kont++;
		c=fgetc(fd);
	}
	fclose(fd);
	printf("tamaina: %d \n",kont);
}
