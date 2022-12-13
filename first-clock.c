#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<unistd.h>
//var declaration
int  hours, segs, mins; 
int d=1;
int main(void) {
//configuração da hora
//clock setup
  
  printf(":::::AJUSTE A HORA AQUI:::::\n");
  scanf(" %d%d%d ", &hours, &segs, &mins);

  //calculo do horario
//hour calculation
 for(segs>=0 || segs<=59; segs++;)
{
  
   if(segs>60){mins++;}
   else if(mins=60){hours++;}
    else if(mins){
   printf(":::::::::::::::::::::::::::::\n");
   printf("::::                     ::::\n");
   printf(":::: %i  /   %i   /  %i  ::::\n", hours, mins, segs);
   printf("::::                     ::::\n");
   printf("::::                     ::::\n");
   printf(":::::::::::::::::::::::::::::\n");
   
  }
}
  return 0;
}