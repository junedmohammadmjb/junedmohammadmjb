#include <stdio.h>
#include <string.h>

void parser(char * strin)
{
    int is = 0; //variable to track whether we are inside the tag
    int index = 0;
    for (int i = 0; i < strlen(strin); i++)
    {
        if (strin[i] == '<')
        {
            is = 0;
            continue;
        }
        else if (strin[i] == '>')
        {
            is = 1;
            continue;
        }
        if (is == 1)
        {
            strin[index] = strin[i];
            index++;
        }
    }
    strin[index] = '\0';
    // remove the trailing spaces
    while (strin[0]==' ')
    { //shifting the string to the left
       for (int i = 0; i < strlen(strin); i++)
       {
          strin[i] = strin[i+1];
       }
       
    }
    while (strin[strlen(strin)-1] == ' ')
    {
         strin[strlen(strin)-1] = '\0';
    }
    
    
}
int main()
{
    char string[]="<f1>         this is juned        </f1>";
    parser(string);
    printf(" aapki chotu parser string ye he ~~%s~~", string);
    return 0;
}