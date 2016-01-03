/*
  EventWindow.h

  This file is part of Charm, a task-based time tracking application.

  Copyright (C) 2014-2016 Klarälvdalens Datakonsult AB, a KDAB Group company, info@kdab.com

  Author: Frank Osterfeld <frank.osterfeld@kdab.com>

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef EVENTWINDOW_H
#define EVENTWINDOW_H

#include "CharmWindow.h"

class EventView;

class EventWindow : public CharmWindow
{
    Q_OBJECT

public:
    explicit EventWindow( QWidget* parent = nullptr );
    ~EventWindow();

    void stateChanged( State previous ) override;

    // restore the view
    void restore() override;
public slots:
    void configurationChanged() override;

protected:
    void insertEditMenu() override;

signals:
    void emitCommand( CharmCommand* ) override;
    void emitCommandRollback( CharmCommand* ) override;
    void quit() override;

private:
    EventView* m_eventView;

};

#endif
