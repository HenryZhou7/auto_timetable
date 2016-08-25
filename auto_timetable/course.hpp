//
//  course.hpp
//  auto_timetable
//
//  Created by Henry Zhou on 8/25/16.
//  Copyright © 2016 Henry Zhou. All rights reserved.
//

#ifndef course_hpp
#define course_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "basic_unit.hpp"

/*
 * a class Course is the upper level of our data stored
 * it is the layer that the user is directly interacting
 * 
 * course:      a string of the course name. eg. ECE345
 * lecture:     a vector of Lec
 * tutorial:    a vector of Tut
 * practice:    a vector of Pra
 */

class Course{
private:
    string course;
    vector<Lec> lecture;
    vector<Tut> tutorial;
    vector<Pra> practice;
public:
    Course(string _cour, vector<Lec> _leclist, vector<Tut> _tutlist, vector<Pra> _pralist){
        course = _cour;
        lecture = _leclist;
        tutorial = _tutlist;
        practice = _pralist;
    }
};


#endif /* course_hpp */
