#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int i = 2520;
    int j = 0;
    int k = 0;
    int found = 0;

    while (found == 0) {
        for (j = 1; j <= 20; j++) {
            if (i%j == 0) {
              k++;      
            }    
        }
        if (k == 20) {
            found = 1; 
        } else {
            i++;
            k = 0;
        }    
    }
    printf("%d \n", i);
}
