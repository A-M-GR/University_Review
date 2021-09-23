#include <stdio.h>
#include <stdlib.h>


int main(int argc,char * argv[])
{

    int N = atoi(argv[1]);
    int arr[N];
    int counter = 0;
    int temp = 0;
    
    for(int i =0; i<N; i++)
    {

        scanf("%d",&arr[i]);
    }

    while(counter < N-1)

    {

        for( int j =0; j< N-1; j++)

        {

            if(arr[j]>arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;


            }
        }

     counter++;

    }




    for(int i =0; i<N; i++)
    {

        printf("%d\n",arr[i]);
    }


    return 0;
}