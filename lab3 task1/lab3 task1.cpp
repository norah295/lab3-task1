# include <iostream>
using namespace std;
int main()
{
	int temp;
	char unit;
	cout << "Please enter the temperature and measurement system (c or f): ";
	cin >> temp >> unit;
	if (unit == 'f' || unit == 'F') {
		temp = (temp - 32) / 9.0 * 5.0;
		cout << temp << " degrees Celsius\n";
	}
	else if (unit == 'c' || unit == 'C') {
		temp = 9.0 / 5.0 * temp + 32;
		cout << temp << " degrees Fahrenheit\n";
	}
	else
		cout << "Sorry that unit of measure isn't recognized.\n";
	return 0;
}
