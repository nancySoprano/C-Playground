//
//  main.c
//  Challenge: counting down
//
//  Created by Nancy Soprano on 29/01/2019.
//  Copyright © 2019 Nancy Soprano. All rights reserved.
//

#include <stdio.h>
#import <stdio.h>
#include <readline/readline.h>

int main(int argc, const char * argv[]) {
    //Challenge: counting down
    // write a program that counts backward from 99 through 0 by 3, printing each number.
    // if the number is divisible by 5, it should also print the words "Found one!".
    
    //Challenge: user input
    // modify the program to ask for input from the user
    for (int i = 99; i >= 0; i -= 3) {
        if (i % 5 == 0) {
            printf("%d\nFound one!\n", i);
        } else {
            printf("%d\n", i);
        }
    }
    return 0;
}
