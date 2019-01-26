//
//  main.c
//  Squarer
//
//  Created by Nancy Soprano on 27.01.2019.
//  Copyright © 2019 Nancy Soprano. All rights reserved.
//

#include <stdio.h>

int originalNumber = 5;
//int squaredNumber = originalNumber * 2;

int squaredNumber(int originalNumber){
    int square = originalNumber * originalNumber;
    return square;
}

int main(int argc, const char * argv[]) {
    printf("\"%d\" squared is \"%d\".\n ",originalNumber, squaredNumber(originalNumber));
    return 0;
}
