//
//  main.c
//  Chapter 8 continue
//
//  Created by Nancy Soprano on 29/01/2019.
//  Copyright © 2019 Nancy Soprano. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i;
    for (i = 0; i < 12; i++) {
        if (i % 3 == 0) { //pretty sure no multiplies of 3 satisfied the equation? continue!
            continue;
        }
        printf("Checking i = %d\n", i);
        if (i + 90 == i * i) {
            break;
        }
    }
    printf("The answer is %d.\n", i);
    return 0;
}
