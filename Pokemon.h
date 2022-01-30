//
// Created by evski on 27/01/2022.
//

#include <iostream>

#ifndef POKEMON_POKEMON_H
#define POKEMON_POKEMON_H

#endif //POKEMON_POKEMON_H

class Pokemon {
    std::string name;

    double baseHealth;
    double currentHealth;

    double attack;
    double defense;
    double speed;

    bool isDead = false;

public:
    Pokemon(){

    }

    Pokemon(std::string _name, double _attack, double _defense, double _speed, double _baseHealth){
        name = _name;
        attack = _attack;
        defense = _defense;
        speed = _speed;

        baseHealth = _baseHealth;
        currentHealth = baseHealth;
    }

    //Setters
    void TakeHealth(double amt){
        currentHealth += amt;

        if(currentHealth <= 0){
            isDead = true;
        }
    }

    //Getters
    void PrintInfo(){
        std::cout << "---------------------------------------\n";
        std::cout << name << "\n";
        std::cout << "Current Health: " << currentHealth << "\n";
        std::cout << "Attack:" << attack << "\n";
        std::cout << "Defense:" << defense << "\n";
        std::cout << "Speed:" << speed << "\n";
        std::cout << "---------------------------------------\n";
    }

    bool GetLifeStatus(){
        return isDead;
    }

    std::string GetName(){
        return name;
    }

    double GetAttack(){
        return attack;
    }

    double GetDefense(){
        return defense;
    }

    double GetSpeed(){
        return speed;
    }
};