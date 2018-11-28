#ifndef ADDPERSON_H
#define ADDPERSON_H
#include "wxcrafter.h"
#include "Administrator.hpp"

class AddPerson : public AddPersonBase
{
public:
    AddPerson(wxWindow* parent, Activity* _a);
    virtual ~AddPerson();
private:
    Activity* a;
protected:
    virtual void OnButton_confirmpersonButtonClicked(wxCommandEvent& event);
};
#endif // ADDPERSON_H
