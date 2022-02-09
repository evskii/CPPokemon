//
// Created by evski on 06/02/2022.
//

#include <vector>
#include <sstream>
using namespace std;

//This method splits a line using the delim character
vector<string> SplitLine(string toSplit, char delim){
    vector<string> returnVector;
    stringstream stream(toSplit);
    string temp;
    while (getline(stream, temp, delim)){
        returnVector.push_back(temp);
    }
    return returnVector;
}

//This method gets a single word using an index
string GetWord(string toSplit, int index, char delim){
    vector<string> words = SplitLine(toSplit, delim);
    return words[index];
}

//Convert a number string to an int
int StringToInt(string toConvert){
    int toReturn;
    stringstream ss;
    ss << toConvert;
    ss >> toReturn;
    return toReturn;
}

double StringToDoub(string toConvert){
    double toReturn;
    stringstream ss;
    ss << toConvert;
    ss >> toReturn;
    return toReturn;
}