#include <catch.hpp>
#include <utils/utils.h>
#include <string>

#define MEDANALYSIS_TEST
#include <controllers/ListController.h>
using Catch::Matchers::Vector::ContainsElementMatcher;
using std::string;




TEST_CASE("List Controller", "[controller][server]"){
    std::vector<string> str;
    str = ListController().doGetList("MA v1.0\r\nGET DISEASES\r\n\r\n");


    //std::vector<std::string> parts = split(str, '\r\n');
    REQUIRE(str[0]=="MA v1.0");
    REQUIRE(str[1]=="DISEASES");
    REQUIRE(str[2]=="Cancer");
    REQUIRE(str[3]=="Yinjingduanxiao");
    REQUIRE(str[4]=="Meipiyan");
    REQUIRE(str[5]=="");
}