/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int anno;
    printf("in che anno sei nato\n");
    scanf("%d",&anno);
    
    if (anno==1969)
    {
    printf("utente nato nell'anno in cui l'uomo è andato sulla Luna\n");
    }
    else if(anno<1969)
    {
    printf("utente nato prima dell'anno in cui l'uomo è andato sulla Luna di %d anni\n",1969-anno);
    }
    else
    {
    printf("utente nato dopo l'anno in cui l'uomo è andato sulla Luna di %d anni\n", anno-1969);
    }
return 0;
}
