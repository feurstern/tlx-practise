#include<cstdio>

int sumOfDigit(int n){
    int numDigit = 0;
    while (n>0)
    {
        n/=10;
        numDigit++;
    }
    return numDigit;
    

}

int main(){
    int n;
    scanf("%d",&n);
    
    int numDigit = sumOfDigit(n);
  
    switch (numDigit)
    {
    case 1:
    printf("satuan");
        break;
    
    case 2:
    printf("puluhan");

    break;
    
    case 3:
    printf("ratusan");
    
    break;

    case 4:
    printf("ribuan");
    break;

    default:
    printf("puluhribuan");
        break;
    }
}