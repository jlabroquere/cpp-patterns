// Version: $Id: $
//
//

// Commentary: The abstract factory allows to have multiple factories to create a set of objects.
//
//

// Change Log:
//
//

// Code:

#pragma once

#include "cppPatternsExport.h"
// #include "cppAbstractObjectExport.h"

#include <QtCore>

class cppAbstractObject;
class cppObjectOne;
class cppObjectTwo;

// /////////////////////////////////////////////////////////////////
// cppAbstractFactory
// /////////////////////////////////////////////////////////////////

class cppAbstractFactory : public QObject
{
public:
    explicit cppAbstractFactory(void) {;}

public:
    virtual ~cppAbstractFactory(void) {;};

public:
    virtual cppAbstractObject* createObject(void) = 0;
};

// /////////////////////////////////////////////////////////////////
// cppFactories
// /////////////////////////////////////////////////////////////////

class CPPPATTERNS_EXPORT cppFactoryOne : public cppAbstractFactory
{
public:
    explicit cppFactoryOne(void) {;}
            ~cppFactoryOne(void) {;}

public:
    cppAbstractObject* createObject(void);
};

class CPPPATTERNS_EXPORT cppFactoryTwo : public cppAbstractFactory
{
public:
    explicit cppFactoryTwo(void) {;}
            ~cppFactoryTwo(void) {;}

public:
    cppAbstractObject* createObject(void);
};

// /////////////////////////////////////////////////////////////////
// cppAbstractObject
// /////////////////////////////////////////////////////////////////

class cppAbstractObject : public QObject
{
public:
    explicit cppAbstractObject(void) {;};

public:
    virtual ~cppAbstractObject(void) {;};

public:
    virtual QString description(void) = 0;
};

// /////////////////////////////////////////////////////////////////
// cppObjects
// /////////////////////////////////////////////////////////////////

class cppObjectOne : public cppAbstractObject
{
public:
    cppObjectOne(void) {;}
   ~cppObjectOne(void) {;}

public:
    QString description(void);
};

class cppObjectTwo : public cppAbstractObject
{
public:
    cppObjectTwo(void) {;}
   ~cppObjectTwo(void) {;}

public:
    QString description(void);
};

//
// file ends here
