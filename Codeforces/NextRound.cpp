#include <iostream>
using namespace std;

int main(){

    int n, k;
    int contestants=0;
    cin>>n;
    cin>>k;

    int score[n];

    for(int i=0; i<n; i++){
        cin>>score[i];
    }

    for(int j=0; j<n; j++){
        if(score[j]>=score[k-1] && score[j]>0){
            contestants++;
        }

        else {
            continue;
        }
    }

    cout<<contestants;

    return 0;
}