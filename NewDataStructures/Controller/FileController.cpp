//
//  FileController.cpp
//  NewDataStructures
//
//  Created by Metcalfe, Rylan on 2/5/19.
//  Copyright © 2019 Metcalfe, Rylan. All rights reserved.
//

#include "FileController.hpp"
#include <iostream>
using namespace std;

vector<CrimeData> FileController :: readCrimeDataToVector(string filename)
{
    std :: vector<CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    if(dataFile.is_open())
    {
        
        while(!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '\r');
            if(rowCount != 0)
            {
                
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimeVector.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    return crimeVector;
}
