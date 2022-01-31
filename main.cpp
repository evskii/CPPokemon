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
}

void Battle(){
    //Get the enemy pokemon

    //Say who is fighting who

    //Say do you want to attack or defend

    //Compare stats

    //Evaluate HP/Winner

    //Say results
}