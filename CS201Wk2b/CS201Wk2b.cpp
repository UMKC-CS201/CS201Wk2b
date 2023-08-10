// CS201Wk2b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "examples.h"

int main()
{
	//
	//ARRAY EXAMPLES
	//
	const int ARRAY_SIZE = 3;
	int numArray[ARRAY_SIZE];
	double speeds[ARRAY_SIZE];

	example1();
	//example2(speeds, ARRAY_SIZE);
	//example3(numArray, ARRAY_SIZE);
	//example4(numArray, ARRAY_SIZE);
	//example5();

	//
	//VECTOR EXAMPLES
	//

	int row, col;
	vector<int> ages;
	vector<vector<int>> values;

	//example1(ages);
	//printVector(ages);
	//example2(ages);
	//example3(values, row, col);

	int myInt;
	int* myTip;
	int myVar;
	int* myBill = &myInt;

	myInt = 10;
	myTip = &myInt;
	myVar = *myBill;
	myVar += *myTip + 10.5;

	cout << myVar << endl;

}