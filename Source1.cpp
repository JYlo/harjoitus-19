/*Harjoitus 19 (Palautus vko 47)
Jouni Y

Tee ohjelma, joka toimii auton nopeusmittarina.
Periaate on seuraava : N�pp�imist� toimii
nopeusanturina ja n�ytt� mittarin n�ytt�n�.
Nopeusmittari laskee viiden viimeisen nopeuden
keskiarvon ja tulostaa sen nykyisen� nopeutena
n�yt�lle.Negatiivinen nopeus lopettaa ohjelman.
Toiminta on siis seuraava :
Ohjelman kaynnistyksessa mittari n�ytt�� nolla
0
0
0
0
0 (alkutila)nopeus = 0 km / h
Anna nopeus : 10 = > 2 km / h
Anna nopeus : 20 = > 6 km / h
Anna nopeus : 30 = > 12 km / h
Anna nopeus : 40 = > 20 km / h
Anna nopeus : 50 = > 30 km / h
Anna nopeus : 50 = > 38 km / h
Anna nopeus : 50 = > 44 km / h
Anna nopeus : 50 = > 48 km / h
Anna nopeus : 50 = > 50 km / h
Anna nopeus : 50 = > 50 km / h
Anna nopeus : -5 = > loppu

Toteuta kayttaen taulukkoa.
v.1.0
12.11.2014
*/

#include<iostream>
using namespace std;
const int MAX_TAULU = 5;
int main()
{
	int nopeus[MAX_TAULU] = { 0, 0, 0, 0, 0 };
	int i = 0;
	int summa;
	int keskarv;
	int input;
	cout << "\nNopeusmittari, negatiivinen luku lopettaa" << endl;
	do
		{
		cout << "Anna nopeus: ";
		cin >> nopeus[i];
		input = nopeus[i];
		summa = nopeus[0] + nopeus[1] + nopeus[2] + nopeus[3] + nopeus[4];
		keskarv = summa / MAX_TAULU;
		if (input >= 0)
		{
			cout << " -> " << keskarv << " km/h" << endl;
		}
		i++;
		if (i>4)
		{
			i = 0;
		}
	} 
	
	while (input >= 0);
}
