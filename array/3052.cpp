//
// Created by juheeSVT on 2019-08-12.
//
#include <iostream>
using namespace std;

int main(){

    int arr[10];
    int remain[42] = {0,};
    int cnt = 0;

    for ( int i =0 ; i < 10; i++){
        cin >> arr[i];
    }

    for ( int i = 0; i < 10; i++){
        remain[arr[i]%42 ]++;
    }
    for ( int i = 0; i < 42; i++){
        if ( remain[i] >=1 )
            cnt ++;
    }

    cout << cnt;

}

