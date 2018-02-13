//
// Created by maelb on 12/02/2018.
//
#include <iostream>
#include <cstdio>
#include <vector>
#include<cmath>
using namespace std;


int main(){
    int a;
    cin >> a;
    int b;
    cin >> b;
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
    int x = a;
    vector<int> chiffre;
    int nbrChiffre = 0;
    while(x <= b){
        chiffre.push_back(x);
        x++;
        nbrChiffre++;
    }
    for(int i = 0; i < nbrChiffre; i++){
        int d = chiffre[i];
        int test = d%2;
        if ( d <= 9 ){
            cout << nombre[d-1] << endl;
        }else if( d > 9 && test == 0){
            cout<< "even" <<endl;
        }
        else{
            cout<< "odd" <<endl;
        }
    }

    return 0;
}


