class CfgPatches
{
	class bc036_Invisible_Backpack
	{
		units[] =
		{
			//Vanilla
			"bc036_invisible_kitbag",
			"bc036_invisible_assaultpack",
			"bc036_invisible_bergen",
			"bc036_invisible_fieldpack",
			"bc036_invisible_tacticalpack",
			"bc036_invisible_carryall",
			"bc036_invisible_parachute";
			//Apex
			"bc036_invisible_viperharness",
			"bc036_invisible_viperlightharness"
		};
		weapons[]={};
		author="bc036";
		icon="\bc036s_invisible_backpacks\Data\TUO_Emblem_128.paa";
		requiredAddons[]=
		{
			"A3_Weapons_F";
		};
		version=1.1;
		requiredVersion=1.1;
	};
};
class CfgMods
{
	class Mod_base;
	class bc036s_invisible_backpacks_DLC : Mod_base
	{
		dir = "@bc036's Invisible Backpacks";
		name = "bc036's Invisible Backpacks";
		picture = "\bc036s_invisible_backpacks\Data\TUO_Emblem_128.paa"; 	// Picture displayed from the expansions menu. Optimal size is 2048x1024
		logoSmall = "\bc036s_invisible_backpacks\Data\TUO_Emblem_128.paa";	// Display next to the item added by the mod
		logo = "\bc036s_invisible_backpacks\Data\TUO_Emblem_128.paa";		// Logo displayed in the main menu
	};
};
class CfgVehicles{
#include "invisble_backpacks.hpp"
};