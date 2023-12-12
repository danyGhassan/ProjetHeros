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
           vilain = new Vilain("BlackGoku", 100, 50, 25, 10);
        }
    }
    if (info == 2) {
        liste_vilains();
        cout << endl << "Choisissez l'un de ses vilains : ";
        cin >> choixVilain;
        if (choixVilain == "BlackGoku") {
            vilain = new Vilain("BlackGoku", 100, 50,25,10);
            hero = new Hero("Goku", 100, 50, 20, 5);
        }
    }
    while ((hero->get_pv() > 0) && (vilain->get_pv() > 0)) {
        string attaque;
        cout << hero->get_name() << " choisissez une attaque : " << endl ;
        liste_attaque_hero();
        cout << endl;
        cin >> attaque;
        string defense;
        cout << vilain->get_name() << " choisissez une defense : " << endl;
        liste_defense_vilain();
        cin >> defense;
        if (attaque == "kamehameha") {
            hero->attack(*vilain,vilain->get_defense());
            cout << vilain->get_name() << " : " << vilain->get_pv() << "PV ." << endl;
        }

        string atta;
        cout << vilain->get_name() << " choisissez une attaque : " << endl;
        liste_attaque_vilain();
        cout << endl;
        cin >> atta;
        string def;
        cout << hero->get_name() << " choisissez une defense : " << endl;
        liste_defense_hero();
        cin >> defense;
        if (attaque == "kamehameha") {
            vilain->attack(*hero, hero->get_defense());
            cout << hero->get_name() << " : " << hero->get_pv() << "PV ." << endl;
        }
    }
    if (vilain->get_pv() > 0) {
        cout << vilain->get_name() << " vient de gagner le combat et " << hero->get_name() << " a perdu " << endl;
    }
    if (hero->get_pv() > 0) {
        cout << hero->get_name() << " vient de gagner le combat et " << vilain->get_name() << " a perdu " << endl;
    }


    return 0;
}
