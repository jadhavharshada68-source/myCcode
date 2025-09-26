#include <stdio.h>

int main() {
    // Loop numbers from 1 to 100
    for (int i = 1; i <= 100; i++) {
        
        if (i % 3 == 0 && i % 5 == 0) {
            // If number divisible by both 3 and 5
            printf("FizzBuzz\n");
        } 
        else if (i % 3 == 0) {
            // If number divisible by only 3
            printf("Fizz\n");
        } 
        else if (i % 5 == 0) {
            // If number divisible by only 5   
            printf("Buzz\n");
        } 
        else {
            // If number is not divisible by 3 or 5
            printf("%d\n", i);
        }
    }
    return 0;
}
