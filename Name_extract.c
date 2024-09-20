#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void filterByDegree(const char *inputFile, const char *outputFile, const char *targetDegree) {
    FILE *filePointer = fopen(inputFile, "r");
    FILE *outputPointer = fopen(outputFile, "w");
    
    if (filePointer == NULL || outputPointer == NULL) {
        printf("File not found!\n");
        if (filePointer) fclose(filePointer);
        if (outputPointer) fclose(outputPointer);
        return;
    }

    char lineBuffer[100];
    while (fgets(lineBuffer, sizeof(lineBuffer), filePointer)) {
        if (strstr(lineBuffer, targetDegree)) {
            fputs(lineBuffer, outputPointer);
        }
    }
    
    fclose(filePointer);
    fclose(outputPointer);
}

void filterByGender(const char *inputFile, const char *outputFile, const char *targetGender) {

    
    FILE *filePointer = fopen(inputFile, "r");
    FILE *outputPointer = fopen(outputFile, "w");
    
    if (filePointer == NULL || outputPointer == NULL) {

        printf("File not found!\n");
        if (filePointer) fclose(filePointer);
        if (outputPointer) fclose(outputPointer);
        return;
    }

    char lineBuffer[100];
    while (fgets(lineBuffer, sizeof(lineBuffer), filePointer)) {
        if (strstr(lineBuffer, targetGender)) {
            fputs(lineBuffer, outputPointer);
        }
    }
    
    fclose(filePointer);
    fclose(outputPointer);
}

void filterByYear(const char *inputFile, const char *outputFile, int targetYear) {
    FILE *filePointer = fopen(inputFile, "r");
    FILE *outputPointer = fopen(outputFile, "w");
    
    if (filePointer == NULL || outputPointer == NULL) {
        printf("File not found!\n");
        if (filePointer) fclose(filePointer);
        if (outputPointer) fclose(outputPointer);
        return;
    }

    char lineBuffer[100];
    char yearStr[10];
    sprintf(yearStr, "%d", targetYear);
    
    while (fgets(lineBuffer, sizeof(lineBuffer), filePointer)) {
        if (strstr(lineBuffer, yearStr)) {
            fputs(lineBuffer, outputPointer);
        }
    }
    
    fclose(filePointer);
    fclose(outputPointer);
}

int main() {
    filterByDegree("StudentData.csv", "output1.csv", "MSC CS");

    filterByGender("output1.csv", "output2.csv", "F");

    filterByYear("output2.csv", "output3.csv", 2024);

    return 0;
}
