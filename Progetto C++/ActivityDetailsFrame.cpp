#include "ActivityDetailsFrame.h"
#include "AddPersonFrame.h"
#include "AddSubActivityFrame.h"
#include "MainFrame.h"

ActivityDetailsFrame::ActivityDetailsFrame(wxWindow* parent, Activity* _a) : ActivityDetailsBase(parent) {
    a=_a;
    refreshListPerson();
    refreshListSubActivity();
    refreshField();
}

ActivityDetailsFrame::~ActivityDetailsFrame() {
}

void ActivityDetailsFrame::refreshListPerson(){
    int p=0;
    list_person->DeleteAllItems();
    for(Person& person : a->getPersonContainer()){
        list_person->InsertItem(p, "");
        list_person->SetItem(p, 0, person.firstName);
        list_person->SetItem(p, 1, person.lastName);
        p++;
    }
}

void ActivityDetailsFrame::refreshListSubActivity(){
    int p=0;
    list_subActivity->DeleteAllItems();
    for(SubActivity& sa : a->getSubActivityList().getSubActivityContainer()){
        list_subActivity->InsertItem(p, "");
        list_subActivity->SetItem(p, 0, sa.getTitle());
        list_subActivity->SetItem(p, 1, sa.getDescription());
        p++;
    }
}

void ActivityDetailsFrame::refreshField(){
    this->SetTitle("Diary: " + a->getTitle());
    text_title->SetValue(a->getTitle());
    text_description->SetValue(a->getDescription());
    calendar_modify->SetDate(wxDateTime(a->getDate().rawDate()));
}

void ActivityDetailsFrame::enableDisableField(bool active) {
    text_title->Enable(active);
    text_description->Enable(active);
    button_modifyconfirm->Enable(active);
    calendar_modify->Enable(active);
}

void ActivityDetailsFrame::OnButton_addpersonButtonClicked(wxCommandEvent& event) {
    AddPersonFrame* ap = new AddPersonFrame (this, a);
    ap->Show();
}

void ActivityDetailsFrame::OnButton_removepersonButtonClicked(wxCommandEvent& event) {
    int selectedItem = list_person->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
    for(Person& p : a->getPersonContainer()){
        if(p.firstName == list_person->GetItemText(selectedItem, 0).ToStdString() && 
        p.lastName == list_person->GetItemText(selectedItem, 1).ToStdString() ) {
            a->removePerson(p);
            refreshListPerson();
            button_removePerson->Disable();
            return;
        }
    }
}

void ActivityDetailsFrame::OnButtoaddsubactivityButtonClicked(wxCommandEvent& event) {
    AddSubActivityFrame* ad = new AddSubActivityFrame (this, a);
    ad->Show();
}

void ActivityDetailsFrame::OnButton_removesubactivityButtonClicked(wxCommandEvent& event) {
    int selectedItem = list_subActivity->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
    for(SubActivity& sa : a->getSubActivityList().getSubActivityContainer()){
        if(sa.getTitle() == list_subActivity->GetItemText(selectedItem, 0).ToStdString()) {
            a->getSubActivityList().removeSubActivity(sa);
            refreshListSubActivity();
            button_removeSubActivity->Disable();
            return;
        }
    }
}

void ActivityDetailsFrame::OnList_personListItemSelected(wxListEvent& event) {
    button_removePerson->Enable();
}

void ActivityDetailsFrame::OnList_subactivityListItemSelected(wxListEvent& event) {
    button_removeSubActivity->Enable();
}
void ActivityDetailsFrame::OnButton_modifyconfirmButtonClicked(wxCommandEvent& event) {
    a->setTitle(text_title->GetValue().ToStdString());
    a->setDescription(text_description->GetValue().ToStdString());
    wxDateTime date_time = calendar_modify->GetDate();
        Date date = Date(date_time.GetDay(), date_time.GetMonth()+1, date_time.GetYear());
        a->setDeadline(date);
        refreshField();
        enableDisableField(false);
        check_modify->SetValue(false);
        MainFrame* mf = dynamic_cast <MainFrame*> (GetParent());
        mf->refreshGroupListCtrl(mf->startPOS);
}

void ActivityDetailsFrame::OnCheck_modifyCheckboxClicked(wxCommandEvent& event) {
    if(button_modifyconfirm->IsEnabled() && !check_modify->IsChecked()){
        refreshField();
        enableDisableField(false);
    } else if (check_modify->IsChecked()) {
        enableDisableField(true);
    }
}
