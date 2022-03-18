#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,sum=0;
    float perc;
    printf("Applicable for total marks = 100 \n");
    printf("Total number of subjects: ");
    scanf("%d",&num);
    int marks[num];
    for (i=0;i<num;i++)
    {
    	printf("Enter the marks of the subject %d: ", i+1);
        scanf("%d",&marks[i]);
        sum += marks[i];
    }
    perc = sum/i;
    printf("\n The percentage of marks obtained is: %f",perc);
    return 0;
}
