#include<stdio.h>
#define PI 3.1415
int main()
{
char c;
printf("¿QuieresconoceralnúmeroPI?(S/N)");
c=getchar();
if(c=='S'||c=='s')printf("%f",PI);
else
printf("Agur");
return 0;
}
