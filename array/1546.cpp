//
// Created by juheeSVT on 2019-08-12.
//

#include <iostream>
using namespace std;

int main(){
    int numOfSubject;
    cin >> numOfSubject;

    float * scores = new float[numOfSubject];
    for ( int i = 0; i < numOfSubject; i++){
        cin >> scores[i];
    }

    float max = scores[0];

    for ( int i = 0; i < numOfSubject; i++){
        if(max < scores[i])
            max = scores[i];
    }

    for ( int i =0; i<numOfSubject; i++){
        scores[i] = scores[i]/max*100;
    }

    float sum=0;
    for ( int i =0; i<numOfSubject; i++){
        sum+= scores[i];
    }

    cout << sum/numOfSubject;
}