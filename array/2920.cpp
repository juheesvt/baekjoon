//
// Created by juheeSVT on 2019-08-11.
//

#include <iostream>
using namespace std;

int main(){

    int arr[8];
    for ( int i =0; i<8; i++){
        cin >> arr[i];
    }

    int i =1;
    if(arr[0]==1){
        while(true){
            if ( arr[i] == i + 1){
                if(i == 7){
                    cout << "ascending";
                    break;
                }
                i++;

            }
            else {
                cout << "mixed";
                break;
            }
        }
    }
    else if( arr[0] == 8){
        while(true){
            if ( arr[i] == 7 - i + 1){
                if(i == 7){
                    cout << "descending";
                    break;
                }
                i++;

            }
            else {
                cout << "mixed";
                break;
            }
        }
    }
    else{
        cout << "mixed";
    }


}

