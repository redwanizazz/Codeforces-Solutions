#include <iostream>
using namespace std;

int main (){

    int i, j, oneI, oneJ, x=0;

    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            cin>>x;
            
            if(x==1){
                oneI = i;
                oneJ = j;
            }
        }
    }

    cout<< abs(oneI-3) + abs(oneJ-3)<<endl;                

    return 0;
}