//
// Created by juheeSVT on 2019-08-11.
//

#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int * array = new int[n];

    for (int i = 0; i < n; i++)
        cin >> array[i];

    int min = array[0];
    int max = array[0];
    for( int i = 0; i< n; i++) {
        if (min > array[i])
            min = array[i];
        if( max < array[i])
            max = array[i];
    }

    cout << min << " " << max ;


}