#ifndef ADDACTIVITYLIST_H
#define ADDACTIVITYLIST_H
#include "wxcrafter.h"
#include "Administrator.hpp"

class AddActivityListFrame : public AddActivityListBase {
public:
    AddActivityListFrame(wxWindow* parent, Board* _b, string _name = "", bool _mod = FALSE);
    virtual ~AddActivityListFrame();
private:
    Board* b;
    bool mod;
    string original_name;
protected:
    virtual void OnButtonConfirmActivityListButtonClicked(wxCommandEvent& event);
};
#endif // ADDACTIVITYLIST_H
