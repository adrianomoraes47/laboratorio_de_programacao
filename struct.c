#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct cadastro Cadastro;

struct cadastro{
char nome[50];
char endereco[50];
long int num;
char email[50];
};

void lerCadastro(Cadastro *c, int vSize){
int i;
if (vSize>0){
   printf("\n----------------------------------------------------------------------\n");
   printf("\nAguarde um instante...\n");
   Sleep(2500);
   printf("\n----------------------------------------------------------------------\n");
   printf("\nCadastro(s) efetuado(s) com sucesso!\n");
   printf("\n----------------------------------------------------------------------\n");
   for(i=0;i<vSize;i++){
                        printf("Nome: %s\n",c[i].nome);
                        printf("Endereco: %s\n",c[i].endereco);
                        printf("Telefone: %d\n",c[i].num);
                        printf("E-mail: %s\n",c[i].email);
                        printf("________________________\n");
                        }
}
if (vSize<=0){
              printf("\nErro! Valor invalido\n");
   }
}

void recebeCadastro(Cadastro *c, int vSize){
int i;
for(i=0;i<vSize;i++){
printf(">Nome do Cliente: ");
fflush(stdin);
gets(c[i].nome);
printf(">Endereco (Logradouro/Numero/Complemento/Bairro): ");
fflush(stdin);
gets(c[i].endereco);
printf(">Telefone (somente numeros): ");
scanf("%d",&c[i].num);
printf(">E-mail: ");
fflush(stdin);
gets(c[i].email);
printf("_______________________________________________________\n");
}
}
void Quantidade(){
int a = 0,d = 1;
printf("\n\t_____________________________________________________________________________________________\n");
printf("\t\t>>>PROGRAMA DE CADASTRO DE CLIENTES - A&T SYSTEM<<< \n\n");
printf("\n\t>> 1-CADASTRAR NOVO(S) CLIENTE(S)");
printf("\n\t>> QUALQUER TECLA PARA SAIR\n\n");
printf("\n\t_____________________________________________________________________________________________\n");
do{
    scanf("%d",&a);
    if (a == 1 ){
        printf("Por favor, informe quantos clientes deseja cadastrar: ");
        int vSize;
        scanf("%d",&vSize);
    Cadastro *c;
    c = malloc(sizeof(Cadastro) * vSize);
    recebeCadastro(c,vSize);
    lerCadastro(c,vSize);
    free(c);
    }
    else break;
    d++;
}
while(d == 1);}


int main(){
Quantidade();
printf("\n######\nATENCAO!!! A tela sera fechada em alguns instantes.\n######");
Sleep(5);


return 0;
}
