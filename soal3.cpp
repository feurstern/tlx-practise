#include<cstdio>

   
int main(){
    int value1, value2, row;
    scanf("%d %d %d", &value1, &value2,&row);
    
    for (int i=1;i<=row;i++){
        i = i* (value1+value2);
        printf("%d, ", i);
    }
}