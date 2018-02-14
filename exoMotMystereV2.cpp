//
// Created by maelb on 14/02/2018.
//

#include "exoMotMystereV2.h"
#include <iostream>
#include <ctime>
#include <iostream>
#include <fstream>
#include <vector>
#include <wchar.h>

using namespace std;


int main(){
    srand(time(0));
    bool continuer = 0;
    string reponseContinuer = "non";
    string const monFichier ="../dictionnaire.txt" ;
    do {
        fstream monFlux(monFichier.c_str());
        string mots;
        /*cout<<"Saisissez un mot ?"<< endl;
        cin >> mots;*/

        if (monFlux){
            string line;
            vector<string> dictionnaire;
            dictionnaire.clear();
            string reponse;
            string motsMelange = "";
            int nbrAleatoire;
            int nbrAleatoireDictionnaire;
            int nbrCoup = 0;
            while (getline(monFlux, line)){
                dictionnaire.push_back(line);
            }
            nbrAleatoireDictionnaire = rand()%dictionnaire.size();
            mots  = dictionnaire[nbrAleatoireDictionnaire];
            monFlux.close();
            monFlux.clear();
            cout<<mots<<endl;
            //mots = "abbatial";
            string motsUtilisateur = mots;
            int longueurMots = (mots.length()-1);
            //cout<<mots<<endl;
            motsMelange.clear();
            while (longueurMots >= 1 ) {
                nbrAleatoire = rand() % longueurMots;
                if(nbrAleatoire > 0){
                    motsMelange = motsMelange + mots[(nbrAleatoire-1)];
                    mots.erase((nbrAleatoire-1), 1);
                    longueurMots = mots.length();
                    //cout<<motsMelange<<endl;
                } else{
                    motsMelange = motsMelange + mots[nbrAleatoire];
                    mots.erase(nbrAleatoire, 1);
                    longueurMots = mots.size();
                    //cout<<motsMelange<<endl;
                }
            }
            //cout<<motsMelange<<endl;
            dictionnaire.clear();
            do {
                cout << "Quel est ce mot: " << motsMelange << endl;
                cin >> reponse;
                int test;
                int test2;
                int valeurAscii[motsUtilisateur.length()];
                int valeurAscii2[reponse.length()];
                for (int i=0;i<motsUtilisateur.length();i++)
                {
                    test = motsUtilisateur[i];
                    valeurAscii[i] = test;
                }
                for (int i=0;i<reponse.length();i++)
                {
                    test2 = reponse[i];
                    valeurAscii2[i] = test2;
                }
                //suppression d'un caractere vide
                motsUtilisateur.pop_back();

                //boucle pour verifier le resultat
                int a(0);
                if (reponse.length() == (motsUtilisateur.length())){
                    int i = 0;
                    while (i < reponse.length()){
                        if (valeurAscii[i] != valeurAscii2[i]){
                            cout<<"test"<<endl;
                            a*=0;
                        } else{
                            cout<<"victoire"<<endl;
                            a+=1;
                        }
                        i++;
                    }
                } else{
                    cout<< "Utiliser toutes les lettres!"<<endl;
                }
                if (a>0) {
                    cout << "Bravo" << endl;
                    reponse = motsUtilisateur;
                } else {
                    cout << "Ce n'est pas le mots" << endl;
                    nbrCoup++;
                }
            } while (reponse != motsUtilisateur && nbrCoup < 5);
            cout << "Souhaitez vous faire une nouvelle partie ?" <<endl;
            cin >> reponseContinuer;
            if (reponseContinuer == "oui"){
                continuer = 1;
            } else{
                continuer = 0;
            }
        } else{
            cout << "Impossible d'accéder au fichier";
        }
        mots.clear();
    }while (continuer == 1);
    return 0;
}