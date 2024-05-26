#pragma once
#include <vector>
#include "Candidate.h"
#include <queue>
#include <string>

class Candidate_list
{
public:
	int size;
	std::vector<Candidate> list;
	void add(Candidate cand);
	void remove(std::string name);
	void change(std::string name, Candidate data);
	void read_file();
	void write_file();
};

