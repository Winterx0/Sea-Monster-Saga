#pragma once
#include <iostream>
#include <string>

using namespace std;

//Base Class
class GameStructure
{
public:
	void GameStart()
	{
		//Intro
		cout << "Sea Monster Saga Beginning...\n" << endl;
		cout << "As you walk through the reeds to the ship dock, " << endl;
		cout << "you see a storm off into the distance over the ocean." << endl;
		cout << "It's only have a matter of time before the clouds reach the coast, " << endl;
		cout << "causing the waters to rise." << endl;
		cout << "You load your ship and set sail to collect fish..." << endl;
		system("pause");
		system("CLS");
	}

	//Abstraction
	virtual void help() {}
};

//Child class Character inherits from class GameStructure
class Character : public GameStructure
{
private:
	int health;

public:
	string Name; //Property

	//Setter abstraction
	void setHealth(int h = 100)
	{ 
		health = h;
		if (health <= 0)
		{
			cout << "Character has expired..." << endl;
			system("pause");
			system("CLS");
		}
	}
	//Getter abstraction
	int getHealth() { return health; }

	//Polymorphism override
	virtual void attack(int hp = 10) {} //return 10; }

	//Polymorphism overload
	void talk(string stuffToSay) 
	{
		cout << "I am a " << Name << stuffToSay << endl;
	}


	void talk(string name, string stuffToSay)
	{
		cout << "I am a " << name << stuffToSay << endl;
	}


	//Abstraction override
	void help() override {}
};

//Child class SeaMonster inherits from class Character
class SeaMonster : public Character
{

public:

	//Constructor
	SeaMonster() {}

	//Polymorphism Overload
	void talk(string stuffToSay)
	{
		cout << "I am a " << Name << stuffToSay << endl;
	}

	//Function for Sea Monster attack
	void hitShip()
	{
		cout << "The Sea Monster swings it's tail, hitting the ship!" << endl;
	}

	//Polymorphism Attack Override
	void attack(int hp = 25) 
	{ 
		cout << "Sea Monster attacks and inflicts " << hp  << " HP damage\n"<< endl;
		system("pause");
		system("CLS");
	}

	//Abstraction message
	void help()
	{
		cout << "Sea Monsters live in the deepest part of the ocean!\n" << endl;
	}
};

//Child class Sailors inherets from Character
class Sailor : public Character
{

public:
	//Constructor
	Sailor() {}

	//Polymorphism Overload
	void talk(string name, string stuffToSay)
	{
		cout << "I am a " << name << stuffToSay << endl;
	}

	//Function for Sailor attack
	void harPoon()
	{
		cout << "Sailor throws the Harpoon!" << endl;
	}

	//Polymorphism Attack Override
	void attack(int hp = 25) 
	{ 
		cout << "Sailor attacks and inflicts " << hp << " HP damage\n" << endl;
		system("pause");
		system("CLS");
	}

	//Abstraction message
	void help()
	{
		cout << "Sailors use ships to fish!\n" << endl;
	}

};
