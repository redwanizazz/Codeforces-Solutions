#include <iostream>
using namespace std;

int main(){

    int n, steps;
    cin>>n;

    if(n%5==0){
        steps = n/5;
    }

    else if(!n%5==0 && n%5<5){
        steps = (n/5) + 1;
    }

    cout<<steps;

    return 0;
}