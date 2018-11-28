#ifndef ACTIVITYDETAILS_H
#define ACTIVITYDETAILS_H
#include "wxcrafter.h"
#include "Administrator.hpp"

class ActivityDetails : public ActivityDetailsBase {
public:
    ActivityDetails(wxWindow* parent, Activity* _a);
    virtual ~ActivityDetails();
    void refreshListPerson();
    void refreshListSubActivity();
    
private:
Activity* a;
void refreshField();
void enableDisableField(bool active);

protected:
    virtual void OnButton_modifyconfirmButtonClicked(wxCommandEvent& event);
    virtual void OnCheck_modifyCheckboxClicked(wxCommandEvent& event);
    virtual void OnList_subactivityListItemSelected(wxListEvent& event);
    virtual void OnList_personListItemSelected(wxListEvent& event);
    virtual void OnButtoaddsubactivityButtonClicked(wxCommandEvent& event);
    virtual void OnButton_removesubactivityButtonClicked(wxCommandEvent& event);
    virtual void OnButton_removepersonButtonClicked(wxCommandEvent& event);
    virtual void OnButton_addpersonButtonClicked(wxCommandEvent& event);
};
#endif // ACTIVITYDETAILS_H
