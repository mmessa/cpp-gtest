/**
 * Unit Tests for Rando Test
**/

#include <gtest/gtest.h>
#include "rando.h"

/*  
	FUNCTIONS WE NEED TO TEST:

	bool shouldWorry(bool,bool,bool);
	bool isDivisbleBy(int,int);
	bool isPrime(int);
	int nearestToZero(int,int);
*/
 
class RandoTest : public ::testing::Test
{
	protected:
		RandoTest(){} //constructor runs before each test
		virtual ~RandoTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(RandoTest, allChildrenSmile)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(true,true,true) );
}


// TESTS FOR isDivisbleBy
TEST(RandoTest, isDivisbleByTrue)
{
	Rando rando;
	ASSERT_TRUE ( rando.isDivisbleBy(4,2) );
	ASSERT_TRUE ( rando.isDivisbleBy(10,2) );
}

TEST(RandoTest, isDivisbleByFalse)
{
	Rando rando;
	ASSERT_FALSE ( rando.isDivisbleBy(5,2) );
	ASSERT_FALSE ( rando.isDivisbleBy(10,3) );
}


TEST(RandoTest, isDivisbleByZeroFalse)
{
	Rando rando;
	ASSERT_FALSE ( rando.isDivisbleBy(5,0) );
	ASSERT_FALSE ( rando.isDivisbleBy(10,0) );
	ASSERT_FALSE ( rando.isDivisbleBy(0,2) );
	ASSERT_FALSE ( rando.isDivisbleBy(0,5) );
}



//TESTS FOR isPrime
TEST(RandoTest, isPrimeFalse)
{
	Rando rando;
	ASSERT_FALSE ( rando.isPrime(4) );
}


TEST(RandoTest, isPrimeTrue)
{
	Rando rando;
	ASSERT_TRUE ( rando.isPrime(7) );
}
