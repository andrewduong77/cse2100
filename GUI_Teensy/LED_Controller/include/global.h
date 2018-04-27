#include <gtk/gtk.h>
#include <stdlib.h>
#include <iostream>
#define __STDC_FORMAT_MACROS


#ifndef _MY__GLOBAL__H
#define _MY__GLOBAL__H

using namespace std;


/**************************************************************
 * GUI window stuff
 **************************************************************/

typedef struct 

{
  GtkWidget *window1; //visualization window

  GtkWidget *entry_sd; //the text field to contain the name of the serial device
  GtkWidget *serial_device; // the label on which we display the voltage
  GtkWidget *open_device_button;
  GtkWidget *close_device_button;

  GtkWidget *red_label;
  GtkWidget *blue_label;
  GtkWidget *green_label;

  GtkWidget *entry_red;
  GtkWidget *entry_blue;
  GtkWidget *entry_green;

  GtkWidget *send_button;
  GtkWidget *slider_label;

  GtkWidget *scale_red;
  GtkWidget *scale_blue;
  GtkWidget *scale_green;

  GtkWidget *label_tx;
  GtkWidget *tx;

  GtkWidget *label_voltage;
  GtkWidget *voltage;

  GtkWidget *exit_button;

}

 Gui_Window_AppWidgets;

extern Gui_Window_AppWidgets *gui_app;

//this is the serial devices handle
extern int ser_dev;

//this is to gracefully shut down threads
extern int kill_all_threads;

//this variable is for communicating the voltage value string
extern char c_voltage_value[40];

//this is the mutex for the above variable
extern GMutex *mutex_to_protect_voltage_display;

//prototype of function for serial read thread
gpointer Serial_Read_Thread();



#endif
