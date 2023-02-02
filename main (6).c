/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void carattere (char lettera)
{
    //invece di int metti char
    printf("%c",lettera);
  
}

int main()
{ 
  char l;
  printf("inserire una lettera\n");
  scanf("%c",&l);
  carattere(l);

    return 0;
}
