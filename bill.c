#include<stdio.h>
int main()
{
    int start, end;
    printf("Enter Initial and Final meter readings :");
    scanf("%d%d",&start,&end);
    int c = end - start;
    float d=c;
    if(d<100) d=d*1.5;
    if(d>100 && d<200) d=d*2.5;
    if(d>100 && d<500) d=d*3.5;
    printf("Total consumed units is %d so bill id %.2f",c,d);
    return 0;

}
