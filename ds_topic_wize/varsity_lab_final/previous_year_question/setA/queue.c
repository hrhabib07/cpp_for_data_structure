#include<stdio.h>
int main(){
    int a[1001];
    int front = -1, rear = -1;
    int choice = 99; 
    while (choice)
    {
        printf("1. Enqueue\n2. Dequeue\n3. Peek/Front\n4. Check if Empty\n5. Display\n6. Exit\nEnter your choice: ");
        scanf("%d",&choice);
        if(choice == 1 ){
            printf("Enter the value : ");
            int x; 
            scanf("%d",&x);
            if(front==-1 && rear == -1){
                front = 0;
                rear = 0;
                a[rear]= x;
            } else{
                rear++; 
                a[rear]= x;
            }
            printf("\n");
        } else if(choice == 2){
            if(front==-1 && rear == -1){
                printf("Queue is empty!\n");
            } else if(front==rear){
                front = -1;
                rear = -1;
            }
             else{
                front++;
            }
        } else if( choice == 3){
             printf("%d\n",a[front]);
        } else if(choice == 4){
            if(front == -1 && rear == -1) printf("Empty!\n");
            else printf("Not empty!\n");
        } else if(choice==5){
            for (int i = front; i <= rear; i++)
            {
                printf("%d ",a[i]);
            }
            printf("\n");
        } else{
            break;
        }
    }
    return 0;
}