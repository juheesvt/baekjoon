//
// Created by juheeSVT on 2019-08-12.
//
#include <iostream>
#include <vector>
using namespace std;

long long sum(std::vector<int> &a);

long long sum(std::vector<int> &a){
    long long sumation = 0;
    for (int i =0; i<a.size(); i++){
        sumation+= a.at(i);
    }
    return sumation;
}