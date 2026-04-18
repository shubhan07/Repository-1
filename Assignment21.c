#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourcePath[100], destPath[100];
    char ch;

    // Input file names
    printf("Enter source file name: ");
    scanf("%s", sourcePath);
    printf("Enter destination file name: ");
    scanf("%s", destPath);

    // Open source file in read mode ("r")
    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file %s\n", sourcePath);
        exit(1);
    }

    // Open destination file in write mode ("w")
    destFile = fopen(destPath, "w");
    if (destFile == NULL) {
        fclose(sourceFile); // Clean up before exiting
        printf("Error: Could not open destination file %s\n", destPath);
        exit(1);
    }

    // Copying process
    // fgetc reads one character at a time until End of File (EOF)
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully.\n");

    // Close both files to release memory and save changes
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
