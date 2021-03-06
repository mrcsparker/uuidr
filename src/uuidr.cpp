#include <Rcpp.h>
#include <uuid/uuid.h>
using namespace Rcpp;

// [[Rcpp::plugins(cpp11)]]

//' @title uuid
//' @name uuid
//' @return uuid string
//' @examples
//' uuid()
// [[Rcpp::export]]
std::string uuid() {
  uuid_t uuid;
  char uuid_str[37];

  uuid_generate(uuid);

  uuid_unparse_lower(uuid, uuid_str);

  return std::string(uuid_str);
}

//' @title uuid_random
//' @name uuid_random
//' @return uuid string
//' @examples
//' uuid_random()
// [[Rcpp::export]]
std::string uuid_random() {
  uuid_t uuid;
  char uuid_str[37];

  uuid_generate_random(uuid);

  uuid_unparse_lower(uuid, uuid_str);

  return std::string(uuid_str);
}

//' @title uuid_time
//' @name uuid_time
//' @return uuid string
//' @examples
//' uuid_time()
// [[Rcpp::export]]
std::string uuid_time() {
  uuid_t uuid;
  char uuid_str[37];

  uuid_generate_time(uuid);

  uuid_unparse_lower(uuid, uuid_str);

  return std::string(uuid_str);
}
