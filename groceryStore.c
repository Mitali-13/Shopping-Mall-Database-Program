#include <stdio.h>
#include <stdlib.h>

struct Customer
{
  int cardId;
  char Name[50];
  int age;
  char address[100];
  int price;
  
  int month;
  int year;
  int disc;
  int point;
  struct Customer *prev;
  struct Customer *next;
} *first = NULL, *last = NULL;

struct Item
{
int card_id;
  int id;
  int price;
  int point;
  int quantity;
  struct Item *inext;
}start=NULL,*end=NULL,*start2=NULL,*start3=NULL,*end2=NULL,*end3=NULL;

void Purchase_Grocery(struct Item *gr, int id)
{
  int grocery_quantity;
  gr = (struct Item *)malloc(sizeof(struct Item));
  gr->card_id = id;
  printf("Item Id for Grocery : \nrice:101     dal:102\nwheat:103   sugar:104   soap:105");
  int rice = 101, dal = 102, wheat = 103, sugar = 104, soap = 105;

  global int rice_avaliblity = 200, dal_avaliblity = 50, wheat_avaliblity = 100, sugar_avaliblity = 50, soap_avaliblity = 150;

  printf("\nEnter the Item ID of the Item : ");
  scanf("%d", &gr->id);
  printf("Enter the Quantity : ");
  scanf("%d", &grocery_quantity);

  if (gr->id == 101)
  {
    printf("\nQuantity of rice purchased : \n", grocery_quantity);
    gr->price = (50 * grocery_quantity);
    printf("Price of RICE : %d \n", gr->price);
    gr->point = (i->price / 100) * 1.00;
    printf("Points Gained on  : %f \n" gr->point);
    gr->quantity = (rice_avaliblity - grocery_quantity);
    printf("Avalible Quantity = %d \n", gr->quantity);
  }
  if (gr->id==102)
   {
   printf("\nQuantity of dal purchased : \n",   grocery_quantity);
   gr->price=(60*grocery_quantity);
   printf("Price of Dal is : %d \n",  gr->price);
   gr->point=(i->price/100)*1.00;
   printf("Points Gained : %f \n", gr->point);
   gr->quantity=(dal_avaliblity-grocery_quantity);
   printf("Avalible Quantity = %d \n", gr->quantity);
   }

 if (gr->id==103) 
 {
   printf("\nQuantity of wheat purchased :\n", grocery_quantity);
   gr->price=(22*grocery_quantity);
   printf("Price of wheat  : %d \n", gr->price);
   gr->point=(i->price/100)*1.00;
   printf("Points Gained  : %f \n",gr->point);
   gr->quantity=(soaps_avaliblity-grocery_quantity);
   printf("Avalible Quantity = %d \n", gr->quantity);
  }

 if (gr->id==104)
  {
   printf("\nQuantity of sugar purchased : \n", grocery_quantity);
   gr->price=(235*grocery_quantity);
   printf("Price of wheat: %d \n",gr->price); 
   gr->point=(gr->price/100)*1.00;
   printf("Points Gained : %f \n",gr->point);
   gr->quantity=(shampoo_avaliblity-grocery_quantity); 
   printf("Avalible Quantity = %d \n", gr->quantity);
   }

 if (gr->id==105) 
 {
   printf("\nQuantity of soap purchased : \n", grocery_quantity);
   i->price=(295*grocery_quantity);
   printf("Price of soap : %d \n",gr->price);
   i->point=(i->price/100)*1.00;
   printf("Points Gained  : %f \n", gr->point);
   i->quantity=(surf_avaliblity-grocery_quantity);
   printf("Avalible Quantity = %d \n", i->quantity);
  }


  gr->inext = NULL;
  if (start == NULL)
    start = end = gr;
  else
  {
    end->inext = i;
    end = i;
  }
}

