#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 256
#define MAX_NAMES 100

void trim_newline(char *str) {
    char *pos;
    if ((pos = strchr(str, '\n')) != NULL)
        *pos = '\0';
}

int is_unique(char names[MAX_NAMES][50], int count, const char *name) {
    for (int i = 0; i < count; i++) {
        if (strcmp(names[i], name) == 0)
            return 0;
    }
    return 1;
}

int main() {
    FILE *file;
    char *filename = "/home/nikhil/Documents/SystemsII/Nato.csv";
    char line[MAX_LINE_LENGTH];
    char rollNo[20], name[100], gender[2], year[5], degree[10];
    char unique_names[MAX_NAMES][50];
    int name_count = 0;

    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    fgets(line, sizeof(line), file);

    while (fgets(line, sizeof(line), file)) {
        trim_newline(line);
        sscanf(line, "%[^,],%[^,],%1[^,],%4[^,],%s", rollNo, name, gender, year, degree);

        char firstName[50];
        sscanf(name, "%s", firstName);

        if (strcmp(degree, "MSC") == 0 && strcmp(gender, "F") == 0 && strcmp(year, "2024") == 0) {
            if (is_unique(unique_names, name_count, firstName)) {
                strcpy(unique_names[name_count++], firstName);
            }
        }
    }

    fclose(file);

    printf("First Name:\n");
    for (int i = 0; i < name_count; i++) {
        printf("%s\n", unique_names[i]);
    }

    return EXIT_SUCCESS;
}

