#include "lms7suiteEvents.h"

wxDEFINE_EVENT(CONTROL_PORT_CONNECTED, wxCommandEvent);
wxDEFINE_EVENT(CONTROL_PORT_DISCONNECTED, wxCommandEvent);
wxDEFINE_EVENT(DATA_PORT_CONNECTED, wxCommandEvent);
wxDEFINE_EVENT(DATA_PORT_DISCONNECTED, wxCommandEvent);
wxDEFINE_EVENT(CGEN_FREQUENCY_CHANGED, wxCommandEvent);