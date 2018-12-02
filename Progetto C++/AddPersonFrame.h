#ifndef ADDPERSON_H
#define ADDPERSON_H
#include "wxcrafter.h"
#include "Administrator.hpp"

class AddPersonFrame : public AddPersonBase
{
public:
    AddPersonFrame(wxWindow* parent, Activity* _a);
    virtual ~AddPersonFrame();
private:
    Activity* a;
protected:
    virtual void OnButton_confirmpersonButtonClicked(wxCommandEvent& event);
};
#endif // ADDPERSON_H
