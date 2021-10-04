/* Program No: 2
   Aim: Use Dynamic Memory Allocation to create a 1D array and take input of numbers and use a function to  perform selection sort.
   Name: Ritav Kashyap
   ASTU Roll No: 200610003078 */
   
#include <stdio.h>
#include <stdlib.h>
 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int *arr, int n)
{
    int i, j, min_idx;
    for (i=0; i<n-1; i++)
	{
        min_idx= i;
        for (j= i+1; j<n; j++)
        {
        	if (arr[j] < arr[min_idx])
        	{
        		 min_idx = j;
			}
		}    
        swap(&arr[min_idx], &arr[i]);
    }
}

int main()
{
    int *arr;
    int lim,i;
    
    printf(" Name: Ritav Kashyap\n");
    printf(" College Roll No: 20/237\n");
    printf(" ASTU Roll No: 200610003078\n\n");
    
    printf("Enter total number of elements: ");
    scanf("%d",&lim);
    arr=(int*)malloc(lim*sizeof(int));

    printf("Enter %d elements--\n",lim);
    for(i=0; i<lim; i++)
	{
        printf("Enter element %d: ",i+1);
        scanf("%d",(arr+i));
    }
    
    selectionSort(arr,lim);
    printf("Sorted elements are:");
    for(i=0; i<lim; i++)
    {
    	printf("%8d",*(arr+i));
	}
    free(arr);
    return 0;    
}
