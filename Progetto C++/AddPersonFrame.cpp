#include "AddPersonFrame.h"
#include "ActivityDetailsFrame.h"

AddPersonFrame::AddPersonFrame(wxWindow* parent, Activity* _a) : AddPersonBase(parent) {
    a=_a;
}

AddPersonFrame::~AddPersonFrame() {
}

void AddPersonFrame::OnButton_confirmpersonButtonClicked(wxCommandEvent& event) {
    if(textFirstName->IsEmpty() || textLastName->IsEmpty()){
        return;
    }
    Person p;
    p.setFirstName(textFirstName->GetValue().ToStdString());
    p.setLastName(textLastName->GetValue().ToStdString());
    a->addPerson(p);
    dynamic_cast <ActivityDetailsFrame*> (GetParent()) -> refreshListPerson();
    Close();
}
