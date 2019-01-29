//
//  main.c
//  Chapter 8 break
//
//  Created by Nancy Soprano on 29/01/2019.
//  Copyright © 2019 Nancy Soprano. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i;
    for (i = 0; i < 12; i++) {
        printf("Checking i = %d\n", i);
        if (i + 90 == i * i) { //stop the loop once you find a value where x + 90 = x.squared
            break;
        }
    }
    printf("The answer is %d.\n", i);
    return 0;
}

//when the break is called, execution skips directly to the end of the code block
