//
//  Timer.hpp
//  NewDataStructures
//
//  Created by Metcalfe, Rylan on 2/5/19.
//  Copyright © 2019 Metcalfe, Rylan. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <iostream>

class Timer
{
private:
    clock_t executionTime;
public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayInformation();
    long getTimeInMicroseconds();
};

#endif /* Timer_hpp */
