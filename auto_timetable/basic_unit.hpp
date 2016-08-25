//
//  basic_unit.hpp
//  auto_timetable
//
//  Created by Henry Zhou on 8/25/16.
//  Copyright © 2016 Henry Zhou. All rights reserved.
//

#ifndef basic_unit_hpp
#define basic_unit_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
 * The basic unit in the timetable
 *
 * day is the day that the Slot takes place (MON, TUE, etc.)
 * start is the time a LEC/TUT/PRA starts (in 24-hour convention)
 * end   is the time it ends
 * location is the classroom
 */
struct Slot{
    string day;
    double start;
    double end;
    string location;
    
    Slot(string _day, double _start, double _end, string _location){
        day = _day;
        start = _start;
        end = _end;
        location = _location;
    }
};


/*
 * A course consists of three parts (perhaps more, seminar, discussion)
 * Each is singular class (could be inherited from a base class)
 *
 * Additional features such as availability, enrollment and waitlist
 * can be added to each class in the future
 */

/*
 * Lec implementation
 * instructor: the name of the instructor in charge of the session
 * session:    the session number. eg. LEC0101
 * time:       a vector of Slots for when and where is the Lec
 */
class Lec{
private:
    string instructor;
    int session;
    vector<Slot> time;
public:
    Lec(string _instr, int _sess, vector<Slot> _time){
        instructor = _instr;
        session = _sess;
        time = _time;
    }
    
    void print_lec();
    
};

/*
 * Tut implementation
 * session: the tutorial session. eg. TUT0101
 * time:    a vector of Slots for when and where is the Tut
 */
class Tut{
private:
    int session;
    vector<Slot> time;
public:
    Tut(int _sess, vector<Slot> _time){
        session = _sess;
        time = _time;
    }
    
};

/*
 * Pra implementation
 * session: the lab session. eg. PRA0101
 * time:    a vector of Slots for when and where is the Pra
 */
class Pra{
private:
    int session;
    vector<Slot> time;
public:
    Pra(int _sess, vector<Slot> _time){
        session = _sess;
        time = _time;
    }
    
};
#endif /* basic_unit_hpp */
