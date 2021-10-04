/* Program No: 1
   Aim: Create a mathematical series and Write a recursive function to calculate the sum of the series.
   Name: Ritav Kashyap
   ASTU Roll No: 200610003078 */

#include <stdio.h>
#include <stdlib.h>

int addNumbers(int n);

int main() 
{
	printf(" Name: Ritav Kashyap\n");
	printf(" College Roll No: 20/237\n");
    printf(" ASTU Roll No: 200610003078\n\n");
    
    int num;
    printf(" Enter number of terms: ");
    scanf("%d", &num);
    printf(" Sum of the first %d natural number is = %d", num, addNumbers(num));
    return 0;
}

int addNumbers(int n) 
{
    if (n != 0)
        return n + addNumbers(n - 1);
    else
        return n;
}
