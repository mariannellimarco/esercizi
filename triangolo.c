#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
int a=0;
int b=0;
int c=0;
printf("Lato a =");
scanf("%d",&a);
printf("Lato b =");
scanf("%d",&b);
printf("Lato c =");
scanf("%d",&c);

if (a<=0 || b<=0 || c<=0) {
printf("Questo non è un triangolo\n");
}

else if (a+b<=c || b+c<=a || a+c<=b || a-b>=c || b-c>=a || a-c>=b) {
  printf("Triangolo non valido\n");
}

else if (a==b && b==c) {
printf("Il triangolo è equilatero\n");
}

else if (a==b || b==c || a==c) {
  printf("Il triangolo è isoscele\n");
}

else if (a!=b && b!=c){
if (a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b)
  printf("Il triangolo è rettangolo\n");
else
printf("Il triangolo è scaleno\n");
}


return 0;
}
