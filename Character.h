// =======================================================
// Characters Header File
// Dean Fry, December 2021
// =======================================================

#pragma once

namespace rpgCharacters
{
	class Character
	{
	public:
		float m_HP = 0
			, m_SPD = 10;
		string m_Name = "Stranger";
		bool m_IsAlive = true;

		void checkIsAlive();
		void displayStats();
	};
	
	class PC : public Character
	{
	public:
		string m_Weapon = "Shortsword"
		     , m_Potion = "Health Potion";
		float m_DMG = 10
		    , m_CoolDown = 1;
		int m_XP = 0;
		PC();
		PC(string nameSet, string weaponSet, string potionSet,
			float hpSet, float spdSet, float dmgSet, float coolDownSet);
		void displayStats();
	};

	class NPC : public Character
	{
	public:
		bool m_IsTarget = true;
		string m_Leader = "Mayor";
		NPC();
		NPC(string nameSet, string leaderSet,
			float hpSet, float spdSet);
		void displayStats();
	};

	class Minion : public NPC
	{
	public:
		string m_ResourceGather = "Wood";
		int m_Capacity = 10;
		float m_CurrentLoad = 0;
		Minion();
		Minion(string nameSet, string leaderSet,
			string resourceSet, float hpSet, float currentLoadSet);
		void displayStats();
	};

	class Warrior : public NPC
	{
	public:
		string m_Weapon = "Battleaxe";
		float m_DMG = 10
			, m_CoolDown = 2;
		Warrior();
		Warrior(string nameSet, string weaponSet, string leaderSet, 
			float hpSet, float spdSet, float dmgSet, float coolDownSet);
		void displayStats();
	};

	class Boss : public Warrior
	{
	public:
		string m_BossHome = "Gold Cave";
		int m_BossLevel = 10;
		Boss();
		Boss(string nameSet, string weaponSet,
			float hpSet, float spdSet, float dmgSet, float coolDownSet);
		void displayStats();
	};
}
// =======================================================