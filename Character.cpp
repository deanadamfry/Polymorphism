// =======================================================
// Characters Source File
// Dean Fry, December 2021
// =======================================================

// Libraries
#include <iostream>
using namespace std;
#include "Character.h"
using namespace rpgCharacters;

void Character::checkIsAlive()
{
	if (m_HP < 1) { m_IsAlive = false; }
}

void Character::displayStats()
{
	cout << "\n Character Name: " << m_Name;              // Character Name
	cout << "\n HP: " << m_HP;                            // Health Points
	cout << "\n SPD: " << m_SPD;                          // Speed
	if (m_IsAlive == true)
	{
		cout << "\n Status: Alive";
	}
	else { cout << "\n Status: Dead"; }
}

void PC::displayStats()
{
	cout << "\n PC Name: " << m_Name;                     // Player Character Name
	cout << "\n HP: " << m_HP;                            // Health Points
	cout << "\n Weapon: " << m_Weapon;                    // Weapon Type
	cout << "\n DMG: " << m_DMG;                          // Damage
	cout << "\n Cooldown: " << m_CoolDown;                // Weapon CoolDown
	cout << "\n Potion: " << m_Potion;                    // Potion Type
	if (m_IsAlive == true)
	{
		cout << "\n Status: Alive";
	}
	else { cout << "\n Status: Dead"; }
}

void NPC::displayStats()
{
	cout << "\n NPC Name: " << m_Name;                    // NPC Name
	cout << "\n Leader: " << m_Leader;                    // Their current leader
	cout << "\n HP: " << m_HP;                            // Health Points
	if (m_IsAlive == true)
	{
		cout << "\n Status: Alive";
	}
	else { cout << "\n Status: Dead"; }
}

void Minion::displayStats()
{
	cout << "\n Minion Name: " << m_Name;                 // Minion Name
	cout << "\n Leader: " << m_Leader;                    // Their current leader
	cout << "\n HP: " << m_HP;                            // Health Points
	cout << "\n Gathering: " << m_ResourceGather;         // What resource are they gathering 
	cout << "\n Current Load: " << m_CurrentLoad << "kg"; // How much they are carrying currently
	if (m_IsAlive == true)
	{
		cout << "\n Status: Alive";
	}
	else { cout << "\n Status: Dead"; }
	if (m_CurrentLoad > m_Capacity)
	{
		cout << "\n " << m_Name << " is encumbered!";
	}
}

void Warrior::displayStats()
{
	cout << "\n Warrior Name: " << m_Name;                // Warrior Name
	cout << "\n Leader: " << m_Leader;                    // Their current leader
	cout << "\n HP: " << m_HP;                            // Health Points
	cout << "\n SPD: " << m_SPD;                          // Speed
	cout << "\n Weapon: " << m_Weapon;                    // Weapon Type
	cout << "\n DMG: " << m_DMG;                          // Damage
	cout << "\n CoolDown: " << m_CoolDown;                // Weapon CoolDown
	if (m_IsAlive == true)
	{
		cout << "\n Status: Alive";
	}
	else { cout << "\n Status: Dead"; }
}

void Boss::displayStats()
{
	cout << "\n Boss Name: " << m_Name;                   // Boss Name
	cout << "\n HP: " << m_HP;                            // Health Points
	cout << "\n SPD: " << m_SPD;                          // Speed
	cout << "\n Weapon: " << m_Weapon;                    // Weapon Type
	cout << "\n DMG: " << m_DMG;                          // Damage
	cout << "\n CoolDown: " << m_CoolDown;                // Weapon CoolDown
	if (m_IsAlive == true)
	{
		cout << "\n Status: Alive";
	}
	else { cout << "\n Status: Dead"; }
}

// PC Default Constructor
PC::PC()
{
	cout << "\n PC has spawned";
}

