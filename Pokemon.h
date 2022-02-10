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
    Normal,
    Fire,
    Water,
    Electric,
    Grass,
    Ice,
    Fighting,
    Poison,
    Ground,
    Flying,
    Psychic,
    Bug,
    Rock,
    Ghost,
    Dragon,
    Dark,
    Steel,
    Fairy
};

vector<string> typeStrings{
        "None",
        "Normal",
        "Fire",
        "Water",
        "Electric",
        "Grass",
        "Ice",
        "Fighting",
        "Poison",
        "Ground",
        "Flying",
        "Psychic",
        "Bug",
        "Rock",
        "Ghost",
        "Dragon",
        "Dark",
        "Steel",
        "Fairy"
};

double typeAdvantages[19][19];


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
            if(t2 == "" || t2 == " "){
                type2 = None;
            }else if(t2 == typeStrings[i]){
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

    int GetNumber(){
        return number;
    }

    string GetName(){
        return name;
    }

    vector<string> GetTypeName(){
        return vector<string>{typeStrings[type1], typeStrings[type2]};
    }

    vector<Type> GetTypeEnum(){
        return vector<Type>{type1, type2};
    }

    int GetSpeed(){
        return speed;
    }

    int GetAttack(){
        return attack;
    }

    int GetDefense(){
        return defense;
    }
};

Pokemon GetByNum(int num, vector<Pokemon> list){
    for(int i = 0; i < list.size(); i++){
        if(list[i].GetNumber() == num){
            return list[i];
        }
    }
}

double GetTypeMulti(Type attacking, Type defending){
    return typeAdvantages[attacking][defending];
}

Pokemon DetermineWinner(Pokemon attacker, Pokemon defender){

}

bool CheckWin(Pokemon attacker, Pokemon defender){
    return (attacker.GetAttack() * GetTypeMulti(attacker.GetTypeEnum()[0], defender.GetTypeEnum()[0])) > defender.GetDefense();
}