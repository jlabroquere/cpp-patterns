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

#include "proxyTest.h"

#include "cppProxy.h"

void proxyTestCase::initTestCase(void)
{
};
void proxyTestCase::init(void)
{
};

void proxyTestCase::testVerify(void)
{
    cppProxyObjectProxy *proxy = new cppProxyObjectProxy();
    proxy->description();
    QVERIFY(proxy->description() == "I am real object");
};

void proxyTestCase::cleanupTestCase(void)
{

}

void proxyTestCase::cleanup(void)
{

}

QTEST_MAIN(proxyTestCase)

//
// file ends here
