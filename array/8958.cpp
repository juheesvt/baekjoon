//
// Created by juheeSVT on 2019-08-12.
//

#include <iostream>
#include <string>
using namespace std;


int main(){

    int n, sum, weight;
    cin >> n;

    for (int i =0; i<n; i++){
        string ox;
        cin >> ox;

        sum = 0;
        weight = 0;
        if( ox.at(0) == 'O' )
            sum = 1;
        else
            sum = 0;

        for ( int j =1 ; j<ox.size(); j++){
            //X일때 체크하기 !
            if( ox.at(i-1) != 'X')
                weight ++;
            else
                weight = 0;

            if( ox.at(i) == 'O')
                sum+=weight+1;

        }
        cout<< sum << endl;
    }


}

