#include<stdlib.h>
#include<stdio.h>

typedef struct poly
{
    int info;
    struct poly *next;
}poly;
void display(poly *head)
{
    poly *temp;
    printf("the elements are:\n");
    for(temp=head->next;temp!=NULL;temp=temp->next)
    {
        printf("%d\n",temp->info);
    }
}
void create(poly *head)
{
    int n,count;
    poly *last,*newnode;
    printf("How many nodes");
    scanf("%d",&n);
    last=head;
    for(count=1;count<=n;count++)
    {
        newnode=(poly*)malloc(sizeof(poly));
        newnode->next=NULL;
        printf("\n enter the node data");
        scanf("%d",&newnode->info);
        last->next=newnode;
        last=newnode;
    }
} 
void merge(poly *head1,poly *head2,poly*head3)
{
    poly *t1=head1->next,*t2=head2->next,*last=head3,*newnode;
    while(t1!=NULL && t2!=NULL)
    {
        newnode=(poly*)malloc(sizeof(poly));
        newnode->next=NULL;
        if(t1->info <t2->info)
        {
            newnode->info=t1->info;
            t1=t1->next;
        }else{
            newnode->info=t2->info;
            t2=t2->next;
        }
        last->next=newnode;
        last=newnode;
    }
    while(t1!=NULL)
    {
        newnode=(poly*)malloc(sizeof(poly));
        newnode->info=t1->info;
        newnode->next=NULL;
        t1=t1->next;
        last->next=newnode;
        last=newnode;
    }
    while(t2!=NULL)
    {
        newnode=(poly*)malloc(sizeof(poly));
        newnode->info=t2->info;
        newnode->next=NULL;
        t2=t2->next;
        last->next=newnode;
        last=newnode;
    }
}
void sortList(poly *head)
{
    poly*temp,*temp1;
    int num;
    for(temp=head->next;temp->next!=NULL;temp=temp->next)
    {
        for(temp1=temp->next;temp1!=NULL;temp1=temp1->next)
        {
            if(temp->info>temp1->info)
            {
                num=temp->info;
                temp->info=temp1->info;
                temp1->info=num;
            }
        }
    }
}