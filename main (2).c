/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float Celsius;
    float Fahrenheit;
    float Kelvin;
    printf("inserisci la temperatura in Celsius\n");
    scanf("%f",&Celsius);
    
    if (Celsius<-273.15)
    {
 printf("errore\n");  
    }
else
{
    Fahrenheit=(9/5)*Celsius + 32;
    Kelvin=Celsius + 273,15;
    printf("la temperatura in Kelvin è %f\n",Kelvin);
    printf("la temperatura in Fahrenheit è %f\n", Fahrenheit);
}
    return 0;
}

