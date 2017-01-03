/**
 * Project Untitled
 */


#include "LecteurFichier.h"

LecteurFichier::LecteurFichier()
{
    commande = nullptr;
}

void LecteurFichier::lireFichier(string pathToFile)
{
    string line;
    ifstream myfile(pathToFile);
    
    if (!myfile.is_open()) // ERROR
    {
        cout << "Unable to open file";
        return;
    }
    
    while(std::getline(myfile, line))
    {
        istringstream iss(line);
        vector<string> commands;
        while (iss) {
        string word;
            iss >> word;
            commands.push_back(word);
        }
        
        cout << line << " : ";
        
        if(commands.at(0) == "AVANCER")
        {
            x = atoi(commands.at(1).c_str());
            y = atoi(commands.at(2).c_str());
        }
        else if(commands.at(0) == "SAISIR")
        {
            objet = *(new Objet(atoi(commands.at(1).c_str())));
        }
        else if(commands.at(0) == "RENCONTRERPLOT")
        {
            plot = *(new Plot(atoi(commands.at(1).c_str())));
        }
        else if(commands.at(0) == "TOURNER")
        {
            direction = commands.at(1).c_str();
        }
        
        Commande* commande = Commande::nouvelleCommande(commands.at(0), *this);
        commande->execute();
    }
}



