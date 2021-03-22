#include"singlylist.h"
#include<stdio.h>
int main()
{
    poly *head=(poly*)malloc(sizeof(poly));
    create(head);
    printf("Sorting the list\n");
    sortList(head);
    display(head);
}