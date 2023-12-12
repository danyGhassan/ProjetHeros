#include "Heros.hpp"
#include <iostream>
using namespace std;

Character::Character(const string& nom, int PV, int energie,int attaque,int defense) : m_name(nom), m_pv(PV), m_energy(energie), m_attaque(attaque), m_defense(defense) {}

Character::~Character() {}

void Character::attack(Character& ennemi, int valeurAtack) {
    int damage = valeurAtack - ennemi.defend();
    ennemi.degat(damage);
}

int Character::defend() const {
    return 0;
}

string Character::get_name() const {
    return m_name;
}

void Character::degat(int degat) {
    m_pv -= degat;
    if (m_pv < 0) {
        m_pv = 0;
    }
}

//bool Character::enVie() {
//    return m_pv > 0;
//}

int Character::get_pv() {
    return m_pv;
}

int Character::get_attaque() const {
    return m_attaque;
}

int Character::get_defense() const {
    return m_defense;
}

void Character::perte_energie() {
    m_energy -= 5;
}

int Character::get_energie() {
    return m_energy;
}

//void Character::affichageStatus() {
//    std::cout << m_name << " - PV: " << m_pv << " Energy: " << m_energy << std::endl;
//}

Hero::Hero(const string& nom, int PV, int energie,int attaque,int defense) : Character(nom, PV, energie, attaque, defense) {}

Hero::~Hero() {}

Vilain::Vilain(const string& nom, int PV, int energie,int attaque, int defense) : Character(nom, PV, energie,attaque,defense) {}

Vilain::~Vilain() {}

