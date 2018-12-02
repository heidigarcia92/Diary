#ifndef ADDSUBACTIVITY_H
#define ADDSUBACTIVITY_H
#include "wxcrafter.h"
#include "Administrator.hpp"

class AddSubActivityFrame : public AddSubActivityBase
{
public:
    AddSubActivityFrame(wxWindow* parent, Activity* _a);
    virtual ~AddSubActivityFrame();
protected:
    virtual void OnButton_confirmsubactivityButtonClicked(wxCommandEvent& event);
private:
    Activity* a;
};
#endif // ADDSUBACTIVITY_H
