//
//  basic_unit.cpp
//  auto_timetable
//
//  Created by Henry Zhou on 8/25/16.
//  Copyright © 2016 Henry Zhou. All rights reserved.
//

#include "basic_unit.hpp"

//Printing the info of one lecture session
//Mostly for testing purpose
void Lec::print_lec(){
    cout << "One Lecture Session Info:" << endl;
    cout << "Instructor: " << this->instructor << endl;
    cout << "LEC" << this->session << endl;
    for (unsigned i = 0; i < this->time.size(); i++){
        Slot temp = time[i];
        cout << temp.day << " " << temp.start << " to ";
        cout << temp.end << endl;
    }
}