// PC Parameters Constructor
PC::PC(string nameSet, string weaponSet, string potionSet, 
	float hpSet, float spdSet, float dmgSet, float coolDownSet)
{
	m_Name = nameSet;
	m_Weapon = weaponSet;
	m_Potion = potionSet;
	m_HP = hpSet;
	m_DMG = dmgSet;
	m_CoolDown = coolDownSet;

	cout << "\n";
	cout << "\n PC Name: " << m_Name << " HP: " << m_HP << " SPD: " << m_SPD;
	cout << "\n Weapon: " << m_Weapon << " DMG: " << m_DMG << " CoolDown: " << m_CoolDown;
	cout << "\n Potion: " << m_Potion;
	if (m_IsAlive == true)
	{
		cout << "\n Status: Alive";
	}
	else { cout << "\n Status: Dead"; }
}

// NPC Default Constructor
NPC::NPC()
{
	cout << "\n";
	cout << "\n NPC has spawned";
}

// NPC Parameters Constructor
NPC::NPC(string nameSet, string leaderSet, float hpSet, float spdSet)
{
	m_Name = nameSet;
	m_Leader = leaderSet;
	m_HP = hpSet;
	m_SPD = spdSet;

	cout << "\n";
	cout << "\n NPC Name: " << m_Name << " HP: " << m_HP << " SPD: " << m_SPD;
	cout << "\n Leader: " << m_Leader;
	if (m_IsAlive == true)
	{
		cout << "\n Status: Alive";
	}
	else { cout << "\n Status: Dead"; }
}

// Minion Default Constructor
Minion::Minion()
{
	cout << "\n NPC Minion has spawned";
}

// Minion Parameters Constructor
Minion::Minion(string nameSet, string leaderSet,
	string resourceSet, float hpSet, float currentLoadSet)
{
	m_Name = nameSet;
	m_HP = hpSet;
	m_Leader = leaderSet;
	m_ResourceGather = resourceSet;
	m_CurrentLoad = currentLoadSet;

	cout << "\n";
	cout << "\n Minion Name: " << m_Name << " HP: " << m_HP << " SPD: " << m_SPD;
	cout << "\n Leader: " << m_Leader;
	cout << "\n Gathering: " << m_ResourceGather << " Current Load: " << m_CurrentLoad << "kg";
	if (m_IsAlive == true)
	{
		cout << "\n Status: Alive";
	}
	else { cout << "\n Status: Dead"; }
	if (m_CurrentLoad > m_Capacity)
	{
		cout << "\n " << m_Name << " is encumbered!";
	}
}

// Warrior Default Constructor
Warrior::Warrior()
{
	cout << "\n NPC Warrior has spawned";
}

// Warrior Parameters Constructor
Warrior::Warrior(string nameSet, string weaponSet, string leaderSet, 
	float hpSet, float spdSet, float dmgSet, float coolDownSet)
{
	m_Name = nameSet;
	m_Weapon = weaponSet;
	m_Leader = leaderSet;
	m_HP = hpSet;
	m_SPD = spdSet;
	m_DMG = dmgSet;
	m_CoolDown = coolDownSet;

	cout << "\n";
	cout << "\n Warrior Name: " << m_Name << " HP: " << m_HP << " SPD: " << m_SPD;
	cout << "\n Leader: " << m_Leader;
	cout << "\n Weapon: " << m_Weapon << " DMG: " << m_DMG << " CoolDown: " << m_CoolDown;
	if (m_IsAlive == true)
	{
		cout << "\n Status: Alive";
	}
	else { cout << "\n Status: Dead"; }
}

// Boss Default Constructor
Boss::Boss()
{
	cout << "\n NPC Boss has spawned";
}

// Boss Parameters Constructor
Boss::Boss(string nameSet, string weaponSet,
	float hpSet, float spdSet, float dmgSet, float coolDownSet)
{
	m_Name = nameSet;
	m_Weapon = weaponSet;
	m_HP = hpSet;
	m_SPD = spdSet;
	m_DMG = dmgSet;
	m_CoolDown = coolDownSet;

	cout << "\n";
	cout << "\n Boss Name: " << m_Name << " HP: " << m_HP << " SPD: " << m_SPD;
	cout << "\n Weapon: " << m_Weapon << " DMG: " << m_DMG << " CoolDown: " << m_CoolDown;
	cout << "\n Boss Level: " << m_BossLevel << " Guarding: " << m_BossHome;
	if (m_IsAlive == true)
	{
		cout << "\n Status: Alive";
	}
	else { cout << "\n Status: Dead"; }
}
// =======================================================