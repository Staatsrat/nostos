#include <iostream>
#include <httplib.h>
#include <nlohmann/json.hpp>

int post(char* base_url_m) {
	const std::string baseURL = base_url_m;
	nlohmann::json newTodo = {
    		{"username", "user"},
   		{"user_id", 3434},
	};
	httplib::Client client(baseURL.c_str());
	auto res = client.Post("/create_user/", newTodo.dump(), "application/json");
	if (res && res->status == 201) {
    		std::cout << "New todo added successfully!" << std::endl;
    		std::cout << res->body << std::endl;
	} else {
 	        std::cerr << "Failed to add a new todo" << std::endl;
    		if (res) {
        		std::cerr << "Status Code: " << res->status << std::endl;
        		std::cerr << "Error Details: " << res->body << std::endl;
   		 }
	}
	return 0;
}

int get(char* base_url_m){
	const char* base_url = base_url_m;
	httplib::Client client(base_url);
	auto res = client.Get("/users");

	if (res) {
  	} else {
    		return 1;
	}
	if (res->status == 200) {
    		auto todos = nlohmann::json::parse(res->body);
    		for (const auto& todo : todos) {
        		std::cout << "User: " << todo["username"] << ", UserID: " << todo["user_id"] << std::endl;
    		}
	}
	return 0;
}

int main(){
	const char* base_url_m = "127.0.0.1:8000";
}

