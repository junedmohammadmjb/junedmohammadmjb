
#include <stdio.h>

int fib_recursive(int n)
{
    if (n==1 || n==2)
    {
        return n-1;
    }
    else
    {
        return fib_recursive(n-1) + fib_recursive(n-2);
    }
    
    return 0;
}
//  fib =fibonacci series 

int fib_iterative(int n)
{
    int a=0 , b=1;
    
    for (int i = 0; i < n-1; i++)
    {
        b= a+b; //1st itration
        a= b-a; //2nd iteration

    }
    
 return a;
    
}
int main()
{  int  number;
    printf("enter the index to get fibonacci serires babuaa\n");
    scanf("%d" , &number);
    printf("the value of fibonacci series number at position no %d using iterative approach is %d\n" , number,fib_iterative(number));
   printf("the value of fibonacci series number at position no %d using recursive approach is %d\n" , number,fib_recursive(number));
    return 0;
}