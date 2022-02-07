//Libs
#include <iostream>
#include <vector>
#include <fstream>

//Headers
#include "Pokemon.h"
#include "ParsingMethods.h"

using namespace std;

//Methods declaration
void InitGameData();

//Variables
vector<Pokemon> allPokemon; //Vector of all Pokemon in the game

int main() {
    cout << "Welcome to C++ Pokemon\n";

    InitGameData();
    allPokemon[100].PrintInfo();
}

void InitGameData(){
    //Load in our Pokemon from csv
    string pokemonFilename = "pokemon.csv";
    ifstream pokemonFile (pokemonFilename);

    if(pokemonFile.is_open()){
        string line;
        while(getline(pokemonFile, line)){
            vector<string> lineInfo = SplitLine(line, ','); //Gets our line info as a string vector
            if(GetWord(line, 0, ',') == "#"){
                continue;
            }else{
                //Assign data to new pokemon class
                Pokemon newPokemon = Pokemon(lineInfo[1], lineInfo[0]);
                newPokemon.SetStats(StringToInt(lineInfo[5]), StringToInt(lineInfo[6]), StringToInt(lineInfo[7]), StringToInt(lineInfo[8]), StringToInt(lineInfo[9]), StringToInt(lineInfo[10]));
                newPokemon.SetTypes(lineInfo[2], lineInfo[3]);
                allPokemon.push_back(newPokemon);
            }
        }

    }else{
        cout << "Could not find/load: " << pokemonFilename;
    }
}
