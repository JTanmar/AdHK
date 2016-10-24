class CfgGather {
    class Resources {
        class orange {
            amount = 5;
            zones[] = { "orange_1", "orange_2", "orange_3", "orange_4" };
            item = "";
            zoneSize = 30;
        };
        class peach {
            amount = 5;
            zones[] = { "citrus_1", "citrus_2", "citrus_3", "citrus_4" };
            item = "";
            zoneSize = 30;
        };
        class heroin_unprocessed {
            amount = 3;
            zones[] = { "heroin_1" };
            item = "";
            zoneSize = 30;
        };
        class cocaine_unprocessed {
            amount = 3;
            zones[] = { "cocaine_1" };
            item = "";
            zoneSize = 30;
        };
        class cannabis {
            amount = 3;
            zones[] = { "weed_1" };
            item = "";
            zoneSize = 30;
        };
    };

/*
This block can be set using percent,if you want players to mine only one resource ,just leave it as it is.
Example:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { "copper_unrefined" };
This will make players mine only copper_unrefined
Now let's go deeper
Example 2:
        class copper_unrefined
    {
            amount = 2;
        zones[] = { "copper_mine" };
        item = "pickaxe";
        mined[] = { {"copper_unrefined",0,25},{"iron_unrefined",25,95},{"diamond_uncut",95,100} };
    };
    This will give :
    25(±1)% to copper_unrefined;
    70(±1)% to iron_unrefined;
    5%(±1)% to diamond_uncut;

                                                         ! Watch Out !
 If percents are used,you MUST put more than 1 resource in the mined parameter
 mined[] = { {"copper_unrefined",0,25} }; NOT OK (But the script will work)
 mined[] = { {"copper_unrefined",0,45 },{"iron_unrefined",45} };  NOT OK (The script won't work )
 mined[] = { {"copper_unrefined",0,45},{"copper_unrefined",80,100} }; NOT OK
 mined[] = { "copper_unrefined" }; OK
 mined[] = { {"copper_unrefined",0,35} , { "iron_unrefined" ,35,100 } }; OK
*/

    class Minerals {
        class copper_unrefined {
            amount = 2;
            zones[] = { "copper_mine" };
            item = "pickaxe";
            mined[] = {"copper_unrefined"};
            zoneSize = 30;
        };
        class iron_unrefined {
            amount = 2;
            zones[] = { "iron_mine" };
            item = "pickaxe";
            mined[] = { "iron_unrefined" };
            zoneSize = 30;
        };
        class salt_unrefined {
            amount = 2;
            zones[] = { "salt_mine" };
            item = "pickaxe";
            mined[] = { "salt_unrefined" };
            zoneSize = 30;
        };
        class sand {
            amount = 2;
            zones[] = { "sand_mine" };
            item = "pickaxe";
            mined[] = { "sand" };
            zoneSize = 30;
        };
        class diamond_uncut {
            amount = 2;
            zones[] = { "diamond_mine" };
            item = "pickaxe";
            mined[] = { "diamond_uncut" };
            zoneSize = 30;
        };
        class rock {
            amount = 2;
            zones[] = { "rock_quarry" };
            item = "pickaxe";
            mined[] = { "rock" };
            zoneSize = 30;
        };
        class oil_unprocessed {
            amount = 2;
            zones[] = { "oil_field_1", "oil_field_2" };
            item = "pickaxe";
            mined[] = { "oil_unprocessed" };
            zoneSize = 30;
        };
		class gold_unrefined {
			amount = 1;
			zones [] = { "gold_mine" };
			item = "pickaxe";
			mined[] = { "gold_unrefined" };
			zoneSize = 30;
		};
		class silver_unrefined {
			amount = 1;
			zones [] = { "silver_mine" };
			item = "pickaxe";
			mined[] = { "silver_unrefined" };
			zoneSize = 30;
		};
		class grapes {
			amount = 1;
			zones [] = { "wine_1" };
			item = "";
			mined[] = { "grapes" };
			zoneSize = 30;
		};
		class olives {
			amount = 1;
			zones [] = { "olives_1" };
			item = "";
			mined[] = { "olives" };
			zoneSize = 30;
		};
		class wheel {
			amount = 1;
			zones [] = { "wheels_mine" };
			item = "";
			mined[] = { "wheel" };
			zoneSize = 30;
		};
		class relic {
			amount = 1;
			zones [] = { "arch_mine" };
			item = "shovel";
			mined[] = { "relic" };
			zoneSize = 30;
		};
		class mussel {
			amount = 1;
			zones [] = { "pearl_mine" };
			item = "fishingnet";
			mined[] = { "mussel" };
			zoneSize = 30;
		};
		class frog {
			amount = 1;
			zones [] = { "frog_1" };
			item = "fishingnet";
			mined[] = { "frog" };
			zoneSize = 30;
		};
		class turtle {
			amount = 1;
			zones [] = { "turtle" };
			item = "fishingnet";
			mined[] = { "turtle_raw" };
			zoneSize = 30;
		};
    };
};