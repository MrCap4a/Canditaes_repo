#include "Candidate_list.h"

void Candidate_list::add(Candidate cand) {
	std::vector <Candidate> new_vector;
	int len = list.size();
	int i = 0;
	if (i != len) {
		bool can = true;
		for (int a = 0; a < len; a++) {
			if (list[a].name == cand.name) {
				can = false;
				break;
			}
		}
		if (can){
			for (i; i < len; i++) {
				if (list[i].popularity_idx <= cand.popularity_idx) {
					new_vector.push_back(cand);
					break;
				}
				else {
					new_vector.push_back(list[i]);
				}
			}
			for (i; i < len; i++) {
				new_vector.push_back(list[i]);
			}
		}
	}

	list = new_vector;
}

void Candidate_list::remove(std::string name) {
	std::vector <Candidate> new_vector;
	int len = list.size();
	int i = 0;
	if (i != len) {
		for (i; i < len; i++) {
			if (list[i].name != name) {
				new_vector.push_back(list[i]);
			}
		}
	}

	list = new_vector;
}

void Candidate_list::change(std::string name, Candidate data) {
	int len = list.size();
	for (int i = 0; i < len; i++) {
		if (list[i].name == name) {
			list[i] = data;
			break;
		}
	}
}