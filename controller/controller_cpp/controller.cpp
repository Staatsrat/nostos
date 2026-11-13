#include <iostream>
#include <httplib.h>
#include <nlohmann/json.hpp>
#include <unistd.h>
#include <string>

int post(const char* base_url_m, std::string command, int counter) {
	std::string counter_str = std::to_string(counter);
	const std::string baseURL = base_url_m;
	nlohmann::json newTodo = {
    		{"com", command},
		{"out", counter_str},
	};
	httplib::Client client(baseURL.c_str());
	auto res = client.Post("/create/", newTodo.dump(), "application/json");
	if (res && res->status == 201) {
	} else {
    		if (res) {
   		 }
	}
	return 0;
}

int main(){
	const char* base_url_m = "127.0.0.1:8000";
	std::string command = "#";
	int counter = 0;
	while(true){
		std::cout << "Command: ";
		std::cin >> command;
		std::cout << "Now: " << counter << std::endl;
		post(base_url_m, command, counter);
		counter += 1;
		sleep(10);
	}

}

