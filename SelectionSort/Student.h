/*
 * student.h
 *
 *  Created on: Aug 7, 2017
 *      Author: jian
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <string>

using namespace std;

struct Student{

	string name;
	int score;

	bool operator<(const Student &otherStudent){
		return score != otherStudent.score ? score < otherStudent.score : name < otherStudent.name;
	}

	friend ostream& operator<<(ostream &os, const Student &student){
		os<<"Student: "<<student.name<<" "<<student.score<<endl;
		return os;
	}
};


#endif /* STUDENT_H_ */
