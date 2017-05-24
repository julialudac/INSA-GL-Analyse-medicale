#ifndef MEDANALYSIS_SERVER_LISTCONTROLLER_H
#define MEDANALYSIS_SERVER_LISTCONTROLLER_H

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include "../utils/utils.h"
#include "../models/Disease.h"
#include "../models/Genome.h"
#include "../storage/DiseaseDAO.h"
#include "../services/AnalysisService.h"
using std::istream;
using std::string;
using std::vector;
using std::unordered_multimap;



class ListController {
public:

    ListController(const char *filePath);

    //vector<string> doGetList(vector<string> req);
    vector<string> doGetList(const char *req);

};


#endif //MEDANALYSIS_SERVER_LISTCONTROLLER_H
