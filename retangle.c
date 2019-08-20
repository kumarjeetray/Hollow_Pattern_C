/* It prints the hollow #include<stdio.h>
void main()
{
    int s,l;
    printf("Enter length of the rectangle");
    scanf("%d",&l);
    printf("\nEnter the side of rectangle");
    scanf("%d",&s);
    for(int i=1;i<=s;i++)
    {
        for(int j=1;j<=l;j++)
        {
            if(i==1 || j==1 || i==s || j==l)
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
