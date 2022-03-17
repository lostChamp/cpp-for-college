#include <iostream>
#include <cmath>

using namespace std;

double formula1(double x){
	return sin(x) * sin(2 * x) * sin(3 * x);
}

double formula2(double x){
	return 1 / (5 - (3 * cos(x)));
}

double leftRectangle(double a, double b, int count, double(*f)(double x)){
	double x = a, h = (b - a) / count, s = 0;
	for(int i = 1; i <= count; i++){
		s += f(x);
		x += h;
	}
	return h * s;
}

int main(){
	cout << "First integral => " << leftRectangle(0, M_PI / 2, 100, formula1) << endl;
	cout << "Second integral => " << leftRectangle(0, 1.5 * M_PI, 200, formula2) << endl;
	return 0;
}