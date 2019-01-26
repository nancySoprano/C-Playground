//
//  main.c
//  Degrees
//
//  Created by Nancy Soprano on 26.01.2019.
//  Copyright © 2019 Nancy Soprano. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// declare a global variable
float lastTemperature;


float fahrenheitFromCelsius(float cel) {
    lastTemperature = cel; //global value reference
    float fahr = cel * 1.8 + 32.0;
    printf("%f Celsius is %f Fahrenheit\n", cel, fahr);
    return fahr;
}

int main(int argc, const char * argv[]) {
//    float cel = 22;
    float freezeInC = 0;
    float freezeInF = fahrenheitFromCelsius(freezeInC); //robi obliczenia z funkcji fahrenheitFromCelsius na podstawie tego co jest nadane w freezeInC. funkcja fahrenheitFromCelsius zwraca temperaturę w Fahrenheitach. czyli jezeli funkcja fFC bierze za value "cel" 0, które jest zdefiniowane w freezeinC, to po co nam w ogóle value cel?
    printf("Water freezes at %f degrees Fahrenheit.\n", freezeInF);
    printf("The last temperature converted was %f.\n", lastTemperature); // refer to the global variable
    return EXIT_SUCCESS; //return 0 in studio.h
}
