//Create an array of size 10. Use a loop to print array using the normal index method as well as the pointer method. 
//library
#include<iostream>
//namespace
using namespace std;
//write the main function
int main()
{
	//declaring variables
	int arr[10];
	int i;
	//ask for the values of the array
	for(i=0;i<10;i++)
	{
		cout<<"Enter the value of an element "<<endl;
		cin>>arr[i];
	}
	//print values using normal index method
	for(i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
	//print values using pointer method
	for(i=0;i<10;i++)
	{
		cout<<endl;
		int *p;
		*p=arr[i];
		cout<<*p<<endl;
	}
	return 0;
}
