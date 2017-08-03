#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
int main()
{
    char line[100];
    scanf("%s",line);
    int i=0;
    while(line[i]!='\0')
    {
        if(islower(line[i]))
        {
            line[i]=toupper(line[i]);
        }
        else
            line[i]=tolower(line[i]);
        i++;
    }

    printf("%s",line);
    return 0;
}

