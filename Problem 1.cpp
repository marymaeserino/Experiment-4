#include <iostream>
#include <cmath>
#include <conio.h>
#include <stdlib.h>


using namespace std;

int sum()
{
	int n1, n2;
	float result;
	char e, y;
	
	cout << "First integer:"; cin >> n1;
	cout << "Second integer:"; cin >> n2;
    
	result = (n1 + n2);
	cout << "Result value:" << ' ' << result << endl;
    
}

int subtract()
{
	int n1, n2;
	float result;
	char e, y;
	
	cout << "First integer:"; cin >> n1;
	cout << "Second integer:"; cin >> n2;
	result = (n1 - n2);
	cout << "Result value:" << ' ' << result << endl;
}

int multiply()
{
	int n1, n2;
	float result;
	char e, y;
	
	cout << "First integer:"; cin >> n1;
	cout << "Second integer:"; cin >> n2;
	result = (n1 * n2);
	cout << "Result value:" << ' ' << result << endl;
}

int divide()
{
	int n1, n2;
	float result;
	char e, y;
	
	cout << "First integer:"; cin >> n1;
	cout << "Second integer:"; cin >> n2;
	result = (n1 / n2);
	cout << "Result value:" << ' ' << result << endl;
}

int mod()
{
	int n1, n2;
	float result;
	char e, y;
	
	cout << "First integer:"; cin >> n1;
	cout << "Second integer:"; cin >> n2;
	result = (n1 % n2);
	cout << "Result value:" << ' ' << result << endl;
}




int main()
{
	int n1, n2;
	float result;
	char e, y, operation, decision;
	
	do
	{
		             
		cout << "Program Calculator" << endl;
		cout << "Menu:" << endl;
		cout << "1. Add" << endl;
		cout << "2. Subtract" << endl;
		cout << "3. Multiply" << endl;
		cout << "4. Divide" << endl;
		cout << "5. Modulus" << endl;
		cout << "y - Continue" << endl;
		cout << "e - Exit" << endl;
		
		cout << "Select operation:"; cin >> operation;
	
		switch (operation)
		{
			case '1':
				sum();
				cout << "Do you want to continue?:"; cin >> decision;
				break;
				
			case '2':
				subtract();
				cout << "Do you want to continue?:"; cin >> decision;
				break;
				
			case '3':
				multiply();
				cout << "Do you want to continue?:"; cin >> decision;
				break;
				
			case '4':
				divide();
				cout << "Do you want to continue?:"; cin >> decision;
				break;
				
			case '5':
				mod();
				cout << "Do you want to continue?:"; cin >> decision;
				break;
				
			case 'e':
				exit(0);
				break;
				
			default:
			cout << "You entered an invalid input!" << endl;
			
		
			
		}
	}
	
	while (decision != 'e');
	
	
	
	
	
	_getch();
	return 0;
	
}
