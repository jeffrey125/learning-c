#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct itemStruct
{
  char *itemName;
  int quantity;
  float price;
  float amount;
};

void readItem(struct itemStruct *item)
{
  char *tempStr;

  printf("\nEnter product name: ");
  tempStr = (char *)malloc(sizeof(char) * 255);
  scanf(" ");
  fgets(tempStr, sizeof(tempStr), stdin);

  // Allocate memory for pointer itemName
  item->itemName = (char *)malloc(sizeof(char) * (strlen(tempStr) + 1));
  strcpy(item->itemName, tempStr);

  printf("\nEnter quantity: ");
  scanf("%d", &item->quantity);

  printf("\nEnter price: ");
  scanf("%f", &item->price);

  item->amount = (float)item->quantity * item->price;

  free(tempStr);
}

void printItem(struct itemStruct *item, int index)
{
  printf("\n-- Item %d --\n\n", index + 1);

  printf("Name: %s\n", item->itemName);
  printf("Quantity: %d\n", item->quantity);
  printf("Price: %.2f\n", item->price);
  printf("Amount: %.2f\n", item->amount);
}

int main()
{
  int itemSize = 3;
  struct itemStruct item[itemSize];

  for (int i = 0; i < itemSize; i++)
  {
    readItem(&item[i]);
  }

  for (int i = 0; i < itemSize; i++)
  {
    printItem(&item[i], i);
  }


  return 0;
}