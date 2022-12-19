#include<cstdio>

void UserGreeting(){
    printf("Welcome to my program");
}

int main(){
    UserGreeting();
    int x,y,z;
    printf("Please enter the first number:");scanf("%d",&x);
    printf("Please enter the second value:");scanf("%d", &y);
    z= x*y;
    if(z%2==0){
        printf("The result is %d and odd", z);

    }
    else{
         printf("The result is %d and even", z);
    }

}