#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void){

int i,n,k,metodo; //chiave lunghezza e metodo
char stringa[256];
char stringa2[256];
char alfabeto_mescolato[26];
printf("\nParola da criptare\n");
scanf("%s", stringa);

printf("\nQuale metodo vuoi utilizzare?\n");
printf("\n1)Il cifrario di Cesare\n");
printf("2)Il cifrario a sostituzione\n");

scanf("%d",&metodo);

switch (metodo) {
  case 1:
  printf("\nHai scelto il cifrario di Cesare\n");
  break;
  case 2:
  printf("\nHai scelto il cifrario a sostituzione\n");
  break;
}

if (metodo==1) {
  printf("\nDigita un numero da 1 a 25\n");
  scanf("%d", &k);
  printf("cyphertext : ");

  for (i=0; i<strlen(stringa); i++) {

  if (stringa[i]>='a' && stringa[i]<='z') {

      stringa2[i]=97+(((stringa[i]%97)+k)%26);
  }
  else
      stringa2[i]='a'+k-('z'-stringa[i])-1;
  }
  printf("%s\n",stringa2);
}

if(metodo==2){

//char alfabeto[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
printf("\nAlfabeto mescolato : ");
scanf("%s", alfabeto_mescolato);
printf("\ncyphertext : ");


if (isalpha(alfabeto_mescolato) && islower(alfabeto_mescolato)) {
for (i = 0; i < strlen(stringa); i++) {
  stringa2[i]=alfabeto_mescolato[i]-stringa[i];
}

  printf("%d\n", stringa2[i]);


}

return 0;
}
