#include <iostream>
using namespace std;

class Employe{
    protected :
        string nom;
        int id;
        float salaireDeBase;

    public :
        Employe(string n,int id,float salaire){
            nom = n;
            this->id = id;
            salaireDeBase=salaire;
        }

        virtual void afficherInfo(){
            cout<<"le nome de l'emplyer est: "<<nom
                <<" de l'id: "<<id
                <<" et salaire: "<<salaireDeBase<<endl;
        }
    ~Employe(){
        cout<<"fin";
    }
};

class Permanent : public Employe{
    float primeAnnuelle;

    public :
        Permanent(string n,int id,float salaire,float primeA) : Employe(n,id,salaire){
            primeAnnuelle = primeA;
        }

        void afficherInfo() override{
            cout<<"le nome de l'employe est: "<<nom
                <<" l'etat: permanent"
                <<" de l'id: "<<id
                <<" et salaire: "<<salaireDeBase
                <<" prime annuelle: "<<primeAnnuelle<<endl;
        }
};

class Contractuel : public Employe{
    int dureeContrat;
    float tauxHoraire;

    public :
        Contractuel(string n,int id,float salaire,int dureeC,float taux) : Employe(n,id,salaire){
            dureeContrat = dureeC;
            tauxHoraire = taux;
        }

        string getNom(){
            return nom;
        }

        float calculerSalaireMensuel(int heures) {
            return heures * tauxHoraire;
        }

        void afficherInfo() override{
            cout<<"le nome de l'employer est: "<<nom
                <<" l'etat: contractuel"
                <<" de l'id: "<<id
                <<" et salaire: "<<salaireDeBase
                << " Durée du contrat : " << dureeContrat << " mois"
                << " Taux horaire : " << tauxHoraire << " DH/h"<< endl;
        }
};

int main(int argc, char const *argv[])
{
    Permanent p1("Rida", 101, 2500.0, 500.0);
    Contractuel c1("karim", 202, 0.0, 6, 20.0);
    Permanent p2("Hassan", 303, 2700.0, 800.0);

    p1.afficherInfo();
    p2.afficherInfo();
    c1.afficherInfo();
    cout<<"Salaire mensuel de "<<c1.getNom()<<" est: "<<c1.calculerSalaireMensuel(120)<<"DH pour 120 heures"<<endl;
    return 0;
}
