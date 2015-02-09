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

#include "abstractFactoryTest.h"

#include "cppAbstractFactory.h"

void abstractFactoryTestCase::initTestCase(void)
{
};
void abstractFactoryTestCase::init(void)
{
};

void abstractFactoryTestCase::testVerify(void)
{
    cppAbstractFactory *object_factory_1 = new cppFactoryOne();
    cppAbstractFactory *object_factory_2 = new cppFactoryTwo();

    cppAbstractObject* objects[2];

    objects[0] = object_factory_1->createObject();
    objects[1] = object_factory_2->createObject();

    QVERIFY(objects[0]->description() == "I am object one");
    QVERIFY(objects[1]->description() == "I am object two");
};

void abstractFactoryTestCase::cleanupTestCase(void)
{

}

void abstractFactoryTestCase::cleanup(void)
{

}

QTEST_MAIN(abstractFactoryTestCase)

//
// file ends here
