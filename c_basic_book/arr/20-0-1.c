#include <stdio.h>

int rotate(int (*ptr) [4])
{
    int i,j;
    int temp[4][4];

    for(i=0 ; i < 4 ; i++)
        for(j=0 ;j < 4 ; j++)
            temp[i][j] = ptr[3-j][i];

    for(i=0 ; i < 4 ; i++)
    {
        for(j=0 ;j < 4 ; j++)
        {
            ptr [i][j] = temp[i][j];
            printf("%2d ", ptr[i][j]);
        }
    printf("\n");
    }
}

int main()
{
    int arr[4][4];
    int i,j,k;
    for(i=0 ; i < 4 ; i++)
        for(j=0 ; j < 4 ; j++)
            arr[i][j] = 1+ i*4 + j;

    for(i=0 ; i < 4 ; i++)
    {
        for(j=0 ; j < 4 ; j++)
            printf("%2d " , arr[i][j]);
        printf("\n");
    }
    printf("\n");

    int (*ptr) [4] = arr;
    
    for(k=0 ; k < 3 ; k++)
    {
        rotate(ptr);
        printf("\n");
    }    
}
