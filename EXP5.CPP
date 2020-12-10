#include<iostream.h>
#include<conio.h>
 void main()
 {
	clrscr();
	int a,b,c;
	cout<<"Enter the three numbers: \n";
	cin>>a>>b>>c;
	if(a==b && a==c)
	{
		cout<<"All are equal";
	}
	else
	{

	if(a>b && a>c )
	{
		cout<<a<<" is the largest";
	}
	else
	{
		if(b>c)
		{
			cout<<b<<" is the largest";

		}
		else
		{
			cout<<c<<" is the largest";

		}

	}
	}

	getch();
 }