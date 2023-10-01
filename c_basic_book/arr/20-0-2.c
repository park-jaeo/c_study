#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,j;
    int count = 0;
    int arr[3];
    int sel[3];
    srand(time(NULL));
    for(i=0 ; i < 3 ; i++)
    {
        arr[i] = rand()%10;
    }

    for(i=0 ; i < 3 ; i++)
        while(arr[i] == arr[i+1])
            srand(time(NULL));
            arr[i+1] = rand()%10;
    
    
    

    printf("Start Game!\n");


    while(1)
    {
        printf("3 개의 숫자 선택 : ");
        scanf("%d %d %d" ,&sel[0], &sel[1], &sel[2]);
        int strike =0, ball =0;
        for(i=0 ; i < 3 ; i++)
        {
            if(arr[i] == sel[i])
                strike++;
        }

        for(i=0 ; i < 3 ; i++)
        {
            for(j=0 ; j < 3 ; j++)
            {
                if(arr[i] != sel[i] && arr[i] == sel[j])
                    ball++;
            }    
        }
        count++;
        printf("%d 번째 도전 결과 : %d strike, %d ball!\n", count, strike, ball);
        if(strike == 3)
            break;
    }

    printf("Game Over!\n");
    return 0;
}