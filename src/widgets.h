/*
 * widgets.h: Widget manipulation functions
 * Gtkdialog - A small utility for fast and easy GUI building.
 * Copyright (C) 2003-2007  László Pere <pipas@linux.pte.hu>
 * Copyright (C) 2011-2012  Thunor <thunorsif@hotmail.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef WIDGETS_H
#define WIDGETS_H

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>
#include <gtk/gtk.h>
#include "gtkdialog.h"
#include "stack.h"
#include "attributes.h"
#include "stringman.h"
#include "variables.h"
#include "automaton.h"

#include "widget_window.h"
#include "widget_vbox.h"
#include "widget_tree.h"
#include "widget_timer.h"
#include "widget_text.h"
#include "widget_terminal.h"
#include "widget_template.h"
#include "widget_table.h"
#include "widget_statusbar.h"
#include "widget_spinbutton.h"
#include "widget_radiobutton.h"
#include "widget_progressbar.h"
#include "widget_pixmap.h"
#include "widget_notebook.h"
#include "widget_menuitem.h"
#include "widget_menubar.h"
#include "widget_list.h"
#include "widget_hseparator.h"
#include "widget_hscale.h"
#include "widget_hbox.h"
#include "widget_frame.h"
#include "widget_fontbutton.h"
#include "widget_expander.h"
#include "widget_eventbox.h"
#include "widget_entry.h"
#include "widget_edit.h"
#include "widget_comboboxtext.h"
#include "widget_combobox.h"
#include "widget_colorbutton.h"
#include "widget_checkbox.h"
#include "widget_button.h"

char *widget_get_text_value(GtkWidget *widget, int type);
FILE *widget_opencommand(const char *command);
char *widgets_to_str(int itype);
gboolean widget_connect_signals(GtkWidget *widget, AttributeSet *Attr);
void widget_visibility_list_add(GtkWidget *widget, tag_attr *attr);
void widget_show_all(void);

#endif
