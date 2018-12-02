#include "DiaryHomeFrame.h"
#include "NewBoardFrame.h"
#include "MainFrame.h"

DiaryHomeFrame::DiaryHomeFrame(wxWindow* parent, Administrator* _admin) : DiaryHomeBase(parent) {
    admin=_admin;
    refreshList();
}

DiaryHomeFrame::~DiaryHomeFrame() {
}

void DiaryHomeFrame::OnButton_acceptButtonClicked(wxCommandEvent& event) {
    if (selecter->IsEmpty()){
        return;
    }
    
    MainFrame* mainframe = new MainFrame(this, &admin->getBoard(selecter->GetStringSelection().ToStdString()));
    mainframe->Show();
}

void DiaryHomeFrame::OnButton_addboardButtonClicked(wxCommandEvent& event) {
    NewBoardFrame* nuovaBacheca = new NewBoardFrame (this, admin);
    nuovaBacheca->Show();
}

void DiaryHomeFrame::refreshList(){
    selecter->Clear();
    for (Board& b : admin->getBoardContainer()){
        selecter->Insert(b.getName(), 0);
    }
    selecter->SetSelection(0);
}
