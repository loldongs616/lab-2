/*Conor James Snedeker
Lab 2
The purpose of this program is to create a system for predicting population increases in biology.
C++ Programming
Professor Tolappa*/
#include <iostream>
#include <iomanip>
using namespace std; //container for preprocessor directives


int main()
{
	float  growth, days, count;
	float population = 0, startPop;
	do //Validation loop for startPop > 2
	{
		cout << "Enter starting population: ";
		cin >> startPop;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(100, '\n');
			cout << "Entry must be a number!" << endl;
		}
		else if (startPop <= 2)
			cout << "Population must start at value greater than 2." << endl;
	} while (startPop <= 2);
	/*
		Code the data validation loop to ensure that startPop is a number
		greater than 2
	*/
	do
	{
		cout << "Enter daily growth % (.1 must be entered as 10. No decimals!) \nthat is greater than 0: ";
		cin >> growth;
		if (cin.fail())//Loops that validates growth rate entry.
		{
			cin.clear();
			cin.ignore(100, '\n');
			cout << "Entry must be a number!" << endl;
		}
		else if (growth <= 0)
			cout << "Entry must be greater than 0!" << endl;
	} while (growth <= 0 || cin.fail());

	cout << "Enter number of days to calculate: ";
	cin >> days;
	if (cin.fail())//Loop that validates day data entry.
	{
		cin.clear();
		cin.ignore(100, '\n');
	}
	while (days < 1)
	{
		cout << "Invalid! Must be a number greater than 1.";
		cout << "\nEnter number of days to calculate: ";
		cin >> days;
	}

	cout << "-----------------------------------------------------------"
		<< endl << endl;


	cout << "Start Population: " << startPop << endl
		<< "Daily Percent Growth: " << growth << "%" << endl
		<< "Number of Days: " << days << endl << endl;


	cout << "Day" << '\t' << "Population" << '\t' << "Population" << endl
		<< '\t' << "at day start" << '\t' << "at day end" << endl
		<< "------------------------------------------------------" << endl;

	for (count = 1; count < (days + 1); count++)//Code for calculating start and end population of each day. Also output code.
	{
		cout << (int)count << '\t' << setprecision(2) << fixed << startPop + (growth * .01 * startPop * (count - 1))
			<< '\t' << startPop + (growth * .01 * startPop * count) << endl;
		/*
					Write down code to compute and print out start population and end population
					for the day
		*/
	}

	system("pause");
    return 0;
}

