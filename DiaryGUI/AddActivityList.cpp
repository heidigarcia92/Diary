#include "AddActivityList.h"
#include "MainFrame.h"

AddActivityList::AddActivityList(wxWindow* parent, Board* _b, string _name, bool _mod) : AddActivityListBase(parent) {
    b=_b;
    textAddActivityList->SetValue(_name);
    mod=_mod;
    original_name=_name;
}

AddActivityList::~AddActivityList() {
}


void AddActivityList::OnButtonConfirmActivityListButtonClicked(wxCommandEvent& event) {
    if(textAddActivityList->IsEmpty()){ 
        return;
    }
    MainFrame* mf = dynamic_cast <MainFrame*> (GetParent());
    if(mod == true) {
        b->getActivityList(original_name).setName(textAddActivityList->GetValue().ToStdString()); 
    } else{
        b->createActivityList(textAddActivityList->GetValue().ToStdString());
        mf->startPOS = b->getActivityListContainer().size()-3;
    }
    mf->refreshGroupListCtrl(mf->startPOS);
    Close();
}
