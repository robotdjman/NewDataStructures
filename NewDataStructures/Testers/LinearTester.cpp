//
//  LinearTester.cpp
//  NewDataStructures
//
//  Created by Metcalfe, Rylan on 2/13/19.
//  Copyright © 2019 Metcalfe, Rylan. All rights reserved.
//

#include "LinearTester.hpp"

void LienarTester :: testVsSTL()
{
    Timer crimeTimerSTL, crimeTimerOOP, musicSTL, musicOOP;
    
    cirimeTimerSTL.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector(/Users/rmet5997/Documents/C++Code/NewDataStructures/NewDataStructures/Resources/crime.csv)
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList(/Users/rmet5997/Documents/C++Code/NewDataStructures/NewDataStructures/Resources/music.csv)
    crimeTimerOOP.stopTimer();
    
    crimeTimerSTL.displayInformation();
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    
    musicSTL.startTimer();
    vector<Music> tunez = FileController :: musicDataToVector(/Users/rmet5997/Documents/C++Code/NewDataStructures/NewDataStructures/Resources/music.csv)
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<Music> musicList = FileController :: musicDataToList(/Users/rmet5997/Documents/C++Code/NewDataStructures/NewDataStructures/Resources/music.csv)
    musicOOP.stopTimer();
    
    musicSTL.displayInformation();
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerSTL.resetTimer();
    musicOOP.resetTimer();
    musicSTL.resetTimer();
}
