#include "AddSubActivity.h"
#include "ActivityDetails.h"

AddSubActivity::AddSubActivity(wxWindow* parent, Activity* _a) : AddSubActivityBase(parent) {
    a=_a;
}

AddSubActivity::~AddSubActivity() {
}

void AddSubActivity::OnButton_confirmsubactivityButtonClicked(wxCommandEvent& event) {
    if(textTitle->IsEmpty() || textDescription->IsEmpty() ){
        return;
    }
    a->getSubActivityList().createSubActivity(textTitle->GetValue().ToStdString());
    a->getSubActivityList().getSubActivity(textTitle->GetValue().ToStdString()).setDescription(textDescription->GetValue().ToStdString());
    dynamic_cast <ActivityDetails*> (GetParent()) ->refreshListSubActivity();
    Close();
}
