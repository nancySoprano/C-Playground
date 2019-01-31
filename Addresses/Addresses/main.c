//
//  main.c
//  Addresses
//
//  Created by Nancy Soprano on 31/01/2019.
//  Copyright © 2019 Nancy Soprano. All rights reserved.
//

#include <stdio.h>
//Chapter 0: Addresses and Pointers
//The address of a variable is the location in memory where the value for that variable is stored. To get the variable address, you use the "&" operator.
int main(int argc, const char * argv[]) {
    int i = 17;
    int *addressOfI = &i;
    printf("i stores its value at %p\n", addressOfI);
    printf("this function starts at %p\n", main); //number in memory at which the number is stored
    return 0;
}
