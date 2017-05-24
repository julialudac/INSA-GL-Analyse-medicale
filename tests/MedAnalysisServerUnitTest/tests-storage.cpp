#include <catch.hpp>
#include <storage/DiseaseDAO.h>

TEST_CASE( "Loading diseases", "[server][storage]" )
{
    DiseaseDAO diseaseDAO = DiseaseDAO("../../../tests/DataTest/disease");
    auto diseasesMap = diseaseDAO.findAll();
    unordered_multimap<std::string,Disease>::iterator iter;
    vector<string> diseases;
    diseases.push_back("Cancer");
    diseases.push_back("YYSB");
    diseases.push_back("YYDSB");
    int i = 0;
    for(iter=diseasesMap.begin();iter!=diseasesMap.end();iter++)
    {
        REQUIRE(iter->first==diseases[i]);
        i++;
    }
}

TEST_CASE( "Loading diseases by name", "[server][storage]" )
{
    DiseaseDAO diseaseDAO = DiseaseDAO("../../../tests/DataTest/disease");
    pair<   unordered_multimap<string, Disease>::iterator,
            unordered_multimap<string, Disease>::iterator
    > disease = diseaseDAO.findByName("Cancer");
    REQUIRE(disease.first->first=="Cancer");
    REQUIRE(disease.first->second.name()=="Cancer");
    REQUIRE(disease.first->second.riskfulGenes()[0]=="GTAC");
    REQUIRE(disease.first->second.riskfulGenes()[1]=="GGCC");
}