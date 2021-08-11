#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    // This variable stores the file pointer
    FILE *fp;

    // This variable stores the user's name
    char name[20];

    // Ask for the user's name
    printf("What is your name? ");
    scanf("%s", name);

    // Open the text file 'name.txt' for writing
    fp = fopen("name.txt", "w");

    // Write the name into the text file
    fprintf(fp, "%s", name);

    // Close the file after writing
    fclose(fp);
}
