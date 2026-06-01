#include <stdio.h>
#include <string.h>
#include "product.h"

Product p[100];
int count = 0;

void addProduct()
{
    printf("\nEnter Product ID: ");
    scanf("%d", &p[count].id);

    printf("Enter Product Name: ");
    scanf("%s", p[count].name);

    printf("Enter Quantity: ");
    scanf("%d", &p[count].quantity);

    printf("Enter Price: ");
    scanf("%f", &p[count].price);

    count++;

    printf("\nProduct Added!\n");
}

void displayProducts()
{
    if(count == 0)
    {
        printf("\nNo Products Found!\n");
        return;
    }

    for(int i = 0; i < count; i++)
    {
        printf("\nID: %d", p[i].id);
        printf("\nName: %s", p[i].name);
        printf("\nQuantity: %d", p[i].quantity);
        printf("\nPrice: %.2f\n", p[i].price);
    }
}

void searchProduct()
{
    int id;
    printf("\nEnter Product ID: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(p[i].id == id)
        {
            printf("\nFOUND PRODUCT");
            printf("\nName: %s", p[i].name);
            printf("\nQuantity: %d", p[i].quantity);
            printf("\nPrice: %.2f\n", p[i].price);
            return;
        }
    }

    printf("\nProduct Not Found!\n");
}

void updateProduct()
{
    int id;
    printf("\nEnter Product ID: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(p[i].id == id)
        {
            printf("New Quantity: ");
            scanf("%d", &p[i].quantity);

            printf("New Price: ");
            scanf("%f", &p[i].price);

            printf("\nUpdated Successfully!\n");
            return;
        }
    }

    printf("\nNot Found!\n");
}

void deleteProduct()
{
    int id;
    printf("\nEnter Product ID: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(p[i].id == id)
        {
            for(int j = i; j < count - 1; j++)
            {
                p[j] = p[j + 1];
            }

            count--;

            printf("\nDeleted Successfully!\n");
            return;
        }
    }

    printf("\nNot Found!\n");
}
