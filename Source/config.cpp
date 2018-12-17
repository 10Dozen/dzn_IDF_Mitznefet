
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
			,"dzn_NVG_IDF_Mitznefet_Cover4"
			,"dzn_NVG_IDF_Mitznefet_Cover4_Desert"
			
			,"dzn_G_IDF_Mitznefet_Cover"
			,"dzn_G_IDF_Mitznefet_Cover_Desert"
			,"dzn_G_IDF_Mitznefet_Cover2"
			,"dzn_G_IDF_Mitznefet_Cover2_Desert"
			,"dzn_G_IDF_Mitznefet_Cover3"
			,"dzn_G_IDF_Mitznefet_Cover3_Desert"
			,"dzn_G_IDF_Mitznefet_Cover4"
			,"dzn_G_IDF_Mitznefet_Cover4_Desert"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F"};
		author = "Excess3 & 10Dozen";
	};
};

#define ICON(NAME) picture = \dzn_IDF_Mitznefet\data\ui\##NAME
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
		ICON(s1_green);
		model = "\dzn_IDF_Mitznefet\idf_miznefet.p3d";
		CAMO_SELECTION(miz1_co.paa)
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\dzn_IDF_Mitznefet\idf_miznefet.p3d";
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
		ICON(s1_desert);
		model = "\dzn_IDF_Mitznefet\idf_miznefet.p3d";
		CAMO_SELECTION(miz2_co.paa)
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\dzn_IDF_Mitznefet\idf_miznefet.p3d";
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
		ICON(s1_green);
		model = "\dzn_IDF_Mitznefet\idf_miz_cover_s1.p3d";
		modelOptics = "-";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\dzn_IDF_Mitznefet\idf_miz_cover_s1.p3d";
			modelOff = "\dzn_IDF_Mitznefet\idf_miz_cover_s1.p3d";
			mass = 1;
		};
	};
	class dzn_NVG_IDF_Mitznefet_Cover_Desert: dzn_NVG_IDF_Mitznefet_Cover
	{
		displayName = "IDF Mitznefet cover (NV/Desert)";
		ICON(s1_desert);
		model = "\dzn_IDF_Mitznefet\idf_miz_cover_s1_desert.p3d";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\dzn_IDF_Mitznefet\idf_miz_cover_s1_desert.p3d";
			modelOff = "\dzn_IDF_Mitznefet\idf_miz_cover_s1_desert.p3d";
			mass = 1;
		};
	};
	
	class dzn_NVG_IDF_Mitznefet_Cover2: dzn_NVG_IDF_Mitznefet_Cover
	{
		displayName = "IDF Mitznefet cover (Alt./NV/Green)";
		ICON(s2_green);
		model = "\dzn_IDF_Mitznefet\idf_miz_cover_s2.p3d";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\dzn_IDF_Mitznefet\idf_miz_cover_s2.p3d";
			modelOff = "\dzn_IDF_Mitznefet\idf_miz_cover_s2.p3d";
			mass = 1;
		};
	};
	class dzn_NVG_IDF_Mitznefet_Cover2_Desert: dzn_NVG_IDF_Mitznefet_Cover2
	{
		displayName = "IDF Mitznefet cover (Alt./NV/Desert)";
		ICON(s2_desert);
		model = "\dzn_IDF_Mitznefet\idf_miz_cover_s2_desert.p3d";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\dzn_IDF_Mitznefet\idf_miz_cover_s2_desert.p3d";
			modelOff = "\dzn_IDF_Mitznefet\idf_miz_cover_s2_desert.p3d";
			mass = 1;
		};
	};
	
	class dzn_NVG_IDF_Mitznefet_Cover3: dzn_NVG_IDF_Mitznefet_Cover
	{
		displayName = "IDF Mitznefet cover (Alt.2/NV/Green)";
		ICON(s3_green);
		model = "\dzn_IDF_Mitznefet\idf_miz_cover_s3.p3d";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\dzn_IDF_Mitznefet\idf_miz_cover_s3.p3d";
			modelOff = "\dzn_IDF_Mitznefet\idf_miz_cover_s3.p3d";
			mass = 1;
		};
	};
	class dzn_NVG_IDF_Mitznefet_Cover3_Desert: dzn_NVG_IDF_Mitznefet_Cover3
	{
		displayName = "IDF Mitznefet cover (Alt.2/NV/Desert)";
		ICON(s3_desert);
		model = "\dzn_IDF_Mitznefet\idf_miz_cover_s3_desert.p3d";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\dzn_IDF_Mitznefet\idf_miz_cover_s3_desert.p3d";
			modelOff = "\dzn_IDF_Mitznefet\idf_miz_cover_s3_desert.p3d";
			mass = 1;
		};
	};
	
	class dzn_NVG_IDF_Mitznefet_Cover4: dzn_NVG_IDF_Mitznefet_Cover
	{
		displayName = "IDF Mitznefet cover (Alt.3/NV/Green)";
		ICON(s4_green);
		model = "\dzn_IDF_Mitznefet\idf_miz_cover_s4.p3d";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\dzn_IDF_Mitznefet\idf_miz_cover_s4.p3d";
			modelOff = "\dzn_IDF_Mitznefet\idf_miz_cover_s4.p3d";
			mass = 1;
		};
	};
	class dzn_NVG_IDF_Mitznefet_Cover4_Desert: dzn_NVG_IDF_Mitznefet_Cover4
	{
		displayName = "IDF Mitznefet cover (Alt.3/NV/Desert)";
		ICON(s4_desert);
		model = "\dzn_IDF_Mitznefet\idf_miz_cover_s4_desert.p3d";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "\dzn_IDF_Mitznefet\idf_miz_cover_s4_desert.p3d";
			modelOff = "\dzn_IDF_Mitznefet\idf_miz_cover_s4_desert.p3d";
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
		ICON(s1_green);
		model = "\dzn_IDF_Mitznefet\idf_miz_cover_s1.p3d";
		identityTypes[] = {};
		CAMO_SELECTION(miz1_co.paa)
	};
	class dzn_G_IDF_Mitznefet_Cover_Desert: dzn_G_IDF_Mitznefet_Cover
	{
		displayName = "IDF Mitznefet cover (Desert)";
		ICON(s1_desert);
		CAMO_SELECTION(miz2_co.paa)		
	};
	
	class dzn_G_IDF_Mitznefet_Cover2: dzn_G_IDF_Mitznefet_Cover 
	{
		displayName = "IDF Mitznefet cover (Alt./Green)";
		ICON(s2_green);
		model = "\dzn_IDF_Mitznefet\idf_miz_cover_s2.p3d";		
		CAMO_SELECTION(miz1_co.paa)
	};
	class dzn_G_IDF_Mitznefet_Cover2_Desert: dzn_G_IDF_Mitznefet_Cover2
	{
		displayName = "IDF Mitznefet cover (Alt./Desert)";
		ICON(s2_desert);
		CAMO_SELECTION(miz2_co.paa)
	};
	
	class dzn_G_IDF_Mitznefet_Cover3: dzn_G_IDF_Mitznefet_Cover 
	{
		displayName = "IDF Mitznefet cover (Alt.2/Green)";
		ICON(s3_green);
		model = "\dzn_IDF_Mitznefet\idf_miz_cover_s3.p3d";
		CAMO_SELECTION(miz1_co.paa)
	};
	class dzn_G_IDF_Mitznefet_Cover3_Desert: dzn_G_IDF_Mitznefet_Cover3
	{
		displayName = "IDF Mitznefet cover (Alt.2/Desert)";
		ICON(s3_desert);
		CAMO_SELECTION(miz2_co.paa)
	};
	
	class dzn_G_IDF_Mitznefet_Cover4: dzn_G_IDF_Mitznefet_Cover 
	{
		displayName = "IDF Mitznefet cover (Alt.3/Green)";
		ICON(s4_green);
		model = "\dzn_IDF_Mitznefet\idf_miz_cover_s4.p3d";
		CAMO_SELECTION(miz1_co.paa)
	};
	class dzn_G_IDF_Mitznefet_Cover4_Desert: dzn_G_IDF_Mitznefet_Cover4
	{
		displayName = "IDF Mitznefet cover (Alt.3/Desert)";
		ICON(s4_desert);
		CAMO_SELECTION(miz2_co.paa)
	};
};