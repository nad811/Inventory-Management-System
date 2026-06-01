#include <stdio.h>
#include "product.h"

extern Product p[];
extern int count;

void saveToFile()
{
    FILE *fp = fopen("data.dat", "wb");

    fwrite(&count, sizeof(int), 1, fp);
    fwrite(p, sizeof(Product), count, fp);

    fclose(fp);
}

void loadFromFile()
{
    FILE *fp = fopen("data.dat", "rb");

    if(fp == NULL)
        return;

    fread(&count, sizeof(int), 1, fp);
    fread(p, sizeof(Product), count, fp);

    fclose(fp);
}
