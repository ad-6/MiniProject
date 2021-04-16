#include "unity.h"
#include "bankhead.h"

int num_acc = 0;
acc_info acc[1000];

/* Required by the unity test framework */
void setUp(void) {}
/* Required by the unity test framework */
void tearDown(void) {}

void test_new_acc(void)
    TEST_ASSERT_EQUAL(SUCCESS, new_acc(acc, num_acc));

void test_write_into_file(void)
    TEST_ASSERT_EQUAL(SUCCESS, write_into_file(acc, num_acc, "TestFile"));

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_new_acc);
    RUN_TEST(test_write_into_file);
    return UNITY_END();
}
