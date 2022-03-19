#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void quickSort(int *array, int left, int right) {
	int pivot, l_hold = left, r_hold = right;
	pivot = array[left];
	while (left < right) {
		while ((array[right] >= pivot) && (left < right)) {
			right--;
		}
		if (left != right) {
			array[left] = array[right];
			left++;
		}
		while ((array[left] <= pivot) && (left < right)) {
			left++;
		}
		if (left != right) {
			array[right] = array[left];
			right--;
		}
	}
	array[left] = pivot;
	pivot = left;
	left = l_hold;
	right = r_hold;
	if (left < pivot) {
		quickSort(array, left, pivot - 1);
	}
	if (right > pivot) {
		quickSort(array, pivot + 1, right);
	}
}

int main() {
	int number, firstWeight = 0, secondWeight = 0, counter = 0;
	cout << "Input number of array elements: ";
	cin >> number;
	int *array = new int[number];
	int *firstPile = new int[number];
	int *secondPile = new int[number];
	srand(time(NULL));
	
	for(int i = 0; i < number; i++){
		array[i] = rand() % 51;
	}
	
	quickSort(array, 0, number - 1);
	
	firstPile[0] = array[number - 1];
	firstWeight += array[number - 1];
	
	for (int i = 0, j = 0, k = 1; i < number - 1; i++) {
		if (firstWeight > secondWeight) {
			secondPile[j++] = array[i];
			secondWeight += array[i];
			counter++;
		}
		else {
			firstPile[k++] = array[i];
			firstWeight += array[i];
		}
	}
	
	cout << "\nFirst pile = ";
	for (int i = 0; i < number - counter; i++) {
		cout << firstPile[i] << " ";
	}
	cout << "\nFirst pile weight = " << firstWeight << endl;
	
	cout << "Second pile = ";
	for (int i = 0; i < counter; i++) {
		cout << secondPile[i] << " ";
	}
	cout << "\nSecond pile weight = " << secondWeight << endl;
	
	if(!(secondWeight * 2 >= firstWeight && secondWeight <= firstWeight * 2)){
		cout << "Weights are different more than 2 times";
	}

	return 0;
}