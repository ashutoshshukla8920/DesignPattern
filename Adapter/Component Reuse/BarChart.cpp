//
//  BarChart.cpp
//  Adapter
//
//  Created by Ashutosh Shukla on 13/09/22.
//

#include "BarChart.hpp"
#include <iostream>
#include <algorithm>

char BarChart::drawChar() {
    return '#';
}

void BarChart::Add(const std::string &label, std::size_t value) {
    m_Data.emplace_back(label, value);
}

/*
* Displays the values as percentage of the maximum value in the vector
*/
void BarChart::RenderChart() {
    auto max_value_itr = std::max_element(m_Data.begin(), m_Data.end(), [](const auto &p1, const auto &p2) {
        return p1.second < p2.second;
    });
    for (std::size_t i = 0; i < m_Data.size(); ++i) {
        const auto &bar_data = m_Data[i];
        std::cout << bar_data.first << "\t[" << bar_data.second << "]\t:";
        auto percent_value =(int)( bar_data.second * 100.f / max_value_itr->second);
        for (std::size_t i = 0; i < percent_value; ++i) {
            std::cout << drawChar();
        }
        std::cout << '\n';
    }
}

void BarChart::Clear() {
    m_Data.clear();
}
