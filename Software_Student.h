//"Each subclass should override the getDegreeProgram() function.
//"Each subclass should have a data member to hold the enumerated type for the
	//degree program using the types defined in part C."
#pragma once
#include <string>
#include <array>

#include "Student.h"

class SoftwareStudent : public Student {
public:
	SoftwareStudent(std::string sId = "", std::string firstName = "",
		std::string lastName = "", std::string email = "", AGE age = 0,
		std::array<DAYS, 3> daysInCourse = { 0, 0, 0 },
		Degree degreeType = Degree::SOFTWARE);
	SoftwareStudent(const SoftwareStudent& obj);
	~SoftwareStudent();
	const Degree GetDegreeType();
};
