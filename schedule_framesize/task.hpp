/*! @file task.hpp
 */

#ifndef SCHEDULE_FRAMESIZE_TASK_HPP
#define SCHEDULE_FRAMESIZE_TASK_HPP

#include <iostream>

namespace schedule_framesize{
/*!
 @brief Type to represent periodic tasks
 @tparam TimeRep Type of internal time representation
 */
template <typename TimeRep>
struct periodic_task {
    typedef TimeRep time_rep_t;
    
    TimeRep t_phi;    /*!< phase of task */
    TimeRep t_p;      /*!< period */
    TimeRep t_e;      /*!< execution time */
    TimeRep t_d;      /*!< deadline */
    
    periodic_task() :
    t_phi(0), t_p(0), t_e(0), t_d(0)
    {}
    
    periodic_task(TimeRep t_phi, TimeRep t_p, TimeRep t_e, TimeRep t_d) :
    t_phi(0), t_p(t_p), t_e(t_e), t_d(t_d)
    {}
    
    periodic_task(TimeRep t_p, TimeRep t_e) :
    periodic_task(0,t_p,t_e,t_p)
    {}
    
    
};

template <typename TimeRep>
std::ostream& operator<< (std::ostream &os, const periodic_task<TimeRep>& task){
    os << "(" << task.t_phi << ","
    << task.t_p << "," << task.t_e << "," << task.t_d << ")";
    
    return os;
}

template <typename TimeRep>
std::istream& operator>> (std::istream &is, periodic_task<TimeRep>& task){
    is.exceptions(std::istream::failbit|std::istream::badbit);
    is >> task.t_phi;
    is.ignore(std::numeric_limits<std::streamsize>::max(),',');
    is >> task.t_p;
    is.ignore(std::numeric_limits<std::streamsize>::max(),',');
    is >> task.t_e;
    is.ignore(std::numeric_limits<std::streamsize>::max(),',');
    is >> task.t_d;

    
    return is;
}

}
#endif
