//
//  main.c
//  Beer Song C
//
//  Created by Nancy Soprano on 25.01.2019.
//  Copyright © 2019 Nancy Soprano. All rights reserved.
//

#include <stdio.h>

void song(int bottles) {
    
    if (bottles == 0){
        printf("There are simply no more bottles of beer on the wall.\n\n");
    } else if (bottles == 1){
        printf("%d bottle of beer on the wall, %d bottle of beer.\n\nTake one down, pass it around. No more bottles of beer on the wall.\n\nGo to the store and buy some more, 99 bottles of beer on the wall.\n\n", bottles, bottles);
      
        
    } else {
        printf("%d bottles of beer on the wall, %d bottles of beer.\n", bottles, bottles);
        int oneLess = bottles - 1;
        printf("Take one down, pass it around, %d bottles of beer on the wall.\n\n", oneLess);
        song(oneLess);
        
    }
    }


int main(int argc, const char * argv[]) {
    song(99);
    return 0;
}
