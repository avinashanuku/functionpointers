#include<stdio.h>
int (*p)(int);    //declaring a function pointer 
int double_num(int);
int callback(int ,int (*p)(int)); //declaring a callback function  
void main()
{
	int a[5],i; // declaration of array of integers
	printf("enter integer elements:\n");
	for(i=0;i<5;i++)
		scanf("%d",a+i);   //scanning the elements
	for(i=0;i<5;i++)
		a[i]=callback(a[i],double_num); //calling the callback function
	printf("after doubling\n");
	for(i=0;i<5;i++)
		printf("%d ",a[i]); // printinf the elements.
	printf("\n");


}
int double_num(int num) //doubling the number function
{
	return num*2;   //doubling the number
}
int callback(int num,int (*p)(int))
{
	return p(num); //invoking the function with help of function pointer
}
