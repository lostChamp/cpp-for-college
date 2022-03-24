#include <iostream>

using namespace std;

int main(){
	int numberOfYear, fetus, sprout, seed, plants = 0, minus = 1, firstMinus = 0, secondMinus = 0, thirdMinus = 0;
	cin >> numberOfYear;
	
	if(numberOfYear <= 0){
		cout << "Wrong number";
	}else{	
		for (int i = 1; i <= numberOfYear; i++) {
			if(i <= 4) {
			    plants = 1;
			    sprout = 1;
			    fetus = 1;
			} else {
			    seed = sprout;
			    sprout = plants;
			    plants += fetus;
			    fetus = seed;
				if(i > 22){
					thirdMinus = secondMinus;
			        secondMinus = firstMinus;
			        firstMinus = minus;
			        minus += thirdMinus;
			        plants -= minus;
				}else if(i >= 21){
					plants--;
				}
			}
		}
		cout << plants << endl;
	}
	
	return 0;
}