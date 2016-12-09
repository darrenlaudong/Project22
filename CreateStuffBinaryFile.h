/* 
 * File: CreateStuffBinaryFile.h
 * Author: Shisheng Liu
 * Created on 12/02,2016, 9:54 AM
 * //Purpose: Project2---The Gladiator
 */

// This program uses a structure variable to store a record to a file.
#include<iostream>
#include<fstream>
using namespace std;

// Declare a structure for the record.
struct HowToPlay {
    
    string gamePlay;
    string playerStats;
    string combat;
    string wpnsArmr;
    
};

int main()
{
    HowToPlay read;	// Weapons
    const short NUM_FILES = 4;
    HowToPlay loaded[NUM_FILES] = {
        {"Game Play:\nGladius is played in alternating rounds of combat where you and\nyour opponent select actions and carry them out. Both actions are\n"
        "acted out at the same time. For example, if you chose to block and\n"
        "your opponent choses also to block, the round will end and new\n"
        "actions will be selected. If you chose to dodge and your opponent\nchoses to attack, combat will be resolved.\n\n"
        "Combat ends when one player falls to 1 health or below. At the\nend of Combat the Emperor will pass judgement upon the fallen.\nbased on the amount of favor they have earned. The less favor\n"
        "the more likely it is that the Emperor will let the gladiator die\nto please the crowd. The more favor, the more likely they will be\nglorified for their achievements."}, 
        {"Player Stats:\nPlayer Stats are randomly assigned at the beginning of the game.\nThey are created as a random average and increased by your choice\n"
        "of weapon and armor. Your base stats are:\n\nHealth - How much damage you can take before surrender.\nStrength - How hard you can hit for with a weapon.\n"
        "Agility - Your ability to parry and dodge incoming attacks\nDefense Rating - The amount of damage you can mitigate.\n"
        "Fatigue - As you fight, your combat prowess will decrease.\nFavor - As you gain favor, your abilities will increase slightly.\n"
        "If you fall in the arena, Favor will also play a factor in the\nEmperor's judgement on you."}, 
        {"Combat:\nCombat is resolved in rounds, during each round you and your\nopponent will select your actions and combat will be resolved.\nThere are many actions available to you in combat, attack, block\n"
        "dodge, parry, counter, special attack, and recover. Not all of \n"
        "these options will be available to you during every combat round.\n\n"
        "Attacks, of course, deal damage! Damage is dealt by combining\nyour strength with the damage of your selected weapon mixed\n"
        "with some math voodoo and then mitigated by your opponents defense.\n\n"
        "Blocking will provide you with a temporary increase to your defense\npotentially soaking up more damage than normal.\n\n"
        "Dodge gives you a chance to completely move out of the path of an\nincoming attack. At the cost of not doing any damage that round.\n\n"
        "Cirt gives you the chance to fully block the incoming attack of\n"
        "your opponent and also confers a bonus to attack for the next round\n"
        "BUT - if your parry fails, you take bonus damage from the current attack.\n\n"
        "Counter attacks are a quick block and strike to your opponent. You\n"
        "will take reduced damage from your opponent and deal a small amount\nof damage yourself this round. Counter attacks will only be\nsuccessful if your opponent attacks.\n\n"
        "Special Attacks are provided based on the amount of Favor you have.\n"
        "They are only available when you have more than 70% of your current\nfatigue, and tire you out faster. These attacks do increased\n"
        "damage when they are available.\n\n"
        "Recover allows you gain back some fatigue during combat at the cost\nof not attacking or defending that round."},
     {"Weapon stats:\nIn Gladius, your weapon is your life, there are several to chose\n"
             "from to fit your own preferred playstyle.\n\n"
             "All One-Handed Weapons are paired with a shield which will increase\nyour ability to block damage\n\n"
             "Base Damage - this is the minimum amount of damage if you hit.\n\n"
             "Weapon Speed - the higher the number, the less likely your attack\n"
             "will be blocked or parried\n\nWeapon Reach - longer reaches provide additional defensive bonuses\nas well as counter attack opportunities\n\n"
             "Defensive Bonus - defensive bonus for chosing a two handed weapon\nover a one hand and a shield\n\nAgility Loss - larger heavier weapons that do more damage are also\nharder to swing."
             " They do more damage, but can be blocked easier.\n\nArmor Stats:\nArmor only has two stats, Defensive Bonus and Agility Loss. These\n"
             "represent the ability for you to block incoming damage, but also\nthe loss of mobility to either dodge or parry incoming attacks."}};
        char again;	

	// Open a file for binary output.
	fstream play("howtoplay.dat", ios::out | ios::binary);

        
        
        for (short i = 0; i < NUM_FILES; i++)
        {
            
            play.write(reinterpret_cast<char *>(&loaded[i]),
			         sizeof(loaded[i]));
        }

	// Close the file.
        cout << endl << "closing the file;";
	play.close();
        
       
        cout << endl << "opening file to read" << endl;
        // Open a file for input in binary mode.
	play.open("howtoplay.dat", ios::in | ios::binary);

	// Test for errors.
	if (!play)
	{
		cout << "Error opening file. Program aborting.\n";
		return 0;
	}

	cout << "Here are the weapons in the file: \n\n";
	// Read the first record from the file.
	play.read(reinterpret_cast<char *>(&read),
			    sizeof(read));

	// While not at the end of the file,
	// display the records.
	while (!play.eof())
	{
		// Display the record.
		cout << read.gamePlay << endl;
		// Wait for the user to press the Enter key.
		cout << "\nPress the Enter key to see the next record.\n";
		cin.get();

		// Read the next record from the file.
		play.read(reinterpret_cast<char *>(&read),
			        sizeof(read));
	} 

	// Close the file.
	cout << "That's all the data in the file!\n";
	play.close();

	return 0;
}