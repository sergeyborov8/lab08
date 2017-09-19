#include <fstream>
#include <print.hpp>
int main(int argc, char** argv)
{
td::ofstream file("log.txt");
print(std::string("hello"), file);
}
