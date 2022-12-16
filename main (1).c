#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

#define capacity 3



void imprimir(){
  printf("\n----------------------------------------------------------------");
printf("\n----------------------------------------------------------------");
printf("\n----                        /Autores/                        ---");
printf("\n----------------------------------------------------------------");
printf("\n-------------------[Daniel Lourenço Affonso]--------------------");
printf("\n------------------------[Victor Martins]------------------------");
printf("\n--------------[Jan Luiz de Freitas Barreto Barbosa]-------------");
printf("\n----------------------------------------------------------------");  printf("\n/////////////////////////////////////////////////////////////////////////\n");
  printf("///                ***************************************            ///\n");
  printf("///                ****         PILHA DIGITAL         ****            ///\n");
  printf("///                ***************************************            ///\n");
  printf("///                =======================================            ///\n");
  printf("///                |                  #                |||            ///\n");
  printf("///                |                ###                |||            ///\n");
  printf("///                |              ####                 |||            ///\n");
  printf("///         |¨¨¨¨¨¨¨             ####                  |||            ///\n");
  printf("///         |                   ##########             |||            ///\n");
  printf("///         |_______                 ####              |||            ///\n");
  printf("///                |                ####               |||            ///\n");
  printf("///                |               ##                  |||            ///\n");
  printf("///                |              #                    |||            ///\n");
  printf("///                =======================================            ///\n");
  printf("///                                                                   ///\n");
printf("/////////////////////////////////////////////////////////////////////////\n");
  
}

void menu1(){
  printf("\n\n");

  printf("                     *******************************                    \n");
  printf("                     ****         MENU          ****                    \n");
  printf("                     *******************************                    \n");
  printf("\n \n");
  printf("                   -----------------------------------                      \n");
  printf("                   --  |1|          PILHA           --                      \n");
  printf("                   --  |2|          FILA            --                      \n");
  printf("                   --  |0|         ENCERRA          --                      \n");
  printf("                   -----------------------------------                      \n");
}

typedef struct{
    int a[capacity];
    int topo;
}pilha;

void iniciar(pilha *p){
    p->topo = -1;
}

void inserir(pilha *p, int x){
    p->topo += 1;
    p->a[p->topo] = x;
}

int excluir(pilha *p){
  int aux;
   aux= p->a[p->topo];
    p->topo--;
    return aux;
}

int vazia(pilha *p){
    if(p->topo == -1){
        return 1;
    }else{
        return 0;
    }
}

int pilhacheia(pilha *p){
  if (p->topo == capacity-1)
    return 1;
  else
    return 0;
}

void imprimepilha(pilha *p){
  int i;
  printf("\nExibindo itens da pilha.\n");
  for(i=0;i<=p->topo;i++) {
    printf("\nItem %d ...: %d", i, p->a[i]);
  };
  printf("\n\n");
}

void menupilha(pilha *p){
	
	system("clear");
  int op, valor;
	
	iniciar(p);
	
	do {
		printf("\n\n");
		printf("                      *******************************\n");
		printf("                      ****         PILHA         ****\n");
		printf("                      *******************************\n");
		printf("\n \n");
		printf("                 -----------------------------------------\n");
		printf("                 --   |1| Inserir (push) na pilha       --\n");
		printf("                 --   |2| Excluir (pop) na pilha        --\n");
		printf("                 --   |3| Mostrar pilha			        --\n");
		printf("                 --   |4| Verificar se Pilha está vazia --\n");
		printf("                 --   |5| Verificar se Pilha está cheia --\n");
		printf("                 --   |0| Voltar ao menu anterior       --\n");
		printf("                 -----------------------------------------\n");
		printf("Digite uma Opção: ");
		scanf("%i", &op);
	
		if (op == 1) {
			if (pilhacheia(p) == 1){
        system("clear");
				printf("A Pilha já está cheia");
			}
			else{
				printf("Adicionar um valor a pilha:... ");
				scanf("%d", &valor);
				inserir(p, valor);
        system("clear");
			}
		}
		else if (op == 2){
			if ( vazia(p) == 1){
        system("clear");
				printf("A pilha está vazia\n");
			}
			else{
        system("clear");
				valor = excluir(p);
				printf("o valor exluído foi %d\n", valor);
			}
		}
		else if(op == 3) {
			if(vazia(p) == 1) {
        system("clear");
				printf("Erro: Pilha vazia.\n");
			} 
			else {
        system("clear");
				imprimepilha(p);
			}
		}
		else if(op == 4) {
			if(vazia(p) == 1) {
        system("clear");
				printf("A Pilha está vazia.\n");
			}
			else {
        system("clear");
				printf("A Pilha não está vazia.\n");
            }
        }
		else if(op == 5) {
			if(pilhacheia(p) == 1) {
        system("clear");
				printf("A Pilha está cheia.\n");
			}
			else {
        system("clear");
				printf("A Pilha não está cheia.\n");
            }
        }
		else if (op == 0) {
			printf("\n\n");
		}
		else {
      system("clear");
			printf("\nOpção inválida.\n");
		}
		
		
	} while (op != 0);
}


