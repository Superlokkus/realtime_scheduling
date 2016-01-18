/*! @file task.hpp
 */

#ifndef SCHEDULE_FRAMESIZE_TASK_HPP
#define SCHEDULE_FRAMESIZE_TASK_HPP

#include <chrono>

/*!
 @brief Type to represent periodic tasks
 @tparam TimeRep Type of internal time representation
 */
template <typename TimeRep = std::chrono::duration<double>>
struct periodic_task {
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


#endif
