/*! @file task_set.hpp
*/

#ifndef SCHEDULE_FRAMESIZE_TASK_SET_H
#define SCHEDULE_FRAMESIZE_TASK_SET_H

#include <utility>
#include <map>

#include "task.hpp"

namespace schedule_framesize {
    
    class task_set {
    public:
        using id_t = unsigned;
        using time_rep = double;
        using task_t = std::pair<const id_t,periodic_task<time_rep>>;
        
        friend std::ostream& operator<< (std::ostream &os, const task_set& task_set);
        friend std::istream& operator>> (std::istream &is, task_set& task_set);
    private:
        std::map<task_t::first_type,task_t::second_type> tasks;
    };
    
    std::ostream& operator<< (std::ostream &os, const task_set& task_set){
        for (const auto &T : task_set.tasks){
            os << "T" << T.first << T.second << "\n";
        }
        
        return os;
    }
    std::istream& operator>> (std::istream &is, task_set& task_set){
        is.exceptions(std::istream::failbit|std::istream::badbit);
        id_t id;
        is.ignore(std::numeric_limits<std::streamsize>::max(),'T');
        is >> id;
        periodic_task<task_set::time_rep> periodic_task;
        is.ignore(std::numeric_limits<std::streamsize>::max(),'(');
        is >> periodic_task;
        task_set::task_t task(std::move(id), std::move(periodic_task));
        task_set.tasks.insert(std::move(task));
        
        return is;
    }
    
}


#endif
