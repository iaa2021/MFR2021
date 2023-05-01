#include "wx/wx.h"
// Declare the application class
class MyApp : public wxApp
{
public:
// Called on application startup
virtual bool OnInit();
};
// Declare our main frame class
class MyFrame : public wxFrame
{
public:
// Constructor
MyFrame(const wxString& title);
// Event handlers
void OnQuit(wxCommandEvent& event);
void OnAbout(wxCommandEvent& event);
void OnSize(wxSizeEvent& event);
void OnButton(wxCommandEvent& event);
private:
// This class handles events
DECLARE_EVENT_TABLE()
};
// Implements MyApp& GetApp()
DECLARE_APP(MyApp)
// Give wxWidgets the means to create a MyApp object
IMPLEMENT_APP(MyApp)
// Initialize the application
bool MyApp::OnInit()
{
// Create the main application window
MyFrame *frame = new MyFrame(wxT("Minimal wxWidgets App"));
// Show it
frame->Show(true);
// Start the event loop
return true;
}
// Event table for MyFrame
BEGIN_EVENT_TABLE(MyFrame, wxFrame)
EVT_MENU(wxID_ABOUT, MyFrame::OnAbout)
EVT_MENU(wxID_EXIT, MyFrame::OnQuit)
EVT_SIZE( MyFrame::OnSize )
EVT_BUTTON(wxID_OK, MyFrame::OnButton)
END_EVENT_TABLE()
void MyFrame::OnAbout(wxCommandEvent& event)
{
wxString msg;
msg.Printf(wxT("Hello and welcome to %s"),
wxVERSION_STRING);
wxMessageBox(msg, wxT("About Minimal"),
wxOK | wxICON_INFORMATION, this);
}
void MyFrame::OnQuit(wxCommandEvent& event)
{
// Destroy the frame
Close();
}
void MyFrame::OnSize(wxSizeEvent& event)
{
    wxSize size = event.GetSize();
}
void MyFrame::OnButton(wxCommandEvent& event)
{
    wxMessageBox("Button clicked!");
}
MyFrame::MyFrame(const wxString& title)
: wxFrame(NULL, wxID_ANY, title)
{
//Create a button
wxButton *button = new wxButton( this, wxID_OK, wxT("Click me, please...") );
// Add the button to the frame
wxBoxSizer *sizer = new wxBoxSizer(wxVERTICAL);
//sizer -> Add( button, wxSizerFlags().Center().Border(wxALL, 20) );
// Add button to the center
sizer -> AddStretchSpacer();// Add a stretchable space to push the button to the center
sizer -> Add( button, wxSizerFlags().Center());
sizer -> AddStretchSpacer();// Add another stretchable space to keep the button centered
SetSizer(sizer);
// Create a menu bar
wxMenu *fileMenu = new wxMenu;
// The “About” item should be in the help menu
wxMenu *helpMenu = new wxMenu;
helpMenu->Append(wxID_ABOUT, wxT("&About...\tF1"),
wxT("Show about dialog"));
fileMenu->Append(wxID_EXIT, wxT("E&xit\tAlt-X"),
wxT("Quit this program"));
// Now append the freshly created menu to the menu bar...
wxMenuBar *menuBar = new wxMenuBar();
menuBar->Append(fileMenu, wxT("&File"));
menuBar->Append(helpMenu, wxT("&Help"));
// ... and attach this menu bar to the frame
SetMenuBar(menuBar);
// Create a status bar just for fun
CreateStatusBar(2);
SetStatusText(wxT("Welcome to wxWidgets!"));
//another way to attach EVT_SIZE object to frame
//Bind( wxEVT_SIZE, &MyFrame::OnSize, this );
}