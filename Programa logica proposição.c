//ATIVIDADE 1 - Matemática Discreta - ADS
//Integrante - João Tadeu da Silva Marangoni

#include <stdio.h>
#include <stdlib.h>

int main() {
//variaveis

system("color 4");
int p;
int q;
int opc;

//MENU OP��ES
printf("=================MENU==================");
printf("\nEscolha uma alternativa!");
printf("\n1. ~P");
printf("\n2. P^Q");
printf("\n3. PvQ");
printf("\n4. SAIR");
printf("\nQual alternativa deseja escolher?");
scanf("%d",&opc);
printf("\nVoce escolheu a alternativa %d",opc);

//Processamento das opc�es e sa�das pro usu�rio
        //OP��O INVALIDA
if(opc > 4){
    printf("\nAlternativa invalida tente novamente!(numeros de 1 a 4)");
        //OP��O 1
} else if(opc == 1){
    printf("\nDigite 0 para falso ou 1 para verdadeiro:");
    scanf("%d",&p);
    p=!p;
    printf("\nO valor logico de ~p eh = %d",p);
        //OP��O 2
} else if(opc == 2){
    printf("\nDigite 0 para falso ou 1 para verdadeiro - p: ");
    scanf("%d",&p);
    printf("\nDigite 0 para falso ou 1 para verdadeiro - q: ");
    scanf("%d",&q);
    printf("\nO valor logico de p ^ q  eh = %d e %d ou seja",p,q);
    if(p==1&&q==1){
        printf("\nVerdadeiro");
    } else{
        printf("\nFalso");
    }
        //OP��O 3
} else if(opc == 3){
    printf("\nDigite 0 para falso ou 1 para verdadeiro - p: ");
    scanf("%d",&p);
    printf("\nDigite 0 para falso ou 1 para verdadeiro - q: ");
    scanf("%d",&q);
    printf("\nO valor logico de p v q  eh = %d ou %d ou seja",p,q);
    if(p==1||q==1){
        printf("\nVerdadeiro");
    } else{
        printf("\nFalso");
    }
        //OP��O 4
        //OP��O 4
} else if(opc == 4){
    printf("\nObrigado por usar o programa, saindo!");
}

return(0);
getchar();
system("pause");
}



