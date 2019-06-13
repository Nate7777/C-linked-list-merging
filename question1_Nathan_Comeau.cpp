/*					Programmeur:			Nathan Comeau
					Date:					6/13/2019
					But:                    Question 1 test 2                       */

#include <iostream>

using namespace std;

//Structures de donnees

struct noeud
{
	char data;
	noeud* suivant;
};

//Prototypes de fonctions

void afficherListe(noeud* premier);
void mergerListes(noeud* destination, noeud* source, int n);
void detruireListe(noeud*& premier);

int main(void)
{
	noeud* liste1 = NULL;
	noeud* enCours = NULL;

	liste1 = new noeud;
	liste1->data = 'A';
	liste1->suivant = NULL;

	enCours = liste1;

	for (int i = 66; i <= 67; i++)
	{
		enCours->suivant = new noeud;
		enCours = enCours->suivant;
		enCours->data = (char)i;
	}

	
	enCours->suivant = NULL;
	
	afficherListe(liste1);

	noeud* liste2 = NULL;
	noeud* enCours2 = NULL;

	liste2 = new noeud;
	liste2->data = 'D';
	liste2->suivant = NULL;

	enCours2 = liste2;

	enCours2->suivant = new noeud;
	enCours2 = enCours2->suivant;
	enCours2->data = 'E';

	enCours2->suivant = NULL;

	afficherListe(liste2);

	mergerListes(liste1, liste2, 1);

	detruireListe(liste1);
		
	afficherListe(liste1);

	

	getchar();
	return 0;
}

//Definitions de fonctions

void afficherListe(noeud* premier)
{
	if (premier == NULL)
	{
		cout << "La liste est vide.";
	}
	else
	{
		for (noeud* traverse = premier; traverse != NULL; traverse = traverse->suivant)
		{
			cout << traverse->data << " ";
		}

		cout << endl;
	}
}

void mergerListes(noeud* destination, noeud* source, int n)
{
	if (destination == NULL)
	{
		cout << "Liste 1 est vide";
	}
	else if (source == NULL)
	{
		cout << "La liste 2 est vide";
	}
	else if (n <= 0 || n > 3)
	{
		cout << "nieme n'existe pas";
	}
	else
	{

	}
}

void detruireListe(noeud*& premier)
{
	noeud* toDelete = premier;

	while (premier != NULL)
	{
		toDelete = premier;
		premier = premier->suivant;
		delete toDelete;
	}
}