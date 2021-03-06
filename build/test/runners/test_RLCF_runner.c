/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
    CEXCEPTION_T e; \
    Try { \
      setUp(); \
      TestFunc(); \
    } Catch(e) { TEST_ASSERT_EQUAL_HEX32_MESSAGE(CEXCEPTION_NONE, e, "Unhandled Exception!"); } \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>
#include "CException.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_rlcf_00000000_with_carry_1_should_get_00000001_status_0x00_store_in_wreg_access_should_pass(void);
extern void test_rlcf_10000000_with_carry_1_should_get_00000001_status_0x01_store_in_file_access_should_pass(void);
extern void test_rlcf_11000000_with_carry_1_should_get_10000001_status_0x11_store_in_file_access_should_pass(void);
extern void test_rlcf_00000000_with_carry_0_should_get_00000000_status_0x11_store_in_file_access_should_pass(void);
extern void test_rlcf_10000000_with_carry_1_should_get_00000000_status_0x05_store_in_file_f92_access_should_pass(void);
extern void test_rlcf_10100110_with_carry_1_should_get_01001101_status_0x01_store_in_wreg_banked_should_pass(void);
extern void test_rlcf_11111111_with_carry_1_should_get_11111111_status_0x11_store_in_wreg_banked_should_pass(void);
extern void test_rlcf_01110110_with_carry_0_should_get_11101100_status_0x01_store_in_wreg_banked_should_pass(void);
extern void test_rlcf_01001111_with_carry_0_should_get_10011110_status_0x10_store_in_file_banked_should_pass(void);
extern void test_rlcf_00001111_with_carry_0_should_get_00011110_status_0x00_store_in_file_banked_should_pass(void);
extern void test_rlcf_invalid_operand1_should_throw_exception(void);
extern void test_rlcf_invalid_operand2_should_throw_exception(void);
extern void test_rlcf_invalid_operand3_should_throw_exception(void);


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "test_RLCF.c";
  UnityBegin();
  RUN_TEST(test_rlcf_00000000_with_carry_1_should_get_00000001_status_0x00_store_in_wreg_access_should_pass, 10);
  RUN_TEST(test_rlcf_10000000_with_carry_1_should_get_00000001_status_0x01_store_in_file_access_should_pass, 29);
  RUN_TEST(test_rlcf_11000000_with_carry_1_should_get_10000001_status_0x11_store_in_file_access_should_pass, 48);
  RUN_TEST(test_rlcf_00000000_with_carry_0_should_get_00000000_status_0x11_store_in_file_access_should_pass, 67);
  RUN_TEST(test_rlcf_10000000_with_carry_1_should_get_00000000_status_0x05_store_in_file_f92_access_should_pass, 86);
  RUN_TEST(test_rlcf_10100110_with_carry_1_should_get_01001101_status_0x01_store_in_wreg_banked_should_pass, 105);
  RUN_TEST(test_rlcf_11111111_with_carry_1_should_get_11111111_status_0x11_store_in_wreg_banked_should_pass, 125);
  RUN_TEST(test_rlcf_01110110_with_carry_0_should_get_11101100_status_0x01_store_in_wreg_banked_should_pass, 145);
  RUN_TEST(test_rlcf_01001111_with_carry_0_should_get_10011110_status_0x10_store_in_file_banked_should_pass, 165);
  RUN_TEST(test_rlcf_00001111_with_carry_0_should_get_00011110_status_0x00_store_in_file_banked_should_pass, 185);
  RUN_TEST(test_rlcf_invalid_operand1_should_throw_exception, 205);
  RUN_TEST(test_rlcf_invalid_operand2_should_throw_exception, 222);
  RUN_TEST(test_rlcf_invalid_operand3_should_throw_exception, 239);

  return (UnityEnd());
}
