std::string solution(string noun) {
    if (noun.empty()) {
        return noun;
    } 
    
    std::string correct_noun = noun;
    correct_noun[0] = std::toupper(correct_noun[0]);

    for (int i = 1; i < correct_noun.length(); i++) {
        correct_noun[i] = std::tolower(correct_noun[i]);
    } return correct_noun;
}

int main() {
    
    std::string noun;
    std::cout << "noun: ";
    std::cin >> noun;

    std::string result = solution(noun);

    std::cout << "Solution: " << result << std::endl;

    return 0;
}
