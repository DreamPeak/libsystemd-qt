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

#include "generic-types.h"

QDBusArgument& operator<<(QDBusArgument &argument, const CGroupBlockIODeviceWeight &cGroupBlockIODeviceWeight)
{
    argument.beginStructure();
    argument << cGroupBlockIODeviceWeight.path << cGroupBlockIODeviceWeight.weight;
    argument.endStructure();
    return argument;
}

const QDBusArgument& operator>>(const QDBusArgument &argument, CGroupBlockIODeviceWeight &cGroupBlockIODeviceWeight)
{
    argument.beginStructure();
    argument >> cGroupBlockIODeviceWeight.path >> cGroupBlockIODeviceWeight.weight;
    argument.endStructure();
    return argument;
}

QDBusArgument& operator<<(QDBusArgument &argument, const CGroupDeviceAllow &cGroupDeviceAllow)
{
    argument.beginStructure();
    argument << cGroupDeviceAllow.path << cGroupDeviceAllow.rwm;
    argument.endStructure();
    return argument;
}

const QDBusArgument& operator>>(const QDBusArgument &argument, CGroupDeviceAllow &cGroupDeviceAllow)
{
    argument.beginStructure();
    argument >> cGroupDeviceAllow.path >> cGroupDeviceAllow.rwm;
    argument.endStructure();
    return argument;
}

QDBusArgument& operator<<(QDBusArgument &argument, const DBusEnvironmentFile &environmentFile)
{
    argument.beginStructure();
    argument << environmentFile.fileName << environmentFile.dash;
    argument.endStructure();
    return argument;
}

const QDBusArgument& operator>>(const QDBusArgument &argument, DBusEnvironmentFile &environmentFile)
{
    argument.beginStructure();
    argument >> environmentFile.fileName >> environmentFile.dash;
    argument.endStructure();
    return argument;
}

QDBusArgument& operator<<(QDBusArgument &argument, const DBusExecCommand &execCommand)
{
    argument.beginStructure();
    argument << execCommand.path << execCommand.argv << execCommand.ignore;
    argument << execCommand.startTimestamp << execCommand.exitTimestamp << execCommand.pid;
    argument << execCommand.exitCode << execCommand.exitStatus;
    argument.endStructure();
    return argument;
}

const QDBusArgument& operator>>(const QDBusArgument &argument, DBusExecCommand &execCommand)
{
    argument.beginStructure();
    argument >> execCommand.path >> execCommand.argv >> execCommand.ignore;
    argument >> execCommand.startTimestamp >> execCommand.exitTimestamp >> execCommand.pid;
    argument >> execCommand.exitCode >> execCommand.exitStatus;
    argument.endStructure();
    return argument;
}

QDBusArgument& operator<<(QDBusArgument &argument, const DBusUnitFileChange &unitFileChange)
{
    argument.beginStructure();
    argument << unitFileChange.type << unitFileChange.path << unitFileChange.source;
    argument.endStructure();
    return argument;
}

const QDBusArgument& operator>>(const QDBusArgument &argument, DBusUnitFileChange &unitFileChange)
{
    argument.beginStructure();
    argument >> unitFileChange.type >> unitFileChange.path >> unitFileChange.source;
    argument.endStructure();
    return argument;
}

QDBusArgument& operator<<(QDBusArgument &argument, const ManagerDBusUnitFile &unitFile)
{
    argument.beginStructure();
    argument << unitFile.path << unitFile.state;
    argument.endStructure();
    return argument;
}

const QDBusArgument& operator>>(const QDBusArgument &argument, ManagerDBusUnitFile &unitFile)
{
    argument.beginStructure();
    argument >> unitFile.path >> unitFile.state;
    argument.endStructure();
    return argument;
}

QDBusArgument& operator<<(QDBusArgument &argument, const DBusUnitFileProperty &unitFileProperty)
{
    argument.beginStructure();
    argument << unitFileProperty.name << unitFileProperty.value.toString();
    argument.endStructure();
    return argument;
}

const QDBusArgument& operator>>(const QDBusArgument &argument, DBusUnitFileProperty &unitFileProperty)
{
    argument.beginStructure();
    argument >> unitFileProperty.name >> unitFileProperty.value;
    argument.endStructure();
    return argument;
}

QDBusArgument& operator<<(QDBusArgument &argument, const JobDBusUnit &unit)
{
    argument.beginStructure();
    argument << unit.id << unit.path;
    argument.endStructure();
    return argument;
}

