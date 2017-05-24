#include <catch.hpp>
#include <models/Genome.h>
#include <services/AnalysisService.h>

TEST_CASE( "Evaluating All Diseases", "[server][storage]" )
{
    AnalysisService service = AnalysisService("../../../res/disease");
    vector<string> genes;
    genes.push_back("GTAC");
    genes.push_back("GGCC");
    Genome genome = Genome(genes);
    vector<Disease> diseases = service.evaluateAll(genome);
    REQUIRE(diseases[0].name()=="Cancer");
}