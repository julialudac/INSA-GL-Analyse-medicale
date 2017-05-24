#include <catch.hpp>
#include <models/Genome.h>
#include <services/AnalysisService.h>

TEST_CASE( "Evaluating All Genomes", "[server][storage]" )
{
    AnalysisService service = AnalysisService("../../../tests/DataTest/disease");
    vector<string> genes;
    genes.push_back("GGCC");
    genes.push_back("GTAC");
    Genome genome = Genome(genes);
    vector<Disease> diseases = service.evaluateAll(genome);
    REQUIRE(diseases[0].name()=="Cancer");
    REQUIRE(diseases[1].name()=="YYSB");
}