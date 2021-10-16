#include <iostream>

#include <cpr/cpr.h>

#include <nlohmann/json.hpp>

using json = nlohmann::json;

std::string lineswitcher(std::string &content, int line)
{
    std::string ans = "";
    for (int i = 1; i <= line; i ++)
    {
        int pos = content.find_last_of('\n');
        ans = ans + content.substr(pos);
        content = content.substr(0,pos);
    }
    return ans;
}

int main()
{
	cpr::Response r = cpr::Get(cpr::Url{"https://t.me/s/codeforces_official"});
	std::string plain = r.text;
	std::string converted = lineswitcher(plain, 32);
	int divpos = converted.find("tgme_widget_message_text js-message_text");
	int divslashpos = converted.find("tgme_widget_message_footer compact js-message_footer");
	std::cout << converted.substr(divpos, divslashpos);
	return 0;
}
