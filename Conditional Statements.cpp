//
// Created by maelb on 12/02/2018.
//
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    // your code goes here
    vector<string> nombre;
    nombre.push_back("one");
    nombre.push_back("two");
    nombre.push_back("three");
    nombre.push_back("four");
    nombre.push_back("five");
    nombre.push_back("six");
    nombre.push_back("seven");
    nombre.push_back("eight");
    nombre.push_back("nine");
    if (n <= 9){
        cout << nombre[n-1];
    }
    else{cout<<"Greater than 9";}
    return 0;
}
