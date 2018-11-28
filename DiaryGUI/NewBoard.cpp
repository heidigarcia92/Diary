#include "NewBoard.h"
#include "DiaryHome.h"
#include <string>
using namespace std;

NewBoard::NewBoard(wxWindow* parent, Administrator* _admin) : NewBoardBase(parent) {
    admin=_admin;
}

NewBoard::~NewBoard() {
}

void NewBoard::OnButton_addboardButtonClicked(wxCommandEvent& event) {
    if (text_boardName->IsEmpty()){
        return;
    }
    string name = text_boardName->GetValue().ToStdString(); //ritorna la stringa classica del C++
    admin->addBoard(name);
    Board& b = admin->getBoard(name);
    for (int i=0; i<3; i++){
        b.createActivityList("ActivityList" + to_string(i));
    }
    dynamic_cast<DiaryHome*> (GetParent())->refreshList(); 
    Close();
}
