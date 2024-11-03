#include<stdio.h>
#include<stdlib.h>

struct node
{
char ssn[25],name[25],dept[25],designation[25];
int sal;
long int phone;
struct node *llink;
struct node *rlink;
};
typedef struct node NODE;

NODE *first=NULL;
int count=0;

NODE *create()
{
NODE *newnode;
newnode=(NODE*)malloc(sizeof(NODE));
if(newnode==NULL)
{
printf("\nRunning out of Memory");
exit(0);
}
printf("\n Enter the SSN, Name, Department,Designation,Salary, Phone No. of the empolyees:\n");
scanf("%s %s %s %s %d %ld",newnode->ssn,newnode->name,newnode->dept,newnode->designation,&newnode->sal,&newnode->phone);
newnode->llink=NULL;
newnode->rlink=NULL;
count++;
return newnode;
}

NODE *insertfront()
{
NODE *temp;
temp=create();
if(first==NULL)
{
return temp;
}
temp->rlink=first;
first->llink=temp;
return temp;
}

void display()
{
NODE *cur;
int nodeno=1;
cur=first;
printf("\n No Contents to dispaly in DLL");
while(cur!=NULL)
{
printf("\n ENode%d |SSN:%s| |Name:%s| |Department:%s| |Designation:%s| |Salary:%d| |Ph:%ld|",nodeo ,cur->ssn,cur->name,cur->dept,cur->designation,cur->sal,cur->phone);
cur=cur->rlink;
nodeno++;
}
printf("\n No of employee nodes is %d \n",count);
}

NODE *deletefront()
{
NODE *temp;
if(first==NULL)
{
printf("\nDoubly linked list is empty");
return NULL;
}
if(first->rlink==NULL)
{
printf("\n The employee node with ssn %s is deleted",first->ssn);
free(first);
count--;
return NULL:
}
temp=first;
first=first->rlink;
temp->rlink=NULL;
first->llink=NULL;
printf("\n The employee node with ssn %s is deleted",temp->ssn);
free(temp);
count--;
return first;
}

NODE *insertend()
{
NODE *cur, *temp;
temp=create();
if(first==NULL)
{
return temp;
}
cur=first;
while(cur->rlink!=NULL)
{
cur=cur->rlink;
}
cur->rlink=temp;
  temp->llink=cur;
return firstt;
}

NODE *deleteend()
{
NODE *cur, *prev;
if(first==NULL)
{
printf("\nDoubly linked list is empty");
return NULL;
}
if(first->rlink==NULL)
{
printf("\n The employee node with ssn %s is deleted",first->ssn);
free(first);
count--;
return NULL;
}
prev=NULL;
cur=first;
while(cur->rlink!=NULL)
{
prev=cur;
cur=cur->rlink;
}
cur->llink=NULL;
printf("\n The employee node with the ssn %s is deleted ",cur->ssn);
free(cur);
prev->rlink=NULL;
count--;
return first;
}

void deqdemo()
{
int ch;
while(1)
{
printf("\n ----DEMO DOUBLD ENDED QUEUE OPERATION----\n");
printf("\n 1.Insert Queue Front \n2.Delete Queue Front\n 3.Insert Queue Rear\n4.Delete Queue Rear \n5.Display Status \n6.EXIT\n");
printf("\n Enter your choice for demo:");
scanf("%d",&ch);
switch(ch)
{
case 1:first=insertfront();
break;
case 2:first=deletefront();
break;
case 3:first=insertend();
  break;
case 4:first=deleteend();
  break;
case 5:display();
        break;
default:return;
}
}
}

int main()
{
int ch,i,n;
while(1)
{
printf("\n ----MENU----");
printf("\n Enter your choice from DLL operation\n");
printf("\n 1. Create DLL of student nodes");
printf("\n 2. Display Status");
printf("\n 3. Insert at End");
printf("\n 4. Delete at End");
printf("\n 3. Insert at Front");
printf("\n 4. Delete at Front");
printf("\n 5. Double Ended Queue Demo using DLL ");
printf("\n 6. Exit \n");
printf("\n Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\n Enter the no. of employees:");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
          first=insertend();
          break;
case 2:display();
        break;
case 3:first=insertend();
        break;
case 4:start=deleteend();
        break;
case 5:first=insertfront();
        break;
case 6:start=deletefront();
        break;
case 7:deqdemo();
        break;
case 8:exit(0);
default:printf("\n Please enter valid valid choice");
}
}
}

    
