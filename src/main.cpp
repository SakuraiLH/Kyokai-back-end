#include <iostream>

#include <cpr/cpr.h>

#include <nlohmann/json.hpp>

using json = nlohmann::json;

int main()
{
	cpr::Response r = cpr::Get(cpr::Url{"https://t.me/s/codeforces_official"});
	json j;
	std::cout << r.url << std::endl
	       	  << r.status_code << std::endl
		  << r.header["content-type"] << std::endl
		  << r.text << std::endl;
	return 0;
}
