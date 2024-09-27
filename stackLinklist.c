 #include<stdio.h>
#include<stdlib.h>
   struct node
{
   int data;
   struct node *next;
};
  struct node *top=0;
  void push(int x)
{
   struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
       newnode->data = x;
       newnode->next = top;
       top = newnode;
 }
    void display()
  {
     struct node *temp;
     temp = top;
     if(top = 0){
     printf("stack is empty\n");
        }
    else{
    while(temp!=0){
    printf("%d\n",temp->data);
    temp= temp->next;
    }
  }
}
    void pop()
  {
     struct node *okay;
     okay = top;
    printf("the pop element is %d\n",top->data);
    top = top->next;
   free(okay);
  }
  void main()
  {
     int choice,y;
    while(1){
    printf("enter the choice\n");
    printf("1: Push\n");
    printf("2: pop\n");
    printf("3: display\n");
    printf("4: exit\n");
    scanf("%d",&choice);
   switch(choice)
   {
     case 1:
            printf("enter the element\n");
            scanf("%d",&y);
           push(y);
        break;
    case 2: pop();
         break;
    case 3: display();
        break;
    case 4: exit(0);
           break;
  default: printf("wrong choice\n");
  }
}
}   
 
    
  
  