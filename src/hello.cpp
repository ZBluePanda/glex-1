#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Hello
#include <boost/test/unit_test.hpp>
#include "SFBoundingBox.h"
#include "SFBoundingBox.cc"

 
BOOST_AUTO_TEST_CASE(universeInOrder)
{
   
    auto b1 = make_shared<SFBoundingBox>(SFBoundingBox(Vector3(5.0f, 5.0f, 5.0f), 5.0f, 5.0f, 5.0f));
    auto b2 = make_shared<SFBoundingBox>(SFBoundingBox(Vector3(0.0f, 0.0f, 0.0f), 5.0f, 5.0f, 5.0f));

    BOOST_CHECK ( b1->CollidesWith(b2) );
    BOOST_CHECK ( b2->CollidesWith(b1) );
  
}

//z axis is not working
//test fails when the boxes does not meet at the x, y or z


