class CfgPatches
{
	class bc036_Invisible_Backpack
	{
		units[]=
		{
			"bc036_invisible_kitbag",
			"bc036_invisible_assaultpack",
			"bc036_invisible_bergen",
			"bc036_invisible_fieldpack",
			"bc036_invisible_tacticalpack",
			"bc036_invisible_carryall",
			"bc036_invisible_viperharness",
			"bc036_invisible_viperlightharness"
		};
		weapons[]={};
		author="bc036";
		icon="\bc036s_invisible_backpacks\bc036.paa";
		requiredAddons[]=
		{
			"A3_Weapons_F";
		};
		requiredVersion=0.1;
	};
};
#include "invisble_backpacks.hpp"