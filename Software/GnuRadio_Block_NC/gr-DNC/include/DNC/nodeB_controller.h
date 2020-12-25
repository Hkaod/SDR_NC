
/* -*- c++ -*- */
/* 
   Network Coding project at: Signals and Systems Laboratory, VNU-UET.
   written by: Van-Ly Nguyen
   email: lynguyenvan.uet@gmail.com 
*/

#ifndef INCLUDED_DNC_NODEB_CONTROLLER_H
#define INCLUDED_DNC_NODEB_CONTROLLER_H

#include <DNC/api.h>
#include <gnuradio/block.h>

namespace gr {
  namespace DNC {

    /*!
     * \brief <+description of block+>
     * \ingroup DNC
     *
     */
    class DNC_API nodeB_controller : virtual public gr::block
    {
     public:
      typedef boost::shared_ptr<nodeB_controller> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of DNC::nodeB_controller.
       *
       * To avoid accidental use of raw pointers, DNC::nodeB_controller's
       * constructor is in a private implementation
       * class. DNC::nodeB_controller::make is the public interface for
       * creating new instances.
       */
      static sptr make(int buffer_size, int packet_size, int guard_interval, unsigned char nodeA_id, unsigned char nodeB_id, unsigned char nodeC_id, unsigned char nodeR_id);
    };

  } // namespace DNC
} // namespace gr

#endif /* INCLUDED_DNC_NODEB_CONTROLLER_H */

