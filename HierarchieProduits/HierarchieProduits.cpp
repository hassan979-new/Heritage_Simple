#include <iostream>
using namespace std;

class Produit
{
protected:
    string nom;
    float prix;

public:
    Produit(string n, float p)
    {
        nom = n;
        prix = p;
    }

    virtual void afficherInfos()
    {
        cout << "Nom Produit: " << nom << ", Prix : " << prix << "DH" << endl;
    }
};

class ProduitAlimentaire : public Produit
{
    string dateExpiration;

public:
    ProduitAlimentaire(string n, float p, string dateE) : Produit(n, p)
    {
        dateExpiration = dateE;
    }

    void afficherInfos() override
    {
        cout << "Nom Produit: " << nom << ", Prix : " << prix << "DH " << "Date d'experation: " << dateExpiration << endl;
    }
};

class ProduitElectronique : Produit
{
    int garantie;

public:
    ProduitElectronique(string n, float p, int g) : Produit(n, p)
    {
        garantie = g;
    }

    void afficherInfos() override
    {
        cout << "Nom Produit: " << nom << ", Prix : " << prix << "DH " << "garentie jusqu'a: " << garantie << " mois" << endl;
    }
};

int main(int argc, char const *argv[])
{
    ProduitAlimentaire pomme("Pomme", 1.5, "2025-12-31");
    ProduitElectronique smartphone("Smartphone", 699.99, 24);

    pomme.afficherInfos();
    smartphone.afficherInfos();

    return 0;
}
