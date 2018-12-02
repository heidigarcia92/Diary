#include "MainFrame.h"
#include "AddActivityFrame.h"
#include "AddActivityListFrame.h"
#include <wx/aboutdlg.h>
#include <list>
#include <iterator>

using namespace std;

MainFrame::MainFrame(wxWindow* parent, Board* _board) : MainFrameBaseClass(parent){
    startPOS=0;
    board=_board;
    this->SetTitle("Diary: " + board->getName());
    refreshGroupListCtrl(startPOS);
    
    dtlc1 = new DropTargetListCtrl(list1);
    list1->SetDropTarget(dtlc1);
    
    dtlc2 = new DropTargetListCtrl(list2);
    list2->SetDropTarget(dtlc2);
    
    dtlc3 = new DropTargetListCtrl(list3);
    list3->SetDropTarget(dtlc3);
}

MainFrame::~MainFrame(){
}

void MainFrame::OnExit(wxCommandEvent& event){
    wxUnusedVar(event);
    Close();
}

void MainFrame::OnAbout(wxCommandEvent& event){
    wxUnusedVar(event);
    wxAboutDialogInfo info;
    info.SetCopyright(_("My MainFrame"));
    info.SetLicence(_("GPL v2 or later"));
    info.SetDescription(_("Short description goes here"));
    ::wxAboutBox(info);
}

wxStaticText* MainFrame::getRightLabel (int POS){
    if(POS == 0){
        return text1;
    }
    else if (POS == 1){
        return text2;
    }
    else if (POS == 2){
        return text3;
    }
    return NULL;
}


wxListCtrl* MainFrame::getRightListCtrl (int POS){
    if(POS == 0){
        return list1;
    }
    else if (POS == 1){
        return list2;
    }
    else if (POS == 2){
        return list3;
    }
    return NULL;
}

void MainFrame :: refreshListCtrl (int POS, ActivityList& al) {
    int p = 0;
    wxStaticText* label = getRightLabel(POS);
    wxListCtrl* list = getRightListCtrl(POS);
    
    label->SetLabelText(al.getName());
    list->DeleteAllItems();
    al.getActivityContainer().sort(); 
    for(Activity& a : al.getActivityContainer()){
        list->InsertItem(p, "");
        list->SetItem(p, 0, a.getTitle());
        list->SetItem(p, 1, (a.getDate().getYear() == 1900) ? "Nessuna scadenza" : a.getDate().getDate());
        list->SetItem(p, 2, a.getDescription());
        p++;
    }
    
}

void MainFrame :: refreshGroupListCtrl (int startPOS) {
    for(int i=0; i<3 && startPOS + i < board->getActivityListContainer().size(); i++){
        refreshListCtrl(i, board->getActivityList(elementNameAt(startPOS + i)));
    }
    refreshBackForwardStatus();
}

void MainFrame::OnButton_addboardButtonClicked(wxCommandEvent& event){
    AddActivityListFrame* aal =new AddActivityListFrame (this, board, "", false);
    aal->Show();
}

void MainFrame::OnButton_backButtonClicked(wxCommandEvent& event){
    refreshGroupListCtrl(--startPOS);
}

void MainFrame::OnButton_forwardButtonClicked(wxCommandEvent& event){
    refreshGroupListCtrl(++startPOS);
}


string MainFrame::elementNameAt(int index) {
    int i = 0;
    
    for (ActivityList& al : board->getActivityListContainer()) {
        if (i++ == index) {
            return al.getName();
        }
    }
}

void MainFrame::refreshBackForwardStatus(){
    button_back->Enable(!(startPOS == 0));
    button_forward->Enable(!(startPOS + 3 >= board->getActivityListContainer().size()));
}

void MainFrame::OnButton_add1ButtonClicked(wxCommandEvent& event) {
    AddActivityFrame* addActivity = new AddActivityFrame(this, &board->getActivityList(elementNameAt(startPOS + 0)), 0);
    addActivity->Show();
}

void MainFrame::OnButton_add2ButtonClicked(wxCommandEvent& event) {
    AddActivityFrame* addActivity = new AddActivityFrame(this, &board->getActivityList(elementNameAt(startPOS + 1)), 1);
    addActivity->Show();
}

