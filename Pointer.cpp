//
// Created by maelb on 12/02/2018.
//
#include <stdio.h>
#include <cmath>

void update(int *a,int *b) {
    // Complete this function
    int c, d;
    int *pc = &c, *pd = &d;
    *pc = *a;
    *pd = *b;
    *a = *pc + *pd;
    *b = abs(*pc - *pd);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
