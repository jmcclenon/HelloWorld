//JohnMytemplate01
//McClenon, John M.
// 10/30/2016.

#include<iostream>
using namespace std;

//Definition of the class Hello2016.
class Hello2016
{
public:
	void imprime() 
	{
		cout << "\n\n\n\aWelcome to C++ 2016! \n\n";
		cout << "\t\t\aHello, This is my first program.\n\n\n";

    }
    
	void imprime2() 
	{ 
		cout << "\t\t\aThere's more where this come from...\n\n";
		cout << "\t\t\aStick around to see even more, Thanks!\n\n";
		
	} 
};


//For printing a message trough the screen.
int main()
{
	Hello2016 hello;

	hello.imprime();

	hello.imprime2();

	system("pause");

	return 0;
}
