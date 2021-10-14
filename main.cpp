#include <iostream>

using namespace std;

//declare functions
void printHello();			//returns nothing
void printNumber(int a);	//returns nothing
int square(int sqr);
int giveMe10();
int addThese(int num1, int num2);

int main()
{
	int num1 = 120;
	int num2 = 580;
	int sqr = 9;

	printHello();
	printNumber(100);
	square(sqr);

	int someData = giveMe10();
	cout << someData << endl;
	int totalValue = addThese(num1, num2);
	cout << totalValue << endl;
	cout <<"The square function returned: " <<sqr<< " squared " <<"which is: " << square(sqr) << endl;

	printNumber(addThese(num1, 50));


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

int square(int sqr)
{
	int result2 = sqr * sqr;
	return result2;
}