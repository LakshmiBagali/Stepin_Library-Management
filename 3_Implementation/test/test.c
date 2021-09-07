#include "unity.h"
#include "function.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_init(void)
{
  TEST_ASSERT_EQUAL(1, init(3412));
  TEST_ASSERT_EQUAL(1, init(1243));
}
void test_zero_one(void)
{
  TEST_ASSERT_EQUAL(0, init(1234));
  TEST_ASSERT_EQUAL(0, init(4567));
}

int test_main(void)
{
/* Initiate the Unity Test Framework*/
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_init);
  RUN_TEST(test_zero_one);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}