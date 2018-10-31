#include<stdio.h>

void print(double *a, int n);
double meanOfArr(double *d, int n);

int main()
{
    int size = 5;
    double myArr[5] ={1.2,5.1,3.9,4.8,-8};
    // double myArr[5] = {1.2,5.1,3.9,4.8,5};
    double *a;
    a=myArr;
    double m = meanOfArr(a,size);
    printf("Sent input: ");
    print(a,size);
    printf("mean: %lg", m);
    double mark = 3.2;
    if(m>mark){
        printf(" greator than %lg", mark);
    }
    else{
        printf(" not greator than %lg", mark);
    }
    return 0;
}

double meanOfArr(double *d, int n){
    double t=0.0;

    for(int i = 0; i < n; i++)
    {
        t+=d[i];
    }
    return (t/n);
}

void print(double *a, int n){
    
    for(int i = 0; i < n; i++)
    {
        printf("%lg ", *(a+i));
    }
    
}
