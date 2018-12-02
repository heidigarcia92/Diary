#include "DropTargetListCtrl.h"

DropTargetListCtrl::DropTargetListCtrl(wxListCtrl* _list) {
    list = _list;
}

void DropTargetListCtrl::newDropEvent(int _index, wxPoint _start, ActivityList* _al) {
    start = _start;
    index = _index;
    al = _al;
    
    wxRect rect;
    list->GetItemRect(index, rect, wxLIST_RECT_LABEL);
    itemHeight = rect.GetHeight();
}

bool DropTargetListCtrl::OnDropText(wxCoord x, wxCoord y, const wxString& data) {
    int i = 0, swap_index, item_count;
    
    item_count = (start.y - y) / itemHeight;
    item_count *= (item_count < 0) ? -1 : 1;

    swap_index = (start.y - y > 0) ? index - item_count : index + item_count;
    swap_index = (swap_index < 0) ? 0 : swap_index; 
    
    al->getActivity(data.ToStdString()).setPosition(swap_index); 

    if (start.y - y < 0) {    
        int ax = index;
        for (Activity& a : al->getActivityContainer()) {
            if (i <= index) {
                i++;
                continue;
            } else if (i> index && i <= swap_index) {
                al->getActivity(a.getTitle()).setPosition(ax++);
                i++;
            } else {
                break;
            }
        }
    } else {
         int ax = swap_index;
         for (Activity& a : al->getActivityContainer()) {
            if (i < swap_index) {
                i++;
                continue;
            } else if (i >= swap_index && i < index) {
                al->getActivity(a.getTitle()).setPosition(++ax);
                i++;
            } else {
                break;
            }
        }
    }
    return true;
}