void MainFrame::OnButton_add3ButtonClicked(wxCommandEvent& event) {
    AddActivityFrame* addActivity = new AddActivityFrame(this, &board->getActivityList(elementNameAt(startPOS + 2)), 2);
    addActivity->Show();
}
void MainFrame::OnList1ListItemActivated(wxListEvent& event) {
    ActivityDetailsFrame* details = new ActivityDetailsFrame(this, &getSelectedActivity(0));
    details->Show();
}

void MainFrame::OnList2ListItemActivated(wxListEvent& event) {
    ActivityDetailsFrame* details = new ActivityDetailsFrame(this, &getSelectedActivity(1));
    details->Show();
}

void MainFrame::OnList3ListItemActivated(wxListEvent& event) {
    ActivityDetailsFrame* details = new ActivityDetailsFrame(this, &getSelectedActivity(2));
    details->Show();
}


Activity& MainFrame::getSelectedActivity(int POS) {
    wxListCtrl* list = getRightListCtrl(POS);
    int selectedItem = list->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
    return board->getActivityList(elementNameAt(startPOS + POS)).getActivity(list->GetItemText(selectedItem, 0).ToStdString());
}

    
    
void MainFrame::OnButton_delete1ButtonClicked(wxCommandEvent& event) {
    board->getActivityList(elementNameAt(startPOS+0)).removeActivity(getSelectedActivity(0));
    refreshGroupListCtrl(startPOS);
    button_delete1->Disable();
}

void MainFrame::OnButton_delete2ButtonClicked(wxCommandEvent& event) {
    board->getActivityList(elementNameAt(startPOS+1)).removeActivity(getSelectedActivity(1));
    refreshGroupListCtrl(startPOS);
    button_delete2->Disable();
}

void MainFrame::OnButton_delete3ButtonClicked(wxCommandEvent& event) {
    board->getActivityList(elementNameAt(startPOS+2)).removeActivity(getSelectedActivity(2));
    refreshGroupListCtrl(startPOS);
    button_delete3->Disable();
}

void MainFrame::OnList1ListItemSelected(wxListEvent& event) {
    button_delete1->Enable();
}

void MainFrame::OnList2ListItemSelected(wxListEvent& event) {
    button_delete2->Enable();
}

void MainFrame::OnList3ListItemSelected(wxListEvent& event) {
    button_delete3->Enable();
}

void MainFrame::OnButton_rename1ButtonClicked(wxCommandEvent& event) {
    AddActivityListFrame* aal =new AddActivityListFrame (this, board, elementNameAt(startPOS + 0) , true);
    aal->Show();
}

void MainFrame::OnButton_rename2ButtonClicked(wxCommandEvent& event) {
    AddActivityListFrame* aal =new AddActivityListFrame (this, board, elementNameAt(startPOS + 1) , true);
    aal->Show();
}

void MainFrame::OnButton_rename3ButtonClicked(wxCommandEvent& event) {
    AddActivityListFrame* aal =new AddActivityListFrame (this, board, elementNameAt(startPOS + 2) , true);
    aal->Show();
}

void MainFrame::OnList1ListBeginDrag(wxListEvent& event) {
    wxString text = list1->GetItemText(event.GetIndex());
    
    dtlc1->newDropEvent(event.GetIndex(), event.GetPoint(), &board->getActivityList(elementNameAt(startPOS + 0)));
    wxTextDataObject tdo(text); //oggetto da spostare, titolo attività
    wxDropSource tds(tdo, list1); //oggetto che sto spostando e da dove (list1)
    tds.DoDragDrop(wxDrag_CopyOnly); //inizia l'evento di drag
    
    refreshGroupListCtrl(startPOS);
}

void MainFrame::OnList2ListBeginDrag(wxListEvent& event) {
    wxString text = list2->GetItemText(event.GetIndex());
    
    dtlc2->newDropEvent(event.GetIndex(), event.GetPoint(), &board->getActivityList(elementNameAt(startPOS + 1)));
    wxTextDataObject tdo(text);
    wxDropSource tds(tdo, list2);
    tds.DoDragDrop(wxDrag_CopyOnly);
    
    refreshGroupListCtrl(startPOS);
}

void MainFrame::OnList3ListBeginDrag(wxListEvent& event) {
    wxString text = list3->GetItemText(event.GetIndex());
    
    dtlc3->newDropEvent(event.GetIndex(), event.GetPoint(), &board->getActivityList(elementNameAt(startPOS + 2)));
    wxTextDataObject tdo(text);
    wxDropSource tds(tdo, list3);
    tds.DoDragDrop(wxDrag_CopyOnly);
    
    refreshGroupListCtrl(startPOS);
}
