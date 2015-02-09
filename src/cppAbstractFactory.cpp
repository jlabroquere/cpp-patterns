// Version: $Id: $
//
//

// Commentary:
//
//

// Change Log:
//
//

// Code:

#include "cppAbstractFactory.h"

// /////////////////////////////////////////////////////////////////
// cppObjects Implementation
// /////////////////////////////////////////////////////////////////

QString cppObjectOne::description(void)
{
    return "I am object one";
}
QString cppObjectTwo::description(void)
{
    return "I am object two";
}

// /////////////////////////////////////////////////////////////////
// cppFactories Implementation
// /////////////////////////////////////////////////////////////////

cppAbstractObject* cppFactoryOne::createObject()
{
    return new cppObjectOne;
}

cppAbstractObject* cppFactoryTwo::createObject()
{
    return new cppObjectTwo;
}
