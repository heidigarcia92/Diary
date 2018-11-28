#ifndef ADDSUBACTIVITY_H
#define ADDSUBACTIVITY_H
#include "wxcrafter.h"
#include "Administrator.hpp"

class AddSubActivity : public AddSubActivityBase
{
public:
    AddSubActivity(wxWindow* parent, Activity* _a);
    virtual ~AddSubActivity();
protected:
    virtual void OnButton_confirmsubactivityButtonClicked(wxCommandEvent& event);
private:
    Activity* a;
};
#endif // ADDSUBACTIVITY_H
