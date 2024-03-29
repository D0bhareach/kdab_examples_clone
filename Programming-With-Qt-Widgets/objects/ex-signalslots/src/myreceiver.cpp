/*************************************************************************
 *
 * Copyright (c) 2008-2011, Nokia Corporation and/or its subsidiary(-ies).
 * Copyright (c) 2012-2019, Klaralvdalens Datakonsult AB (KDAB)
 * All rights reserved.
 *
 * See the LICENSE.txt file shipped along with this file for the license.
 *
 *************************************************************************/

#include "myreceiver.h"

MyReceiver::MyReceiver(QObject *parent)
    : QObject(parent)
{}

void MyReceiver::aSlot()
{
    qDebug("Received event on Slot-1");
}

void MyReceiver::anOtherSlot(int, QObject *)
{
    qDebug("another event received on Slot-2");
}
