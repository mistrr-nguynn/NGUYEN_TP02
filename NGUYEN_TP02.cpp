// NGUYEN_TP02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

#include "ElementFacturable.h"
#include "FacturableParNuit.h"
#include "FacturableParRepas.h"
#include "FacturableFraisSpa.h"
#include "FacturableFraisGym.h"

int main() {

    map<int, ElementFacturable*> facture;

    cout << ("Bienvenue chez X Hotel\n");
    cout << ("--------------------------------\n");
   
    int nb1;
    do {
        cout << ("1. Combien de nuits souhaitez-vous reserver? (100$ par nuit) ");
        cin >> nb1;
    } while (nb1 < 1);
        cout << "Reservation pour " << nb1 << " nuits reussie!\n";
        ElementFacturable* nuits = new FacturableParNuit(nb1);
        pair<int, ElementFacturable*> f1(1, nuits);
        facture.insert(f1);
        cout << endl;  

    int nb2;
    cout << ("2. Combien de repas souhaitez-vous avoir? (20$ par repas) ");
    cin >> nb2;
    if (nb2 == 0) {
        cout << "Aucun repas durant votre sejour!\n";
        cout << endl;
    } else {
    cout << "Vous avez ajoute " << nb2 << " repas a votre sejour!\n";
    ElementFacturable* repas = new FacturableParRepas(nb2);
    pair<int, ElementFacturable*> f2(2, repas);
    facture.insert(f2);
    cout << endl;
    }

    int nb3;
    cout << ("3. Souhaitez-vous avoir acces au spa durant votre sejour? (1-Oui/2-Non) ");
    cin >> nb3;
    if (nb3 == 1) {
        cout << "Vous avez maintenant acces au spa!\n";
        ElementFacturable* spa = new FacturableFraisSpa();
        pair<int, ElementFacturable*> f3(3, spa);
        facture.insert(f3);     
    }
    else
        cout << "Vous n'avez pas acces au spa!\n";
        cout << endl;

    int nb4;
    cout << ("4. Souhaitez-vous avoir acces au gym durant votre sejour? (1-Oui/2-Non) ");
    cin >> nb4;
    if (nb4 == 1) {
        cout << "Vous avez maintenant acces au gym!\n";
        ElementFacturable* gym = new FacturableFraisGym();
        pair<int, ElementFacturable*> f4(4, gym);
        facture.insert(f4);
        cout << endl;
    }
    else
        cout << "Vous n'avez pas acces au gym!\n";
        cout << endl;
     
    cout << "FACTURE\n";
    cout << "-------------";
    cout << setprecision(2) << fixed << endl;
        for (map<int, ElementFacturable*>::iterator it = facture.begin(); it != facture.end(); it++)
        it->second->calculer();

    for (map<int, ElementFacturable*>::iterator it = facture.begin(); it != facture.end(); it++) {
        delete it->second;
        it->second = NULL;
    }
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
