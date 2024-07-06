#include <vector>
#include <list>
#include <optional>

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if(value.type() == typeid(std::optional<int>)) {
            auto optionalInt = std::any_cast<std::optional<int>>(value);
            if(optionalInt.has_value()) {
                int integerValue = optionalInt.value();
                result.push_back(integerValue);
            }
        }
    }
    return result;