/* Program No: 5 
   Aim: Use File Handling mechanism and switch statement to write, append and display information about an employee in a company.
   Name: Ritav Kashyap
   ASTU Roll No: 200610003078*/

#include<stdio.h> 
#include<stdlib.h> 
#include<conio.h> 

struct employee 
{ 
    char Name[50]; 
    float Salary; 
    int Age; 
    int Id; 
}; 

struct employee E; 
long int size = sizeof(E); 
FILE *fp; 
 
void addrecord() 
{ 
    char ch = 'y'; 
    while (ch == 'y') 
    { 
        printf("Enter Name : "); 
        scanf("%s", E.Name); 
        printf("Enter Age : "); 
        scanf("%d", &E.Age); 
        printf("Enter Salary : "); 
        scanf("%f", &E.Salary); 
        printf("Enter EMP-ID : "); 
        scanf("%d", &E.Id); 
        fwrite(&E, size, 1, fp); 
        printf("Want to add another record (Y/N) : "); 
        fflush(stdin); 
        scanf("%c", &ch); 
    } 
} 

void displayrecord() 
{ 
    printf("\nNAME\t\tAGE\t\tSALARY\t\t\tEMPLOYEE ID\n", E.Name, E.Age, E.Salary, E.Id); 
    while (fread(&E, size, 1, fp) == 1) 
    printf("\n%s\t\t%d\t\t%.2f\t%10d", E.Name, E.Age, E.Salary, E.Id); 
    printf("\n\n\n\t"); 
} 

int main() 
{ 
    int opt; 
    printf(" Name: Ritav Kashyap\n"); 
    printf(" Class Roll No: 20/237\n"); 
    printf(" ASTU Roll No: 200610003078\n\n");
	 
    fp = fopen("data.txt", "a+b");  
	printf("1. ADD RECORDS\n"); 
    printf("2. DISPLAY RECORDS\n"); 
    printf("3. EXIT\n\n"); 
    printf(" Enter your choice : "); 
    scanf("%d",&opt); 
    
    switch(opt) 
    { 
        case 1: 
        addrecord(); 
        break; 
        
        case 2: 
        displayrecord(); 
        break;
		 
        case 3: 
        fclose(fp); 
        exit(0); 
        break;
		  
        default: 
        printf("invalid number"); 
        break;
    } 
    return 0; 
 }
