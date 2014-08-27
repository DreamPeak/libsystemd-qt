/*
 * Copyright (C) 2013  Andrea Scarpino <me@andreascarpino.it>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */

#ifndef SD_SEAT_P_H
#define SD_SEAT_P_H

#include "seatinterface.h"

#include "seat.h"

namespace Systemd
{
namespace Logind
{
class SeatPrivate
{

public:
    explicit SeatPrivate(const QString &path);
    virtual ~SeatPrivate();

    OrgFreedesktopLogin1SeatInterface seatIface;

    DBusStringObject activeSession;
    bool canGraphical;
    bool canMultiSession;
    bool canTTY;
    QString id;
    QStringList sessions;
};
}
}

#endif