#include <boost/python.hpp>
#include "CubeAsset.h"
#include "BoundingBox.h"
#include <glm/glm.hpp>
#include <glm/ext.hpp>
#include <glm/mat4x4.hpp>
#include <glm/gtc/matrix_transform.hpp>

using namespace boost::python;

BOOST_PYTHON_MODULE(libpyhydra)
{
	class_<CubeAsset>("CubeAsset", init<>())   

    ;
}

//import python libraries	
