#include <stdio.h>

int main() {
    float num; // num is not an integer
    int count = 0; // variable count
    float sum = 0.0; // variable sum

    printf("please enter numbers (0 to stop):\n"); // sends out prompt with text

    while (1) {
        scanf("%f", &num); // Lets the person write in a number
        printf("Please write a new number:");
        if (num == 0.0f) { // checks if the number is = 0
            break; // stops the loop
        }
        count++; // + 1 to the count everytime the loop runs
        sum += num; // adds the number written in to the sum.
    }

    float average = 0.0; // makes a constant for average
    if (count > 0) {
        average = sum/count; // makes sure that average isn't used if it's = 0
    }

        printf("Count: %d\n", count); // prints count
        printf("Sum: %g\n", sum); // prints sum
        printf("Average: %g\n", average); // prints average

return 0;



}