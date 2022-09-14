//
//  BarChart.hpp
//  Adapter
//
//  Created by Ashutosh Shukla on 13/09/22.
//

#ifndef BarChart_hpp
#define BarChart_hpp

#include <vector>
#include <utility>
#include <string>
class BarChart {
    //Store individual bar title & value
    std::vector<std::pair<std::string, std::size_t>> m_Data{};
    virtual char drawChar();
public:
    void Add(const std::string &label, std::size_t value);
    void RenderChart();
    void Clear();
    

};

#endif /* BarChart_hpp */
