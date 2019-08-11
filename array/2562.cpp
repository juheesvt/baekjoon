//
// Created by juheeSVT on 2019-08-11.
//

#include <iostream>
using namespace std;

int main(){

    int array[9];
    for( int i = 0; i<9; i++){
        cin >> array[i];
    }

    int max = array[0];
    int idx = 0;

    for( int i=0 ; i<9; i++) {
        if (max < array[i]) {
            max = array[i];
            idx = i;
        }
    }

    cout << max << endl << idx+1;
}