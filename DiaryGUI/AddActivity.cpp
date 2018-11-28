#include "AddActivity.h"
#include "MainFrame.h"

using namespace std;

AddActivity::AddActivity(wxWindow* parent, ActivityList* _al, int _POS) : AddActivityBase(parent) {
    al=_al;
    POS=_POS;
}

AddActivity::~AddActivity() {
}

void AddActivity::OnButtoconfirmButtonClicked(wxCommandEvent& event) {
    if (text_title->IsEmpty() || text_description->IsEmpty()){
        return;
    }
    string name = text_title->GetValue().ToStdString();
    string description = text_description->GetValue().ToStdString();
    al->createActivity(name);
    Activity& a = al->getActivity(name);
    a.setDescription(description);
    if(check_deadline->IsChecked()){
        wxDateTime date_time = calendar->GetDate();
        Date date = Date(date_time.GetDay(), date_time.GetMonth()+1, date_time.GetYear());
        a.setDeadline(date);
    }
    dynamic_cast <MainFrame*> (GetParent())->refreshListCtrl(POS, *al);
    Close();
}

void AddActivity::OnCheck_deadlineCheckboxClicked(wxCommandEvent& event) {
    calendar->Enable(check_deadline->IsChecked());
}
