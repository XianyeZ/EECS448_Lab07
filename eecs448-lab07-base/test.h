#include "stdio.h"
#include "LinkedListOfInts.h"
#include <list>
#include <string>
#include <iostream>
#include <cstdlib>

#ifndef Test_h
#define Test_h


class Test
{
    public:
        Test();
        ~Test();
        void isEmptyTest();
        void sizeTest();
        void searchTest();
        void addBackTest();
        void addFrontTest();
        void removeBackTest();
        void removeFrontTest();
        void runTests();

    private:
        std::list<int> intList;
        int firstInt = 0;
        int lastInt = 0;
        bool addFunctionPassed = false;
};


#endif