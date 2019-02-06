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
    int *addressOfI = &i; // ! it will hold an address where an int can be stored
    printf("i stores its value at %p\n", addressOfI);
// printf("this function starts at %p\n", main); //number in memory at which the number is stored
//printf("the int stored at addressOfI is %d\n", *addressOfI); // * -> will display the value of the integer stored at addresOfI. // asterix used to read the value that is stored at the address stored in addressOfI
    *addressOfI = 89; //use the * operator on the left hand side of an assignement to store data at a particular addess.
    printf("Now i is %d\n", i);
    printf("An int is %zu bytes\n", sizeof(i));
    printf("A pointer is %zu bytes\n", sizeof(addressOfI));
    return 0;
}
