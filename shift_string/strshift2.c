#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "strshift.h"

static void jumpshift(void);

int main (void) {
    printf("Goal: left shift \"%s\" by %d position using algorithm 2\n", mystr, sft_idx);
    printf("String before shift is : %s\n", mystr);
    if (sft_idx > strlen(mystr)) {
        fprintf(stderr, "Shift Index can NOT be larger than string length.\n");
        return 0;
    } else if (sft_idx == strlen(mystr)) {        
        printf("String after  shift is : %s\n", mystr);
        return 0;
    } 
    
    jumpshift();    
    printf("String after  shift is : %s\n", mystr);

    return 0;
}


void jumpshift() {
    int len,j,k,curr_idx;
    char tmp;
    len = strlen(mystr);

    for(j=0;j<sft_idx;j++) {
        tmp = mystr[j];
        curr_idx = j;
        for (k=j+1;k<len;k++) {
            if(((k-j)%sft_idx)==0) {
                mystr[curr_idx] = mystr[k];
                mystr[k] = tmp;
                curr_idx = k;                
            }
        }        
    }

}

