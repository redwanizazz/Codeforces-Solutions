#include <iostream>
using namespace std;

int main(){

    int w;
    cin>>w;

    for(int i=1; i<=w; i++){
        if(w%2==0 && w>2){
            cout<<"YES"<<endl;
            break;
        }

        else{
            cout<<"NO"<<endl;
            break;
        }
    }

    return 0;
}