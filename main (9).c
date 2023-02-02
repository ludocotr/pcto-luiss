/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void ft_ft(int n1, int n2, int*quoziente, int*resto)
{
    *quoziente=n1/n2;
    *resto= n1%n2;
}

int main()
{ 
    int n1 = 0;
    int n2 = 0;
    int quoziente;
    int resto;
    printf("dividendo %d\n", n1);
    scanf("%d",&n1);
    printf("divisore %d\n", n2);
    scanf("%d",&n2);
    
    
    ft_ft (n1,n2,&quoziente,&resto);
    printf("risultato %d\n",quoziente);
    printf("resto %d\n",resto);
    
    return 0;
}
