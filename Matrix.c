#include <stdio.h>
#include <stdlib.h>

# define num 100

int main(void)

{

int k=0,j=0;
int arr [num];  // first arr with elements
int temp_arr[num];// second arr with transpose 




for(int l=0; l<num; l++) // initializing Arrays
{
    temp_arr[l] = -100;
    scanf("%d",&arr[l]);
}

int counter = 1;
for(int p = 0; p< num; p++)  // for printing 10x10
{

    printf("%d\t", arr[p]);
    if(counter % 10 ==0)
     printf("\n");
     
     counter ++;
}

printf("\n");



/*

Run a loop in the old array and make every row,
 columns of the new array

*/

for( int i =0; i< num; i++) 

{

    if((i%10 == 0) && (i !=0))   // to avoid 0 mod 10
    {

        k =0;
        j++;
    }


    
    temp_arr[k+j] = arr[i];
    k = k +10;
   
}


printf("\n");

counter = 1;

for(int p = 0; p< num; p++)   // printing the array
{

    printf("%d\t", temp_arr[p]);
    if(counter % 10 == 0)
     printf("\n");
     
     counter ++;
}
printf("\n");

    return 0;
}