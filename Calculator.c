#include<stdio.h>
void main(){
	int n1,n2,res;
	printf("Hello \n");
	printf("Welcome To The DIVINE CALCULATOR \n ");
	printf("This Is For Addition \n");
	printf("Enter Number 1: \n ");
	scanf("%d",&n1);
	printf("Enter Number 2: \n ");
	scanf("%d",&n2);
	res=n1+n2;
	printf("The Sum Is %d \n ",res);
	sub();
	div();
	mul();
}
sub(){
	int s1,s2,sub;
	printf("This Is For Subtraction \n ");
	printf("Enter Number 1: \n ");
	scanf("%d",&s1);
	printf("Enter Number 2: \n ");
	scanf("%d",&s2);
	sub=s1-s2;
	printf("The Subtraction Is %d \n ",sub);
}
mul(){
	{
	int m1,m2,mul;
	printf("This Is For Multiplication\n");
	printf("Enter Number 1:");
	scanf("%d",&m1);
	printf("Enter Number 2:");
	scanf("%d",&m2);
	mul= m1*m2;
	printf("The Product Is %d \n ",mul);
}
div();{
	int d1,d2,div;
	printf("This Is For Division \n ");
	printf("Enter Number 1: ");
	scanf("%d",&d1);
	printf("Enter Number 2: ");
	scanf("%d",&d2);
	div = d1/d2;
	printf("The Result Is: %d \n ",div);
}
}
