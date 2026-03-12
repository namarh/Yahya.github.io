
#include <iostream>
#include<string>
using namespace std;
int ReadPositiveNumber(string messag) {

	int Number = 0;
	do
	{
		cout << messag << endl;
		cin >> Number;
	} while (Number<=0);
	return Number;
}
int Multible(int Number) {
	return Number * Number;
}
int main()
{
	int x = ReadPositiveNumber("Enter Positive Number");
	
	cout << "Number * Number = "<< Multible(x) << endl;
	return 0;
}


