#include <iostream>
#include <algorithm>
#include <set>
#include <cctype>

using namespace std;

struct Contestant{
	int id = 101;
	int solved = 0;
	int time = 0;
	int problems[11] = {0};
	bool completed[11] = {false};
};

bool compareContestants(Contestant first, Contestant second){
	if(first.solved != second.solved)
		return first.solved > second.solved;

	if(first.time != second.time)
		return first.time < second.time;

	return first.id < second.id;
}

int main(){
	int cases, id, problem, time;
	char status;
	string input;

	cin >> cases;

	getline(cin, input); // Ignorando linea en blanco tras test cases

	for(int test = 0; test <= cases; test++){
		Contestant arrContestants[133];
		int totalContestants = 0;
		set<int, greater<int>> addedIds;

		while(getline(cin, input), input != ""){
			int i = 0;
			string  id_S = "", 
					problem_S = "", 
					time_S = "";

			while(isdigit(input[i])){
				id_S += input[i];
				i++;
			}
			id = std::stoi(id_S);

			i++;

			while(isdigit(input[i])){
				problem_S += input[i];
				i++;
			}
			problem = std::stoi(problem_S);

			i++;

			while(isdigit(input[i])){
				time_S += input[i];
				i++;
			}
			time = std::stoi(time_S);

			status = input[i+1];

			//cout << id << " " << problem << " " << time << " " << status << endl;


			if(arrContestants[id].completed[problem] == true){
				continue;
			}

			if(!addedIds.count(id)){
				totalContestants++;
				addedIds.insert(id);
				arrContestants[id].id = id;
			}

			if(status == 'I'){
				arrContestants[id].problems[problem] += 20;
			}
			else if(status == 'C'){
				arrContestants[id].time += time + arrContestants[id].problems[problem];
				arrContestants[id].solved++;
				arrContestants[id].completed[problem] = true;
			}
		}

		sort(arrContestants, arrContestants+133, compareContestants);

		for(int i = 0; i < totalContestants; i++){
			cout << arrContestants[i].id << " " << arrContestants[i].solved << " " << arrContestants[i].time << endl;
		}
		cout << endl;
	}

	return 0;
}