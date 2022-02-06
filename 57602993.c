#include<stdio.h>
int main()
{
    int Testcases;
    scanf("%d\n",&Testcases); //number of testcases
    
    while(Testcases--)
    {
        float A,B,C,P,Q,R;  //declaration of variables
        scanf("%f %f %f %f %f %f",&A,&B,&C,&P,&Q,&R);
        fflush(stdin);
        
        float TotalV = (P+Q+R) / 2;
        
        if( P+B+C > TotalV || A+Q+C > TotalV || A+B+R > TotalV )
        {
            printf("yes\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
// Code By Bhumika Nayak