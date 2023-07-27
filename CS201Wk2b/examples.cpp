#include "examples.h"


//ARRAY -EXAMPLE 1
void example1() {
	//EXAMPLE 1
	int dailySalesA[7];
	int dailySalesB[7] = { 0, 500, 200, 300, 800, 1000, 0 };

	for (int i = 0; i < 7; i++)
		cout << dailySalesA[i] << " ";

	cout << endl;
	dailySalesB[0] = 50;
	dailySalesB[1] = 100;
	for (int i = 0; i < 7; i++)
		cout << dailySalesB[i] << " ";
	cout << endl << endl;
}


//ARRAY -EXAMPLE 2
void example2(double speeds[], int ARRAY_SIZE) {
	//EXAMPLE 2

	cout << "Enter the 3 values" << endl;
	cin >> speeds[0] >> speeds[1] >> speeds[2];

	cout << endl << "The values are " << endl;
	cout << speeds[0] << endl;
	cout << speeds[1] << endl;
	cout << speeds[2] << endl;
	cout << speeds[3] << endl;

}

//EXAMPLE 3 - HELPER FUNCTION
bool isNumeric(string value) {
	for (char c : value) {
		if (c >= '0' && c <= '9')
			continue;
		else
			return false;
	}
	return true;
}


//ARRAY -EXAMPLE 3
bool inputArray(int arr1[], int size) {
	string value;
	int temp;
	cout << "Enter " << size << " integer values: ";

	for (int i = 0; i < size; i++) {
		cin >> value;
		if (isNumeric(value)) {
			temp = stoi(value);
			arr1[i] = temp;
		}
		else {
			return false;
			cout << "Ending loop - an invalid value was entered\n";
		}
	}
	return true;
}

void example3(int numArray[], int ARRAY_SIZE) {
	if (inputArray(numArray, ARRAY_SIZE)) {
		for (int i = 0; i < ARRAY_SIZE; i++)
			cout << numArray[i] << " ";
		cout << endl;

		//ADD LOGIC TO FIND THE AVERAGE OF THE numArray
	}
	cout << endl << endl;
}

//ARRAY -EXAMPLE 4
void swapPos(int arr1[], int size) {
	int temp;
	temp = arr1[0];
	arr1[0] = arr1[size - 1];
	arr1[size - 1] = temp;
}

void example4(int numArray[], int ARRAY_SIZE) {
	//Using numArray, swap the first and last values
	swapPos(numArray, ARRAY_SIZE);
	for (int i = 0; i < ARRAY_SIZE; i++)
		cout << numArray[i] << " ";

	cout << endl << endl;
}

//ARRAY - EXAMPLE 5
void example5() {
	const int ROW = 2, COL = 4;
	int a[ROW][COL];
	cout << "Fill two Dimension array:\n";
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COL; j++)
			cin >> a[i][j];

	cout << "Output 2D array: \n";
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

// 
//VECTOR - PRINT FUNCTION
//
void printVector(vector<int> ages) {
	cout << "The ages entered were" << endl;

	for (auto i : ages)
		cout << i << endl;
}

void printVector(vector<vector<int>> v1, int r, int c) {
	cout << "The values entered were" << endl;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++)
			cout << v1.at(i).at(j) << " ";
		cout << endl;
	}
}


//VECTOR - EXAMPLE 1
void example1(vector<int> ages) {
	int age, number = 1;

	cout << "Enter an age for person # " << number++ << " : ";
	cin >> age;
	while (age > 0) {
		ages.push_back(age);
		cout << "Enter an age for person # " << number++ << " : ";
		cin >> age;
	}
	printVector(ages);

}

//VECTOR - EXAMPLE 2
void example2(vector<int> ages) {

	printVector(ages);

	ages.assign(5, 99);
	ages.insert(ages.begin()+2, 77);

	//add two additional vector functions here:


	printVector(ages);

}

//VECTOR - EXAMPLE 3
void example3(vector<vector<int>> &v1, int &row, int &col) {

	cout << "Enter number of rows followed by the number of columns: ";
	cin >> row >> col;

	//LOAD TABLE
	vector<int> temp;
	int tempNumb;
	cout << "Enter " << row * col << " values: ";
	for (int i = 0; i < row; i++) {
		temp.clear();
		for (int j = 0; j < col; j++) {
			cin >> tempNumb;
			temp.push_back(tempNumb);
		}
		v1.push_back(temp);
	}

	printVector(v1, row, col);

}
