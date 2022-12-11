#include<stdio.h>
#include<string.h>
void push(int);
int pop();
int stack[10],top=-1;
void main()
{
char postfix[10];
int i,n,a,b,res;
printf("enter any postfix expression");
scanf("%s",postfix);
for(i=0;postfix[i]!='\0';i++)
{
  if(postfix[i]>='a'&&postfix[i]<='z')
   {
    printf("enter the value of %c",postfix[i]);
    scanf("%d",&n);
    push(n);
   }
   else
    {
     a=pop();
     b=pop();
     switch(postfix[i])
     {
     case '+':res=b+a;
	      push(res);
	      break;
     case '-':res=b-a;
	      push(res);
	      break;
     case '*':res=b*a;
	      push(res);
	      break;
     case '/':res=b/a;
	      push(res);
	      break;
     }
    }
}
printf("result=%d",pop());
}
void push(int x)
{
top++;
stack[top]=x;
}
int pop()
{
int r;
r=stack[top];
top--;
return r;
}



