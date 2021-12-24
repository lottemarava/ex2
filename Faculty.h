#ifndef FACULTY_H
#define FACULTY_H

#include <string>
//#include <fstream>
#include <iostream>
#include "Skill.h"
#include "Citizen.h"
#include "Employee.h"

//are all needed??
using std::ostream;
using std::set;
using std::cout;
using std::endl;
using std::string;

namespace mtm {
    class Faculty {
    private:
        Skill skill;
        unsigned int faculty_id;
        unsigned int add_points;
        //function conditin
    public:
        Faculty (bool (*compareFunction)(Employee), Skill skill, int point_to_add);
        Skill getSkill ();
        unsigned int getId ();
        unsigned int getAddedPoints ();
        Faculty teach (Employee& Employee);
        bool operator() (int number) const;
    };
}

#endif /* FACULTY_H */