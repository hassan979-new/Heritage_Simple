#include <iostream>
using namespace std;

class Compte
{
protected:
    int numero;
    double solde;

public:
    Compte(int num, double s)
    {
        numero = num;
        solde = s;
    }

    void deposer(double montant)
    {
        if (montant > 0)
        {
            solde += montant;
            cout << "le montant [" << montant << "] a ete deposer, le solde : " << solde << endl;
        }
    }

    void retirer(double montant)
    {
        if (montant > 0 && solde >= montant)
        {
            solde -= montant;
            cout << "le montant [" << montant << "] a ete retirer, le solde : " << solde << endl;
        }
        else
        {
            cout << "le solde est insuffisant" << endl;
        }
    }

    void afficherSolde()
    {
        cout << "Solde du compte " << numero << " : " << solde << endl;
    }
};

class CompteEpargne : public Compte
{
    double tauxInteret;

public:
    CompteEpargne(int n, double s, double taux) : Compte(n, s)
    {
        tauxInteret = taux;
    }

    void calculerInteret()
    {
        double interet = solde * tauxInteret / 100.0;
        solde += interet;
        cout << "interet ajoute : " << interet << ", solde : " << solde << endl;
    }
};

int main(int argc, char const *argv[])
{
    CompteEpargne monCompte(12345, 1000.0, 5.0);

    monCompte.afficherSolde();
    monCompte.deposer(500);
    monCompte.retirer(200);
    monCompte.calculerInteret();

    monCompte.afficherSolde();

    return 0;
}