const QDBusArgument& operator>>(const QDBusArgument &argument, JobDBusUnit &unit)
{
    argument.beginStructure();
    argument >> unit.id >> unit.path;
    argument.endStructure();
    return argument;
}

QDBusArgument& operator<<(QDBusArgument &argument, const LoginDBusInhibitor &inhibitors)
{
    argument.beginStructure();
    argument << inhibitors.what << inhibitors.who << inhibitors.why << inhibitors.mode;
    argument << inhibitors.uid << inhibitors.pid;
    argument.endStructure();
    return argument;
}

const QDBusArgument& operator>>(const QDBusArgument &argument, LoginDBusInhibitor &inhibitors)
{
    argument.beginStructure();
    argument >> inhibitors.what >> inhibitors.who >> inhibitors.why >> inhibitors.mode;
    argument >> inhibitors.uid >> inhibitors.pid;
    argument.endStructure();
    return argument;
}

QDBusArgument& operator<<(QDBusArgument &argument, const LoginDBusScopeProperty &scopeProperty)
{
    argument.beginStructure();
    argument << scopeProperty.name << scopeProperty.value.toString();
    argument.endStructure();
    return argument;
}

const QDBusArgument& operator>>(const QDBusArgument &argument, LoginDBusScopeProperty &scopeProperty)
{
    argument.beginStructure();
    argument >> scopeProperty.name >> scopeProperty.value;
    argument.endStructure();
    return argument;
}

QDBusArgument& operator<<(QDBusArgument &argument, const LoginDBusSeat &seat)
{
    argument.beginStructure();
    argument << seat.id << seat.path;
    argument.endStructure();
    return argument;
}

const QDBusArgument& operator>>(const QDBusArgument &argument, LoginDBusSeat &seat)
{
    argument.beginStructure();
    argument >> seat.id >> seat.path;
    argument.endStructure();
    return argument;
}

QDBusArgument& operator<<(QDBusArgument &argument, const LoginDBusSession &session)
{
    argument.beginStructure();
    argument << session.id << session.uid << session.name << session.seatId;
    argument << session.path;
    argument.endStructure();
    return argument;
}

const QDBusArgument& operator>>(const QDBusArgument &argument, LoginDBusSession &session)
{
    argument.beginStructure();
    argument >> session.id >> session.uid >> session.name >> session.seatId;
    argument >> session.path;
    argument.endStructure();
    return argument;
}

QDBusArgument& operator<<(QDBusArgument &argument, const LoginDBusUser &user)
{
    argument.beginStructure();
    argument << user.uid << user.name << user.path;
    argument.endStructure();
    return argument;
}

const QDBusArgument& operator>>(const QDBusArgument &argument, LoginDBusUser &user)
{
    argument.beginStructure();
    argument >> user.uid >> user.name >> user.path;
    argument.endStructure();
    return argument;
}

QDBusArgument& operator<<(QDBusArgument &argument, const ManagerDBusAux &aux)
{
    argument.beginStructure();
    argument << aux.name << aux.properties;
    argument.endStructure();
    return argument;
}

const QDBusArgument& operator>>(const QDBusArgument &argument, ManagerDBusAux &aux)
{
    argument.beginStructure();
    argument >> aux.name >> aux.properties;
    argument.endStructure();
    return argument;
}

QDBusArgument& operator<<(QDBusArgument &argument, const ManagerDBusJob &job)
{
    argument.beginStructure();
    argument << job.id << job.unitId << job.type << job.state << job.path;
    argument << job.unitPath;
    argument.endStructure();
    return argument;
}

const QDBusArgument& operator>>(const QDBusArgument &argument, ManagerDBusJob &job)
{
    argument.beginStructure();
    argument >> job.id >> job.unitId >> job.type >> job.state >> job.path;
    argument >> job.unitPath;
    argument.endStructure();
    return argument;
}

QDBusArgument& operator<<(QDBusArgument &argument, const ManagerDBusUnit &unit)
{
    argument.beginStructure();
    argument << unit.id << unit.description << unit.loadState << unit.activeState;
    argument << unit.subState << unit.following << unit.path << unit.jobId;
    argument << unit.jobType << unit.jobPath;
    argument.endStructure();
    return argument;
}

const QDBusArgument& operator>>(const QDBusArgument &argument, ManagerDBusUnit &unit)
{
    argument.beginStructure();
    argument >> unit.id >> unit.description >> unit.loadState >> unit.activeState;
    argument >> unit.subState >> unit.following >> unit.path >> unit.jobId;
    argument >> unit.jobType >> unit.jobPath;
    argument.endStructure();
    return argument;
}

