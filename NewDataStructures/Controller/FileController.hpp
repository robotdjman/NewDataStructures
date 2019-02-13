//
//  FileController.hpp
//  NewDataStructures
//
//  Created by Metcalfe, Rylan on 2/5/19.
//  Copyright © 2019 Metcalfe, Rylan. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include <string>
#include <fstream>
#include <vector>
#include <stdio.h>
#include <sstream>
#include "../Resources/CrimeData.hpp"
#include "../Resources/Music.hpp"
#include "../Model/Linear/Array.hpp"
#include "../Model/Linear/LinkedList.hpp"

#include "../Resources/CrimeData.cpp"
#include "../Resources/Music.hpp"


class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static vector<Music> musicDataToVector(string filename);
    
    static Array<Music> musicDataToList(string filename);
    static LinkedList<CrimeData> readDatatoList(string filename);
    static LinkedList<Music> musicDataToList(string filename);
};

#endif /* FileController_hpp */
