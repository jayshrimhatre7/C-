#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	cout<<"*** Program to check whether the given number is even or odd***\n\n";
	int n;
	cout<<"Enter the number to be checked: ";
	cin>>n;
	if(n%2==0)
	{
		cout<<n<<" is even number.";
	}
	else
	{
		cout<<n<<" is odd number.";
	}
	getch();
}