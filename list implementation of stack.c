#include<stdio.h>
#include<conio.h>
#define MAX 20

void create();
void insertion();
void deletion();
void search();
void display();

int n,b[MAX],i,pos,s,x;

void main()
{
    char g;
    do
    {
        int ch;
        printf("1-Create\n2-Delete\n3-Search\n4-Insert\n5-Display\n");
        printf("\nEnter the corresponding choice: ");
        scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        create();
        break;
    case 2:
        deletion();
        break;
    case 3:
        search();
        break;
    case 4:
        insertion();
        break;
    case 5:
        display();
        break;
    default:
        printf("\n Enter the correct choice:");
    }
    printf("\n Do you wish to continue? : ");
    scanf("\n%c", &g);
    }
    while(g=='y'||g=='Y');
    getch();
}
void create()
{
    printf("Enter the number of values: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the (%d)th value:",i+1);
        scanf("%d",&b[i]);
    }
}
void deletion()
{
    printf("\nEnter the position where you wish to delete the value: \n");
    scanf("%d",&pos);
    if(pos>n)
    {
        printf("\nValue does not exist at this position\n");
    }
    else
    {
        for(i=pos;i<n;i++)
        {
            b[i-1]=b[i];
        }
        n=n-1;
    }
}
void search()
{
    printf("\nEnter the value whose position is to be searched: \n");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(b[i]==s)
        {
            printf("\nValue is in the (%d)th position",i+1);
        }
        /*else
        {
            printf("\nInvalid value");
        }*/
    }
}
void insertion()
{
    printf("\nEnter the position to which you wish to insert the value: ");
    scanf("%d",&pos);
    if(pos>n+1)
    {
        printf("\nInvalid position\n");
    }
    /*else if(pos=n+1)
    {
        n=n+1;
        printf("\nEnter the value: ");
        scanf("%d",&b[n-1]);
    }*/
    else
    {
    n=n+1;
    for(i=n;i>=pos-1;i--)
    {
        b[i+1]=b[i];
    }
    printf("\nEnter the value: ");
    scanf("%d",&b[pos-1]);
    }
}
void display()
{
    printf("\nElements of list ADT(abstract datatype) are: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",b[i]);
    }
}