void Purchase_Electronic(struct Item *el, int id)
{
  el = (struct Item *)malloc(sizeof(struct Item));
  el->card_id = id;
  int sims = 201, mobile = 302, bulb = 203, microwave = 204, laptop = 205;
printf("Item Id for Electronics : \nsims:201     mobiles:202\nbulb:203   microwave:204   laptop:205\n");
  static int sims_avaliblity = 120, mobile_avaliblity = 80, bulb_avaliblity = 60, microwave_avaliblity = 75, laptop_avaliblity = 50;

  int electronics_quantity;

  printf("\nEnter the Item ID to purchase the Item : ");
  scanf("%d", &el->id);
  printf("Enter the Quantity : ");
  scanf("%d", &electronics_quantity);

  if (el->id == 201)
  {
    printf("no. of sims purchased : %d \n", electronics_quantity);
    el->price = (100 * electronics_quantity);
    printf("Price of sim : %d \n", el->price);
    el->point = (el->price / 10);
    printf("Points Gained : %f \n", electronics_quantity, el->point);
    el->quantity = (sims_avaliblity - electronics_quantity);
    printf("Avalible Quantity = %d \n", el->quantity);
  }

  if (el->id == 202)
  {
    printf("no. of mobiles purchased : %d \n", electronics_quantity);
    el->price = (1800 * electronics_quantity);
    printf("Price of mobile  : %d ", el->price);
    el->point = (el->price / 10);
    printf("Points Gained : %f \n", el->point);
    el->quantity = (mobile_avaliblity - electronics_quantity);
    printf("Avalible Quantity = %d \n", el->quantity);
  }

  if (elec->id == 203)
  {
    printf("no. of bulb purchased : %d \n", electronics_quantity);
    el->price = (20 * electronics_quantity);
    printf("Price of bulb : %d", el->price);
    el->point = (el->price / 10);
    printf("Points Gained : %f \n", electronics_quantity, el->point);
    el->quantity = (bulb_avaliblity - electronics_quantity);
    printf("Avalible Quantity = %d \n", el->quantity);
  }

  if (elec->id == 204)
  {
    printf("no. of microwave purchased : %d \n", electronics_quantity);
    el->price = (1500 * electronics_quantity);
    printf("Price of %d microwave : %d \n", electronics_quantity, el->price);
    el->point = (el->price / 10);
    printf("Points Gained : %f \n", electronics_quantity, el->point);
    el->quantity = (microwave_avaliblity - electronics_quantity);
    printf("Avalible Quantity = %d \n", el->quantity);
  }

  if (el->id == 205)
  {
    printf("no. of laptop purchased : %d \n", electronics_quantity);
    el->price = (12000 * electronics_quantity);
    printf("Price of laptop  : %d \n", el->price);
    el->point = (el->price / 10);
    printf("Points Gained on purchasing %d pieces of Head Set : %0.1f \n", electronics_quantity, el->point);
    el->quantity = (headset_avaliblity - electronics_quantity);
    printf("Avalible Quantity = %d \n", el->quantity);
  }
  el->inext = NULL;
  if (start2 == NULL)
    start2 = end2 = el;
  else
  {
    end2->inext = el;
    end2 = el;
  }
}


  void PurchaseGarement(struct Item *g, int id)
{
  g = (struct Item *)malloc(sizeof(struct Item));
  g->card_id = id;

  printf("Item Id for Grocery : \njeasn:301     shorts:302\ntshirts:303   trousers:304   shirt:305");
  
  int jeans = 301, shorts = 302, tshirts = 303, trousers = 304, shirts = 305;

  int jeans_avaliblity = 200, shorts_avaliblity = 100, tshirts_avaliblity = 200, trouser_avaliblity = 150, shirts_avaliblity = 85;

  int garmets_quantity;

  printf("\nEnter the Item ID to purchase the Item : ");
  scanf("%d", &g->id);
  printf("Enter the Quantity : ");
  scanf("%d", &garmets_quantity);

  if (g->id == 301)
  {
    printf("\nYou have purchased %d pieces of Door Curtain. \n", garmets_quantity);
    g->price = (901 * garmets_quantity);
    printf("Price of jeans: %d \n", g->price);
    g->point = (g->price / 100) * 5.00;
    printf("Points Gained jeans : %f \n", g->point);
    g->quantity = (doorcurtain_avaliblity - garmets_quantity);
    printf("Avalible Quantity = %d \n", g->quantity);
  }

  if (g->id == 302)
  {
    printf("\nno of shorts purchased : \n", garmets_quantity);
    g->price = (699 * garmets_quantity);
    printf("Price of %d packets of Shorts is : %d \n", garmets_quantity, g->price);
    g->point = (g->price / 100) * 5.00;
    printf("Points Gained  : %f \n", g->point);
    g->quantity = (shorts_avaliblity - garmets_quantity);
    printf("Avalible Quantity = %d \n", g->quantity);
  }

  if (g->id == 303)
  {
    printf("\nno of t-shirt : %d /n", garmets_quantity);
    g->price = (899 * garmets_quantity);
    printf("Price of T-shirts is : %d \n", g->price);
    g->point = (g->price / 100) * 5.00;
    printf("Points Gained : %f \n", g->point);
    g->quantity = (tshirts_avaliblity - garmets_quantity);
    printf("Avalible Quantity = %d \n", g->quantity);
  }

  if (g->id == 304)
  {
    printf("\n no of trousers purchased : \n", garmets_quantity);
    g->price = (800 * garmets_quantity);
    printf("Price of trousers : %d \n", g->price);
    g->point = (g->price / 100) * 5.00;
    printf("Points Gained  : %f \n", g->point);
    g->quantity = (trouser_avaliblity - garmets_quantity);
    printf("Avalible Quantity = %d \n", g->quantity);
  }

  if (g->id == 305)
  {
    printf("\nno of shirts purchased : \n", garmets_quantity);
    g->price = (100 * garmets_quantity);
    printf("Price of shirts: %d \n", g->price);
    g->point = (g->price / 100) * 5.00;
    printf("Points Gained  : %f \n" g->point);
    g->quantity = (shirts_avaliblity - garmets_quantity);
    printf("Avalible Quantity = %d \n", g->quantity);
  }

  g->inext = NULL;

  if (start3 == NULL)
    start3 = end3 = g;
  else
  {
    end3->inext = g;
    end3 = g;
  }
}

/*void pointGrocery(struct Item *i1, int id) 
{
  float sum1 = 0;
  i1 = start;
   while(i1!= NULL)
    {
      if(i1->card_id == id)
       {
        sum1 = sum1 + i1->point;
       }
      i1 = i1->inext; 
   } 
  printf sum1;
}*/
