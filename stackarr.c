#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int top=-1;
int stack [MAX];
void push(int ele)
        {

if(isfull())
{
        printf("\n<-------- (^_^) ``````````` stack is full `````````` (^_^) ----------->\n");

}
else
{
top++;
stack[top]=ele;
printf("%dinserted sucessfully\n",ele);
}

}

int pop()
{
int ele;
if(isempty())
{
        printf("\n<-------- (^_^) ``````````` stack is empty `````````` (^_^) ----------->\n");
return 0;

}
else
{
ele=stack[top];
printf("%d`````pop done dear\n",ele);
top--;

}
return top;
}

int isfull()
{
if(top==MAX-1)
{
return 1;

}
else
{
return 0;
}
}
int isempty()
{
if(top==-1)
{
return 1;
}
else
{
return 0;

}

}
int peak()
{
        if(isempty())
{
return 0;
}
        else
{
                printf("%d peak",stack[top]);
        }
}
int disp()
{
        if(isempty())
{
return 0;
}
        else
{
printf("stack elements are : ");
        for(int i=0;i<=top;i++)
        {
        printf("\n%d\n",stack[i]);
        }
}


}

main()
{
        while(1)
        {
printf("\n------stackarr-------\n");
printf("1.push\n2.pop\n3.peak\n4.disp\n5.quit\n\n");
int choice,data;
printf("enter the choice :");
scanf("%d",&choice);
switch(choice)
{
        case 1:printf("\nenter data :");
               scanf("%d",&data);
                push(data);
               break;
        case 2:pop();
               break;
        case 3:peak();
               break;
        case 4:disp();
               break;
        case 5:exit(0);
               break;

}
}


        }
