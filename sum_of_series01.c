#include<stdio.h>

int main()
{

    int i=1, n = 10,sum=0;


    while(i<=n)
    {

        sum = sum + i;
        //printf("sum = %d\n",sum);


        if(i==n)
        {

            printf("%d = ",i);
            i++;

        }
        else
        {
            printf("%d + ",i);
            i++;
        }


    }

    printf("%d\n",sum);

    return 0;
}


