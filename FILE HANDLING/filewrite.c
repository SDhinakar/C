#include <stdio.h>

int main() {
    FILE *filePointer; // Declare file pointer
    char data[100];    // Buffer to store data to be written

    // Open file in write mode
    filePointer = fopen("example.txt", "w");

    // Check if file opened successfully
    if (filePointer == NULL) {
        printf("Error opening file.\n");
        return 1; // Exit with error
    }

    // Get data from user
    printf("Enter data to write to the file: ");
    fgets(data, sizeof(data), stdin);

    // Write data to file
    fprintf(filePointer, "%s", data);

    // Close file
    fclose(filePointer);

    printf("Data written to file successfully.\n");

    return 0;
}