QDBusArgument& operator<<(QDBusArgument &argument, const PathDBusPath &path)
{
    argument.beginStructure();
    argument << path.type << path.path;
    argument.endStructure();
    return argument;
}

const QDBusArgument& operator>>(const QDBusArgument &argument, PathDBusPath &path)
{
    argument.beginStructure();
    argument >> path.type >> path.path;
    argument.endStructure();
    return argument;
}

QDBusArgument& operator<<(QDBusArgument &argument, const SeatDBusSession &session)
{
    argument.beginStructure();
    argument << session.id << session.path;
    argument.endStructure();
    return argument;
}

const QDBusArgument& operator>>(const QDBusArgument &argument, SeatDBusSession &session)
{
    argument.beginStructure();
    argument >> session.id >> session.path;
    argument.endStructure();
    return argument;
}

QDBusArgument& operator<<(QDBusArgument &argument, const SocketDBusSocket &socket)
{
    argument.beginStructure();
    argument << socket.type << socket.address;
    argument.endStructure();
    return argument;
}

const QDBusArgument& operator>>(const QDBusArgument &argument, SocketDBusSocket &socket)
{
    argument.beginStructure();
    argument >> socket.type >> socket.address;
    argument.endStructure();
    return argument;
}

QDBusArgument& operator<<(QDBusArgument &argument, const TimerDBusCalendarTimer &calendarTimer)
{
    argument.beginStructure();
    argument << calendarTimer.timerBase << calendarTimer.calendarSpec << calendarTimer.nextElapse;
    argument.endStructure();
    return argument;
}

const QDBusArgument& operator>>(const QDBusArgument &argument, TimerDBusCalendarTimer &calendarTimer)
{
    argument.beginStructure();
    argument >> calendarTimer.timerBase >> calendarTimer.calendarSpec >> calendarTimer.nextElapse;
    argument.endStructure();
    return argument;
}

QDBusArgument& operator<<(QDBusArgument &argument, const TimerDBusMonotonicTimer &monotonicTimer)
{
    argument.beginStructure();
    argument << monotonicTimer.timerBase << monotonicTimer.value << monotonicTimer.nextElapse;
    argument.endStructure();
    return argument;
}

const QDBusArgument& operator>>(const QDBusArgument &argument, TimerDBusMonotonicTimer &monotonicTimer)
{
    argument.beginStructure();
    argument >> monotonicTimer.timerBase >> monotonicTimer.value >> monotonicTimer.nextElapse;
    argument.endStructure();
    return argument;
}

QDBusArgument& operator<<(QDBusArgument &argument, const UnitDBusCondition &condition)
{
    argument.beginStructure();
    argument << condition.name << condition.trigger << condition.negate << condition.param;
    argument << condition.state;
    argument.endStructure();
    return argument;
}

const QDBusArgument& operator>>(const QDBusArgument &argument, UnitDBusCondition &condition)
{
    argument.beginStructure();
    argument >> condition.name >> condition.trigger >> condition.negate >> condition.param;
    argument >> condition.state;
    argument.endStructure();
    return argument;
}

QDBusArgument& operator<<(QDBusArgument &argument, const UnitDBusJob &job)
{
    argument.beginStructure();
    argument << job.id << job.path;
    argument.endStructure();
    return argument;
}

const QDBusArgument& operator>>(const QDBusArgument &argument, UnitDBusJob &job)
{
    argument.beginStructure();
    argument >> job.id >> job.path;
    argument.endStructure();
    return argument;
}

QDBusArgument& operator<<(QDBusArgument &argument, const UnitDBusLoadError &loadError)
{
    argument.beginStructure();
    argument << loadError.name << loadError.message;
    argument.endStructure();
    return argument;
}

const QDBusArgument& operator>>(const QDBusArgument &argument, UnitDBusLoadError &loadError)
{
    argument.beginStructure();
    argument >> loadError.name >> loadError.message;
    argument.endStructure();
    return argument;
}

QDBusArgument& operator<<(QDBusArgument &argument, const UserDBusSession &session)
{
    argument.beginStructure();
    argument << session.id << session.path;
    argument.endStructure();
    return argument;
}

const QDBusArgument& operator>>(const QDBusArgument &argument, UserDBusSession &session)
{
    argument.beginStructure();
    argument >> session.id >> session.path;
    argument.endStructure();
    return argument;
}
