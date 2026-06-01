#include <stdio.h>
#include "product.h"

void saveToFile();
void loadFromFile();

int main()
{
    int choice;

    loadFromFile();

    while(1)
    {
        printf("\n===== INVENTORY SYSTEM =====\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Product\n");
        printf("5. Delete Product\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: addProduct(); break;
            case 2: displayProducts(); break;
            case 3: searchProduct(); break;
            case 4: updateProduct(); break;
            case 5: deleteProduct(); break;
            case 6:
                saveToFile();
                printf("Saved. Exiting...\n");
                return 0;
        }
    }
}
