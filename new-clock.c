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
  scanf(" %d %d %d ", &hours, &segs, &mins);
if(hours>23 || mins>59 || segs>59 ){
  printf("!!!!!!!ERRO!!!!!!!");
}
  else{
//calculo do horario
//hour calculation
  while(1) {
    segs++;
     if(segs>59)
     {mins++;
       segs=0;}
    if(mins>59){
      hours++;
      segs=0;
      mins=0;
    }  
    if(hours>23){
      segs=0;
      mins=0;
      hours=0;
    
  }
    sleep(d);//funçao para deixar o relógio no tempo adequado
    {printf("             RELÓGIO         \n");
     printf(":::::::::::::::::::::::::::::\n");
     printf("::::                     ::::\n");
     printf(":::: %02i  :   %02i   :  %02i  ::::\n", hours, mins, segs);
     printf("::::                     ::::\n");
     printf(":::::::::::::::::::::::::::::\n");
     system("clear");
//opera dentro da shell para limpar a tela a cada ciclo
   }
 }
}
  return 0;
}