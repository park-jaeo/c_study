#include <stdio.h>
#include <stdlib.h>

int main()
{
    int * darr = (int *)malloc(sizeof(int)*5);
    int val = 0 ,hap = 0;
    int i,icnt=0;
    
    for(i=0 ; i <5 ; i++)
    {
        scanf("%d", &darr[i]);
        hap += darr[i];
        if(darr[i] == -1){
            printf("%d\n",hap);
            return 0;
            }
    }
    while(1)
    {
        darr = (int *)realloc(darr, sizeof(int)*(5+i+icnt));
        for(i=0 ; i < 3 ; i++)
        {
            scanf("%d", &darr[5+i+icnt]);
            if(darr[5+i+icnt] == -1){
                printf("%d\n",hap);
                return 0;
                }
            
            hap += darr[5+i+icnt];
        }
        icnt+=3;
    }

    
    return 0;

}