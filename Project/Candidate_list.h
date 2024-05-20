#pragma once
#include <vector>
#include "Candidate.h"
#include <queue>
#include <string>

class Candidate_list
{
	std::vector<Candidate> list;

	void add(Candidate cand);
	void remove(std::string name);
	void change(std::string name, Candidate data);
};

