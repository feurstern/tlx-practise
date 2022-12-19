#include<cstdio>

int main(){
    int n;
    printf("Enter the value of n:");scanf("%d", &n);

    if(n%2==1){
        printf("Lampu mati");
    }
    else{
        printf("Lampu nyala");
    }
}