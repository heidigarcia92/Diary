#include "NewBoardFrame.h"
#include "DiaryHomeFrame.h"
#include <string>
using namespace std;

NewBoardFrame::NewBoardFrame(wxWindow* parent, Administrator* _admin) : NewBoardBase(parent) {
    admin=_admin;
}

NewBoardFrame::~NewBoardFrame() {
}

void NewBoardFrame::OnButton_addboardButtonClicked(wxCommandEvent& event) {
    if (text_boardName->IsEmpty()){
        return;
    }
    string name = text_boardName->GetValue().ToStdString(); //ritorna la stringa classica del C++
    admin->addBoard(name);
    Board& b = admin->getBoard(name);
    for (int i=1; i<4; i++){
        b.createActivityList("To do " + to_string(i));
    }
    dynamic_cast<DiaryHomeFrame*> (GetParent())->refreshList(); 
    Close();
}
