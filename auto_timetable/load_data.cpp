//
//  load_data.cpp
//  auto_timetable
//
//  Created by Henry Zhou on 8/25/16.
//  Copyright © 2016 Henry Zhou. All rights reserved.
//

#include "load_data.hpp"



// We have certain assumptions on the data file. It follows a certain pattern
void load_test_data(vector<Course>& course_list){
    string line;
    ifstream myfile("/Users/Jarvis/Desktop/Xcode/auto_timetable/auto_timetable/example.txt");
    
    if (myfile.is_open()){
        while (getline(myfile, line)){     //The start of a new course
            string course_name = line;
            
            getline(myfile, line);
            
            int lec_num, tut_num, pra_num;
            stringstream temp_ss;
            temp_ss.str(line);
            temp_ss >>lec_num >> tut_num >> pra_num;
            
            getline(myfile, line);// all lec info in a line
            vector<Lec> lec_info = load_lec(lec_num, line);
            
            getline(myfile, line);// all tut info in a line
            vector<Tut> tut_info = load_tut(tut_num, line);
            
            getline(myfile, line);// all pra info in a line
            vector<Pra> pra_info = load_pra(pra_num, line);
            
            Course temp_course(course_name, lec_info, tut_info, pra_info);
            course_list.push_back(temp_course);
        }
        myfile.close();
    }
    else cout << "Loading error. Unable to open file." << endl;
}



//Getting lec/tut/pra information from a designated line
//num is the number of the lecture session
vector<Lec> load_lec(int num, string line){
    vector<Lec> result;
    stringstream ss;
    ss.str(line);
    for (int i = 0; i < num; i++){
        string inst_name;
        int session;
        int times;  //how many time slots are there in a week
        
        ss >> inst_name >> session >> times;
        
        //One lecture session can have multiple time slots occupied
        vector<Slot> all_slots;
        for (int j = 0; j < times; j++){
            string day;
            double start;
            double end;
            string location;
            ss >> day >> start >> end >> location;
            Slot one_slot(day, start, end, location);
            all_slots.push_back(one_slot);
        }
        
        Lec temp(inst_name, session, all_slots);
        result.push_back(temp);
    }
    return result;
}
vector<Tut> load_tut(int num, string line){
    vector<Tut> result;
    stringstream ss;
    ss.str(line);
    for (int i = 0; i < num; i++){
        int session;
        int times;  //how many time slots are there in a week
        
        ss >> session >> times;
        
        //One lecture session can have multiple time slots occupied
        vector<Slot> all_slots;
        for (int j = 0; j < times; j++){
            string day;
            double start;
            double end;
            string location;
            ss >> day >> start >> end >> location;
            Slot one_slot(day, start, end, location);
            all_slots.push_back(one_slot);
        }
        
        Tut temp(session, all_slots);
        result.push_back(temp);
    }
    return result;
}
vector<Pra> load_pra(int num, string line){
    vector<Pra> result;
    stringstream ss;
    ss.str(line);
    for (int i = 0; i < num; i++){
        int session;
        int times;  //how many time slots are there in a week
        
        ss >> session >> times;
        
        //One lecture session can have multiple time slots occupied
        vector<Slot> all_slots;
        for (int j = 0; j < times; j++){
            string day;
            double start;
            double end;
            string location;
            ss >> day >> start >> end >> location;
            Slot one_slot(day, start, end, location);
            all_slots.push_back(one_slot);
        }
        
        Pra temp(session, all_slots);
        result.push_back(temp);
    }
    return result;
}






































