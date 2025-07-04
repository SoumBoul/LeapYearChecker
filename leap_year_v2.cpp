#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<fstream>

using namespace std;

int ReadNumber(int number)
{
	cout << "Enter number:" << endl;
	cin >> number;
	 
	return number;
	
}

bool isAleapYaer(int number)
{

	return  number % 400 == 0 || number % 4 == 0 && number % 100 != 0? true:false ;
}

int main()
{
	int number = 0;
	number = ReadNumber(number);

	if (isAleapYaer(number))
	{
		cout << "this " << number << " is a	 leap year" << endl;
	}
	else 
		cout << "this " << number << " is not a leap year" << endl;

	return 0;
}
