#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
#include<fstream>



using namespace std;




void CkekIsALeapYearOrNot()
{

	int number;

	cout << "Enter number:" << endl;
	cin >> number;

	if (number % 400 == 0)
	{
		cout << " this number is a leap a year " << endl;

	}

	 else if ((number%4)== 0  && (number %100)!= 0)
	
	 {
		 cout << " this number is a leap a year " << endl;
		 
	 }

	
	
	else

	{
		cout << " this number is not a leap a year " << endl;
	}


}



int main()
{

	CkekIsALeapYearOrNot();

	return 0;
}