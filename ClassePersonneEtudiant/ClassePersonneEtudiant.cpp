#include <iostream>
using namespace std;

class Personne{
    string nom;
    int age;

    public :
        Personne(string n,int a){
            nom = n;
            age = a;
        }

        void afficherP(){
            cout<<"le nom: "<<nom<<endl
                <<"l'age: "<<age<<endl;
        }

    
    ~Personne(){
        cout<<"fin"<<endl;
    }
};

class Etudiant : public Personne{
    string niveau;

    public :
        Etudiant(string n,int a,string niv) : Personne(n,a){
            niveau= niv;
        }

        void afficher(){
            cout<<"l'etudiant ";
            this->afficherP();
            cout<<"le niveau: "<<niveau<<endl;
        }

    ~Etudiant(){
        cout<<"fin"<<endl;
    }
};

int main(int argc, char const *argv[])
{
    Etudiant e1("Hassan",21,"bac+2");
    e1.afficher();
    return 0;
}
