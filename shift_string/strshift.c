#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char mystr[] = "abcdefgh";
char sft_idx = 3;

static void reverseStr(int begin, int end);

int main() {
    if (sft_idx > strlen(mystr)) {
        fprintf(stderr, "Shift Index can NOT be larger than string length.\n");
        return 0;
    }
    printf("Goal: left shift \"%s\" by %d position\n", mystr, sft_idx);
    printf("String before shift is : %s\n", mystr);

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

