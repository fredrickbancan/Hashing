#include "HashFunction.h"
#include "HashTable.h"
#include <iostream>
#include <string>

int main()
{
	/*Adding lots of data here to test indexing and hashing.*/
	HashTable table = HashTable();

	table.add("Fredrick Bancan", "2151, Sydey, NSW, Australia.");
	table.add("Fredrick Bancan", "professional gamer.");
	table.add("Lebron James", "tall dude.");
	table.add("James Bond", "Professional Murderer.");
	table.add("Jared Mulconry", "professional teacher :).");
	table.add("Jared Mulconry", "great teacher :).");
	table.add("Logan Wykes", "Sick lad.");
	table.add("Bing", "Bong.");
	table.add("Hee", "Honk.");
	table.add("Hello", "World.");
	table.add("League", "Of Legends.");
	table.add("Valve", "Amazing, fun and interesting game design.");
	table.add("Counter Strike", "Strategic first person shooter.");
	table.add("Portal", "Strategic first person puzzle game.");
	table.add("Team Fortress 2", "Fast paced action packed first person shooter.");
	table.add("Half Life 2", "Immersive story based first person shooter.");
	table.add("Garrys Mod", "Fun sand box game.");
	table.add("Notch", "Creator of Minecraft.");
	table.add("Minecraft", "Massive voxel-based survival building game.");
	table.add("PUBG Corp.", "Incomprehensibly bad game design and wasted opportunity.");
	table.add("PUBG", "Immersive competetive survival first person shooter, destroyed by greed for money and fortnite.");
	table.add("Fortnite", "A game that attracts ADHD pre-pubescants.");
	table.add("Yes?", "yes.");
	table.add("No?", "no.");
	table.add("Hello", "Goodbye.");
	table.add("Hello", "My name is Fred.");
	table.add("Hello", "World.");
	table.add("Da ting goes", "glrrrat. pat pat kat kat kat. skipi pap pap pap. And a pup pup glrrat boom. Skiat.");
	table.print();
	system("PAUSE");
	return 0;
}