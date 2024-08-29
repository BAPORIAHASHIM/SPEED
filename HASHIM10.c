#include<stdio.h>
int main()
{
    int A,B,C;
    printf("enter the value of A :- ");
    scanf("%d",&A);
    printf("enter the value of B :- ");
    scanf("%d",&B);
    printf("enter the value of C :- ");
    scanf("%d",&C);

    if(A>=B)
    {
        if(A>=C)
        {
            printf("A is Max");
        }
        else
        {
            printf("C is Max");
        }
    }
    else
    {
        if(B>=C)
    {
printf("B is Max");
    }
    else
{
    printf("C is Max");
}
}
}



