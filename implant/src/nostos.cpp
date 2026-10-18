#include <iostream>
#include <httplib.h>
#include <nlohmann/json.hpp>
#include <unistd.h>

int post(const char* base_url_m) {
	const std::string baseURL = base_url_m;
	nlohmann::json newTodo = {
    		{"com", ""},
   		{"out", ""},
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

int get(const char* base_url_m){
	const char* base_url = base_url_m;
	httplib::Client client(base_url);
	auto res = client.Get("/entries");

	if (res) {
  	} else {
    		return 1;
	}
	if (res->status == 200) {
    		auto todos = nlohmann::json::parse(res->body);
    		for (const auto& todo : todos) {
        		std::cout << todo["com"];
    		}
	}
	return 0;
}

int main(){
	const char* base_url_m = "127.0.0.1:8000";
	while(true){
		post(base_url_m);
		get(base_url_m);
		sleep(10);
	}

}

