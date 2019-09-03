//
// Created by juheeSVT on 2019-08-14.
//

#include <iostream>
using namespace std;

int isSeauence(int n){
    // 세자리 정수일때만 호출되는 함수
    int a = n / 100;
    int b = (n % 100) / 10;
    int c = n % 10;

    if ( a-b == b-c)
        return 1;
    else
        return 0;
}

int main(){

    int n;
    cin >> n;
    // n 이 110 이하면 무조건 99개
    if( n < 110){
        if( n > 99)
            cout << 99;
        else
            cout << n;
        return 0;
    }
    else if(n ==110){
        cout << 99;
        return 0;
    }
    else if ( n == 111){
        cout << 100;
        return 0;
    }
    else if( n == 1000){
        cout << 144;
        return 0;
    }


    int cnt = 0;
    for( int i =112; i<=n; i++){
        if(isSeauence(i))
            cnt++;
    }
    cnt += 100;
    cout << cnt;

}

