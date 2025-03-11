#include <iostream>
using namespace std;

int main(){

    int l, b;
    int years=0;
    cin>>l;
    cin>>b;

    while(b>=l){
        l = l*3;
        b = b*2;
        years++;
    }

    cout<<years;

    return 0;
}