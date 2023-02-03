/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void ft_ft(int*array,int dimensione)
{
    int t=0;   
    int temp;
    int z;
    
    temp=0;
    t=0;
    z=1;
    
    while(t<dimensione-1)
    {
        z=t+1;
        while(z<dimensione)
        {
          if(array[t]>array[z])
        {
        temp=array[t];
        array[t]=array[z];
        array[z]=temp;
            
        }
        z=z+1;

        }
        t=t+1; 
     } 
     
}
int main()
{
    int array[]={5,3,8,1};
    int dimensione;
    int t;
    dimensione=4;
    ft_ft(array,dimensione);
    while(t<dimensione)
    {
            printf("%d\n",array[t]);
            t=t+1;
    }


    return 0;
}
