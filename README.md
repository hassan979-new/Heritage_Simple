
# 🧮 **Héritage simple**

## 📘 Description

Ce document regroupe plusieurs projets C++ illustrant des concepts avancés de la programmation orientée objet :

- Héritage simple

- Surcharge de méthodes virtuelles (override)

- Encapsulation et spécialisation des classes

- Calculs dynamiques (intérêts, salaires, garanties)

- Utilisation de pointeurs et de références implicites
## 📂 Project Structure
````
projets
├── PersonneEtudiant/
│   └── personne_etudiant.cpp
├── CompteEpargne/
│   └── compte_epargne.cpp
├── Produits/
│   └── produits.cpp
├── Employes/
│   └── employes.cpp
└── README.md
````


## ⚙️ Features

### **1.** Personne & Étudiant – Héritage simple
Classe Personne :

- Attributs : nom, age

- Méthode afficherP() pour afficher les informations

Classe Etudiant hérite de Personne :

- Attribut : niveau

- Méthode afficher() qui appelle afficherP() et ajoute le niveau

### **2.** Compte & Compte Épargne – Spécialisation bancaire
Classe Compte :

- Attributs : numero, solde

- Méthodes : deposer(), retirer(), afficherSolde()

Classe CompteEpargne hérite de Compte :

- Attribut : tauxInteret

- Méthode calculerInteret() → ajoute les intérêts au solde

### **3.** Produits – Polymorphisme et spécialisation
Classe Produit :

- Attributs : nom, prix

- Méthode virtuelle afficherInfos()

Classe ProduitAlimentaire hérite de Produit :

- Attribut : dateExpiration

Redéfinit afficherInfos()

Classe ProduitElectronique hérite de Produit :

Attribut : garantie

Redéfinit afficherInfos()

### **4.** Employés – Polymorphisme et calculs spécifiques

Classe Employe :

- Attributs : nom, id, salaireDeBase

- Méthode virtuelle afficherInfo()

Classe Permanent hérite de Employe :

- Attribut : primeAnnuelle

- Redéfinit afficherInfo()

Classe Contractuel hérite de Employe :

- Attributs : dureeContrat, tauxHoraire

- Méthodes : calculerSalaireMensuel(), getNom(), afficherInfo()
## 🖥️ Example Execution

### Classe Personne et Etudiant : 

### Compte bancaire :

### Hiérarchie de produits :

### Système de gestion d'employés :
## 💡 Concepts Practiced

- L’héritage pour structurer les relations entre classes

- Le polymorphisme pour adapter le comportement selon le type

- La spécialisation des méthodes pour des cas métiers concrets

- L’encapsulation et la modularité du code
## 🧑‍💻 Author

- 👤 Agouram Hassan
- 🏫 Fondamentaux et Concepts Avancés de la Programmation Java – TP1
- 🎓 Instructor	Mr.LACHGAR
- 📅 25	October 2025
