#ifndef __FACTURABLEPARNUIT_H__
#define __FACTURABLEPARNUIT_H__

#include <iostream>
#include "ElementFacturable.h"

class FacturableParNuit : public ElementFacturable {
    private:
        int nuit;

    public:
        FacturableParNuit(int n) {
            this->nuit = n;
        }

        int getNuit() const { return this->nuit; }

        void calculer() {
            double tx_vente, tx_heb, montant, total, prix_nuit = 100;
            montant = nuit * prix_nuit;
            tx_vente = montant * 0.08;
            tx_heb = montant * 0.05;
            total = montant + tx_vente + tx_heb;

            cout << "Nombre de nuits (100$ par nuit) ... " << getNuit() << endl;
            cout << "Montant pour les nuits avant tx ... $" << montant << endl;
            cout << "Taxe de vente ..................... $" << tx_vente << endl;
            cout << "Taxe d'hebergement ................ $" << tx_heb << endl;
            cout << "Montant pour les nuits apres tx ... $" << total << endl;
            cout << endl;
        }

};

#endif
