#include<stdio.h>
main(){
	int b;
	int hra ;
	int ta;
    int da;
	int gross;	
	
	printf("entersalary :");
	scanf("%d",&b);
	hra=hra/b*100;
	printf("enter hra:");
	scanf("%d",&hra);
	ta=ta/b*100;
	printf("enter ta:");
	scanf("%d",&ta);
	da=da/b*100;
	printf("enter da:");
	scanf("%d",&da);
	
	
	gross =b+hra+ta+da;
	
	printf("gross salary=%d\n",gross);
	
}

