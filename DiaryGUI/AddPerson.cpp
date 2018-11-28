#include "AddPerson.h"
#include "ActivityDetails.h"

AddPerson::AddPerson(wxWindow* parent, Activity* _a) : AddPersonBase(parent) {
    a=_a;
}

AddPerson::~AddPerson() {
}

void AddPerson::OnButton_confirmpersonButtonClicked(wxCommandEvent& event) {
    if(textFirstName->IsEmpty() || textLastName->IsEmpty()){
        return;
    }
    Person p;
    p.setFirstName(textFirstName->GetValue().ToStdString());
    p.setLastName(textLastName->GetValue().ToStdString());
    a->addPerson(p);
    dynamic_cast <ActivityDetails*> (GetParent()) -> refreshListPerson();
    Close();
}
