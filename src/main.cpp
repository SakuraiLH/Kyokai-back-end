#include <iostream>

#include <cpr/cpr.h>

#include <nlohmann/json.hpp>

using json = nlohmann::json;

void spacer(string &first_target, string &last_target, json &targetjson) // targetjson: 目标json (string格式) target: 目标字符串 
{
	int foundpos_1 = targetjson["text"].find_last_of(first_target);
	string parsed_info_1 = targetjson["text"].substr(foundpos_1);
	int foundpos_2 = parsed_info_1.find(last_target);
	string parsed_info_2 = parsed_info_1.substr(0, foundpos_2);
	// foundpos: 已经找到的字符串位置
	return;
}

int main()
{
	cpr::Response r = cpr::Get(cpr::Url{"https://t.me/s/codeforces_official"});
	json parser;
	parser.parse(r.text);
	std::cout << r.url << std::endl
	       	  << r.status_code << std::endl
		  << r.header["content-type"] << std::endl
		  << r.text << std::endl;

	int findpos = parser[text].find_last_of("<div class=\"tgme_widget_message_text js-message_text\" dir=\"auto\">");
	string newest_info = parser[text].substr(findpos);

	json outputform;
	outputform = {
		"tgme_widget_message": 
	}
	
	return 0;
}
