/* Write a program to declare two variables a,b and a pointer variable p (all integer type). Try to understand pointers while doing this.
Point p to a. And store the value pointed by p in b. Print the values of a, b and *p.
Assign values a=2 and b = 3. Print the values of a, b and *p.
Now point p to b. Print the values of a, b and *p.*/
///library
#include<iostream>
//namespace
using namespace std;
//write the main function 
int main()
{
	//declare variables
	int a;
	int b;
	int *p;
	//point p to a
	p = &a;
	//store the value pointed by p in b
	b = *p;
	//print values of  a,b,*p
	cout<<"The value of a is "<<a<<endl;
	cout<<"The value of b is "<<b<<endl;
	cout<<"The value of *p is "<<*p<<endl;
	//assign values a=2 and b=3
	a = 2;
	b = 3;
	//print values of  a,b,*p
	cout<<"The value of a is "<<a<<endl;
	cout<<"The value of b is "<<b<<endl;
	cout<<"The value of *p is "<<*p<<endl;
	//point p to b
	p = &b;
	//print values of  a,b,*p
	cout<<"The value of a is "<<a<<endl;
	cout<<"The value of b is "<<b<<endl;
	cout<<"The value of *p is "<<*p<<endl;
	return 0;
}
