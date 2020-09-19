#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <myfn.h>
#define PROJECT_NAME    "KnowMyNumber"

/* Prototypes for all the test functions */
void test_odd(void);
int test_primeno(int no);
int test_symbol(int no);
int test_palindrome(int no);
int test_armstrong(int no);
int test_fact(int no);
int test_SumOfPrimes(int no);
int test_dec2bin(int no);
int test_dec2hex(int no);
//int dec2oct(int no);
int test_power(int base, int a);
int test_absolute(int no);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


  /* Add your test functions in this format for testing*/

  CU_add_test(suite, "odd",test_odd);
  CU_add_test(suite, "primeno",test_primeno);
  CU_add_test(suite, "symbol",test_symbol);
  CU_add_test(suite, "palindrome",test_palindrome);
  CU_add_test(suite, "armstrong",test_armstrong);
  CU_add_test(suite, "fact",test_fact);
  CU_add_test(suite, "SumOfPrimes",test_SumOfPrimes);
  CU_add_test(suite, "power",test_power);
  CU_add_test(suite, "absolute",test_absolute);
  CU_add_test(suite, "dec2bin",test_dec2bin);
  CU_add_test(suite, "dec2hex",test_dec2hex);




/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */

void test_odd(void)
{
	CU_ASSERT(1 == odd(1));
  CU_ASSERT(0 == odd(2));
}

int test_primeno(int no)
{
  CU_ASSERT(1 == primeno(2));
  CU_ASSERT(0 == primeno(4));
}
int test_symbol(int no)
{
  CU_ASSERT(1 == symbol(2));
  CU_ASSERT(-1 == symbol(-2));
}
int test_palindrome(int no)
{
  CU_ASSERT(1 == palindrome(22));
  CU_ASSERT(0 == symbol(23));
}
int test_armstrong(int no)
{
  CU_ASSERT(1 == armstrong(153));
  CU_ASSERT(0 == armstrong(15));
}
int test_fact(int no)
{
  CU_ASSERT(120 == fact(5));
  CU_ASSERT(1 == fact(1));
}
int test_SumOfPrimes(int no)
{
  CU_ASSERT(1 == SumOfPrimes(34));
  CU_ASSERT(0 == SumOfPrimes(7));
}
int test_power(int base, int a)
{
  CU_ASSERT(0 == power(0,10));
  CU_ASSERT(1024 == power(2,10));
}
int test_absolute(int no)
{
  CU_ASSERT(5 == absolute(5));
  CU_ASSERT(7 == absolute(-7));
}
int test_dec2bin(int no)
{
  CU_ASSERT(11 == dec2bin(3));
}
int test_dec2hex(int no)
{
  CU_ASSERT('A' == dec2hex(10));
}
