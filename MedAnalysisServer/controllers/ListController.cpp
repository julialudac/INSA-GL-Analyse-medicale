#include "ListController.h"



vector<string> ListController::doGetList(const char *req) {
    // TODO Renvoyer un string contenant la liste des maladies disponibles (attention aux doublons)



    vector<string> res;
    res.push_back("MA v1.0");
    res.push_back("DISEASES");

    AnalysisService services = AnalysisService();
    auto diseases = services.getDisease();

    /*unordered_multimap<string,Disease> diseases;
    diseases.emplace("Cancer",Disease("Cancer",vector<string>()));
    diseases.emplace("Yinjingduanxiao",Disease("Yinjingduanxiao",vector<string>()));
    diseases.emplace("Meipiyan",Disease("Meipiyan",vector<string>()));*/

    for(auto it = diseases.begin();it!=diseases.end();++it){
        res.push_back(it->second.name());
    }
    res.push_back("");
    return res;


}

ListController::ListController(string &filePath) {
    AnalysisService analysisService = AnalysisService(filePath);
}
