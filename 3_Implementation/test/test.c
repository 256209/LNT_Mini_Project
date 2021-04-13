#include<stdio.h>
#include "search.h" 
#include<string.h>
#include "printname_pid.h"
#include "unity.h"
#include "unity_internals.h"
#include "delete.h"
#include "diagnosis.h"
#include "doctor.h"
#include "log.h"
#include"print.h"
//Required by unity framework
void setUp()
{

}

//Required by unity framework
void tearDown()
{

}

//test cases to check if the DELETE functions are working fine or not
void checkdeleteoption()
{
    TEST_ASSERT_EQUAL(0,delete());
}

//test cases to check the SEARCH FUNCTIONS
void checksearchfunction(){
   
    int date[3]={222};
    TEST_ASSERT_EQUAL(0,diagnosis());
    TEST_ASSERT_EQUAL(0,doctor());
    TEST_ASSERT_EQUAL(0,log_patient(0, date));
}
int main()
{
    UNITY_BEGIN();

    //Run commands
    RUN_TEST(checkdeleteoption);
    RUN_TEST(checksearchfunction);

    return UNITY_END();
}