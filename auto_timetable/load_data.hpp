//
//  load_data.hpp
//  auto_timetable
//
//  Created by Henry Zhou on 8/25/16.
//  Copyright © 2016 Henry Zhou. All rights reserved.
//

#ifndef load_data_hpp
#define load_data_hpp

#include <stdio.h>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "course.hpp"
#include "basic_unit.hpp"

using namespace std;

//Loading test data from the text file
void load_test_data(vector<Course>& course_list);

//Load info about lec/tut/pra from a line
vector<Lec> load_lec(int num, string line);
vector<Tut> load_tut(int num, string line);
vector<Pra> load_pra(int num, string line);

#endif /* load_data_hpp */
