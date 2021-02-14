#include<stdio.h>
//#include<stdlib.h>
struct employee
{
   char name[20];
   char experience[50];
   float salary[6];
   int employeeid[10];
};
int main()
{
	struct employee arr[5];
	int i=0;
    while(i<5)
    {
    	printf("Enter Name of Employee %d\n",i+1);
    	scanf("%s",arr[i].name);
    	printf("Enter ID of Empoyee %d\n",i+1);
    	scanf("%d",&arr[i].employeeid);
    	printf("Enter Experience of Employee %d\n",i+1);
    	scanf("%s",&arr[i].experience);
    	printf("Enter Salary of Employee %d\n",i+1);
    	scanf("%f",&arr[i].salary);	
    	i++;
    	printf("\n");
	}
	printf("\n\nDetails of 5 employees :\n\n");
    i=0;
	while(i<5)
	{
		printf("Employee %d\n",i+1);
		printf("Employee Name : %s\n",arr[i].name);
		printf("Employee ID : %d\n",arr[i].employeeid);
		printf("Employee Experience : %s\n",arr[i].experience);
		printf("Employee Salary : %f\n",arr[i].salary);
	i++;	
	printf("\n");
	}
	return 0;
}
