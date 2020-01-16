#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ROWS = 4;
const int COLS = 5;

void fillArray(int[], int);
void printArray(int[], int);

int main() {
	int oneD[COLS];
	
	srand(time(0));
	
	fillArray(oneD, COLS);
	printArray(oneD, COLS);
	return 0;
}

void fillArray(int arr[], int size) {
	int i = 0;
	
	do {
		// do-while loops test boolean condition (BC)
		// after executing body of loop first time
		// not the best fit for this task
		// because what if i >= 0 initially?
		// e.g. what if size is 0?
		arr[i] = rand() % 100 + 1;
		i++;
	} while (i < size);
}

void printArray(int arr[], int size) {
	int i;
	
	for (i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
