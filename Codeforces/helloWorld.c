#include <stdio.h>

int main(){
    int a;
    int b;

    printf("Enter two num: ");
    scanf("%d %d", &a, &b);

    if(b<a){
        printf("%d", a);
    }

    else if(b>a){
        printf("%d", b);
    }

    else {
        printf("Both are same!");
    }

    return 0;
}


