// =======================================================
// Class - Week 10
// Dean Fry, December 2021
// =======================================================

// =======================================================
// Libraries
#include <iostream>
using namespace std;
#include <string>
#include "Character.h"
using namespace rpgCharacters;

// =======================================================
// Function Declaration
void mainMenu();
void startScreen();
void exitScreen();

// =======================================================
// Global Variables
bool gameOver = false;
NPC npcs[2];
Minion peons[2];
Warrior grunts[2];
PC pc("Pip The Gentle", "Shortsword", "Health Potion", 100, 10, 10, 1);
NPC npc("Dave", "Mayor", 100, 10);
Minion peon("Zug Zug", "Warchief", "Iron", 100, 10);
Warrior grunt("Bloodletter", "Great Battleaxe", "Warchief", 100, 10, 8, 3);
Boss boss("Warchief", "Doom Hammer", 100, 10, 10, 4);
// =======================================================

int main()
{
	startScreen();

	// Main Game Loop
	while (!gameOver)
	{
		mainMenu();
	}

	exitScreen();

	return 0;
}

// =======================================================
// Functions

void mainMenu()
{
	int playerChoice = 0;

	cout << "\n\n ====== Main Menu ====== \n\n";
	cout << " Please Select a Program to run: \n";
	cout << " 1: Class Polymorphism \n";
	cout << " 2: Exit Program \n";
	cout << "\n  : ";

	cin >> playerChoice; // User Input

	// Input Validation
	while (playerChoice < 1 || playerChoice > 2)
	{
		if (cin.fail()) // Non-Number entered
		{
			cin.clear();
			char c;
			cin >> c;
		}

		cout << "\n Error: Invalid Character";
		cout << "\n  : ";
		cin >> playerChoice;
	}

	switch (playerChoice)
	{
	case 1:
	{
		// Clear Screen
		system("cls");

		// Random Number Seed Generator
		srand(static_cast<unsigned int>(time(0)));

		// Create NPCS with random stats
		for (int i = 0; i < sizeof(npcs) / sizeof(npcs[0]); i++)
		{
			npcs[i].m_Name = "NPC_" + to_string(i + 1);
			npcs[i].m_HP = rand() % 100;
			npcs[i].m_SPD = rand() % 10 + 1;
			npcs[i].checkIsAlive();
		}

		// Create Minions with random stats
		for (int i = 0; i < sizeof(peons) / sizeof(peons[0]); i++)
		{
			peons[i].m_Name = "Peon_" + to_string(i + 1);
			peons[i].m_Leader = boss.m_Name;
			peons[i].m_HP = rand() % 100;
			peons[i].m_SPD = rand() % 10 + 1;
			peons[i].m_CurrentLoad = rand() % 11 + 1;
			peons[i].checkIsAlive();
		}

		// Create Warriors with random stats
		for (int i = 0; i < sizeof(grunts) / sizeof(grunts[0]); i++)
		{
			grunts[i].m_Name = "Grunt_" + to_string(i + 1);
			grunts[i].m_Leader = boss.m_Name;
			grunts[i].m_HP = rand() % 100;
			grunts[i].m_DMG = rand() % 10 + 1;
			grunts[i].m_CoolDown = rand() % 4 + 2;
			grunts[i].m_SPD = rand() % 10 + 1;
			grunts[i].checkIsAlive();
		}

		cout << "\n Class Polymorphism";
		cout << "\n ------------------ Start ------------------";
		cout << "\n\n PC Stats: ";
		pc.displayStats();
		cout << "\n\n NPC Stats: ";
		for (int i = 0; i < sizeof(npcs) / sizeof(npcs[0]); i++)
		{
			npcs[i].displayStats();
			cout << "\n";
		}
		cout << "\n\n Peons Stats: ";
		for (int i = 0; i < sizeof(peons) / sizeof(peons[0]); i++)
		{
			peons[i].displayStats();
			cout << "\n";
		}
		cout << "\n\n Grunts Stats: ";
		for (int i = 0; i < sizeof(grunts) / sizeof(grunts[0]); i++)
		{
			grunts[i].displayStats();
			cout << "\n";
		}
		cout << "\n\n Boss Stats: ";
		boss.displayStats();
		cout << "\n ------------------- End -------------------";
		
	}
	break;
	case 2:
	{
		gameOver = true;
	}
	break;
	default:
		break;
	}
}

void startScreen()
{
	cout << "\n========================================= \n";
	cout << "====== Class - Week 10 \n";
	cout << "====== Dean Fry, December 2021 \n";
	cout << "========================================= \n";
	cout << "\n ====== Welcome Player 1 ======\n";
}

void exitScreen()
{
	cout << "========================================= \n";
	cout << "========= Thank you for playing ========= \n";
	cout << "================ Goodbye ================ \n";
	cout << "========================================= \n\n\n";
}
// =======================================================