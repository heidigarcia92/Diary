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
    string s[3];
    s[0] = "To do";
    s[1] = "Doing";
    s[2] = "Done";
    for (int i=0; i<3; i++){
        b.createActivityList(s[i]);
    }
    
    dynamic_cast<DiaryHomeFrame*> (GetParent())->refreshList(); 
    Close();
}
