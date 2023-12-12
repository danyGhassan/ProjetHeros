#include "heros.hpp"

void liste_vilains() {
    cout << endl << "BlackGoku" << endl;
}

void liste_heros() {
    cout << endl << "Goku" << endl;
}

void liste_defense_hero() {
    cout << endl << "protection" << endl;
}

void liste_defense_vilain() {
    cout << endl << "protection" << endl;
}

void liste_attaque_hero() {
    cout << endl << "kamehameha";
}

void liste_attaque_vilain() {
    cout << endl << "kamehameha";
}

int main() {
    string nom1;
    string nom2;
    int info;
    string choixHeros;
    string choixVilain;
    Character* hero = nullptr;
    Character* vilain = nullptr;
    cout << "Nom joueur 1 : ";
    cin >> nom1;
    cout << endl << "Nom joueur 2 : ";
    cin >> nom2;
    cout << endl << nom1 << " Voulez vous etre un heros(1) ou un vilain(2) ? ";
    cin >> info;
    if (info == 1) {
        liste_heros();
        cout << endl << "Choisissez l'un de ses heros la : ";
        cin >> choixHeros;
        if (choixHeros == "Goku") {
           hero = new Hero("Goku", 100, 50,20,5);
        }
    }
    if (info == 2) {
        liste_vilains();
        cout << endl << "Choisissez l'un de ses vilains : ";
        cin >> choixVilain;
        if (choixVilain == "BlackGoku") {
            vilain = new Vilain("BlackGoku", 100, 50,25,10);
        }
    }
    while (hero->get_pv() > 0 && vilain->get_pv() > 0) {
        string action;
        cout << hero << " Voulez vous attaquer ou defendre ? " << endl;
        cin >> action;
        if (action == "defendre") {
            liste_defense_hero();
            string def;
            cin >> def;
        }
        if (action == "attaque") {
            liste_attaque_vilain();
            string att;
            cin >> att;
            hero->degat(15);
        }
    }


    return 0;
}
