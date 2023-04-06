#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "sequence.h"

int main(int argc, char **argv) {
    // the user must provide the count, min, and max on the command line,
    // so we need 4 arguments in total
    if(argc != 4) {
        printf("Usage: %s <count> <min> <max>\n", argv[0]);
        return 1;
    }

    // convert the string parameters in argv to integers using atoi
    // (ASCII to integer)
    size_t count = atoi(argv[1]);
    int min = atoi(argv[2]);
    int max = atoi(argv[3]);

    if(max < min) {
        printf("The max value must not be less than the min value\n");
        return 1;
    }

    srand(time(NULL));

    int *sequence = create_random_sequence(count, min, max);

    printf("Here is the sequence:\n");

    for(size_t i = 0; i < count; i++) {
        printf("%i ", sequence[i]);
    }

    printf("\n");

    free(sequence);

    return 0;
}
