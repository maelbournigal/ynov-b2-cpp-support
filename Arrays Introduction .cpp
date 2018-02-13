//
// Created by maelb on 12/02/2018.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int a;
    cin >> n;
    int table[n];
    for(int i=0; i<n; i++){
        cin >> a;
        table[i] = a;
    }
    int moitier = n/2;
    int result[n];
    for(int i = 0; i<n; i++){
        result[i] = table[n-(i+1)];
    }
    for(int i=0; i<n; i++){
        cout << result[i] << " ";
    }
    return 0;
}
