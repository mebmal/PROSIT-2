// PROSIT 2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string chemin;
    int methode;
    cout << "----------------------------Fini les spaghettis----------------------------\n";
    cout << "Voici les methodes de chiffrement/dechiffrement :\n";
    cout << "[1] Chiffrement/Dechiffrement Cesar\n";
    cout << "[2] Chiffrement/Dechiffrement XOR\n";
    cout << "[3] Chiffrement/Dechiffrement Cesar + XOR\n";
    cout << "---------------------------------------------------------------------------\n";
    cout << "Veuillez entrer le chemin d'acces du fichier source\n";
    cin >> chemin; 
    ifstream LectureFichier(chemin);
    if (LectureFichier) {
        cout << "Ouverture du fichier reussi !\n";
        cout << "Veuillez entrer la méthode de chiffrement\n";
        cin >> methode;
        switch (methode) {
        case 1:
            Cesar;
        case 2:
            XOR;
        case 3:
            Cesar + XOR;
        }


    }
    else {
        cout << "Erreur d'ouverture du fichier";
    }
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
