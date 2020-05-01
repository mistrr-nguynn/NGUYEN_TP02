#ifndef __FACTURABLEFRAISSPA_H__
#define __FACTURABLEFRAISSPA_H__

#include <iostream>
#include "ElementFacturable.h"

class FacturableFraisSpa : public ElementFacturable {
    public:

        void calculer() {
            double tx_vente, tx_add, montant, frais_spa = 75;
            tx_vente = frais_spa * 0.08;
            tx_add = frais_spa * 0.07;
            montant = frais_spa + tx_vente + tx_add;
            cout << "Frais d'acces au spa avant taxe ... $" << frais_spa << endl;
            cout << "Taxe de vente ..................... $" << tx_vente << endl;
            cout << "Taxe additionnelle ................ $" << tx_add << endl;
            cout << "Frais d'acces au spa apres taxe ... $" << montant << endl;
            cout << endl;
    }

};

#endif