// Start of wxWidgets "Hello World" Program
#include <wx/wx.h>
//class must derive from wxApp and, at least, override wxApp::OnInit() virtual function,
// as it will be called by wxWidgets to initialize the application.
class MyApp : public wxApp
{
public:
    bool OnInit() override;
};

//this macro defines the application entry point and tells wxWidgets 
//which application class should be used
//The className passed to this macro must be a name of the class deriving from wxApp.
//Include file: #include <wx/app.h> 
// This defines the equivalent of main() for the current platform.
wxIMPLEMENT_APP(MyApp);

//The main window of a typical application is a wxFrame object.
class MyFrame : public wxFrame
{
public:
    MyFrame();
 
private:
//let's define our class with a few "event handlers", i.e. functions taking the
//'event' parameter of the type corresponding to the event being handled,
// which is wxCommandEvent for the events from simple controls such as buttons, text fields
// and also menu items. In our example, we react to three menu items: our custom "Hello",
// and the "Exit" and "About" items (any program should normally implement the latter two).
// Notice that these handlers don't need to be virtual or public.
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
};

//In the constructor of the main window(str 21, 22), we create a menu with our menu items,
// as well as a status bar to be shown at the bottom of the main window
//In order to be able to react to a menu command, it must be given a unique identifier
// which can be defined as a constant or an enum element. The latter is often used 
//because typically many such constants will be needed:
enum
{
    ID_Hello = 1
    //Notice that you don't need to define identifiers for "About" and "Exit",
    // as wxWidgets already predefines standard values such as wxID_ABOUT and wxID_EXIT,
    //which also have predefined labels associated with them, which allows us to omit them 
    //when appending the corresponding menu items. 
};

//Now when we have this class, we can implement OnInit() which, is called 
//upon application startup and simply create the main window, represented by this class:
bool MyApp::OnInit()
{
    MyFrame *frame = new MyFrame();
    //Frames, unlike all the other windows, are created hidden by default in order to allow
    // filling them with their contents before showing everything at once.
    // Please don't forget to call Show() to make this happen.
    frame->Show(true);
    //Returning true from OnInit() allows the application to start running.
    // By default, it will exit once all top-level windows have been closed 
    return true;
}
 
MyFrame::MyFrame()
    : wxFrame(nullptr, wxID_ANY, "Hello World")
{
    //defines File item on menu bar
    wxMenu *menuFile = new wxMenu;
    //For our custom item, we specify the label, also containing an accelerator,
    // separated by Tab (\t) from the label itself, allowing to invoke this command 
    //from keyboard:
    menuFile->Append(ID_Hello, "&Hello...\tCtrl-H",
                     "Help string shown in status bar for this menu item");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);
 
    //defines Help item on menu bar
    wxMenu *menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);
 
    //defines whole menu bar
    wxMenuBar *menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&File");
    menuBar->Append(menuHelp, "&Help");
 
    // set whole menu bar
    SetMenuBar( menuBar );
    // set status bar in the bottom of the frame
    CreateStatusBar();
    SetStatusText("Welcome to wxWidgets!");
 
    //We also have to connect our event handlers to the events we want to handle in them.
    // We do this by calling Bind() to send all the menu events
    // (identified by wxEVT_MENU event type) with the specified ID to the given function. 
    //The parameters we pass to Bind() are:
    //1.The event type, e.g. wxEVT_MENU, wxEVT_BUTTON, wxEVT_SIZE,
    // or one of many other events used by wxWidgets.
    //2.A pointer to the method to call, and the object to call it on.
    // In this case, we just call our own function, 3. and pass the 'this' pointer
    // for the object itself. We could instead call the method of another object,
    // or a non-member function — in fact, any object that can be called 
    //with a wxCommandEvent, can be used here.
    //4.An optional identifier, allowing us to select just some events 
    //of wxEVT_MENU type, namely those from the menu item with the given ID,
    // instead of handling all of them in the provided handler.
    // This is mainly useful with menu items and rarely with other kinds of events.
    Bind(wxEVT_MENU, &MyFrame::OnHello, this, ID_Hello);
    Bind(wxEVT_MENU, &MyFrame::OnAbout, this, wxID_ABOUT);
    Bind(wxEVT_MENU, &MyFrame::OnExit, this, wxID_EXIT);
}
 
//Here are the standard event handlers implementations. MyFrame::OnExit() closes 
//the main window by calling Close(). The parameter 'true' indicates that other windows
// have no veto power such as after asking "Do you really want to close?".
// If there is no other main window left, the application will quit.
void MyFrame::OnExit(wxCommandEvent& event)
{
    Close(true);
}
 
//MyFrame::OnAbout() will display a small window with some text in it.
// In this case a typical "About" window with information about the program.
void MyFrame::OnAbout(wxCommandEvent& event)
{
    wxMessageBox("This is a wxWidgets Hello World example",
                 "About Hello World", wxOK | wxICON_INFORMATION);
}
 
//The implementation of custom menu command handler may perform whatever task your program 
//needs to do, in this case we will simply show a message from it as befits
// a Hello World example:
void MyFrame::OnHello(wxCommandEvent& event)
{
    wxLogMessage("Hello world from wxWidgets!");
}