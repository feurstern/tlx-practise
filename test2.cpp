#include<cstdio>

int main(){
    int n, x;
    printf("Enter the value of n:");scanf("%d",&n);

    for(int i=0;i<=n;i++){
        x=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                x+=1;
            }
        }
        if(x==2){
            printf("%d, ",i);
        }
    }
}