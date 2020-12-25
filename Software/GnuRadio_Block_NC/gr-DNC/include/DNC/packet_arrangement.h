
/* -*- c++ -*- */
/* 
   Network Coding project at: Signals and Systems Laboratory, VNU-UET.
   written by: Van-Ly Nguyen
   email: lynguyenvan.uet@gmail.com 
*/

#ifndef INCLUDED_DNC_PACKET_ARRANGEMENT_H
#define INCLUDED_DNC_PACKET_ARRANGEMENT_H

#include <DNC/api.h>
#include <gnuradio/block.h>

namespace gr {
  namespace DNC {

    /*!
     * \brief <+description of block+>
     * \ingroup DNC
     *
     */
    class DNC_API packet_arrangement : virtual public gr::block
    {
     public:
      typedef boost::shared_ptr<packet_arrangement> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of DNC::packet_arrangement.
       *
       * To avoid accidental use of raw pointers, DNC::packet_arrangement's
       * constructor is in a private implementation
       * class. DNC::packet_arrangement::make is the public interface for
       * creating new instances.
       */
      static sptr make(int buffer_size, int packet_size, unsigned char nodeA_id, unsigned char nodeB_id, int node);
    };

  } // namespace DNC
} // namespace gr

#endif /* INCLUDED_DNC_PACKET_ARRANGEMENT_H */

