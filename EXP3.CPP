#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();

	cout<<"***Program to swap two numbers***\n\n";
	int n1,n2,temp;
	cout<<"Enter two numbers that are to be swapped: ";
	cin>>n1>>n2;
	temp=n1;
	n1=n2;
	n2=temp;
	cout<<"The numbers after swapping are : \n";
	cout<<n1<<" "<<n2;
	getch();
}