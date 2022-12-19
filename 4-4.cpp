#include<cstdio>

int main(){
    int n;
    scanf("%d", &n);

    if(n>=0  && n<=10){
        printf("satuan");
    }
    else if(n>10 && n<100){
        printf("puluhan");
    }
    else if (n>=100 && n<1000){
        printf("ratusan");
    }
    else if(n>=1000 && n<10000){
        printf("ribuan");
    }
    else if(n>10000){
        printf("puluhribuan");
    }
}