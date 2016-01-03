/*
  MacIdleDetector.h

  This file is part of Charm, a task-based time tracking application.

  Copyright (C) 2011-2016 Klarälvdalens Datakonsult AB, a KDAB Group company, info@kdab.com

  Author: Mike McQuaid <mike.mcquaid@kdab.com>

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

#ifndef MACIDLEDETECTOR_H
#define MACIDLEDETECTOR_H

#include <QObject>
#include <QDateTime>

#include "IdleDetector.h"

class MacIdleDetector : public IdleDetector
{
    Q_OBJECT

public:
    explicit MacIdleDetector( QObject* parent = nullptr );
    // This method to be public due to lack of friend classes in Objective-C and
    // the lack inheritance of Objective-C classes from C++ ones.
    void idle();

private:
    class Private;
    Private* m_private;
};

#endif
