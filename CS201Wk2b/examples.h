#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;


//ARRAY - EXAMPLE 1
void example1();
//PRE: none
//POST: none

//ARRAY - EXAMPLE 2
void example2(double arr1[], int ARRAY_SIZE);
//PRE: none
//POST: none

//ARRAY - EXAMPLE 3
void example3(int arr1[], int ARRAY_SIZE);
//PRE: none
//POST: none
bool inputArray(int arr1[], int size);
//PRE: arr1 is not initialized
//POST: array returns with input values

//ARRAY - EXAMPLE 4
void example4(int arr1[], int ARRAY_SIZE);
//PRE: none
//POST: none
void swapPos(int arr1[], int size);
//PRE: arr1 is initialized
//POST: array values in first and last position are swapped

//ARRAY - EXAMPLE 5
void example5();
//PRE: none
//POST: none

//VECTOR - PRINT
void printVector(vector<int> ages);
//PRE: none
//POST: prints the vector sent

//VECTOR - EXAMPLE 1
void example1(vector<int> ages);
//PRE: none
//POST: will load & print the vector 

//VECTOR - EXAMPLE 2
void example2(vector<int> ages);
//PRE: none
//POST: will print the vector, manipulate some of the values, and reprint the vector

//VECTOR - EXAMPLE 3
void example3(vector<vector<int>>& v1, int& row, int& col);
//PRE: none
//POST: will load & print the vector 
