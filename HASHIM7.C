#include<stdio.h>
int main()
{
    int first,second,third;
    printf("enter number 1 :- ");
    scanf("%d",&first);
    printf("enter number 2 :- ");
scanf("%d",&second);
printf("enter number 3 :-");
scanf("%d",&third);

if(first<=second)
{
    if(first<=third)
    {
        printf("first number is minium");
    }
    else
    {
        printf("third number is minimum");
    }
}
else
{
    if(second<=third)
    {
        printf("third number is minimum");
    }
    else
    {
        printf("third number is minimum");
    }
}
}