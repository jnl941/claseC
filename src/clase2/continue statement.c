#include <stdio.h>

int main()
{
    //Continue Statement
    for(int i=0;i<=10;i++)
    {
        if(i==2)
        {
            continue;
        }
        printf("%d ",i);
    }
    return 0;
}
