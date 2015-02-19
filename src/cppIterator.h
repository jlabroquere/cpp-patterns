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
// cppIteratorObject
// /////////////////////////////////////////////////////////////////
class CPPPATTERNS_EXPORT cppIteratorObject : public QObject
{
    friend class cppIteratorObjectIterator;

public:
    explicit cppIteratorObject(void) {m_position = -1;}

public:
    virtual ~cppIteratorObject(void) {;};

    void push(int value);

private:
    int m_items[10];
    int m_position;
};

// /////////////////////////////////////////////////////////////////
// cppIteratorObjectIterator
// /////////////////////////////////////////////////////////////////
class CPPPATTERNS_EXPORT cppIteratorObjectIterator : public QObject
{
public:
    explicit cppIteratorObjectIterator(const cppIteratorObject& object) : m_object(object) {}
            ~cppIteratorObjectIterator(void) {}

public:
    void operator++() { ++m_index; }
    bool operator()() { return m_index != m_object.m_position + 1; }
    int operator *() { return m_object.m_items[m_index]; } // dereference

private:
    int m_index;
    const cppIteratorObject& m_object;
};

//
// file ends here
