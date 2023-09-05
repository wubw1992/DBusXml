/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c BlackScreenInterface -a BlackScreenInterfaceAdaptor com.deepin.dde.blackscreen.xml
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "BlackScreenInterfaceAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class BlackScreenInterface
 */

BlackScreenInterface::BlackScreenInterface(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

BlackScreenInterface::~BlackScreenInterface()
{
    // destructor
}

void BlackScreenInterface::Quit()
{
    // handle method call com.deepin.dde.BlackScreen.Quit
    QMetaObject::invokeMethod(parent(), "Quit");
}

void BlackScreenInterface::SetVisible(bool visible)
{
    // handle method call com.deepin.dde.BlackScreen.SetVisible
    QMetaObject::invokeMethod(parent(), "SetVisible", Q_ARG(bool, visible));
}

void BlackScreenInterface::Show()
{
    // handle method call com.deepin.dde.BlackScreen.Show
    QMetaObject::invokeMethod(parent(), "Show");
}
