#include <iostream>

using namespace std;

int main(){
    int number, middleIndex, mirrorIndex;
    bool temp = true;
    cin >> number;

    if(number <= 1 || number > 100){
        cout << "Wrong size\n";
		return 0;
    }

	if(number % 2 == 0){
		middleIndex = number / 2;
	}else{
		middleIndex = number / 2 + 1;
	}

    int* vector = new int[number];

    for(int i = 0; i < number; i++){
        cin >> vector[i];
        if(i >= middleIndex && temp){
            mirrorIndex = number - 1 - i;
            if(vector[i] != vector[mirrorIndex]){
                temp = false;
            }
        }
    }

    if(temp){
        cout << "It is a palindrome";
    } else {
        cout << "It is not a palindrome";
    }

    return 0;
}