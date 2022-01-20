#include "SeaMonsterHeader.h"

int main()
{
	
	GameStructure gameStart;
	gameStart.GameStart();

	/////////////////////////////////////////////////////////

	Character* character = new Character();

	/////////////////////////////////////////////////////////
	
	//Constructor Prototype
	SeaMonster* seaMonster = new SeaMonster();
	cout << seaMonster->talk << endl;
	seaMonster->help();
	seaMonster->getHealth();
	seaMonster->hitShip();
	seaMonster->attack();
	

	/////////////////////////////////////////////////////////

	//Constructor Prototype
	Sailor* sailor = new Sailor();
	cout << sailor->talk << endl;
	sailor->help();
	sailor->getHealth();
	sailor->harPoon();
	sailor->attack();
	

	/////////////////////////////////////////////////////////

	//Restart activity
	string restart;
	cout << "Would you like to restart the game? [y/n]" << endl;
	cin >> restart;
	while (restart == "y")
	{
		cout << "\n\n";
		system("pause");
		system("CLS");
		return main();
	}
	if (restart == "n")
	{
		cout << "Thanks for playing!\n";
		system("pause");
		return 0;
	}
}