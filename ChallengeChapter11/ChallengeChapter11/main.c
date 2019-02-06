//
//  main.c
//  ChallengeChapter11
//
//  Created by Nancy Soprano on 06/02/2019.
//  Copyright © 2019 Nancy Soprano. All rights reserved.
//

#include <stdio.h>
#include <time.h>


int main(int argc, const char * argv[]) {
    long timeFourMill = time(NULL) + 4000000;
    
    struct tm futureTime;
    
    localtime_r(&timeFourMill, &futureTime);
    printf("The time will be %d-%d-%d.\n", futureTime.tm_mon + 1, futureTime.tm_mday, futureTime.tm_year + 1970);
    return 0;
}
