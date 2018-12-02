#ifndef DROPTARGETLISTCTRL_H
#define DROPTARGETLISTCTRL_H

#include <wx/listctrl.h>
#include <wx/dnd.h>
#include "Administrator.hpp"

class DropTargetListCtrl : public wxTextDropTarget {

public:
    DropTargetListCtrl(wxListCtrl* _list);
    void newDropEvent(int index, wxPoint _start, ActivityList* al);
    virtual bool OnDropText(wxCoord x, wxCoord y, const wxString& data);

private:
    int itemHeight;
    wxListCtrl* list;
    wxPoint start;
    int index;
    ActivityList* al;
    
};

#endif // DROPTARGETLISTCTRL_H