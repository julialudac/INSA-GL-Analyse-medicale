#include <catch.hpp>
#include <utils/utils.h>
#define MEDANALYSIS_TEST
#include <controllers/ListController.h>
using Catch::Matchers::Vector::ContainsElementMatcher;
using std::string;
using std::vector;

TEST_CASE("List Controller", "[controller][server]"){
    vector<string> str;
    str = ListController("E:\\INSA\\3A\\GI UML\\tp_clion\\INSA-GL-Analyse-medicale\\res\\dictionnaire").doGetList("MA v1.0\r\nGET DISEASES\r\n\r\n","E:\\INSA\\3A\\GI UML\\tp_clion\\INSA-GL-Analyse-medicale\\res\\dictionnaire");
    REQUIRE(str[0]=="MA v1.0");
    REQUIRE(str[1]=="DISEASES");
    //REQUIRE(str[2]=="");
    REQUIRE(str[2]=="Con");
    REQUIRE(str[3]=="Cancer");
    REQUIRE(str[4]=="Petitbite");
    REQUIRE(str[5]=="");
    //dictionnaire ordre:petitbite,cancer,con
}