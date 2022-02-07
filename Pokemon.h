//
// Created by evski on 27/01/2022.
//

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

enum Type{
    None = 0,
    Bug,
    Dark,
    Dragon,
    Electric,
    Fairy,
    Fighting,
    Fire,
    Flying,
    Ghost,
    Grass,
    Ground,
    Ice,
    Normal,
    Poison,
    Psychic,
    Rock,
    Steel,
    Water
};

vector<string> typeStrings{
        "None",
        "Bug",
        "Dark",
        "Dragon",
        "Electric",
        "Fairy",
        "Fighting",
        "Fire",
        "Flying",
        "Ghost",
        "Grass",
        "Ground",
        "Ice",
        "Normal",
        "Poison",
        "Psychic",
        "Rock",
        "Steel",
        "Water"
};

class Pokemon {
    string name;
    int number;

    Type type1;
    Type type2;

    int hp;
    int attack;
    int defense;
    int sAttack;
    int sDefense;
    int speed;

public:
    //Basic construct for the name and number
    Pokemon(string na, string nu){
        name = na;

        //Convert string input of number to int
        stringstream ss;
        ss << nu;
        ss >> number;
    }

    void SetStats(int h, int at, int df, int sat, int sdf, int sp){
        hp = h;
        attack = at;
        defense = df;
        sAttack = sat;
        sDefense = sdf;
        speed = sp;
    }

    void SetTypes(string t1, string t2){
        for(int i = 0; i < typeStrings.size(); i++){
            if(t1 == typeStrings[i]){
                type1 = Type(i);
            }
            if(t2 == typeStrings[i]){
                type2 = Type(i);
            }
        }
    }

    //Getters
    void PrintInfo(){
        std::cout << "---------------------------------------\n";
        std::cout << "#" << number << ": " << name << "\n";
        std::cout << "Type: " << typeStrings[type1] << " " << typeStrings[type2] << "\n";
        std::cout << "HP: " << hp << "\n";
        std::cout << "Attack:" << attack << "\n";
        std::cout << "Defense:" << defense << "\n";
        std::cout << "Speed:" << speed << "\n";
        std::cout << "---------------------------------------\n";
    }
};