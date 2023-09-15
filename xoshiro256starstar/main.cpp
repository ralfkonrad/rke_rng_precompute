//
// Created by ralf.eckel on 15.09.2023.
//

#include <fmt/format.h>
#include <vector>

extern "C" {
#include "xoshiro256starstar.c"
};

namespace rke {
  void print(std::vector<uint64_t> randoms) {
    fmt::print("{:>#18x}\n", fmt::join(randoms, ",\n"));
  }
}  // namespace rke

int main() {
  s[0] = 0xcee90176f992409f;
  s[1] = 0x27d84629aa1577c1;
  s[2] = 0xbf02b000ab494475;
  s[3] = 0xe5f75c3adab0eab6;

  auto nrOfRandoms = 50;

  std::vector<uint64_t> randoms;
  randoms.reserve(nrOfRandoms);

  for (auto i = 0; i < nrOfRandoms; ++i) {
    randoms.push_back(next());
  }

  rke::print(randoms);

  return 0;
}
