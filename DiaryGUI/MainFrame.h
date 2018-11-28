#ifndef MAINFRAME_H
#define MAINFRAME_H
#include "wxcrafter.h"
#include "Administrator.hpp"
#include "ActivityDetails.h"
using namespace std;

class MainFrame : public MainFrameBaseClass {
public:
    MainFrame(wxWindow* parent, Board* _board);
    virtual ~MainFrame();

    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    
    wxStaticText* getRightLabel (int POS);
    wxListCtrl* getRightListCtrl (int POS);
    
    void refreshGroupListCtrl(int startPOS);
    
    void refreshListCtrl (int POS, ActivityList& al);
    
    void refreshBackForwardStatus ();
    
     int startPOS;

protected:
    virtual void OnButton_rename1ButtonClicked(wxCommandEvent& event);
    virtual void OnButton_rename2ButtonClicked(wxCommandEvent& event);
    virtual void OnButton_rename3ButtonClicked(wxCommandEvent& event);
    virtual void OnButton_delete1ButtonClicked(wxCommandEvent& event);
    virtual void OnButton_delete2ButtonClicked(wxCommandEvent& event);
    virtual void OnButton_delete3ButtonClicked(wxCommandEvent& event);
    virtual void OnList1ListItemSelected(wxListEvent& event);
    virtual void OnList2ListItemSelected(wxListEvent& event);
    virtual void OnList3ListItemSelected(wxListEvent& event);
    virtual void OnList1ListItemActivated(wxListEvent& event);
    virtual void OnList2ListItemActivated(wxListEvent& event);
    virtual void OnList3ListItemActivated(wxListEvent& event);
    virtual void OnButton_add1ButtonClicked(wxCommandEvent& event);
    virtual void OnButton_add2ButtonClicked(wxCommandEvent& event);
    virtual void OnButton_add3ButtonClicked(wxCommandEvent& event);
    virtual void OnButton_addboardButtonClicked(wxCommandEvent& event);
    virtual void OnButton_backButtonClicked(wxCommandEvent& event);
    virtual void OnButton_forwardButtonClicked(wxCommandEvent& event);
    virtual void onDrag(wxListEvent& event);
    virtual void onKeyDown(wxListEvent& event);
    string elementNameAt(int index);
private:
    Board* board;
    Activity& getSelectedActivity(int POS);
};

#endif // MAINFRAME_H
