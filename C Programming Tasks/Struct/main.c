#include <stdio.h>
#include <stdlib.h>
typedef enum
{
    Food,Drink,Toiletries,Clothing
}Category;
typedef union
{
    float floatValue;
    int intValue;

}Productinfo;
typedef struct
{
    char productName[50];
    float price;
    int stock;
    Category category;
    Productinfo info;
}Product;
void TakeProduct(Product *p);
int main()
{

      Product p;
      TakeProduct(&p);

    return 0;
}
void TakeProduct(Product *p)
{
    printf("Enter Product Name\n");
    scanf("%s",p->productName);

    printf("Enter Product Category\n");
    scanf("%d",&p->category);

    printf("Enter Product Price\n");
    scanf("%f",&p->price);


    printf("Enter Product Stock\n");
    scanf("%d",&p->stock);


    printf("Enter Product info\n");
    scanf("%d",&p->info.intValue);

    printf("------------------------------------\n");
    printf("Product Name:<%s>\n",p->productName);
    switch(p->category)
    {
       case 0:
           printf("Category: <Food>\n");
           break;
       case 1:
         printf("Category: <Drink>\n");
         break;
       case 2:
         printf("Category: <Toiletries>\n");
         break;
       case 3:
        printf("Category: <Clothing>");
        break;

    }
    printf("Price: <%f>\n",p->price);
    printf("Price: <%d>\n",p->stock);
    printf("Additional info: <%d>\n",p->info.intValue);


}
