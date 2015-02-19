// Version: $Id: $
//
//

// Commentary: The proxy allows to delegate the work to underlying class.
//
//

// Change Log:
//
//

// Code:

#pragma once

#include "cppPatternsExport.h"

#include <QtCore>

// /////////////////////////////////////////////////////////////////
// cppObjectOne
// /////////////////////////////////////////////////////////////////

class CPPPATTERNS_EXPORT cppProxyObject : public QObject
{
public:
    explicit cppProxyObject(void) {;}

public:
    virtual ~cppProxyObject(void) {;};

    QString description(void);
};


// /////////////////////////////////////////////////////////////////
// cppProxyObjectProxy
// /////////////////////////////////////////////////////////////////

class CPPPATTERNS_EXPORT cppProxyObjectProxy : public QObject
{
public:
    explicit cppProxyObjectProxy(void) : m_object(nullptr) {}
            ~cppProxyObjectProxy(void) {}

    QString description(void) { if (!m_object) m_object = new cppProxyObject(); return m_object->description(); }

private:
    cppProxyObject* m_object;
};

//
// file ends here
