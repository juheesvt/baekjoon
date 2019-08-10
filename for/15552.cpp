//
// Created by juheeSVT on 2019-08-05.
//

#include <iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int t;
    int a,b;

    cin >> t;
    for ( int i = 0; i< t; i ++) {
        cin >> a >> b;
        cout << sum(a, b) << "\n";
    }

    return 0;
}