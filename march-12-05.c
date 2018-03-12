#include<stdio.h>
int main()
{
    int x, y;

    printf("write the first integer : ");
    scanf("%d",&x);

    printf("write the second integer : ");
    scanf("%d",&y);

    if(x > y)
    {
        int temp;
        temp=x;
        x = y;
        y = temp;
    }

    if((y % x) == 0)
    {
        printf("Multiplied");
    }
    else
        {
            printf("Not Multiplied");

        }


    return 0;
}
