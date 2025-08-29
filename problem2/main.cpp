//
//  main.cpp
//  problem2
//
//  Created by Xojiakbar No�Monjonov on 29/08/25.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxVal=arr[0];
    for(int i=1; i<n; i++){
        if (arr[i]>maxVal){
            maxVal=arr[i];
        }
    }
    cout<<"The biggest element: "<<maxVal<<endl;
    return 0;
}
