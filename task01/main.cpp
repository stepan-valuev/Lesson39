#include "util.h"
#include "sort.h"
#include <ctime>

#define SIZE 10


int main() {
	//srand(time(NULL));
	/*int array[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};*/
	//int array[]{10, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	int array[SIZE];

	//init(array, SIZE, -20, 20);

	cout << "Before array: " << convert(array, SIZE) << endl;

	//bubble_sort(array, SIZE);
	selected_sort(array, SIZE);

	cout << "After array: " << convert(array, SIZE) << endl;


	return 0;
}