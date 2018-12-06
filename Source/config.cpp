
class CfgPatches
{
	class dzn_IDF_Mitznefet
	{
		units[] = {};
		weapons[] = {
			"dzn_H_IDF_Mitznefet"
			,"dzn_H_IDF_Mitznefet_Desert"
			,"dzn_NVG_IDF_Mitznefet_Cover"
			,"dzn_NVG_IDF_Mitznefet_Cover_Desert"
			,"dzn_NVG_IDF_Mitznefet_Cover2"
			,"dzn_NVG_IDF_Mitznefet_Cover2_Desert"
			,"dzn_NVG_IDF_Mitznefet_Cover3"
			,"dzn_NVG_IDF_Mitznefet_Cover3_Desert"
			,"dzn_G_IDF_Mitznefet_Cover"
			,"dzn_G_IDF_Mitznefet_Cover_Desert"
			,"dzn_G_IDF_Mitznefet_Cover2"
			,"dzn_G_IDF_Mitznefet_Cover2_Desert"
			,"dzn_G_IDF_Mitznefet_Cover3"
			,"dzn_G_IDF_Mitznefet_Cover3_Desert"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F"};
		author = "Excess3 & 10Dozen";
	};
};

#define CAMO_SELECTION(TEXTURE)	hiddenSelections[] = {"camo"}; \
    hiddenSelectionsTextures[] = { dzn_IDF_Mitznefet\data\##TEXTURE };

class CfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class H_HelmetB;
	class HeadgearItem;
	
	// Headgear (directly on head)
	class dzn_H_IDF_Mitznefet: H_HelmetB
	{
		scope = 2;
		author = "Excess & 10Dozen";
		displayName = "IDF Mitznefet (Green)";
		picture = "\dzn_IDF_Mitznefet\data\icon_m1.paa";
		model = "\dzn_IDF_Mitznefet\idf_miz_type1.p3d";
		CAMO_SELECTION(miz1_co.paa)
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\dzn_IDF_Mitznefet\idf_miz_type1.p3d";
			CAMO_SELECTION(miz1_co.paa)
			mass = 1;
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 0;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 0;
					passThrough = 0;
				};
			};
		};
	};	
	class dzn_H_IDF_Mitznefet_Desert: dzn_H_IDF_Mitznefet
	{
		displayName = "IDF Mitznefet (Desert)";
		picture = "\dzn_IDF_Mitznefet\data\icon_m1.paa";
		model = "\dzn_IDF_Mitznefet\idf_miz_type1.p3d";
		CAMO_SELECTION(miz2_co.paa)
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\dzn_IDF_Mitznefet\idf_miz_type1.p3d";
			CAMO_SELECTION(miz2_co.paa)
		};
	};
	
	// Night vision slot
	class NVGoggles;
	class dzn_NVG_IDF_Mitznefet_Cover: NVGoggles
	{
		scope = 2;
		author = "Excess & 10Dozen";
		displayName = "IDF Mitznefet cover (NV/Green)";
		picture = "\dzn_IDF_Mitznefet\data\icon_m1.paa";
		model = "\dzn_IDF_Mitznefet\idf_miz_cover.p3d";
		modelOptics = "-";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\dzn_IDF_Mitznefet\idf_miz_cover.p3d";
			modelOff = "\dzn_IDF_Mitznefet\idf_miz_cover.p3d";
			mass = 1;
		};
	};
	class dzn_NVG_IDF_Mitznefet_Cover_Desert: dzn_NVG_IDF_Mitznefet_Cover
	{
		displayName = "IDF Mitznefet cover (NV/Desert)";
		model = "\dzn_IDF_Mitznefet\idf_miz_cover_desert.p3d";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\dzn_IDF_Mitznefet\idf_miz_cover_desert.p3d";
			modelOff = "\dzn_IDF_Mitznefet\idf_miz_cover_desert.p3d";
			mass = 1;
		};
	};
	
	class dzn_NVG_IDF_Mitznefet_Cover2: dzn_NVG_IDF_Mitznefet_Cover
	{
		displayName = "IDF Mitznefet cover (Alt./NV/Green)";
		model = "\dzn_IDF_Mitznefet\idf_miz_cover2.p3d";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\dzn_IDF_Mitznefet\idf_miz_cover2.p3d";
			modelOff = "\dzn_IDF_Mitznefet\idf_miz_cover2.p3d";
			mass = 1;
		};
	};
	class dzn_NVG_IDF_Mitznefet_Cover2_Desert: dzn_NVG_IDF_Mitznefet_Cover2
	{
		displayName = "IDF Mitznefet cover (Alt./NV/Desert)";
		model = "\dzn_IDF_Mitznefet\idf_miz_cover2_desert.p3d";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\dzn_IDF_Mitznefet\idf_miz_cover2_desert.p3d";
			modelOff = "\dzn_IDF_Mitznefet\idf_miz_cover2_desert.p3d";
			mass = 1;
		};
	};
	
	class dzn_NVG_IDF_Mitznefet_Cover3: dzn_NVG_IDF_Mitznefet_Cover
	{
		displayName = "IDF Mitznefet cover (Alt.2/NV/Green)";
		model = "\dzn_IDF_Mitznefet\idf_miz_cover3.p3d";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\dzn_IDF_Mitznefet\idf_miz_cover3.p3d";
			modelOff = "\dzn_IDF_Mitznefet\idf_miz_cover3.p3d";
			mass = 1;
		};
	};
	class dzn_NVG_IDF_Mitznefet_Cover3_Desert: dzn_NVG_IDF_Mitznefet_Cover3
	{
		displayName = "IDF Mitznefet cover (Alt.2/NV/Desert)";
		model = "\dzn_IDF_Mitznefet\idf_miz_cover3_desert.p3d";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\dzn_IDF_Mitznefet\idf_miz_cover3_desert.p3d";
			modelOff = "\dzn_IDF_Mitznefet\idf_miz_cover3_desert.p3d";
			mass = 1;
		};
	};
};

