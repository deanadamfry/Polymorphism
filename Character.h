// =======================================================
// Characters Header File
// Dean Fry, December 2021
// =======================================================

#pragma once

namespace rpgCharacters
{
	// Parent Class
	class Character
	{
	public:
		float m_HP = 0                     // Health Points
			, m_SPD = 10;                  // Speed
		string m_Name = "Stranger";        // Name
		bool m_IsAlive = true;             // Alive?

		// Functions
		void checkIsAlive();

		// Polymorphed Functions
		void displayStats();
	};
	
	// Child Class of Character
	class PC : public Character
	{
	public:
		string m_Weapon = "Shortsword"      // Weapon Type
		     , m_Potion = "Health Potion";  // Potion Type
		float m_DMG = 10                    // Damage
		    , m_CoolDown = 1;               // CoolDown
		int m_XP = 0;                       // Experience Points

		// Default Constuctor
		PC();

		// Parameters Constructor
		PC(string nameSet, string weaponSet, string potionSet,
			float hpSet, float spdSet, float dmgSet, float coolDownSet);

		// Polymorphed Functions
		void displayStats();
	};

	// Child Class of Character
	class NPC : public Character
	{
	public:
		bool m_IsTarget = true;             // Is this object targeted?
		string m_Leader = "Mayor";          // Who is this object's leader?

		// Default Constructor
		NPC();

		// Parameters Constructor
		NPC(string nameSet, string leaderSet,
			float hpSet, float spdSet);

		// Polymorphed Functions
		void displayStats();
	};

	// Child Class of NPC
	class Minion : public NPC
	{
	public:
		string m_ResourceGather = "Wood";    // What resource is being gathered?
		int m_Capacity = 10;                 // How much can they carry?
		float m_CurrentLoad = 0;             // How much they are currently carrying

		// Default Constructor
		Minion();

		// Parameters Constructor
		Minion(string nameSet, string leaderSet,
			string resourceSet, float hpSet, float currentLoadSet);

		// Polymorphed Functions
		void displayStats();
	};

	// Child Class of NPC
	class Warrior : public NPC
	{
	public:
		string m_Weapon = "Battleaxe";        // Weapon Type
		float m_DMG = 10                      // Damage
			, m_CoolDown = 2;                 // CoolDown

		// Default Constructor
		Warrior();

		// Parameters Constructor
		Warrior(string nameSet, string weaponSet, string leaderSet, 
			float hpSet, float spdSet, float dmgSet, float coolDownSet);

		// Polymorphed Functions
		void displayStats();
	};

	// Child Class of Warrior
	class Boss : public Warrior
	{
	public:
		string m_BossHome = "Gold Cave";       // Where does the Boss live?
		int m_BossLevel = 10;                  // Current Boss Level

		// Default Constructor
		Boss();

		// Parameters Constructor
		Boss(string nameSet, string weaponSet,
			float hpSet, float spdSet, float dmgSet, float coolDownSet);

		// Polymorphed Functions
		void displayStats();
	};
}
// =======================================================