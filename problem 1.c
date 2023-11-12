#include<stdio.h>
int main()
{
    double lambda,theta,d,m;
    scanf("%lf %lf %lf",&lambda,&theta,&d);

    if(lambda>=380 && lambda<=750){
       lambda=lambda*pow(10,-9);
       d=d*pow(10,-6);
       theta=theta*(3.1416/180.00);
       m=d*sin(theta)/lambda;
       printf("%lf\n",m);
    }
    else
        printf("Out of the range.Please enter a valid number.\n");

    return 0;
}
