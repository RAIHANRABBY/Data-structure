
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;

};

int main(){

    //constructing the head fo the link list
    struct node *head =NULL;
    head = (struct node *)malloc(sizeof(struct node));

    head->data=30;
    head->link=NULL;
    printf("the address of the head is: %p \n", head);
    printf("the data of the Head is : %d\n", head->data);

    //Create the first node
    struct node *current =NULL;
    current = (struct node *)malloc(sizeof(struct node));
    current->data = 40;
    current->link = NULL;
    head->link = current;

    printf("First node data: %d\n", head->link->data);

    //Create the second node
    current = (struct node *)malloc(sizeof(struct node));
    current->data = 50;
    current->link = NULL;
    head->link->link = current;

    printf("Second Node Data: %d", head->link->link->data);

}
