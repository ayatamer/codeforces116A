#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, min=0, num=0, i=0;
    scanf("%d", &n);
    int pass[n][2];
    for(i=0; i<n; i++)
    {
        scanf("%d %d", &pass[i][0], &pass[i][1] );
    }
    for(i=0; i<n; i++)
    {
        num=num-pass[i][0]+pass[i][1];
        if(num>min)
            min=num;
    }
    printf("%d", min);
    return 0;
}
