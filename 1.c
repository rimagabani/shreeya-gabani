#include <stdio.h>

int main() {
    FILE *evenFile, *oddFile;
    int i;

    evenFile = fopen("even_file.txt", "w");
    if (evenFile == NULL) {
        printf("Error opening even file.");
        return 1;
    }


    oddFile = fopen("odd_file.txt", "w");
    if (oddFile == NULL) {
        printf("Error opening odd file.");
        fclose(evenFile);
        return 1;
    }

    for (i = 50; i <= 70; i++) {
        if (i % 2 == 0) {
            fprintf(evenFile, "%d, ", i);
        } else {
            fprintf(oddFile, "%d, ", i);
        }
    }


    fclose(evenFile);
    fclose(oddFile);

    printf("Even numbers from even_file.txt: ");
    for (i = 50; i <= 70; i += 2) {
        printf("%d, ", i);
    }
    printf("\nOdd numbers from odd_file.txt: ");
    for (i = 51; i <= 69; i += 2) {
        printf("%d, ", i);
    }

    return 0;
}

