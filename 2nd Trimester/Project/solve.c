#include <stdio.h>
 int main() {
    FILE *fp;
    int num, max = -1000000; // initialize max to a very low value
     fp = fopen("file.txt", "r"); // open file for reading
     if (fp == NULL) {
        printf("Unable to open file.\n");
        return 0;
    }
     for (int i = 0; i < 10; i++) { // loop to read 10 numbers from file
        fscanf(fp, "%d", &num);
        if (num > max) {
            max = num;
        }
    }
     fclose(fp); // close file
     printf("The maximum number among the 10 numbers is: %d\n", max);
     return 0;
}
