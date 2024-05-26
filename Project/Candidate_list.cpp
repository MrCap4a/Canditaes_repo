#include "Candidate_list.h"
#include <fstream>

/*void Candidate_list::add(Candidate cand) {
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
} */

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

void Candidate_list::write_file() {
	std::ofstream out_file("data.txt");
	for (int i = 0; i != list.size(); i++) {
		Candidate c = list[i];
		std::string res_str = c.name + ";" + c.birth_place + ";" + c.birth_date + ";" + c.popularity_idx + ";";
		out_file << res_str << std::endl;
	}
	out_file.close();
}

void Candidate_list::read_file() {
	std::ifstream in_file("data.txt");
	std::string line;
	char separator = ';';
	while (std::getline(in_file, line)) {
		std::string name = "";
		std::string birth_date = "";
		std::string birth_city = "";
		std::string popularity = "";
		int pos = 1;
		std::string t = "";
		for (int i = 0; i != line.size(); i++) {
			if (line[i] != separator) {
				t += line[i];
				}
			else {
				switch (pos){
				case 1:
					name = t;
					break;
				case 2:
					birth_city = t;
					break;
				case 3:
					birth_date = t;
					break;
				case 4:
					popularity = t;
					break;
				}
				t = "";
				if (pos != 4) {
					pos += 1;
				}
				else {
					pos = 1;
				}
			}
		}

		Candidate new_c;
		new_c.name = name;
		new_c.birth_place = birth_city;
		new_c.birth_date = birth_date;
		new_c.popularity_idx = popularity;

		//Candidate_list::add(new_c);
		list.push_back(new_c);
	}
	in_file.close();
}