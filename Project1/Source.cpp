#include<iostream>
#include<Windows.h>
using namespace std;

void main() {
    setlocale(LC_ALL, "Russian");
	
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, color);
		for (int i = 0; i < side / 2 + 1; i++)
		{
			for (int j = 0; j < side; j++)
			{
				if ((j == (side / 2) - i) || (j == (side / 2) + i) || i == side / 2)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
}