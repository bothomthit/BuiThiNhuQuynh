
#define MAX 10000
struct stack {
    int top;
    int A[MAX];
};
typedef struct stack STACK;
void Init(STACK& s) {
    //Gán phần tử top của stack bằng -1 để khởi tạo
    s.top = -1;
}
int Empty(STACK s) {
    //Nếu phần tử top bằng -1 thì stack rỗng và return 1
    if (s.top == -1) {
        return 1;
    }
    //Ngược lại return 0
    return 0;
}
int IsFull(STACK s) {
    //Nếu ph﻿ần tử top bằng MAX - 1 thì stack đầy và return 1
    if (s.top == MAX - 1) {
        return 1;
    }
    //Ngược lại return 0
    return 0;
}
