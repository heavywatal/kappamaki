// [[Rcpp::plugins(cpp14)]]
#include <Rcpp.h>
#include <blackthunnus/program.hpp>

//' Run C++ simulation
//' @return conf and population as strings
//' @rdname blackthunnus
// [[Rcpp::export]]
std::vector<std::string> cpp_blackthunnus(const std::vector<std::string>& args) {
    try {
        pbt::Program program(args);
        program.run();
        return {program.sample_family()};
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }
    return {};
}
