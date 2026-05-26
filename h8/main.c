/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,sum=1;
    printf("enter the Number:");
    scanf("%d",&n);
    if(n==0 ||n==1){
        printf("%d",n);
    }
    else{
        for(int i=1;i<=n;i++){
            sum=sum*i;
        }
    }
    printf("Factorial is %d",sum);
    return 0;
}
