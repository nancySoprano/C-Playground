//
//  main.c
//  ClassCertificates
//
//  Created by Nancy Soprano on 19.01.2019.
//  Copyright © 2019 Nancy Soprano. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>

void congratulateStudent(char *student, char *course, int numDays){
    printf("%s has done as much %s Programming as I could fit into %d days. \n", student, course, numDays);
}


int main(int argc, const char * argv[]) {
    congratulateStudent("Kate", "Cocoa", 5);
    sleep(2);
    congratulateStudent("Kasia", "Swift", 3);
    sleep(5);
    congratulateStudent("Andrzej", "JavaScript", 2);
    return 0;
}
