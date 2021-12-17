#include<stdio.h>
#include<stdlib.h>
// Node creation
struct node
{
int info;
struct node *link;
};
typedef struct node *NODE;
// Insert node at the front end
NODE insertFront(NODE header)
{
NODE temp;
int item;
temp = (NODE)malloc(sizeof(struct node));
if(temp==NULL)
{
printf("\n Unable to allocate memory...\n");
return header;
}
printf("\nEnter an element to be inserted: ");
scanf("%d", &item);
temp->info = item;
temp->link = NULL;
if(header == NULL)
{
header->link=temp;
header->info++;
}
else
{
temp->link = header->link;
header->link=temp;
header->info++;
}
return header;
}
// Insert node at the rear end
NODE insertRear(NODE header)
{
NODE temp,cur;
int item;
temp = (NODE)malloc(sizeof(struct node));
if(temp==NULL)
{
printf("\n Unable to allocate memory...\n");
return header;
}
printf("\nEnter an element to be inserted: ");
scanf("%d", &item);
temp->info = item;
temp->link = NULL;
if(header == NULL)
{
header->link=temp;
header->info++;
}
else
{
cur=header->link; //initializing from the next node of header
while(cur->link!=NULL)
cur=cur->link;
cur->link=temp;
header->info++;
}
return header;
}
// Insert at position
NODE insertPos(NODE header)
{
NODE temp,cur;
int item, pos, k;
printf("\nEnter a position: ");
scanf("%d",&pos);
if(pos==1)
{
header = insertFront(header);
return header;
}
cur=header;
k=1;
while(cur!=NULL && k<pos-1)
{
cur=cur->link;
k++;
}
if(cur == NULL)
{
printf("\nPosition doesnt exist... \n");
return header;
}
temp = (NODE)malloc(sizeof(struct node));
if(temp==NULL)
{
printf("\n Unable to allocate memory...\n");
return header;
}
else
{
printf("\nEnter an element to be inserted: ");
scanf("%d", &item);
temp->info = item;
temp->link = NULL;
temp->link = cur->link;
cur->link = temp;
header->info++;
return header;
}
}
/*
// Insert after position -------------------------- if you uncomment, this code works very fine, only change is
pos++ before start of logic and pos==0 check
NODE insertAfterPos(NODE first)
{
NODE temp,cur;
int item, pos, k;
printf("\nEnter a position: ");
scanf("%d",&pos);
if(pos==0)
{
first = insertFront(first);
return first;
}
pos++;
cur=first;
k=1;
while(cur!=NULL && k<pos-1)
{
cur=cur->link;
k++;
}
if(cur == NULL)
{
printf("\nPosition doesnt exist... \n");
return first;
}
temp = (NODE)malloc(sizeof(struct node));
if(temp==NULL)
{
printf("\n Unable to allocate memory...\n");
return first;
}
printf("\nEnter an element to be inserted: ");
scanf("%d", &item);
temp->info = item;
temp->link = NULL;
temp->link = cur->link;
cur->link = temp;
return first;
}
*/
// insert before element
NODE insertBeforeEle(NODE header)
{
NODE temp,cur, prev;
int item, ele;
printf("\nEnter an element: ");
scanf("%d",&ele);
cur=header;
prev=NULL;
while(cur!=NULL && cur->info!=ele)
{
prev=cur;
cur=cur->link;
}
if(cur == NULL)
{
printf("\nGiven element doesnt exist in the list... \n");
return header;
}
temp = (NODE)malloc(sizeof(struct node));
if(temp==NULL)
{
printf("\n Unable to allocate memory...\n");
return header;
}
else
{
printf("\nEnter an element to be inserted: ");
scanf("%d", &item);
temp->info = item;
temp->link = NULL;
temp->link = cur;
if(prev!=NULL)
prev->link = temp;
else
header->link=temp;
header->info++;
return header;
}
}
//insert after element
NODE insertAfterEle(NODE header)
{
NODE temp,cur;
int item, ele;
printf("\nEnter an element: ");
scanf("%d",&ele);
cur=header;
while(cur!=NULL && cur->info!=ele)
{
cur=cur->link;
}
if(cur == NULL)
{
printf("\nGiven element doesnt exist in the list... \n");
return header;
}
if(cur==header)
{
header=insertFront(header);
return header;
}
temp = (NODE)malloc(sizeof(struct node));
if(temp==NULL)
{
printf("\n Unable to allocate memory...\n");
return header;
}
else
{
printf("\nEnter an element to be inserted: ");
scanf("%d", &item);
temp->info = item;
temp->link = NULL;
temp->link = cur->link;
cur->link=temp;
header->info++;
return header;
}
}
// Delete node from the front end
NODE deleteFront(NODE header)
{
NODE temp;
if(header==NULL)
{
printf("\nThe list is empty.. no elements to delete...\n");
return header;
}
else
{
temp=header->link;
header->link= temp->link;
header->info--;
printf("\nElement being deleted is : %d\n", temp->info);
free(temp);
return header;
}
}
// Delete node from the rear end
NODE deleteRear(NODE header)
{
NODE cur,prev;
cur=header;
prev=header;
if(header==NULL)
{
printf("\nThe list is empty.. no elements to delete...\n");
return header;
}
else
{
cur=header->link;
while(cur->link!=NULL)
{
prev=cur;
cur=cur->link;
}
prev->link=NULL;
printf("\nElement being deleted is : %d\n", cur->info);
header->info--;
free(cur);
return header;
}
}
// Delete the element given from the linked list
NODE deleteElement(NODE header)
{
NODE cur = NULL, prev = NULL;
int item;
if(header==NULL)
{
printf("\nThe list is empty.. no elements to delete...\n");
return header;
}
printf("\nEnter the element to be deleted :");
scanf("%d",&item);
cur=header->link;
while(cur!=NULL && cur->info!=item)
{
prev=cur;
cur=cur->link;
}
if(cur==NULL)
{
printf("\nElement to be deleted doesnt exist in the list\n");
return header;
}
prev->link=cur->link;
printf("\nElement being deleted is : %d\n", cur->info);
header->info--;
free(cur);
return header;
}
// Delete element at the given position
NODE deletePos(NODE header)
{
NODE cur = NULL, prev = NULL;
int pos, k;
if(header==NULL)
{
printf("\nThe list is empty.. no elements to delete...\n");
return header;
}
printf("\nEnter the position of element to be deleted :");
scanf("%d",&pos);
if(pos==1)
{
header= deleteFront(header);
return header;
}
cur=header->link;
k=1;
while(cur!=NULL && k<pos)
{
prev=cur;
cur=cur->link;
k++;
}
if(cur==NULL)
{
printf("\nPosition doesnt exist in the list\n");
return header;
}
prev->link = cur->link;
printf("\nElement being deleted is : %d\n", cur->info);
header->info--;
free(cur);
return header;
}
// Delete element which is present before the given element
NODE deleteBeforeEle(NODE header)
{
NODE cur = NULL, prev = NULL, pprev = NULL;
int ele;
if(header==NULL)
{
printf("\nThe list is empty.. no elements to delete...\n");
return header;
}
printf("\nEnter an element whose left element to be deleted :");
scanf("%d",&ele);
cur=header->link;
while(cur!=NULL && cur->info!=ele)
{
pprev = prev;
prev=cur;
cur=cur->link;
}
if(cur==NULL)
{
printf("\nElement doesnt exist in the list\n");
return header;
}
if(pprev==NULL)
{
header = deleteFront(header);
return header;
}
pprev->link = prev->link;
printf("\nElement being deleted is : %d\n", prev->info);
header->info--;
free(prev);
return header;
}
// Delete the element which is present afer the given element
NODE deleteAfterEle(NODE header)
{
NODE cur = NULL, next = NULL;
int ele;
if(header==NULL)
{
printf("\nThe list is empty.. no elements to delete...\n");
return header;
}
printf("\nEnter an element whose right element to be deleted :");
scanf("%d",&ele);
cur=header->link;
while(cur!=NULL && cur->info!=ele)
{
cur=cur->link;
}
if(cur==NULL)
{
printf("\nElement doesnt exist in the list\n");
return header;
}
if(cur->link == NULL)
{
printf("\nNo elements to delete after the given element...");
return header;
}
next = cur->link;
cur->link = next->link;
printf("\nElement being deleted is : %d\n", next->info);
header->info--;
free(next);
return header;
}
// Compute length of the Singly Linked List
NODE findLength(NODE header)
{
NODE cur=NULL;
int length=0;
cur=header;
while(cur!=NULL)
{
length++;
cur=cur->link;
}
printf("\nLength of the linked list is : %d\n",length);
printf("Header info = %d\n",header->info);
return header;
}
// Search the given element in the linked list
NODE searchKey(NODE header)
{
NODE cur;
int key, pos = 1;
if(header==NULL)
{
printf("\n List is empty.. no elements to search...\n");
return header;
}
printf("\nEnter the key to be searched: ");
scanf("%d",&key);
cur=header->link;
while(cur!=NULL && cur->info!=key)
{
cur=cur->link;
pos++;
}
if(cur==NULL)
{
printf("\nKey doesnt exist in the given linked list...\n");
return header;
}
printf("\nKey is found successfully in the linked list at pos = %d\n",pos);
return header;
}
// Display the contents of the linked list
void display(NODE header)
{
NODE cur;
if(header == NULL)
printf("\nList is empty, no elements to display\n");
else
{
cur=header->link;
printf("\nElements in the linked list are : "); //Not displaying header info here
while(cur!=NULL)
{
printf("%d\t",cur->info);
cur=cur->link;
}
printf("\nHeader data= %d\n",header->info);
}
}
int main()
{
NODE header;
header=(NODE)malloc(sizeof(struct node));
header->info=0;
header->link=NULL;
int choice;
while(1)
{
printf("\n**********Singly Linked List with Header node ************\n");
printf("\n1. Insert Front\n2. Insert Rear\n3. Insert at given position\n4. Insert before element\n5. Insert after element\n");
printf("6. Delete Front\n7. Delete Rear\n8. Delete the given element\n9. Delete element at the given position\n10. Delete before the given element");
printf("\n11. Delete after the given element\n12. Compute length of linked list\n13. Search for the given key\n14. Display\n15. Exit");
printf("\n*****************************************\n");
printf("\nEnter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1: header = insertFront(header);
break;
case 2: header = insertRear(header);
break;
case 3: header = insertPos(header);
break;
case 4: header = insertBeforeEle(header);
break;
case 5: header = insertAfterEle(header);
break;
case 6: header = deleteFront(header);
break;
case 7: header = deleteRear(header);
break;
case 8: header = deleteElement(header);
break;
case 9: header = deletePos(header);
break;
case 10: header = deleteBeforeEle(header);
break;
case 11: header = deleteAfterEle(header);
break;
case 12: header = findLength(header);
break;
case 13: header = searchKey(header);
break;
case 14: display(header);
break;
case 15: printf("\n SLL program terminates now... Thank you...\n");
exit(0);
default: printf("\nInvalid choice... please enter valid choice....\n");
}
}
return 0;
}
