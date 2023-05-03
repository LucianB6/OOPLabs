#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

#define max 20

std::string split[max];

bool cmp(std::pair<std::string, int>& a,
         std::pair<std::string, int>& b)
{
    return a.second > b.second;
}

int main() {


    std::ifstream infile("../sentence.txt");  // Replace "filename.txt" with the name of your file.
    std::string sentence;

    std::getline(infile, sentence);
    infile.close();

    int index = 0;
    int curentIndex = 0;
    int endIndex = 0;
    int startIndex = 0;
    char separator = ' ';
    char separator2 = '.';
    int special_character;

    while ( index <= sentence.size()){
        if (sentence[index] == separator || index == sentence.size() || sentence[index] == separator2){
            endIndex = index;
            std::string substr = "";

            substr.append(sentence, curentIndex, endIndex - curentIndex);

            split[startIndex] = substr;

            if (sentence[index] == separator2){
                curentIndex = endIndex;
                startIndex += 1;
            }else {
                curentIndex = endIndex + 1;
                startIndex += 1;
            }
        }
        if (split[index] == "."){
            special_character = index;
        }
        index++;
    }

    std::map<std::string, int> word_count;

    for (int i = 0; i < max; ++i) {
        if(split[i] != "\0") {
            std::string lowercase;
            for (auto c : split[i]) {
                lowercase += std::tolower(c);
            }
            auto it = word_count.find(lowercase);

            if (it != word_count.end()){
                it->second += 1;
            } else{
                word_count[lowercase] = 1;
            }
            continue;
        } else{
            break;
        }
    }
    auto itr = word_count.begin();

    while (itr != word_count.end()){
        if (itr->first != ".") {
            std::cout << itr->first << " : " << itr->second << std::endl;
        }
        itr++;
    }

    int index1 = 0;
    int index2 = 0;

    for (auto item = word_count.begin(); item != word_count.end(); item++){
        index1 = 0;
        for (auto item2 = item; item2 != word_count.end(); item2++) {
            if (item->second < item2->second){
                std::swap(split[index1], split[index2]);
                break;
            }
            index1++;
        }
        index2++;
    }

    std::cout << std::endl;

    std::vector<std::pair<std::string, int>> word_count_vector(word_count.begin(), word_count.end());

    std::sort(word_count_vector.begin(), word_count_vector.end(), cmp);

    for (const auto& pair : word_count_vector) {
        if (pair.first != ".") {
            std::cout << pair.first << " => " << pair.second << std::endl;
        }
    }

    return 0;
}
