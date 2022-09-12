//
//  Transitions.hpp
//  State
//
//  Created by Ashutosh Shukla on 12/09/22.
//

#ifndef Transitions_hpp
#define Transitions_hpp
#include <unordered_map>
#include <typeindex>
#include <string>


class LampState;
using Key = std::pair<std::type_index, std::string>;
class Transitions {
    struct PairHasher {
        std::size_t operator()(const Key &key) const {
            return std::hash<std::type_index>{}(key.first) ^ std::hash<std::string>{}(key.second);
        }
    };
    inline static std::unordered_map<Key, LampState*, PairHasher> m_TransitionTable{};
public:
    static void Init();
    static LampState* GetNextState(const Key &key);
};

// There will be only one instance of transactions, No one going to inhrit from transactions class so we can apply monostate pattern on transactions

#endif /* Transitions_hpp */
