#include "FillPanel.h"

#include "../../include/padlock16x16-blue.xpm"
#include "EffectPanelUtils.h"

//(*InternalHeaders(FillPanel)







//(*IdInit(FillPanel)








BEGIN_EVENT_TABLE(FillPanel,wxPanel)
	//(*EventTable(FillPanel)
	//*)
END_EVENT_TABLE()

FillPanel::FillPanel(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(FillPanel)


















































    SetName("ID_PANEL_FILL");

    BitmapButton_Fill_Position->GetValue()->SetLimits(0, 100);
}

FillPanel::~FillPanel()
{
	//(*Destroy(FillPanel)
	//*)
}

PANEL_EVENT_HANDLERS(FillPanel)
