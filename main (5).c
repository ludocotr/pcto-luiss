/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int ft_ft(int n, int potenza)
{   
    int risultato=1;
    while(potenza>0)
    {
    
        risultato=risultato*n;
        potenza=potenza-1;
            }
            if(potenza<0)
            {
                printf("risultato non agibile\n");
                return 0;
            }
            
            return risultato;
}
    int main()
    {
        int n;
        int potenza;
        printf("inserire un numero da elevare alla potenza\n");
        scanf("%d",&n);
        printf("inserire una potenza\n");
        scanf("%d",&potenza);
        printf("finale %d\n",ft_ft(n,potenza));
        return 0;
}
