#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b, c;

    cin>> a; 
    cin>> b; 
    cin>> c; 

    int array[7];

    array[0] = (a+b+c);
    array[1] = (a*b*c);
    array[2] = ((a+b)*c);
    array[3] = ((a*b)+c);
    array[4] = (a*(b+c));
    array[5] = (a+(b*c));

    int result = 0;

    for(int i = 0; i<6; i++){
        if(array[i]>result){
            result = array[i];
        }
    }

    cout<<result<<endl;

    return 0;
}