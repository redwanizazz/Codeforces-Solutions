#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int k, n, w;
    cin>>k;
    cin>>n;
    cin>>w;

    int borrow = 0;
    int cost = 0;

    cost = (k * w * (w+1)/2);

    if(cost>n){
        borrow = cost - n;
    }

    else {
        borrow = 0;
    }

    cout<<borrow;

    return 0;
}