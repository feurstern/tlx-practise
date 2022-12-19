#include<cstdio>
#include<curses.h>

#include<bits/stdc++.h>

int main(){
    int a, b, c;
    int erase(void);
    int werase(WINDOW*win);
    int clear(void);
    int weclear(WINDOW*win);

    printf("lease enter the value of a \n");  scanf("%d \n", &a);
  
    printf("Please enter the value of b: %d\n");scanf("%d \n", &b);
    
    c = a*b;
    
    printf("The result of %d * %d = %d",a,b,c);

}