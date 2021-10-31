// Matrixapp2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Matrix.h"
using namespace Mat;
int main()
{
    cout << "--------------Matrix----------------\n";
    Matrix M1(2,2);
    Matrix M2(2,2);
    Matrix *M3;
    //int menu;
    M2.Remplissage(2);
    M1.Remplissage(2);
    M1.print();
    cout << "\n\n\t \t*" << endl;
    M2.print();
    cout << "\n--------------Matrix Res----------------\n";
    M3= M1 * M2;
    M3->print();
    int res = M1 == M2;
    cout << "\n ----------------->:" << res << endl;

    




    //int menu;
    //int val1;
    //int val2;
   /* do
    {
        cout << endl << " ----------------------- MENU -----------------------" << endl << endl;
        cout << "1. Instantiation des elements" << endl;
        cout << "2. Remplissage" << endl;
        cout << "3. Affichage" << endl;
        cout << "4. Addition " << endl;
        cout << "5. Soustraction" << endl;
        cout << "6. Multiplication" << endl;
        cout << "7. egalité" << endl;
        cout << "0. Quitter" << endl << endl;
        cout << "Choix : ";
        cin >> menu;
        cout << endl;

        switch (menu)
        {
        case 0: break;

        case 1:
            cout << endl << "Veuillez saisir la nouvelle valeur : ";
            cin >> val1;
            cout << endl;
            M1.Remplissage(val1);
            break;

        case 2:
            M1.print();
            break;

        case 3: 
            break;

        case 4:
            break;

        case 5: 
            break;

        case 6: *cout << endl << "Veuillez saisir la nouvelle valeur : ";
            cin >> nouvelle_valeur;
            cout << endl;
            modifier(nouvelle_valeur);*
            break;

        case 7:** cout << endl << "Veuillez saisir la valeur a inserer apres: ";
            cin >> valeur_inserer_apres;
            cout << endl;
            insererApres(valeur_inserer_apres);*
            break;

        case 8: **cout << endl << "Veuillez saisir la valeur a inserer avant : ";
            cin >> valeur_inserer_avant;
            cout << endl;
            insererAvant(valeur_inserer_avant);*
            break;

        case 9: //supprimer();
            break;

        case 10: //supprimerTout();
            break;

        case 11: //longueur();
            break;

        case 12: //position();

            break;
        }

    } while (menu != 0);*/
    

    
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
