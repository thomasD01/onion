
#include <string>

struct Onion_package {
  unsigned char *key1;
  unsigned char *key2;
  unsigned char *key3;
  std::string request;

  Onion_package() = delete;
  Onion_package(unsigned char new_key1[32], unsigned char new_key2[32],
                unsigned char new_key3[32], std::string new_request)
      : key1(new_key1), key2(new_key2), key3(new_key3), request(new_request) {}
  ~Onion_package() {}
};