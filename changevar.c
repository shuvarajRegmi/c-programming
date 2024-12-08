#include<stdio.h>
int main()
{
    int mynumber = 15;
    int myothernum = 23;
    // the value of mynumber of myothernum(23) to mynum
    mynumber= myothernum;
    // mynum is now 23, instead of 15
    printf("%d",mynumber);
    return 0;
}