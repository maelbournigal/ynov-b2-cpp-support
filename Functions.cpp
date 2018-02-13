//
// Created by maelb on 12/02/2018.
//
#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    int table[4] = {a,b,c,d};
    int max = 0;
    for( int i = 0; i < 4; i++){
        if(max<table[i]){
            max = table[i];
        }
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}

