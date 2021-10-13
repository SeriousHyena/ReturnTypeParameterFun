#include <iostream>

using namespace std;

//declare functions
void printHello();			//returns nothing
void printNumber(int a);	//returns nothing
int giveMe10();
int addThese(int num1, int num2);

int main()
{
	int num1 = 120;
	int num2 = 580;

	printHello();
	printNumber(100);

	int someData = giveMe10();
	cout << someData << endl;
	int totalValue = addThese(num1, num2);
	cout << totalValue << endl;

	return 0;
}

void printHello()
{
	cout << "Hello!" << endl;
}

void printNumber(int a)
{
	cout << "The number is: " << a << endl;
}

int giveMe10()
{
	int returnedItem = 10;
	return returnedItem;
}

int addThese(int num1, int num2)
{
	int result = num1 + num2;
	return result;
}