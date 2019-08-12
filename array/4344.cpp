//
// Created by juheeSVT on 2019-08-12.
//

#include <iostream>
using namespace std;

int main(){

    int testCase;
    cin >> testCase;

    int numOfStudent;
    for(int i =0; i< testCase; i++){
        cin >> numOfStudent;

        //학생들 점수 입력받기
        double * score = new double[numOfStudent];
        double sum = 0;
        double cnt = 0;
        for ( int j = 0; j< numOfStudent; j++) {
            cin >> score[j];
            sum += score[j];
        }

        double average = sum / numOfStudent;

        for ( int j = 0; j< numOfStudent; j++) {
            if(score[j] > average)
                cnt++;
        }
        printf("%.3f", cnt/numOfStudent*100);
        cout<< "%"<<endl;


    }
}