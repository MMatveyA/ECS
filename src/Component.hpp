#include <cstddef>

template <typename T, auto Type>
class Component
{
public:
  static constexpr auto type = static_cast<std::size_t>(Type);
};
