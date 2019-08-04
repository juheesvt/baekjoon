//
// Created by juheeSVT on 2019-08-04.
//

#include <iostream>
using namespace std;

int main(){

    int a, b;

    cin >> a >> b;

    if (a > b)
        cout << ">";
    else if(a < b)
        cout << "<";
    else
        cout << "==";
}