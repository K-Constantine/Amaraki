#include "sample.hpp"

using namespace example_gen;

string Sample::getName() {
	yajl_val node;

	char errbuf[1024];
	const char * path[] = { "name", (const char *) 0 }; 

	node = yajl_tree_parse("{\"name\": \"Amaraki\"}", errbuf, sizeof(errbuf));
	
	/* parse error handling */
    if (node == NULL) {
    	return "Error reading json";
    }
    yajl_val v = yajl_tree_get(node, path, yajl_t_string);

	return YAJL_GET_STRING(v);
}

shared_ptr<Test> Test::create() {
	return make_shared<Sample>();
}
