#include <stdio.h>
#include <stdbool.h>

int stack[100];
int top = 0;

void push(int item) {
    if (top == 99) {
        printf("Error: stack is full\n");
        return;
    }
    stack[top++] = item;
}

int pop() {
    if (top == 0) {
        printf("Error: stack is empty\n");
        return -1;
    }
    return stack[--top];
}

bool is_empty() {
    return top == 0;
}

int main() {
    int num_items;
    printf("Enter the number of items to push onto the stack: ");
    scanf("%d", &num_items);

    for (int i = 0; i < num_items; i++) {
        int item;
        printf("Enter item %d: ", i + 1);
        scanf("%d", &item);
        push(item);
    }

    printf("Items popped in LIFO order:\n");
    while (!is_empty()) {
        printf("%d\n", pop());
    }

   
}
