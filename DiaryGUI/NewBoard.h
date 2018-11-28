#ifndef NEWBOARD_H
#define NEWBOARD_H
#include "wxcrafter.h"
#include "Administrator.hpp"

class NewBoard : public NewBoardBase
{
public:
    NewBoard(wxWindow* parent, Administrator* _admin);
    virtual ~NewBoard();
protected:
    virtual void OnButton_addboardButtonClicked(wxCommandEvent& event);
private:
    Administrator* admin;
};
#endif // NEWBOARD_H
