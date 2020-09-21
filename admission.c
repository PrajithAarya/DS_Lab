#include<stdio.h>
#include<conio.h>
 struct student{
   int id;
   int age;
   float  marks;
   };
int main(){
	int i,n;
	printf("enter the number of students to be stored:\n");
	scanf("%d",&n);
	struct student std[n];
	
	printf("please enter the student details : \n");
	for(i=0;i<n;i++){
		printf("Student  %d :\n",i+1);
		printf("enter student id:\n");
		scanf("%d",&std[i].id);
		
		printf("enter student age:\n");
		scanf("%d",&std[i].age);
		if (std[i].age<20){
			printf("pls enter a valid age(>20),else the student is not eligble : \n");
			scanf("%d",&std[i].age);}
			
		
		printf("enter student marks:\n");
		scanf("%f",&std[i].marks);
		if(std[i].marks <0 || std[i].marks>100){
			printf("pls enter valid marks between 0 to 100 (inclusive),else the student is not eligble:\n");
		scanf("%f",&std[i].marks);}
		
		}
		printf("\n");
		printf("the students qualified for admissions are : \n");
		for(i=0;i<n;i++){
			if (std[i].marks>=65 &&std[i].age>20){
				 printf("student id : %d\n",std[i].id);
				 printf("student age : %d\n",std[i].age);
				 printf("student marks : %f\n",std[i].marks);
				 printf("*******************************\n");
				 
				}
			else{
				printf(" The Student with id : %d has not qualified because he/she has failed to maintain the cutoff for marks(>65) and age(>20) ...",std[i].id);
				}	
			
			}
	   
	
	
	}
