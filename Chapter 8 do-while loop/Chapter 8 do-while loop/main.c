//
//  main.c
//  Chapter 8 do-while loop
//
//  Created by Nancy Soprano on 29/01/2019.
//  Copyright © 2019 Nancy Soprano. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //do-while loop does not check the expression until it has executed the block.
    // it ensures that the clock is always executed at least once
    int i = 0;
    do {
        printf("%d. Elon is Cool\n", i);
        i++;
    } while (i < 12);
    return 0;
}
