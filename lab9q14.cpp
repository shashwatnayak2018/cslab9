//[STRING] Create a string and store your name in it. Use a loop to print string character by character using the normal index method as well as the pointer method. 
//library
#include<iostream>
//namespace
using namespace std;
//write the main function
int main()
{
	//storing name in a string
	char myname[] = "Shashwat";
	//print using normal index method
	int i;//declaring variable
	//for loop
	for(i=0;i<8;i++)
	{
		cout<<myname[i];
	}
	//print using ponter method
	char *chrptr = myname;
	cout<<endl;
	while(*chrptr!=0)//while loop
	{	
		cout<<*chrptr;
		chrptr++;
	}
	return 0;
}
