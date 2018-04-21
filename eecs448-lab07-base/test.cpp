#include "test.h"

Test::Test()
{
    for(int i = 0; i < 100; i++)
    {
        intList.push_back(rand() % 100);
    }
    firstInt = intList.front();
    lastInt = intList.back();

    addFunctionPassed = true;
}

Test::~Test()
{
    
}

void Test::isEmptyTest()
{
    std::cout << "isEmpty function tset:\n";

    LinkedListOfInts* testList = new LinkedListOfInts();
    std::cout << "For empty list...";
    try
    {
        if(testList->isEmpty() == true)
        {
            std::cout << "pass." << std::endl;
        }
        else
        {
            std::cout << "fail." << std::endl;
        }
    }
    catch(std::runtime_error& ex)
    {
        std::cout << "fail, " << ex.what() << std::endl;
    }
    

    if(addFunctionPassed)
    {
        testList->addFront(1);
        std::cout << "For 1 element in the list...";
        try
        {
            if(testList->isEmpty() == false)
            {
                std::cout << "pass." << std::endl;
            }
            else
            {
                std::cout << "fail, returns true for element in list." << std::endl;
            }
        }
        catch(std::runtime_error& ex2)
        {
            std::cout << "fail, " << ex2.what() << std::endl;
        }
    }
    else
    {
        std::cout << "add functions are not pass, test for element in the list stopped." << std::endl;
    }

    delete testList;
}

void Test::sizeTest()
{
    std::cout << "size function test:\n";
    

    LinkedListOfInts* testList = new LinkedListOfInts();

    std::cout << "For empty list...";
    try
    {
        if(testList->size() == 0)
        {
            std::cout << "pass." << std::endl;
        }
        else
        {
            std::cout << "fail." << std::endl;
        }
    }
    catch(std::runtime_error& ex)
    {
        std::cout << "fail, " << ex.what() << std::endl;
    }
    

    if(addFunctionPassed == true)
    {
        testList->addFront(1);
        std::cout << "For single element...";
        try
        {
            if(testList->size() == 1)
            {
                std::cout << "pass." << std::endl;
            }
            else
            {
                std::cout << "fail." << std::endl;
            }
        }
        catch(std::exception& ex2)
        {
            std::cout << "fail, " << ex2.what() << std::endl;
        }
    }
    else
    {
        std::cout << "addfunctions didn't pass, size function test stopped." << std::endl;
    }

    delete testList;
}

void Test::searchTest()
{
    std::cout << "search function test: \n";

    LinkedListOfInts* testList = new LinkedListOfInts();

    if(addFunctionPassed)
    {

        for(auto it = intList.begin(); it != intList.end(); it++)
        {
            testList->addFront(*it);
        }
        std::cout << "search first int...";
        try
        {
            bool firstB = testList->search(firstInt);
            if(firstB)
            {
                std::cout << "pass." << std::endl;
            }
            else
            {
                std::cout << "fail, can not find first element." << std::endl;
            }
        }
        catch(std::runtime_error& ex)
        {
            std::cout << "fail, " << ex.what() << std::endl;
        }
        
        try
        {
            std::cout << "search last int...";
            bool lastB = testList->search(lastInt);
            if(lastB)
            {
                std::cout << "pass." << std::endl;
            }
            else
            {
                std::cout << "fail, can not find last element." << std::endl;
            }
        }
        catch(std::runtime_error& ex)
        {
            std::cout << "fail, " << ex.what() << std::endl;
        }
    }

    delete testList;
}

void Test::addBackTest()
{
    std::cout << "addBack function test: \n";

    LinkedListOfInts* testList = new LinkedListOfInts();

    try
    {
        std::cout << "Adding int...";
        for(auto it = intList.begin(); it != intList.end(); it++)
        {
            testList->addBack(*it);
        }
    
        if(testList->size() == 100)
        {
            std::cout << "pass." << std::endl;
        }
        else
        {
            std::cout << "fail, " << testList->size() << "elememt(s) in the list." << std::endl;
        }
        

    }
    catch (std::runtime_error& ex)
    {
        std::cout << "failed, " << ex.what() << std::endl;
    }

    delete testList;
}

void Test::addFrontTest()
{
    std::cout << "addFront function test: \n";

    LinkedListOfInts* testList = new LinkedListOfInts();

    try
    {
        std::cout << "Adding int input...";
        for(auto it = intList.begin(); it != intList.end(); it++)
        {
            testList->addFront(*it);
        }

        if(testList->size() == 100)
        {
            std::cout << "pass." << std::endl;
        }
        else
        {
            std::cout << "fail, " << testList->size() << "elememt(s) in the list." << std::endl;
        }
    }
    catch (std::exception& ex)
    {
        std::cout << "fail, " << ex.what() << std::endl;
    }

    delete testList;
}

void Test::removeBackTest()
{
    if (addFunctionPassed)
    {
        std::cout << "removeBack function test: \n";
        LinkedListOfInts* testList = new LinkedListOfInts();
        for(auto it = intList.begin(); it != intList.end(); it++)
        {
            testList->addFront(*it);
        }
        try
        {
            for(int i = 0; i<100; i++)
            {
                testList->removeBack();
            }

            std::cout << "pass." << std::endl;
        }
        catch(std::runtime_error& ex)
        {
            std::cout << "failed, " << ex.what() << std::endl;
        } 
        delete testList;
    }
    else
    {
        std::cout << "add functions are not passed, removeBack function test stoped." << std::endl;
    }
}

void Test::removeFrontTest()
{
    if (addFunctionPassed)
    {
        std::cout << "removeFront function test: \n";
        LinkedListOfInts* testList = new LinkedListOfInts();
        for(auto it = intList.begin(); it != intList.end(); it++)
        {
            testList->addFront(*it);
        }
        try
        {
            for(int i = 0; i<100; i++)
            {
                testList->removeFront();
            }

            std::cout << "pass." << std::endl;
        }
        catch(std::runtime_error& ex)
        {
            std::cout << "failed, " << ex.what() << std::endl;
        } 
        delete testList;
    }
    else
    {
        std::cout << "add functions are not passed, removeFront function test stoped." << std::endl;
    }

}

void Test::runTests()
{
    addFrontTest();
    addBackTest();
    removeFrontTest();
    removeBackTest();
    isEmptyTest();
    sizeTest();
    searchTest();
}