//
//  main.c
//  Numbers
//
//  Created by Nancy Soprano on 28.01.2019.
//  Copyright © 2019 Nancy Soprano. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h> //math library implemented, included

//math library

/*CHALLENGE
 add code to main.c that displays the sine of 1 radian. show the number tounded to 3 decimal points. it should be 0.841*/
//    double sin(double x);
double challenge7(double x){
    double radiant = sin(x);
    return radiant;
}

int main(int argc, const char * argv[]) {
    printf("3 * 3 + 5 * 2 = %d\n", 3 * 3 + 5 * 2 ); //operators and precedense rules as expected
    printf("11 / 3 = %d remainder of %d \n", 11 / 3, 11 % 3);
    printf("11 / 3.0 = %f\n", 11 / (float)3); //the actual float value I want to get from division
    printf("The absolute value of -5 is %d\n", abs(-5)); // absolute value of an integer, function abs()
    
    //TOKENS FOR DISPLAYING FLOATING-POINT NUMBERS
    
    double y = 12345.6789;
    // limit double to 2 digits after the decimal point
    printf("y is %.2f\n", y); // decimal notations. dwa miejsca po przecinku
    printf("y is %.2e\n", y); // scientific notation. dwa miejsca po przecinku
    
    //challenge7 start
    double x = 1.0;
    printf("The sine of 1 radian equals %.3f\n", sin(x));
    //challenge end
    return 0;
    

}
