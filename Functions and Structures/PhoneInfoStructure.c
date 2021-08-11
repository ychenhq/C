#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct dimensioninfo {
        // Dimension in cm
        float height;
        float width;
        float depth;
    };

    struct iphoneinfo {
        char colour;  // 'B' means black and 'W' means white
        int capacity; // capacity in GB
        int price;    // price in HKD

        struct dimensioninfo dimension; // dimension of the phone, which uses the other structure
    };

    struct androidinfo {
        char model[100]; // model of the phone
        char OS[20];     // current Android OS

        struct dimensioninfo dimension; // dimension of the phone, which uses the other structure
    };

    // Define the information of a phone using the structure
    struct iphoneinfo myphone;

    myphone.colour = 'B';
    myphone.capacity = 64;
    myphone.price = 6799;
    myphone.dimension.height = 146.7;
    myphone.dimension.width = 71.5;
    myphone.dimension.depth = 7.4;

    // Define the information of an Android phone using the structure
    struct androidinfo galaxy;

    strcpy(galaxy.model, "Samsung Galaxy Note20");
    strcpy(galaxy.OS, "Android 10");
    galaxy.dimension.height = 161.6;
    galaxy.dimension.width = 75.2;
    galaxy.dimension.depth = 8.3;
}
