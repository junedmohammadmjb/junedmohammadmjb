#include <stdio.h>
#include <stdlib.h>

int ispalindrome(int num)
{

    int reversed = 0;
    int orignum = num;
    //reverse the number
    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    printf("the reversed number is babua %d\n", reversed);

    if (orignum== reversed)
    {
        return 1;
    }
    else    
        
      
    {
        return 0;
    }
}
int main()
{
    int number;
    printf("enter a number to check whether it is a palindrome or not\n");
    scanf("%d ", &number);

    //your task is to implement this function
    if (ispalindrome(number))
    {
        printf("this number is a palindrome \n");
    }
    else
    {
        printf("this is not a palindrome numnber babua \n");
    }

    return 0;
}