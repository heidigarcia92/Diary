#include "AddSubActivityFrame.h"
#include "ActivityDetailsFrame.h"

AddSubActivityFrame::AddSubActivityFrame(wxWindow* parent, Activity* _a) : AddSubActivityBase(parent) {
    a=_a;
}

AddSubActivityFrame::~AddSubActivityFrame() {
}

void AddSubActivityFrame::OnButton_confirmsubactivityButtonClicked(wxCommandEvent& event) {
    if(textTitle->IsEmpty() || textDescription->IsEmpty() ){
        return;
    }
    a->getSubActivityList().createSubActivity(textTitle->GetValue().ToStdString());
    a->getSubActivityList().getSubActivity(textTitle->GetValue().ToStdString()).setDescription(textDescription->GetValue().ToStdString());
    dynamic_cast <ActivityDetailsFrame*> (GetParent()) ->refreshListSubActivity();
    Close();
}
