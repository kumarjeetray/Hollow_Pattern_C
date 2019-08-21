#include<stdio.h>
void main()
{
    int h,x=1;
    printf("Enter the height of triangle");
    scanf("%d",&h);
    for(int i=1;i<=h;i++)
    {
        for(int k=h;k>i;k--)
        {
            printf(" ");
        }
        for(int j=1;j<=x;j+=2)
        {
            if(j==x ||j==1||i==h)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
            
        }
        x+=2;
        printf("\n");
    }
}
