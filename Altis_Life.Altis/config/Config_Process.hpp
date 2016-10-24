/*
*   class:
*       MaterialsReq (Needed to process) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       MaterialsGive (Returned items) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       Text (Progess Bar Text) = Localised String
*       NoLicenseCost (Cost to process w/o license) = Scalar
*
*   Example for multiprocess:
*
*   class Example {
*       MaterialsReq[] = {{"cocaine_processed",1},{"heroin_processed",1}};
*       MaterialsGive[] = {{"diamond_cut",1}};
*       Text = "STR_Process_Example";
*       //ScrollText = "Process Example";
*       NoLicenseCost = 4000;
*   };
*/

class ProcessAction {
    class oil {
        MaterialsReq[] = {{"oil_unprocessed",1}};
        MaterialsGive[] = {{"oil_processed",1}};
        Text = "STR_Process_Oil";
        //ScrollText = "Process Oil";
        NoLicenseCost = 1200;
    };
    class diamond {
        MaterialsReq[] = {{"diamond_uncut",1}};
        MaterialsGive[] = {{"diamond_cut",1}};
        Text = "STR_Process_Diamond";
        //ScrollText = "Cut Diamonds";
        NoLicenseCost = 1350;
    };
    class heroin {
        MaterialsReq[] = {{"heroin_unprocessed",1}};
        MaterialsGive[] = {{"heroin_processed",1}};
        Text = "STR_Process_Heroin";
        //ScrollText = "Process Heroin";
        NoLicenseCost = 1750;
    };
    class copper {
        MaterialsReq[] = {{"copper_unrefined",1}};
        MaterialsGive[] = {{"copper_refined",1}};
        Text = "STR_Process_Copper";
        //ScrollText = "Refine Copper";
        NoLicenseCost = 750;
    };
    class iron {
        MaterialsReq[] = {{"iron_unrefined",1}};
        MaterialsGive[] = {{"iron_refined",1}};
        Text = "STR_Process_Iron";
        //ScrollText = "Refine Iron";
        NoLicenseCost = 1120;
    };
    class sand {
        MaterialsReq[] = {{"sand",1}};
        MaterialsGive[] = {{"glass",1}};
        Text = "STR_Process_Sand";
        //ScrollText = "Melt Sand into Glass";
        NoLicenseCost = 650;
    };
    class salt {
        MaterialsReq[] = {{"salt_unrefined",1}};
        MaterialsGive[] = {{"salt_refined",1}};
        Text = "STR_Process_Salt";
        //ScrollText = "Refine Salt";
        NoLicenseCost = 450;
    };
    class cocaine {
        MaterialsReq[] = {{"cocaine_unprocessed",1}};
        MaterialsGive[] = {{"cocaine_processed",1}};
        Text = "STR_Process_Cocaine";
        //ScrollText = "Process Cocaine";
        NoLicenseCost = 1500;
    };
    class marijuana {
        MaterialsReq[] = {{"cannabis",1}};
        MaterialsGive[] = {{"marijuana",1}};
        Text = "STR_Process_Marijuana";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 500;
    };
    class cement {
        MaterialsReq[] = {{"rock",1}};
        MaterialsGive[] = {{"cement",1}};
        Text = "STR_Process_Cement";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 350;
    };
	class gold {
		MaterialsReq[] = {{"gold_unrefined",1}};
		MaterialsGive[] = {{"gold_refined",1}};
		Text = "STR_Process_Gold";
		//ScrollText = "Schlage Gold platt";
		NoLicenseCost = -1;
	};
	class silver {
		MaterialsReq[] = {{"silver_unrefined",1}};
		MaterialsGive[] = {{"silver_refined",1}};
		Text = "STR_Process_Silver";
		//ScrollText = "Process Silver";
		NoLicenseCost = -1;
	};
	class wine {
		MaterialsReq[] = {{"grapes",1}};
		MaterialsGive[] = {{"winebottle",1}};
		Text = "STR_Process_Wine";
		//ScrollText = "Process Wine";
		NoLicenseCost = -1;
	};
	class olives {
		MaterialsReq[] = {{"olives",1}};
		MaterialsGive[] = {{"oliveoil",1}};
		Text = "STR_Process_Olives";
		//ScrollText = "Process Olives";
		NoLicenseCost = -1;
	};
	class reliclicensed {
		MaterialsReq[] = {{"relic",1}};
		MaterialsGive[] = {{"reliclicensed",1}};
		Text = "STR_Process_RelicL";
		//ScrollText = "Process Relic";
		NoLicenseCost = -1;
	};
	class pearl {
		MaterialsReq[] = {{"mussel",1}};
		MaterialsGive[] = {{"pearl",1}};
		Text = "STR_Process_Pearl";
		//ScrollText = "Process Mussel";
		NoLicenseCost = -1;
	};
	class lsd {
		MaterialsReq[] = {{"frog",1}};
		MaterialsGive[] = {{"lsd",1}};
		Text = "STR_Process_LSD";
		//ScrollText = "Process Frog";
		NoLicenseCost = -1;
	};
	class turtle {
		MaterialsReq[] = {{"turtle_raw",1}};
		MaterialsGive[] = {{"turtle_soup",1}};
		Text = "STR_Process_Turtle";
		//ScrollText = "Process Turtle";
		NoLicenseCost = -1;
	};
	class moonshine {
		MaterialsReq[] = {{"grapes",1}};
		MaterialsGive[] = {{"moonshine",1}};
		Text = "STR_Process_Moonshine";
		//ScrollText = "Process Grapes";
		NoLicenseCost = -1;
	};
};