class Headgear_Base_F;
class Item_Base_F;
class CfgGlasses
{
	class None;
	// Helmet covers
	class dzn_G_IDF_Mitznefet_Cover: None
	{
		scope = 2;
		mass = 1;
		author = "Excess & 10Dozen";
		displayName = "IDF Mitznefet cover (Green)";
		model = "\dzn_IDF_Mitznefet\idf_miz_cover.p3d";
		picture = "\dzn_IDF_Mitznefet\data\icon_m1.paa";
		identityTypes[] = {};
		CAMO_SELECTION(miz1_co.paa)
	};
	class dzn_G_IDF_Mitznefet_Cover_Desert: dzn_G_IDF_Mitznefet_Cover
	{
		displayName = "IDF Mitznefet cover (Desert)";
		CAMO_SELECTION(miz2_co.paa)
	};

	class dzn_G_IDF_Mitznefet_Cover2: dzn_G_IDF_Mitznefet_Cover 
	{
		displayName = "IDF Mitznefet cover (Alt./Green)";
		model = "\dzn_IDF_Mitznefet\idf_miz_cover2.p3d";
		CAMO_SELECTION(miz1_co.paa)
	};
	class dzn_G_IDF_Mitznefet_Cover2_Desert: dzn_G_IDF_Mitznefet_Cover2
	{
		displayName = "IDF Mitznefet cover (Alt./Desert)";
		CAMO_SELECTION(miz2_co.paa)
	};
	
	class dzn_G_IDF_Mitznefet_Cover3: dzn_G_IDF_Mitznefet_Cover 
	{
		displayName = "IDF Mitznefet cover (Alt.2/Green)";
		model = "\dzn_IDF_Mitznefet\idf_miz_cover3.p3d";
		CAMO_SELECTION(miz1_co.paa)
	};
	class dzn_G_IDF_Mitznefet_Cover3_Desert: dzn_G_IDF_Mitznefet_Cover3
	{
		displayName = "IDF Mitznefet cover (Alt.2/Desert)";
		CAMO_SELECTION(miz2_co.paa)
	};
};