#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double vector[] = { 1., 2., 3., 4., 5. };
	int n = sizeof(vector) / sizeof(vector[0]);
	double arithmeticMean = 0;
	double harmonicMean = 0;
	double geometricMean = 0;
	double rootMeanSquare = 0;
	double temp = 0;
//arithmetic mean
	for(int i = 0; i < n; i++){
		arithmeticMean += vector[i] / n;
	}
//harmonic mean
	for(int i = 0; i < n; i++){
		temp += 1 / vector[i];
	}
	harmonicMean = n / temp;
//geometric mean
	temp = 1;
	for(int i = 0; i < n; i++){
		temp *= vector[i];
	}
	geometricMean = pow(temp, 1.0 / n);
//rootMeanSquare
	for(int i = 0; i < n; i++){
		rootMeanSquare += pow(vector[i], 2) / n;
	}
	rootMeanSquare = sqrt(rootMeanSquare);

	cout << "Arithmetic  Mean  =  " << arithmeticMean << endl;
	cout << "Harmonic  Mean     =  " << harmonicMean  << endl;
	cout << "Geometric  Mean   =  " << geometricMean  << endl;
	cout << "RootMean  Square  =  " << rootMeanSquare << endl;
	cout << endl;
	
	return 0;
}