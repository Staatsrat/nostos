#include <iostream>
#include <curl/curl.h>
#include <fstream>
#include <sstream>

int main() {
  curl_global_init(CURL_GLOBAL_DEFAULT);
  CURL *handle = curl_easy_init();
  curl_easy_setopt(handle, CURLOPT_URL, "https://www.example.com");
  curl_easy_setopt(handle, CURLOPT_WRITEDATA, stdout);
  CURLcode result = curl_easy_perform(handle);
  if (result != CURLE_OK) {
    std::cerr << "failed: " << curl_easy_strerror(result) << std::endl;
  }
  curl_easy_cleanup(handle);
  curl_global_cleanup();
  return 0;
}
