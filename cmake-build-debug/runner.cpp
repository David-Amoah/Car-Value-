/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_newCxxTest_init = false;
#include "..\newCxxTest.h"

static newCxxTest suite_newCxxTest;

static CxxTest::List Tests_newCxxTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_newCxxTest( "C:/Users/amoah/OneDrive/Desktop/CLionProjects/Car-value HW/newCxxTest.h", 13, "newCxxTest", suite_newCxxTest, Tests_newCxxTest );

static class TestDescription_suite_newCxxTest_testMyCar : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testMyCar() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 19, "testMyCar" ) {}
 void runTest() { suite_newCxxTest.testMyCar(); }
} testDescription_suite_newCxxTest_testMyCar;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
