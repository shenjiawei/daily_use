#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "strshift.h"

static void reverseStr(int begin, int end);

int main() {
    printf("Goal: left shift \"%s\" by %d position using algorithm 1\n", mystr, sft_idx);
    printf("String before shift is : %s\n", mystr);
    if (sft_idx > strlen(mystr)) {
        fprintf(stderr, "Shift Index can NOT be larger than string length.\n");
        return 0;
    } else if (sft_idx == strlen(mystr)) {        
        printf("String after  shift is : %s\n", mystr);
        return 0;
    } 

    reverseStr(0, sft_idx-1);
    reverseStr(sft_idx,strlen(mystr)-1);
    reverseStr(0, strlen(mystr)-1);

    printf("String after  shift is : %s\n", mystr);

    return 0;
}


static void reverseStr(int begin, int end) {
    int i;
    char tmp;
    for (i=begin;i<=(begin+(end-begin)/2);i++) {
        tmp = mystr[i];
        mystr[i] = mystr[end-(i-begin)];
        mystr[end-(i-begin)] = tmp;
    }
}

