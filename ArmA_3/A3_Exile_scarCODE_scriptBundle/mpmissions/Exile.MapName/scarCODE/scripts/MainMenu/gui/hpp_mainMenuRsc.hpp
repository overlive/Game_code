////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by IT07, v1.063, #Pikiqu)
////////////////////////////////////////////////////////

class mainTitle: RscText
{
	shadow = 0;

	idc = 1000;
	text = "scarCODE Main Menu"; //--- ToDo: Localize;
	x = 11 * GUI_GRID_W + GUI_GRID_X;
	y = 15 * GUI_GRID_H + GUI_GRID_Y;
	w = 18 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class buttonClose: RscButton
{
	action = closeDialog 0;

	idc = 1602;
	text = "CLOSE"; //--- ToDo: Localize;
	x = 25 * GUI_GRID_W + GUI_GRID_X;
	y = 17.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 4 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscCombo_2100: RscCombo
{
	onLBSelChanged = [_this] spawn SC_fnc_mainMenuOpenSelected;

	idc = 2100;
	x = 11 * GUI_GRID_W + GUI_GRID_X;
	y = 16 * GUI_GRID_H + GUI_GRID_Y;
	w = 18 * GUI_GRID_W;
	h = 1.5 * GUI_GRID_H;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
