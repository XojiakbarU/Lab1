//
//  main.cpp
//  Lab1
//
//  Created by Xojiakbar No�Monjonov on 29/08/25.
//

#include <iostream>
using namespace std;

int main(){
    int number;
    cin>>number;
    int sum = 0;
    int r;
    while (number>0) {
        r=number%10;
        number=number/10;
        sum+=r;
    }
    cout<<sum<<endl;
}
