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

#include "cppIterator.h"

// /////////////////////////////////////////////////////////////////
// cppIteratorObject Implementation
// /////////////////////////////////////////////////////////////////

void cppIteratorObject::push(int value)
{
    m_items[++m_position] = value;
}
