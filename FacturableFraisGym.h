#ifndef __FACTURABLEFRAISGYM_H__
#define __FACTURABLEFRAISGYM_H__

#include <iostream>
#include "ElementFacturable.h"

class FacturableFraisGym : public ElementFacturable {
    public:
        void calculer() {
            double tx_vente,tx_add, montant, frais_gym = 50;
            tx_vente = frais_gym * 0.08;
            tx_add = frais_gym * 0.07;
            montant = frais_gym + tx_vente + tx_add;
            cout << "Frais d'acces au gym avant taxe ... $" << frais_gym << endl;
            cout << "Taxe de vente de base ............. $" << tx_vente << endl;
            cout << "Taxe additionnelle ................ $" << tx_add << endl;
            cout << "Frais d'acces au gym apres taxe ... $" << montant << endl;
            cout << endl;
    }

};

#endif
