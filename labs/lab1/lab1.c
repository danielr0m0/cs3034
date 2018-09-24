#include<stdio.h>


int  main(){
        double gpa = 3.5 , pi = 3.14;
        int age =35;
        typedef enum {RAIN,SUNSHINE,WIND} Weather;
        Weather w = WIND;

        printf("Dan is %d years old and has a GPA of %lg \n", age,gpa);
        printf("Circumference of a circle with radius %lg is %lg \n", 42.6, 42.6                       *2*pi);

        switch(w){
                case RAIN:
                        printf("Get Your umbrella\n");
                        break;
                case SUNSHINE:
                        printf("Enjoy your the day\n");
                        break;
                case WIND:
                        printf("Get Your WindBreaker.\n");
                        break;
        }
        return 0;
}
