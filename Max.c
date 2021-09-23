#include <stdio.h>


int main(void)
{

    int number = 0, max =-1;// because all the numbers of the input are positive

    while(scanf("%d",&number)==1)
    {
        if(number > max)
            max = number;


    }

    printf("%d\n",max);



    return 0;
}