#include"poly.h"
#include<stdio.h>
int main()
{
    poly *head1=(poly*)malloc(sizeof(poly));
    poly *head2=(poly*)malloc(sizeof(poly));
    poly *head3=(poly*)malloc(sizeof(poly));
    create(head1);
    create(head2);
    printf("Adding the list\n");
    add(head1,head2,head3);
    display(head3);
}