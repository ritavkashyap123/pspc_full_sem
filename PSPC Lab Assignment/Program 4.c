/* Program No: 4
   Aim: Use Dynamic Memory Allocation to create a 1D array and take input of numbers and use a function to  perform binary search
   Name: Ritav Kashyap
   ASTU Roll No: 200610003078 */
   
#include<stdio.h> 
#include<stdlib.h> 
#include<math.h> 
 
int main() 
{ 
    int *p,n,i,k; 
    int binarysr(int *p,int n); 

    printf(" Name: Ritav Kashyap\n"); 
    printf(" College Roll No: 20/237\n"); 
    printf(" ASTU Roll No: 200610003078\n\n");  

    printf("\n Enter the number of elemnts of the array: "); 
    scanf("%d",&n); p=(int*)malloc(n*sizeof(int)); 
    printf("\n Enter the array: "); 
 
    for(i=0;i<n;i++) 
    { 
        scanf("%d",(p+i)); 
    } 
 
    int min,j,pos,temp; 
    for(i=0;i<n-1;i++) 
	{ 
        min=i; 
        for(j=i+1;j<n;j++) 
        { 
            if(p[j]<p[min]) 
            { 
                min=j; 
            }  
        } 
        temp=p[i]; 
        p[i]=p[min]; 
        p[min]=temp; 
    }  

    printf(" The array after sorting: "); 
    for(i=0;i<n;i++) 
    { 
        printf("%5d",p[i]); 
    } 
    binarysr(p,n); 
    return 0; 
} 
int binarysr(int *p,int n) 
{ 
    int k,beg=0,mid,end; 
    printf("\n Enter the element to be found: "); 
    scanf("%d",&k); 
    end=n-1; 
    while(beg<=end) 
    { 
        mid=(end + beg)/2; 
        if(p[mid]==k) 
        { 
            printf("\n The element is found."); 
            exit(0); 
        } 
        else if(p[mid]>k) 
        { 
            end=mid-1; 
        } 
        else beg=mid+1; 
    } 
    printf("\n The element is not found."); 
} 

