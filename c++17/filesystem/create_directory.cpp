#include <filesystem>

namespace fs = std::filesystem;

int main() {
  fs::create_directories("test/test/");
}
