//
// Created by juheeSVT on 2019-08-04.
//

#include <iostream>
using namespace std;

int main(){
    int hour, min;
    cin >> hour >> min;

    if(min - 45 < 0){
        hour-=1;
        min = 60 - (45 - min);
    }
    else{
        min -= 45;
    }

    if (hour < 0)
        hour += 24;

    cout << hour << " " << min;
}