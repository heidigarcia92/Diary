#include "DiaryHome.h"
#include "NewBoard.h"
#include "MainFrame.h"

DiaryHome::DiaryHome(wxWindow* parent, Administrator* _admin) : DiaryHomeBase(parent) {
    admin=_admin;
    refreshList();
}

DiaryHome::~DiaryHome() {
}

void DiaryHome::OnButton_acceptButtonClicked(wxCommandEvent& event) {
    if (selecter->IsEmpty()){
        return;
    }
    
    MainFrame* mainframe = new MainFrame(this, &admin->getBoard(selecter->GetStringSelection().ToStdString()));
    mainframe->Show();
}

void DiaryHome::OnButton_addboardButtonClicked(wxCommandEvent& event) {
    NewBoard* nuovaBacheca = new NewBoard (this, admin);
    nuovaBacheca->Show();
}

void DiaryHome::refreshList(){
    selecter->Clear();
    for (Board& b : admin->getBoardContainer()){
        selecter->Insert(b.getName(), 0);
    }
    selecter->SetSelection(0);
}