typedef struct{
  int dados[capacity];
  int ini;
  int fim;
}fila;

void inicializarfila(fila *f){
  f->ini=0;
  f->fim=0;
}

void insert(fila *f, int dados){
    f->dados[f->fim] = dados;
    f->fim++;
}

int deleta(fila *f){
    int dados = f->dados[0];
    for(int i=0;i<f->fim;i++){
      f->dados[i] = f->dados[i+1];
    }
    f->fim--;
  return dados;
}

int filavazia(fila *f){
  if (f->fim == f->ini){
    return 1;
  }else{
    return 0;
  }
}

int filacheia(fila *f){
  if (f->fim == capacity)
    return 1;
  else
    return 0;
}

void imprimefila(fila *f){
  int i;
  printf("Exibindo itens da fila.\n\n");
  for (i=f->ini;i<f->fim;i++){
    printf("Conteudo do item %i ...: %i\n", i, f->dados[i]);
  }
}

void menufila(fila *f){

  system("clear");
  int op2=9, x;
  inicializarfila(f);

  while (op2 != 0){
    printf("\n\n");
    printf("                        ******************************\n");
    printf("                        ****         FILA         ****\n");
    printf("                        ******************************\n");
    printf("\n \n");
    printf("                   ----------------------------------------\n");
    printf("                   -- |1| Inserir elementos na fila      --\n");
    printf("                   -- |2| Excluir elementos da fila      --\n");
    printf("                   -- |3| Exibe Fila                     --\n");
    printf("                   -- |4| Verificar se a fila está cheia --\n");
    printf("                   -- |5| Verificar se a fila está vazia --\n");
    printf("                   -- |0| Voltar ao menu anterior        --\n");
    printf("                   ----------------------------------------\n");
    printf("Escolha uma opção:");
    scanf("%d", &op2);
    if (op2 == 1){
      if (filacheia(f) == 1){
        system("clear");
        printf("A fila já está cheia");
      }
      else {
        printf("Entre com o dado a ser inserido:");
        scanf("%d", &x);
        insert(f, x);
        system("clear");
      }
    }
    else if (op2 == 2){
      if (filavazia(f) == 1){
        system("clear");
        printf("A fila já está vazia");
      } else {
        system("clear");
        printf("O item removido foi [%d]\n\n", deleta(f));
      }
    }
    else if (op2 == 3){
      if(filavazia(f) == 1){
        system("clear");
        printf("Fila vazia, não há o que exibir");
        }else{
        system("clear");
        imprimefila(f);
      }
    }
    else if (op2 == 4){
      if(filacheia(f) == 1){
        system("clear");
        printf("A Fila está cheia!\n");
      }else{
        system("clear");
        printf("A Fila não está cheia\n");
      }
    }
    else if (op2 == 5){
      if(filavazia(f) == 1){
        system("clear");
        printf("A Fila está vazia\n");
      }else{
        system("clear");
        printf("A Fila não está vazia\n");
      }
    }
  
    else if (op2 == 0){
      printf("\n");
    }
    else{
      system("clear");
      printf("ERRO: Opção inválida.");
    }
    
  };
}

int main(){
  int menu;
  
  setlocale(LC_ALL, "Portuguese");

  system("clear");

  imprimir();
  
  do {
  menu1();
    printf("Digite uma Opção: ");
    scanf("%d", &menu);
    
  if (menu == 1){
    pilha *p = (pilha*)malloc(sizeof(pilha));
    menupilha(p);
    system("clear");
  }
    
  else if(menu == 2) {
    fila *f = (fila*)malloc(sizeof(fila));
    menufila(f);
    system("clear");
  }

  else if(menu == 0){
    system("clear");
    printf("\n\nEncerrando...\nObrigado por usar nosso sistema!");
    imprimir();
  }
  }while(menu != 0);
  }