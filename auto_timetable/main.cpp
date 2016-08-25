//
//  main.cpp
//  auto_timetable
//
//  Created by Henry Zhou on 8/25/16.
//  Copyright © 2016 Henry Zhou. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include "load_data.hpp"
#include "basic_unit.hpp"
#include "course.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    vector<Course> courselist;
    load_test_data(courselist);
    
    
    
    
    
    return 0;
}
