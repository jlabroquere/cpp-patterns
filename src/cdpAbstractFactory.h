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

#pragma once

#include "cdpAbstractFactoryExport.h"

#include <QtCore>

// /////////////////////////////////////////////////////////////////
// cdpAbstractFactory
// /////////////////////////////////////////////////////////////////

class cdpAbstractFactory : public QObject
{
public:
    explicit cdpAbstractFactory(void) : m_data(0) {;}

public:
    virtual ~cdpAbstractFactory(void) {;};

private:
    qlonglong m_geometrical_dimension;
    qlonglong m_topological_dimension;
};


//
// file ends here
