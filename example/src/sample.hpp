#include <iconv.h>
#include <iostream>
#include <restful_mapper/api.h>

#include "test.hpp"
#include "yajl/yajl_tree.h"

using namespace std;
using namespace restful_mapper;

namespace example_gen {

	class Sample : public Test {

	public:

		virtual string getName() override;

	};

}