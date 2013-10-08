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

#ifndef SD_SEAT_H
#define SD_SEAT_H

#include <QObject>

#include "QtSystemd-export.h"

namespace Systemd
{
namespace Logind
{
class SeatPrivate;

class SDQT_EXPORT Seat : public QObject
{
    Q_OBJECT
    Q_DECLARE_PRIVATE(Seat)

public:
    explicit Seat(const QString &path, QObject *parent = 0);
    explicit Seat(SeatPrivate &seat, QObject *parent = 0);
    virtual ~Seat();

    QString activeSession() const;
    bool canGraphical() const;
    bool canMultiSession() const;
    bool canTTY() const;
    QString id() const;
    bool idleHint() const;
    qulonglong idleSinceHint() const;
    qulonglong idleSinceHintMonotonic() const;
    QStringList sessions() const;

protected:
    SeatPrivate *d_ptr;
};
}
}

#endif