#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int n, i, x, s, y;
	int num[100];
	
	cout << "Array size:";
	cin >> s;	
	cout << "Integers:";
	
	for (i = 0; i < s; i++)
	{
		cin >> num[i];
	}
	
	cout << "Your data:" << endl;
	for (i = 0; i < s; i++)
	{
		cout << num[i] << endl;
	}
	
	
	for (i = 0; i < s; i++)
	{
		for(n = i + 1; n < s; n++)
		{
			if(num[i] > num[n])
			{
				y = num[i];
				num[i] = num[n];
				num[n] = y;
			}
		}
	}
	
	cout << "After Using Selection Sorting ..." << endl;
	cout << "Sorted Data:";
	
	for(i = 0; i < s; i++)
	{
		cout << num[i] << ' ';
	}
	
	
	
	
	_getch();
	return 0;
}
