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

  GtkWidget *label_result;

  GtkWidget *button1;  //the add button
  GtkWidget *button2;  //the add button
  GtkWidget *button3;  //the add button
  GtkWidget *button4;  //the add button
  GtkWidget *button5;  //the add button
  GtkWidget *button6;  //the add button
  GtkWidget *button7;  //the add button
  GtkWidget *button8;  //the add button
  GtkWidget *button9;  //the add button
  GtkWidget *button0;  //the add button
  GtkWidget *button_add;  //the add button
  GtkWidget *button_sub;  //the add button
  GtkWidget *button_mul;  //the add button
  GtkWidget *button_div;  //the add button
  GtkWidget *button_eq;  //the add button
  GtkWidget *button_exit;  //the exit button

} Gui_Window_AppWidgets;

extern Gui_Window_AppWidgets *gui_app;

extern int operand;
extern int last_function;
extern int clear_f;

#endif
