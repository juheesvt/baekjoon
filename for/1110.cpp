//
// Created by juheeSVT on 2019-08-10.
//

#include <iostream>
using namespace std;

int main(){

    int num,aNum,bNum,aPlusB;
    int result;
    int cnt=0;
    cin >> num;

    int initialNum = num;

    while(true){
        cnt++;

        if (num < 10) {
            aNum = 0;
            bNum = num;
        }
        else{
            aNum = num/10;
            bNum = num%10;
        }
        aPlusB = aNum + bNum;
        result = bNum*10 + (aPlusB<10 ? aPlusB : aPlusB%10);

        if(result == initialNum){
            cout << cnt;
            break;
        }
        num = result;

    }
}