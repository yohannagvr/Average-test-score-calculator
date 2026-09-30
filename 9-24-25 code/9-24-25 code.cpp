// 9-24-25 code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{

	double first;
	double second;
	double third;
	double fourth;
	double fifth;

	cout << "Please enter the first test score: ";
	cin >> first;
	cout << "Please enter the second test score: ";
	cin >> second;
	cout << "Please enter the third test score: ";
	cin >> third;
	cout << "Please enter the fourth test score: ";
	cin >> fourth;
	cout << "Please enter the fifth test score: ";
	cin >> fifth;

	double Averagescore = ((first + second + third + fourth + fifth) / 5);
	cout << "The average test score is " << setprecision(1) << fixed << Averagescore;
	
	
	return 0; 
}

