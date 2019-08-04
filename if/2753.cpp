//
// Created by juheeSVT on 2019-08-04.
//

#include <iostream>
using namespace std;

int main(){

    int year;
    cin >> year;

    if ((year%4 == 0 && year%100 != 0) || year%400 ==0)
        cout << 1;
    else
        cout << 0;
}
