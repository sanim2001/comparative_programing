#include<stdio.h>
int a,b,c,i,j,k,m,p,q,r;
void show()
{
    for(k=0;k<c;k++)
    {
        printf("---|");
    }
}

void board()
{
    m=1;
    int m1 =c;
    int m2 =0;
    for(i=b;i>=1;i--)
    {
        printf("|");
        int xx =c-m1;
        while(xx>=0){
            printf("   | ");
            xx--;
        }
        for(j=m;j<=m1;j++)
        {
            printf(" %d |",j);
        }
        printf("\n");
        m1--;
        printf("|");
        show();
        printf("\n");
    }
}

int main()
{
    printf("Enter the number of instruction:");
    scanf("%d",&a);
    printf("\n");
    printf("Enter the number for stages:");
    scanf("%d",&b);
    printf("\n");
    if((b>=2)&&(b<=4))
    {
        c=a+(b-1);
    }
    else
    {
        printf("Error");
    }
    printf("Number of clock cycle for %d stages pipelining:%d",b,c);
    printf("\n");
    board();
    return 0;
}
