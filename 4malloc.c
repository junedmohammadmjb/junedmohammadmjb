#include <stdio.h>
#include <stdlib.h>
//  use of malloc 
// int main()
// {
//     int *pou;
//     int j;
//     printf(" kitne size ka array chahiye aapko\n");
//     scanf("%d", &j);
//     pou = (int *)malloc(j * sizeof(int));
//     for (int i = 0; i < j; i++)
//     {
//         printf(" jo us value ko %d jo is array ki he\n" , i);
//         scanf("%d", &pou[i]);
//     }
//      for (int i = 0; i < j; i++)
//      {
//          printf("aapki value %d array pr he %d\n", i, pou[i]);
//      }

    //  use of calloc 
int main()
{
    int *pou;
    int j;
    printf(" kitne size ka array chahiye aapko\n");
    scanf("%d", &j);
    pou = (int *)calloc(j , sizeof(int));
    for (int i = 0; i < j; i++)
    {
        printf(" dijiye us value ko %d jo is array ki he\n" , i);
        scanf("%d", &pou[i]);
    }
     for (int i = 0; i < j; i++)
     {
         printf("aapki value %d array pr he %d\n", i, pou[i]);
     }
 
//  use of realloc




    printf(" kitne size ka new array chahiye aapko\n");
    scanf("%d", &j);
    pou = (int *)realloc(pou, j*sizeof(int));
    for (int i = 0; i < j; i++)
    {
        printf(" dijiye us value ko %d jo is array ki he\n" , i);
        scanf("%d", &pou[i]);
    }
     for (int i = 0; i < j; i++)
     {
         printf("aapki value new %d array pr he %d\n", i, pou[i]);
     }
     free(pou);
    return 0;
}