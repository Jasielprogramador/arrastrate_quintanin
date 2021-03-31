#include<stdio.h>
#include "azala.h"
#include "aritmetika.h"
int main(){
int a;
int b;
printf("Sartu zenbaki oso bat: ");
scanf("%d",&a);
printf("Sartu beste zenbaki oso bat: ");
scanf("%d",&b);
printf("\n Batuketa: %d",batuketa(a,b));
printf("\n Laukizuzena: %d\n",laukizuzen(a,b));
}
