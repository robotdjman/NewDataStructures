//
//  Controller.cpp
//  NewDataStructures
//
//  Created by Metcalfe, Rylan on 1/28/19.
//  Copyright © 2019 Metcalfe, Rylan. All rights reserved.
//

#include "Controller.hpp"

void Controller :: start()
{
    string answer;
    int apples [] {16, 2, 77, 40, 1123};
    cout << "You have ";
    cout << apples[1];
    cout << " apples!" << endl;
    cout << "What basket do you want to see?" << endl;
    getline(cin, answer);
    cout << "There are ";
    cout << apples[stoi(answer)] << endl;
    AddNumber();
}
void Controller :: AddNumber()
{
    cout << "Yay" << endl;
}
