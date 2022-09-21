class CfgPatches
{
	class RRFFSHeli_CH47_YourTextureName_mod
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"RFFSHeli_CH47_mod"
		};
	};
};
class CfgMods
{
	class RFFSHeli_CH47_YourTextureName_mod
	{
		dir="RFFSHeli_CH47_YourTextureName";
		hideName=0;
		hidePicture=0;
		name="RFFSHeli_CH47_YourTextureName";
		credits="RedFalcon";
		author="";
		authorID="";
		version="version 1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"RFFSHeli_CH47_YourTextureName/4_World"
				};
			};
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"RFFSHeli_CH47_YourTextureName/3_Game"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"RFFSHeli_CH47_YourTextureName/5_Mission"
				};
			};
		};
	};
};
class CfgVehicles
{
	class RFFSHeli_CH47;
	class RFFSHeli_CH47_YourTextureName: RFFSHeli_CH47
	{
		scope=2;
		displayName="Boeing CH-47 Chinook Helicopter - YourTextureName";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"RFFSHeli_CH47_YourTextureName\data\body_yourtexturename_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RFFSHeli_CH47\data\body.rvmat"
		};
	};
};