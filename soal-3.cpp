#include<cstdio>

int main (){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);

    if(x>y && x>z){
        printf("The highest value is %d",x);
    }
    else if(y>x && y>z){
        printf("The highest value is %d", y);
    }
    else{
        printf("The highest value is %d", z);
    }
}