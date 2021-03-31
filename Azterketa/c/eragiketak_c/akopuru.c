#include<stdio.h>
#define MAXSTR 100
int ffitxkarakkop(char c,FILE *fitx){
	char e;
	e=fgetc(fitx);
	int kont=0;
	while(e!=EOF){
		if(c==e){
			kont++;
		}
		e=fgetc(fitx);
	}
	fclose(fitx);
	return kont;
}
int main(){
char nombre[80],c;
FILE *fp;
int contador=0;
printf ("¿De qué fichero deseas conocer el número de aes?");
scanf("%s",nombre);
fp=fopen(nombre,"r");
if (fp==NULL)
        {
	printf("No se puede abrir el fichero %s \n",nombre);
             return -1;
         }
else
        {       contador=ffitxkarakkop('a',fp);
                fclose(fp);
                printf("El número de a-s es de %d",contador);
        }
return 0;
}
