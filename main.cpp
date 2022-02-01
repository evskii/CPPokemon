#include <iostream>
#include "Pokemon.h"
#include <vector>

//Methods declaration
void InitGame();
void Battle();

//Variables
std::vector<Pokemon> allPokemon; //Vector of all Pokemon in the game
int myCurrent; //Index reference of our current Pokemon
int enemyCurrent; //Index reference of enemies current Pokemon

int main() {
    std::cout << "Welcome to C++ Pokemon\n";

    InitGame();

}

void InitGame(){
    //Loads in our Pokemon
    allPokemon.push_back(Pokemon("Charizard", 84, 78, 100, 78));

    allPokemon.push_back(Pokemon("Venasaur", 100, 83, 80, 80));

    allPokemon.push_back(Pokemon("Wartortle", 63, 80, 58, 59));

    allPokemon.push_back(Pokemon("Typhlosion", 84, 78, 100, 78));

    allPokemon.push_back(Pokemon("Feraligatr", 105, 100, 78, 85));

    allPokemon.push_back(Pokemon("Meganium", 82, 100, 80, 80));

    myCurrent = rand() % allPokemon.size();
    std::cout << "Total Pokemon: " << allPokemon.size() << "\n";
    std::cout << "Your current Pokemon: \n";
    allPokemon[myCurrent].PrintInfo();

    Battle();
}

void Battle(){
    //Get the enemy pokemon
    if(enemyCurrent == 0){
        enemyCurrent = rand() % allPokemon.size();
    }
    //Say who is fighting who
    std::cout << "Enemy pokemon is:\n";
    allPokemon[enemyCurrent].PrintInfo();

    //Say do you want to attack or defend
    int attackChoice = 0;
    std::cout << "Do you want to [1] Attack or [2] Defend?: ";
    std::cin >> attackChoice;
    while (attackChoice != 1 && attackChoice != 2){
        std::cout << "\nPlease type either 1 or 2: ";
        std::cin >> attackChoice;
    }

    //Compare stats
    if(attackChoice == 1){ //Attacking
        double myAtk = allPokemon[myCurrent].GetAttack();
        double enemyDef = allPokemon[enemyCurrent].GetDefense();
        std::cout << "\n" << allPokemon[myCurrent].GetName() << " is attacking " << allPokemon[enemyCurrent].GetName() << " with " << myAtk << " attack!\n";
        if(myAtk > enemyDef){
            std::cout << "You beat " << allPokemon[enemyCurrent].GetName() << "!";
        }else{
            std::cout << "You lost to " << allPokemon[enemyCurrent].GetName() << "!";
        }
    }else{ //Defending
        double myDef = allPokemon[myCurrent].GetDefense();
        double enemyAtk = allPokemon[enemyCurrent].GetAttack();
        std::cout << "\n" << allPokemon[myCurrent].GetName() << " is defending against " << allPokemon[enemyCurrent].GetName() << " with " << allPokemon[myCurrent].GetDefense() << " attack!\n";
        if(enemyAtk > myDef){
            std::cout << "You lost to " << allPokemon[enemyCurrent].GetName() << "!";
        }else{
            std::cout << "You beat " << allPokemon[enemyCurrent].GetName() << "!";
        }
    }
}