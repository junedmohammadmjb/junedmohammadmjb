#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generaterandomnumber(int n)
{
    srand(time(NULL)); // srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}
int greater(char char1, char char2)
{
    //fpr rack paper scissor return 1 if c1>c2 and 0 otherwise , if c1==c2 it will return -1
    if (char1 == char2)
    {
        return -1;
    }
    else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 1;
    }
   

    else if ((char1 == 'p') && (char2 == 'r')) 
    {
        return 1;
    }
    else if ((char2 == 'p') && (char1 == 'r'))
    {
        return 1;
    }
   
    else if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char2 == 's') && (char1 == 'p'))
    {
        return 1;
    }
  
}

int main()
{
    int playerscore = 0, compscore = 0, temp;
    char playerchar, compchar;
    char yoyo[] = {'r', 'p', 's'};
    printf(" aapka hrdik swaagat he rock paper scissor ke game me%d\n");

    for (int i = 0; i < 3; i++)
    { //takes player 1 input
        printf("player 1's turn : \n");
        printf("choose 1 for rock , 2 for paper and 3 for scissor\n");
        scanf("%d", &temp);
        getchar;
        playerchar = yoyo[temp - 1];
        printf("you choose %c\n\n", playerchar );
        // generate computer input
        printf("computer's turn : \n");
        printf("choose 1 for rock , 2 for paper and 3 for scissor\n");
       
        temp = generaterandomnumber(3) + 1;
        compchar = yoyo[temp - 1];
        printf("computer  choose %c\n\n",compchar );

        if (greater(compchar, playerchar) == 1)
        {
            compscore += 1;
            printf("computer got it \n\n"  );
        }
        else if (greater(compchar, playerchar) == -1)
        {
            compscore == 0;
            playerscore == 0;
            printf("its a draw \n\n"  );
        }
        else
        {
            playerscore += 1;
            printf("you got it\n \n");
        }
        printf("you: %d\n computer: %d\n",playerscore , compscore );
    }

    if (playerscore>compscore)
    {
        printf("you win \n");
    }
    else if(playerscore<compscore)
    {
        printf("computer win the game \n");
    }
    else
    {
        printf("its a draw \n" );
    }
    
    
    return 0;
}