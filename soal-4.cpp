#include<cstdio>
#include<iomanip>
#include<iostream>

using namespace std;

int main(){
    int n,x, z;
    float value;


    scanf("%d %f", &n, &value);
    value*=100;
    
    cout<<setw(n)<<setfill('0')<<value;




}