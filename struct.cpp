#include <cstdio>

struct averageAge
{
    int young, old;
};

int main()
{
    averageAge a,b;

    a.young =18;
    a.old= 39;
    b.young= 15;
    b.old = 56;

    printf("The young a is : %d and the old a is %d\n", a, a.old);
    printf("THe old a is : %d\n", a.old); 

}