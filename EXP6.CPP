#include<iostream.h>
#include<conio.h>

class helloworld
{
	public:
	void display()
	{
		cout<<"This is a class";
	}
};
void main()
{
	clrscr();
	helloworld obj;
	obj.display();
	getch();
}