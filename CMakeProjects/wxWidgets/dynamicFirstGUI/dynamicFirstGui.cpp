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
	void OnButtonOK(wxCommandEvent& event);
	void OnSize(wxSizeEvent& event);
private:
};
// Implements MyApp& GetApp()
DECLARE_APP(MyApp)
// Give wxWidgets the means to create a MyApp object
IMPLEMENT_APP(MyApp)
// Initialize the application
bool MyApp::OnInit()
{
	// Create the main application window
	MyFrame* frame = new MyFrame(wxT("Minimal wxWidgets App"));
	// Show it
	frame->Show(true);
	//dynamic binding EVT_ID with event handler
	frame->Connect(wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MyFrame::OnQuit));
	frame->Connect(wxID_ABOUT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MyFrame::OnAbout));
	frame->Connect(wxEVT_BUTTON, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MyFrame::OnButtonOK));
	frame->Connect(wxEVT_SIZE, wxEVT_COMMAND_MENU_SELECTED, wxSizeEventHandler(MyFrame::OnSize));
	// Start the event loop
	return true;
}
// Event table for MyFrame
void MyFrame::OnAbout(wxCommandEvent& event)
{
	wxString msg;
	msg.Printf(wxT("Hello and welcome to % s"),
		wxVERSION_STRING);
	wxMessageBox(msg, wxT("About Minimal"),
			wxOK | wxICON_INFORMATION, this);
}
void MyFrame::OnQuit(wxCommandEvent& event)
{
	// Destroy the frame
	Close();
}
void MyFrame::OnButtonOK(wxCommandEvent& event)
{
	wxMessageBox("Button clicked...");
}
void MyFrame::OnSize(wxSizeEvent& event)
{
	wxSize size = event.GetSize();
}
MyFrame::MyFrame(const wxString& title)
	: wxFrame(NULL, wxID_ANY, title)
{
	//Create button
	wxButton* button = new wxButton(this, wxID_OK, "Click me, please...");
	//Add button to a frame
	wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);
	//Add stretch space in order to put button in the center of the frame
	sizer->AddStretchSpacer();
	sizer->Add(button, wxSizerFlags().Center());
	//Add another stretch space in order to keep button in the center of the frame
	sizer->AddStretchSpacer();
	SetSizer(sizer);
	// Create a menu bar
	wxMenu* fileMenu = new wxMenu;
	// The “About” item should be in the help menu
	wxMenu* helpMenu = new wxMenu;
	helpMenu->Append(wxID_ABOUT, wxT(" & About...\tF1"),
		wxT("Show about dialog"));
	fileMenu->Append(wxID_EXIT, wxT("E & xit\tAlt - X"),
		wxT("Quit this program"));
	// Now append the freshly created menu to the menu bar...
	wxMenuBar* menuBar = new wxMenuBar();
	menuBar->Append(fileMenu, wxT(" & File"));
	menuBar->Append(helpMenu, wxT(" & Help"));
	// ... and attach this menu bar to the frame
	SetMenuBar(menuBar);
	// Create a status bar just for fun
	CreateStatusBar(2);
	SetStatusText(wxT("Welcome to wxWidgets!"));
	Bind(wxEVT_BUTTON, &MyFrame::OnButtonOK, this, wxID_OK);
}