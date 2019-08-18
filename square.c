/* It accept the side of the square from the user and prints the hollow square#include<stdio.h>
void main()
{
    int s;
    printf("Enter the side of square");
    scanf("%d",&s);
    for(int i=1;i<=s;i++)
    {
        for(int j=1;j<=s;j++)
        {
            if(i==1||j==s||i==s||j==1)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
            
        }
        printf("\n");

    }
}
