/* -*- c++ -*- */
/* 
 * Copyright 2014 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_DNC2_HAMMING_ENCODER_H
#define INCLUDED_DNC2_HAMMING_ENCODER_H

#include <DNC2/api.h>
#include <gnuradio/block.h>

namespace gr {
  namespace DNC2 {

    /*!
     * \brief <+description of block+>
     * \ingroup DNC2
     *
     */
    class DNC2_API hamming_encoder : virtual public gr::block
    {
     public:
      typedef boost::shared_ptr<hamming_encoder> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of DNC2::hamming_encoder.
       *
       * To avoid accidental use of raw pointers, DNC2::hamming_encoder's
       * constructor is in a private implementation
       * class. DNC2::hamming_encoder::make is the public interface for
       * creating new instances.
       */
      static sptr make(int m, int image_size, int packet_size);
    };

  } // namespace DNC2
} // namespace gr

#endif /* INCLUDED_DNC2_HAMMING_ENCODER_H */

