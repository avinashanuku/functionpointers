#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int sum(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int div1(int a,int b)
{
	return a/b;
}
	//int (*fp)(int,int);
enum fun_p{SUM,SUB,MUL,DIV,MAX}; //creating an enum for indexes
typedef int (*fp)(int,int); //creating a typedef name for an function pointer
void main(int argc,char **argv)
{
	int x,y,z;
	x=atoi(argv[2]); //    converting ascii to integer format.
	y=atoi(argv[3]);
	fp v[MAX]={sum,sub,mul,div1};   //declaring an array of function pointers
	int res;
	if(strcmp(argv[1],"sum")==0)     // if CLA passed is equals to 'sum' then true
	{
		z=SUM;     //assigning the index of sum function to variable Z
	}
	else if(strcmp(argv[1],"sub")==0)
	{
	        z=SUB;                       //            ""
	}
	else if(strcmp(argv[1],"mul")==0) 
	{
	       z=MUL;                        //            ""
	}
	else if(strcmp(argv[1],"div")==0)
	{
                 z=DIV;                     //             ""
	}
	res=(*v[z])(x,y);  // calling the function w.r.t to function pointer
	printf("the result is %d\n",res);       //printing the result
}
