/*
TITLE: Chapter 5 Exercise 11
FILE NAME: Chapter5Ex11DAngeloFrancis.cpp
PROGRAMMER: D'Angelo Francis
DATE: 10/9/2024
REQUIREMENTS: 

Write a program that will predict the size of a population of organisms.

The program should ask the user for the starting number of organisms,

their average daily population increase (as a percentage),

and the number of days they will multiply. A loop should display the size of the population for each day.

Input Validation: 

 - Do not accept a number less than 2 for the starting size of the population.

 - Do not accept a negative number for average daily population increase.

 - Do not accept a number less than 1 for the number of days they will multiply.
*/

#include <iostream>
using namespace std;

int main()
{
	int startingSize;
	int maxDays;
	int currentDay = 1;
	int populationSize = 0;
	double avgDailyIncrease;

	do
	{
		cout << "Enter the starting number of organisms: ";
		cin >> startingSize;

		if (startingSize < 2)
		{
			cout << "The starting number cannot be under 2." << endl << endl;
		}
	} while (startingSize < 2);

	do
	{
		cout << "Enter the averge daily population increase (as a percentage): ";
		cin >> avgDailyIncrease;

		if (avgDailyIncrease <= 0)
		{
			cout << "The average daily population increase percentage cannot be a negative number." << endl << endl;
		}
	} while (avgDailyIncrease <= 0);

	do
	{
		cout << "Enter the number of days you want to multiply: ";
		cin >> maxDays;

		if (maxDays < 1)
		{
			cout << "The number of days you can multiply cannot be under 1." << endl << endl;
		}
	} while (maxDays < 1);

	populationSize == startingSize;

	cout << "Day 1: " << populationSize;

	for (currentDay == 1; currentDay == maxDays; currentDay++)
	{
		populationSize* avgDailyIncrease;
		cout << "Day " << currentDay << ": " << populationSize;
	}
	return 0;
}