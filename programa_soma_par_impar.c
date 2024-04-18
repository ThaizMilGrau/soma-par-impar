#include <stdio.h>
#include <string.h>

/* Este programa solicita ao usuário que informe um número. 
Em seguida, verifica se o número é par ou ímpar. 
Se o número for par, o programa calcula a soma do número dobrado com ele mesmo e exibe o resultado. 
Se o número for ímpar, o programa também calcula a soma do número dobrado com ele mesmo e exibe o resultado. 
Em ambos os casos, a soma resulta da duplicação do número original. 
Ao finalizar, o programa encerra sua execução. FAM 2020 */

int main ()
{

 int numero, par, impar;

    printf("\n informe um numero: ");
    scanf("%d", &numero);

    if(numero%2==0)
    {
        par = numero + numero;
        printf("\nA soma do numero par dobrado com ele mesmo e: %d", par);
    }
    else
    {
        impar = numero + numero;
        
        printf("\nA soma do numero impar dobrado com ele mesmo e: %d", impar);
    }
    
    return 0;
 }

