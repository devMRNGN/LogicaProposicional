#include <stdio.h>
#include <conio.h>
int main (void )
{
    int valor;
    int p;
    int q;

    printf("\nEscolha uma alternativa!");
    printf("\n1. ~P");
    printf("\n2. P^Q");
    printf("\n3. PvQ");
    printf("\n4. SAIR");
    printf("\nQual alternativa deseja escolher?");
    scanf("%d", &valor);

  switch ( valor )
  {
    case 1 :
    printf("\nDigite um valor para P: 0 (F) 1 (V)");
    scanf("%d",&p);
    p=!p;
    printf("\n~P =%d",p);
    break;

    case 2 :
    printf("\nDigite um valor para P: 0 (F) 1 (V)");
    scanf("%d",&p);
    printf("\nDigite um valor para Q: 0 (F) 1 (V)");
    scanf("%d",&q);
    if(p==1&&q==1){
        printf("\nVerdadeiro");
    } else{
        printf("\nFalso");
    }
    break;

    case 3 :
    printf("\nDigite um valor para P: 0 (F) 1 (V)");
    scanf("%d",&p);
    printf("\nDigite um valor para Q: 0 (F) 1 (V)");
    scanf("%d",&q);
    if(p==1||q==1){
        printf("\nVerdadeiro");
    } else{
        printf("\nFalso");
    }
    break;

    default :
    printf("\nAlternativa invalida tente novamente!(numeros de 1 a 4)");
  }

  getch();
  return 0;
}
