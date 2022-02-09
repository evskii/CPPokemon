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

    cout << "Fire vs Fire: " << GetTypeMulti(Fire, Fire);
    //int pokeNum;
    //cout << "What Pokemon do you want to see! \n";
    //cin >> pokeNum;
    //GetByNum(pokeNum, allPokemon).PrintInfo();
}

void InitGameData(){
    //Load in our Pokemon from csv
    string pokemonFilename = "pokemon.csv"; //Filename of our pokemon and their stats
    ifstream pokemonFile (pokemonFilename); //Setup a stream to read from the file

    if(pokemonFile.is_open()){ //Check we have a successfully open file
        string line; //Used to store the current line info in the csv
        while(getline(pokemonFile, line)){ //Use getline to loop through the streamed file
            vector<string> lineInfo = SplitLine(line, ','); //Gets our line info as a string vector
            if(GetWord(line, 0, ',') == "#"){ //The first line starts with # so we ignore that
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
        cout << "Could not find/load: " << pokemonFilename << "\n";
    }
    pokemonFile.close();

    //Load the type advantages
    string typeFilename = "typechart.csv";
    ifstream typeFile(typeFilename);

    if(typeFile.is_open()){
        string line;
        int y = 0; //Used to track what row we are on
        while(getline(typeFile, line)){
            vector<string> lineData = SplitLine(line, ','); //split the line into a vector
            if(lineData[1] != "None"){ //Lets us skip the title line
                for(int i = 1; i < lineData.size(); i++){ //Start at 1 so we skip the column with the type names
                    typeAdvantages[y][i-1] = StringToDoub(lineData[i]); //use i-1 since we start i one step forward
                }
                y++;
            }else{
                cout << "Removed 1st line\n";
            }
        }
    }else{
        cout << "Could not find/load: " << typeFilename << "\n";
    }
    typeFile.close();


}
