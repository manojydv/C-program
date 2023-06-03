#include <stdio.h>
#include <stdlib.h> // It used for stack operaton
// struct means structure and sp means structure pointer
struct stack
{
    int size;
    int top;
    int *arr; /*arr arrow creation
    sp store the address*/
};
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {

        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created sucessfully\n");
    printf("Before pushing,Full:%d\n", isFull(sp));
    printf("Before pushing,Empty:%d\n", isEmpty(sp));
    push(sp, 56);
    push(sp, 56);
    push(sp, 56);
    push(sp, 56);
    push(sp, 56);
    push(sp, 56);
    push(sp, 56);
    push(sp, 56);
    push(sp, 56);
    printf("After pushing,Full:%d\n", isFull(sp));
    printf("After pushing,Empty:%d\n", isEmpty(sp));
    return 0;
};