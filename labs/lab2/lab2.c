#include<stdio.h>

void input(double *a, int n);
void print(double *a, int n);
void reciprocals(double *a, int n);

int main(int argc, char const *argv[])
{
    //creates an array of ten doubles
        int size = 10;
        double my_arr[10] ={0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1.00001};
        double *a;
        a = my_arr;
    
    //calls the input function
        input(a,size);
    //cals the print function
        print(a,size);
    //makes a copy of the array
        double *b;
        double copy[10];
        
        for(int i = 0; i < size; i++)
        {
            copy[i]=my_arr[i];
        }
        
        b=copy;
    //calls the change to reciprocal function on the copy arry
        reciprocals(b,size);
    //cals the print function on the original then the copy
        printf("original\n");
        print(a,size);
        printf("reciprocals \n");
        print(b,size);
        
        
    return 0;
}

void input(double *a, int n){
       double input;
       for(int i = 0; i < n; i++)
       {
            printf("Please input your %d out of 10 input: ", i+1);
            scanf("%lg", &input);
             if(input == 0){
                break;
            }
            a[i]=input;
            printf("You entered: %lg\n", input);
       }
       
}
void print(double *a, int n){
    
    for(int i = 0; i < n; i++)
    {
        printf("%lg\n", *(a+i));
    }
    
}
void reciprocals(double *a, int n){
    
    for(int i = 0; i < n; i++)
    {
        double v = a[i];
        a[i]=1/v;
    }
}
