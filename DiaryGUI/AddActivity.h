#ifndef ADDACTIVITY_H
#define ADDACTIVITY_H
#include "wxcrafter.h"
#include "Administrator.hpp"

class AddActivity : public AddActivityBase
{
public:
    AddActivity(wxWindow* parent, ActivityList* _al, int _POS);
    virtual ~AddActivity();
protected:
    virtual void OnButtoconfirmButtonClicked(wxCommandEvent& event);
    virtual void OnCheck_deadlineCheckboxClicked(wxCommandEvent& event);
private:
    ActivityList* al;
    int POS;
};
#endif // ADDACTIVITY_H
