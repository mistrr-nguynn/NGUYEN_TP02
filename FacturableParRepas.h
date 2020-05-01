#ifndef __FACTURABLEPARREPAS_H__
#define __FACTURABLEPARREPAS_H__

#include <iostream>
#include "ElementFacturable.h"

class FacturableParRepas : public ElementFacturable {
    private:
     int repas;

    public:
        FacturableParRepas(int nbRepas) {
            this->repas = nbRepas;
        }

        int getRepas() { return this->repas; }

        void calculer() {
            double tx_vente, tx_heb, montant, total, prix_repas = 20;
            montant = repas* prix_repas;
            tx_vente = montant * 0.08;
            tx_heb = montant * 0.05;
            total = montant + tx_vente + tx_heb;
            cout << "Nombre de repas (20$ par repas) ... " << getRepas() << endl;
            cout << "Montant pour les repas avant tx ... $" << montant << endl;
            cout << "Taxe de vente ..................... $" << tx_vente << endl;
            cout << "Taxe d'hebergement ................ $" << tx_heb << endl;
            cout << "Montant pour les repas apres tx ... $" << total << endl;
            cout << endl;
        }

};

#endif