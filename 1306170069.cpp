// AYŞE ÖZGÜR	
// 01.12.2020
// Development Environment: Visual Studio2019

#include <iostream>
using namespace std;

void printMenu() {
	cout << "Enter Your Choice" << endl;
	cout << "1. Rectangle 1" << endl;
	cout << "2. Rectangle 2" << endl;
	cout << "3. Rectangle 3" << endl;
	cout << "4. Rectangle 4" << endl;
	cout << "5. Rhomb (Only Odd)" << endl;
	cout << "6. Circle" << endl;
	cout << "7. Close Application" << endl;
}
void rectangle1(int dimention) {

	for (int i = 0; i < dimention; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
void rectangle2(int dimention) {
	for (int i = 0; i < dimention; i++)
	{
		for (int j = 0; j < dimention-i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
void rectangle3(int dimention) {
	for (int i = 0; i < dimention; i++)
	{
		for (int j = 0; j < dimention - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
void rectangle4(int dimention) {
	for (int i = 0; i <= dimention / 2; i++)
	{
		for (int j = 0; j <= (dimention / 2) - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2 * i + 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
void rhomb(int dimention) {
	for (int i = 0; i <= dimention / 2; i++)
	{
		for (int j = 0; j <= (dimention / 2) - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2 * i + 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = (dimention / 2) + 1; i < dimention; i++)
	{
		for (int j = 0; j <= i - (dimention / 2); j++)
		{
			cout << " ";
		}
		for (int j = 0; j < dimention - 2 * (i - (dimention / 2)); j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void circle(int dimention) {
	dimention -= 1;
	float hypotenuse; 
	float r;
	if (dimention % 2 == 0) r = dimention / 2;
	else r = (dimention / 2) + 0.5;
	for (int i = 0; i <= dimention; i++)
	{
		for (int j = 0; j <= dimention; j++)
		{
			hypotenuse = sqrt((i - r) * (i - r) + (j - r) * (j - r));
			if (hypotenuse > r - 0.5 && hypotenuse < r + 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;

	}
}
int main()
{
	char lastScreen;
	int choice;
	int dimention;

	while (true)
	{
		system("cls");
		printMenu();
		cin >> choice;
		if (choice == 7) {
			break;
		}
		cout << "enter dimention : "<<endl;
		cin >> dimention;
		if (choice == 1)
		{
			rectangle1(dimention);
		}
		else if (choice == 2)
		{
			rectangle2(dimention);
		}

		else if (choice == 3)
		{
			rectangle3(dimention);
		}

		else if (choice == 4)
		{
			rectangle4(dimention);
		}

		else if (choice == 5)
		{
			rhomb(dimention);
		}
		
		else if (choice == 6)
		{
			circle(dimention);			
		}
		cout << "enter any character to clean the screen" << endl;
		cin >> lastScreen;
	}
	return 0;
}
