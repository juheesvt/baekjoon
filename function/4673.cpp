//
// Created by juheeSVT on 2019-08-13.
//
#include <iostream>
using namespace std;

int main() {

    int selfNumber[10000] = {0,};
    int targetNumber, currentNumber;

    for (int i = 1; i <= 10000; i++) {

        targetNumber = 0;
        currentNumber = i;

        bool isOver = false;
        if (currentNumber / 10 != 0) {
            while (currentNumber / 10 != 0) {
                targetNumber += currentNumber % 10;
                currentNumber /= 10;
                if (targetNumber > 10000) {
                    isOver = true;
                    break;
                }
            }
            if (!isOver) {
                targetNumber += currentNumber + i;
            }
        }
        else {
            targetNumber += 2*i;
        }
        if (!isOver) {
            if (selfNumber[targetNumber - 1] != 1) {
                selfNumber[targetNumber - 1] = 1;
            }
        }
    }
/*
    for(int i = 0; i<10000; i++){
        if( selfNumber[i] == 1)
            cout << i+1 <<endl;
    }
    */
}
