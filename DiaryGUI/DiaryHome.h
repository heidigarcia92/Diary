#ifndef DIARYHOME_H
#define DIARYHOME_H
#include "wxcrafter.h"
#include "Administrator.hpp"

class DiaryHome : public DiaryHomeBase
{
public:
    DiaryHome(wxWindow* parent, Administrator* _admin);
    virtual ~DiaryHome();
    void refreshList();
protected:
    virtual void OnButton_acceptButtonClicked(wxCommandEvent& event);
    virtual void OnButton_addboardButtonClicked(wxCommandEvent& event);
private:
    Administrator* admin;
};
#endif // DIARYHOME_H
