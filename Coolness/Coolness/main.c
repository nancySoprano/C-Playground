//
//  main.c
//  Coolness
//
//  Created by Nancy Soprano on 28/01/2019.
//  Copyright © 2019 Nancy Soprano. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //while loop
    int i = 0; //an integer that will kick off the looping
    while (i < 12) { //loop as long as i is less than 12
        printf("%d. Elon is Cool\n", i); //%d only to make the counting-looping more visible
        i++; //increase the value of "i" after each loop, so that the loop can eventually end.
    }
    return 0;
}
