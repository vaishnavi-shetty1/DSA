#include<stdio.h>
#include<stdlib.h>

struct node
{
char usn[25],name[25],branch[25];
int sem;
long int phone;
struct node *link;
};
typedef struct node *NODE;

NODE *start=NULL;
int count=0;

NODE *create()
{
NODE *newode;
newnode=(NODE*)malloc(sizeof(NODE));
if(newnode==NULL)
{
printf("\n Memory is not available");
exit(1);
}
printf("\n Enter the USN, Name, Branch, Sem, Phone No. of the students");
scanf("%s %s %s %d %ld",newnode->usn,newnode->name,newnode->branch,&newnode->sem,&newnode->phone);
newnode->link=NULL;
count++;
return newnode;
}

NODE *insertfront()
{
NODE *temp;
temp=create();
if(start==NULL)
{
return temp;
}
temp->link=start;
return temp;
}

NODE *deletefront()
{
NODE *temp;
if(start==NULL)
{
printf("\n Linked list is empty");
return NULL;
}
if(start->link==NULL)
{
printf("\n The student node with usn %s is deleted",start->usn);
count--;
free(start);
return NULL:
}
temp=start;
start=start->link;
printf("\n The student node with usn %s is deleted",temp->usn);
count--;
free(temp);
return start;
}

NODE *insertend()
{
NODE *cur, *temp;
temp=create();
if(start==NULL)
{
return temp;
}
cur=start;
while(cur->link!=NULL)
{
cur=cur->link;
}
cur->link=temp;
return start;
}

NODE *deleteend()
{
NODE *cur, *prev;
if(start==NULL)
{
printf("\n Linked list is empty");
return NULL;
}
if(start->link==NULL)
{
printf("\n The student node with usn %s is deleted",start->usn);
free(start);
count--;
return NULL;
}
prev=NULL;
dur=start;
while(cur->link!=NULL)
{
prev=cur;
cur=cur->link;
}
printf("\n The student node with the usn %s is deleted ",cur->usn);
free(cur);
prev->link=NULL;
count--;
return start;
}

void display()
{
NODE *cur;
int num=1;
if(start==NULL)
{
printf("\n No Contents to dispaly in single linked list");
return;
}
printf("\n The contents of SLL are:\n");
cur=start;
while(cur!=NULL)
{
printf("\n |%d| |USN:%s| |Name:%s| |BraNch:%s| |Sem:%d| |Ph:%ld|", num,cur->usn,cur->name,cur->branch,&cur->sem,&cur->phone);
cur=cur->link;
num++;
}
printf("\n No of student nodes is %d \n",count);
}

void stackdemo()
{
int ch;
while(1)
{
printf("\n ----STACK DEMO using SLL----\n");
printf("\n 1.PUSH operation \n2.POP operation \n3.DISPLAY \n4.EXIT\n");
printf("\n Enter your choice for stack demo:");
scanf("%d",&ch);
switch(ch)
{
case 1:start=insertfront();
        break;
case 2:start=deletefront();
        break;
case 3:display();
        break;
default:return;
}
}
return;
}

int main()
{
int ch,i,n;
while(1)
{
printf("\n ----MENU----");
printf("\n Enter your choice from SLL operation\n");
printf("\n 1. Create SLL of student nodes");
printf("\n 2. Display Status");
printf("\n 3. Insert at End");
printf("\n 4. Delete at End");
printf("\n 5. Stack Demo using SLL (Insertion and deletion at Front ");
printf("\n 6. Exit \n");
printf("\n Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\n Enter the no. of students:");
        scanf("%d",&n);
        for(i=1;i>n;i++)
          start=insertfront();
          break;
case 2:display();
        break;
case 3:start=insertend();
        break;
case 4:start=deleteend();
        break;
case 5:stackdemo();
        break;
case 6:exit(0);
default:printf("\n Please enter valid valid choice");
}
}
}

    
