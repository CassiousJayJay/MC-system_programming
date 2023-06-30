#include <stdio.h>
struct Person
{
    char *name;
    int *age;
};
typedef struct Item
{
    char *name;
    double price;
    float expire;
} Item;

int main()
{
    struct Person per;
    per.name = "John";
    per.age = 30;

    Item laptop = {"Lennov", 3500.5, 2023.5};

    struct Person per_2 = {"Mercy", 20};
    struct Person per_3 = {.age = 50, .name = "James"};
    printf("My name is %s and am %d years old\n", per.name, per.age);
    printf("My name is %s and am %d years old\n", per_2.name, per_2.age);
    printf("My name is %s and am %d years old\n", per_3.name, per_3.age);
    printf("Item name is %s and the price is  %.2f expering on %.2f\n", laptop.name, laptop.price, laptop.expire);
    return 0;
}