#include<stdio.h>
#include<stdlib.h>

typedef struct student{
	
	char name[10];
	float cgpa;
	char branch[10];
				
}student;
int count();
student * input_student_detail(int);
void print(student *,int);

int main(){
    student *s;
	
	int n;
	n=count();
	s=input_student_detail(n);
	print(s,n);
	

	return 0;
}
int count()
{
    int n;
	printf("Enter student count:");
	scanf("%d",&n);
	return n;
}
student * input_student_detail(int n){

	int i;
	student *s;
	s=(student *)malloc(sizeof(student)*n);
	
	for(i=0;i<n;i++){
		printf("Enter the name,branch,cgpa of student %d: \n",i+1);
		scanf("%s %s %f",(s+i)->name,(s+i)->branch,&(s+i)->cgpa);
	}
	return s;
	
}

void print(student *s,int n){

	int i;
	printf("Details of student are: \n");
	for(i=0;i<n;i++)
		printf(" student %d: name:%s\t branch:%s\t cgpa:%f\n",i+1,(s+i)->name,(s+i)->branch,(s+i)->cgpa);
	
}