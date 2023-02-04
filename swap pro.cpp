#include<stdio.h>

main(){
	int a;
	int b;
	
	printf("enter the no a:",a);
	scanf("%d",&a);
	
	printf("enter the no b:",b);
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;

printf("after swap a:%d\n",a);
printf("after swap b:%d",b);


}
