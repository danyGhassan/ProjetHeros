#ifndef HEROS
#define HEROS
#include <string>
#include <iostream>

using namespace std;

class Character {

private : 
    string m_name;
    int m_pv;
    int m_energy;
    int m_attaque;
    int m_defense;

public:
    Character(const string& nom, int PV, int energie,int attaque, int defense);
    ~Character();
    void attack(Character& ennemi, int valeurAtack); //virtual
    int defend() const; //virtual
    void degat(int degat) ;
    //bool enVie();
    //void affichageStatus();
    int get_pv();
    int get_attaque() const ;
    int get_defense() const ;
    string get_name() const ;
};

class Hero : public Character {
public:
    Hero(const string& nom, int PV, int energie, int attaque, int defense);
    ~Hero();
};

class Vilain : public Character {
public:
    Vilain(const string& nom, int PV, int energie, int attaque, int defense);
    ~Vilain();
};

#endif // HEROS_HPP
