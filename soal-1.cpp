#include<cstdio>

int main(){
    
    float height;
   

    printf("Enter the height:");
    scanf("%f",&height);

    while (height>=0.5)
    {
        height/=2;
        printf("The result is :%g\n",height);
    }
    
}