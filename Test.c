#include <stdio.h>
#include <stdlib.h>
int main()
{
  int valor;
  int valor2;

  printf("(1)GESTOR. \n(2)ENGENHEIRO. \n(3)MESTRE DE OBRA. \n(4)FORNECEDOR.");

  printf ("\nQuem é você nesse bloco: ");
  scanf("%d", &valor);

  switch ( valor )
  {
    case 1 :
    printf("Bem vindo, agora escolha: \n(1)Solicitar nova Obra. \n(2)Verificar custo da obra. \n(3)Verificar histórico da obra");
    
    switch (valor2){
      case 1 :
      printf("Já estamos iniciando ua nova obra");
      break;

      case 2 :
      printf("Iniciando verificação");
      break;
      
      case 3 :
      printf("Obra está andando com calma e eficiencia");
      break;

      default :
      printf ("\nValor invalido!");
    }
    break;

    default :
    printf ("Valor invalido!");
  }
  return 0;
}