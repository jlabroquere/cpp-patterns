// Version: $Id$
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

#include <QtTest>

class baseTemplateCase : public QObject
{
    Q_OBJECT

    private slots:
    void initTestCase(void);
    void init(void);

    private slots:
    void testVerify(void);

    private slots:
    virtual void cleanupTestCase(void);
    virtual void cleanup(void);
};

//
// file ends here
