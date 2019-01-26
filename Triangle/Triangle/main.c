//
//  main.c
//  Triangle
//
//  Created by Nancy Soprano on 27.01.2019.
//  Copyright © 2019 Nancy Soprano. All rights reserved.
//

#include <stdio.h>

float remainingAngle(float angleA, float angleB){
    return 180 - angleA - angleB;
}

int main(int argc, const char * argv[]) {
    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = remainingAngle(angleA, angleB);
    printf("The third angle is %.2f\n", angleC);
    return 0;
}
