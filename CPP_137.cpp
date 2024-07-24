std::variant<std::string, int, float> compare_one(std::variant<std::any> a, std::variant<std::any> b) {
    return std::visit([&](auto&& a, auto&& b) -> std::variant<std::string, int, float> {
        if (std::holds_alternative<std::any>(a) && std::holds_alternative<std::any>(b)) {
            if (std::any_cast<std::string>(a) > std::any_cast<std::string>(b)) {
                return "Greater";
            } else if (std::any_cast<std::string>(a) < std::any_cast<std::string>(b)) {
                return "Less";
            } else {
                return "Equal";
            }
        } else if (std::holds_alternative<int>(a) && std::holds_alternative<int>(b)) {
            int aInt = std::any_cast<int>(a);
            int bInt = std::any_cast<int>(b);
            if (aInt > bInt) {
                return "Greater";
            } else if (aInt < bInt) {
                return "Less";
            } else {
                return "Equal";
            }
        } else if (std::holds_alternative<float>(a) && std::holds_alternative<float>(b)) {
            float aFloat = std::any_cast<float>(a);
            float bFloat = std::any_cast<float>(b);
            if (aFloat > bFloat) {
                return "Greater";
            } else if (aFloat < bFloat) {
                return "Less";
            } else {
                return "Equal";
            }
        } else {
            return "Non";
        }
    }, std::get<std::any>(a), std::get<std::any>(b));
}