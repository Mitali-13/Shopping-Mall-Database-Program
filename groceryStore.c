#include <stdio.h>
#include <stdlib.h>

struct Customer 
{
  int cardId;
  char Name[50];
  int age;
  char address[100];
  int price;
  int point;
  int month;
  int year;
  
  struct Customer *prev;
  struct Customer *next;
}*first = NULL, *last=NULL;

struct Item
{
  int card_id;
  int id;
  int price;
  float point;
  int quantity;
  struct Item *inext;
}*start = NULL, *end = NULL;

void PurchaseGrocery(struct Item *i,int id)
 {
  int grocery_quantity;
  gr= (struct Item *)malloc(sizeof(struct Item));
  gr->card_id = id;
  printf("Item Id for Grocery : \nrice:101     dal:102\nwheat:103   sugar:104   soap:105");
  int rice=101, dal=102, wheat=103, sugar=104, soap=105;

  static int rice_avaliblity=200, dal_avaliblity=50, wheat_avaliblity=100, sugar_avaliblity=50, soap_avaliblity=150;


  printf("\nEnter the Item ID of the Item : ");
  scanf("%d", &gr->id);
  printf("Enter the Quantity : ");
  scanf("%d", &grocery_quantity);

  if (i->id==101)
  {
   printf("\nYou have purchased %d packets RICE. \n",grocery_quantity);
   gr->price=(50*grocery_quantity);
   printf("Price of %d packets of RICE is : %d \n",grocery_quantity, gr->price);
   gr->point=(gr->price/100);
   printf("Points Gained on purchasing %d packets of  Rice : %f \n", grocery_quantity, gr->point); 
   gr->quantity=(rice_avaliblity-grocery_quantity);
   printf("Avalible Quantity = %d \n", gr->quantity);

   }
