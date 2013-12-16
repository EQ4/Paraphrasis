/*
  ==============================================================================

    This file was auto-generated by the Introjucer!

    It contains the basic startup code for a Juce application.

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "TeragonGuiComponents.h"
#include "MainComponent.h"
#include "Resources.h"


namespace teragon {
//==============================================================================
class ComponentDemoApplication  : public JUCEApplication, public Timer
{
public:
    //==============================================================================
    ComponentDemoApplication() : JUCEApplication(), Timer() {}

    const String getApplicationName()       { return ProjectInfo::projectName; }
    const String getApplicationVersion()    { return ProjectInfo::versionString; }
    bool moreThanOneInstanceAllowed()       { return true; }

    //==============================================================================
    void initialise (const String& commandLine)
    {
        parameters.add(new FloatParameter("knob", 0, 100, 20));
        parameters.add(new FloatParameter("slider", 0, 100, 0));
        parameters.add(new BooleanParameter("indicator", true));
        parameters.add(new BooleanParameter("button"));
        mainWindow = new MainWindow(parameters);
        startTimer(33); // ~30fps
    }

    void shutdown()
    {
        mainWindow = nullptr; // (deletes our window)
        stopTimer();
    }

    //==============================================================================
    void systemRequestedQuit()
    {
        // This is called when the app is being asked to quit: you can ignore this
        // request and let the app carry on running, or call quit() to allow the app to close.
        quit();
    }

    void anotherInstanceStarted (const String& commandLine)
    {
        // When another instance of the app is launched while this one is running,
        // this method is invoked, and the commandLine parameter tells you what
        // the other instance's command-line arguments were.
    }

    void timerCallback()
    {
        // Process the events from the parameter set. This should be called from
        // audio thread of a plugin, or otherwise in the "main" thread of your
        // application.
        parameters.processRealtimeEvents();
    }

    //==============================================================================
    /*
        This class implements the desktop window that contains an instance of
        our MainContentComponent class.
    */
    class MainWindow : public DocumentWindow
    {
    public:
        MainWindow(teragon::ThreadsafePluginParameterSet &parameters) :
            DocumentWindow ("GUI Demo", Colours::lightgrey, DocumentWindow::allButtons),
            parameters(parameters)
        {
            setContentOwned (new MainContentComponent(parameters, Resources::getCache()), true);
            centreWithSize (getWidth(), getHeight());
            setVisible (true);
        }

        void closeButtonPressed()
        {
            // This is called when the user tries to close this window. Here, we'll just
            // ask the app to quit when this happens, but you can change this to do
            // whatever you need.
            JUCEApplication::getInstance()->systemRequestedQuit();
        }

        /* Note: Be careful if you override any DocumentWindow methods - the base
           class uses a lot of them, so by overriding you might break its functionality.
           It's best to do all your work in your content component instead, but if
           you really have to override any DocumentWindow methods, make sure your
           subclass also calls the superclass's method.
        */

    private:
        JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainWindow)
        const ThreadsafePluginParameterSet &parameters;
    };

private:
    ScopedPointer<MainWindow> mainWindow;
    ThreadsafePluginParameterSet parameters;
};
} // namespace teragon

//==============================================================================
// This macro generates the main() routine that launches the app.
START_JUCE_APPLICATION (teragon::ComponentDemoApplication)
