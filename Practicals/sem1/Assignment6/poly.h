#include <stdlib.h>
#include <stdio.h>

typedef struct poly
{
    int coef, exp;
    struct poly *next;
} poly;
void display(poly *head)
{
    poly *temp;
    printf("the elements are:\n");
    for (temp = head->next; temp != NULL; temp = temp->next)
    {
        printf("%dx^%d+ ", temp->coef, temp->exp);
    }
}
void create(poly *head)
{
    int n, count;
    poly *last, *newnode;
    printf("How many nodes");
    scanf("%d", &n);
    last = head;
    for (count = 1; count <= n; count++)
    {
        newnode = (poly *)malloc(sizeof(poly));
        newnode->next = NULL;
        printf("\n enter the coef and exponent");
        scanf("%d %d", &newnode->coef, &newnode->exp);
        last->next = newnode;
        last = newnode;
    }
}
void add1(poly *p1, poly *p2, poly *p3)
{
    poly *t1 = p1->next, *t2 = p2->next, *t3 = p3, *newnode;
    int i;
    while (t1 != NULL && t2 != NULL)
    {
        newnode = (poly *)malloc(sizeof(poly));
        newnode->next = NULL;
        if (t1->exp > t2->exp)
        {
            newnode->exp = t1->exp;
            newnode->coef = t1->coef;
            t1 = t1->next;
        }
        else if (t1->exp < t2->exp)
        {
            newnode->exp = t2->exp;
            newnode->coef = t2->coef;
            t2 = t2->next;
        }
        else
        {
            newnode->exp = t2->exp;
            newnode->coef = t2->coef + t1->coef;
            t1 = t1->next;
            t2 = t2->next;
        }
        t3->next = newnode;
        t3 = newnode;
    }
    while (t1 != NULL)
    {
        newnode = (poly *)malloc(sizeof(poly));
        newnode->next = NULL;
        newnode->exp = t1->exp;
        newnode->coef = t1->coef;
        t1 = t1->next;
        t3->next = newnode;
        t3 = newnode;
    }

    while (t2 != NULL)
    {
        newnode = (poly *)malloc(sizeof(poly));
        newnode->next = NULL;
        newnode->exp = t2->exp;
        newnode->coef = t2->coef;
        t2 = t2->next;
        t3->next = newnode;
        t3 = newnode;
    }
}
void multiply(poly *p1, poly *p2, poly *p3, poly *p4)
{
    poly *t1 = p1->next, *t2 = p2->next, *t3 = p3, *newnode;
    while (t1 != NULL)
    {
        while (t2 != NULL)
        {
            newnode = (poly *)malloc(sizeof(poly));
            newnode->next = NULL;
            newnode->exp = t1->exp + t2->exp;
            newnode->coef = t1->coef * t2->coef;
            t3->next=newnode;
            t2 = t2->next;
            t3 = newnode;
        }
        t3 = p4;
        t1 = t1->next;
        t2=p2->next;
    }
}

void add(poly *p3, poly *p4, poly *p5)
{
    poly *t1 = p3->next, *t2 = p4->next, *t3 = p5, *newnode;
    int i;
    while (t1 != NULL && t2 != NULL)
    {
        newnode = (poly *)malloc(sizeof(poly));
        newnode->next = NULL;
        if (t1->exp > t2->exp)
        {
            newnode->exp = t1->exp;
            newnode->coef = t1->coef;
            t1 = t1->next;
        }
        else if (t1->exp < t2->exp)
        {
            newnode->exp = t2->exp;
            newnode->coef = t2->coef;
            t2 = t2->next;
        }
        else
        {
            newnode->exp = t2->exp;
            newnode->coef = t2->coef + t1->coef;
            t1 = t1->next;
            t2 = t2->next;
        }
        t3->next = newnode;
        t3 = newnode;
    }
    while (t1 != NULL)
    {
        newnode = (poly *)malloc(sizeof(poly));
        newnode->next = NULL;
        newnode->exp = t1->exp;
        newnode->coef = t1->coef;
        t1 = t1->next;
        t3->next = newnode;
        t3 = newnode;
    }

    while (t2 != NULL)
    {
        newnode = (poly *)malloc(sizeof(poly));
        newnode->next = NULL;
        newnode->exp = t2->exp;
        newnode->coef = t2->coef;
        t2 = t2->next;
        t3->next = newnode;
        t3 = newnode;
    }
}