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

public:
    Character(const string& nom, int PV, int energie);
    ~Character();
    void attack(Character& ennemi, int valeurAtack); //virtual
    int defend() const; //virtual
    void degat(int degat);
    bool isAlive() const;
    void affichageStatus() const;
};

class Hero : public Character {
public:
    Hero(const string& nom, int PV, int energie);
    ~Hero();
};

class Villain : public Character {
public:
    Villain(const string& nom, int PV, int energie);
    ~Villain();
};

#endif // HEROS_HPP
