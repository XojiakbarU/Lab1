//
//  main.cpp
//  problem3
//
//  Created by Xojiakbar No�Monjonov on 29/08/25.
//

#include <iostream>
using namespace std;
bool isPrime(int x){
    if (x<2) return false;
    for(int i=2; i<x; i++){
        if(x%i == 0){
            return false;
        }
    }
    return true;
    
}

int main(){
    int n;
    cin>>n;
    
    for(int i=2; i<=n; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
    cout<<endl;
    
    return 0;
}
