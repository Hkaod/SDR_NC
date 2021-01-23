/* -*- c++ -*- */
/* 
 * Copyright 2015 <+YOU OR YOUR COMPANY+>.
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


#ifndef INCLUDED_COGNC_RADOM_COMPLEX_GENERATOR_H
#define INCLUDED_COGNC_RADOM_COMPLEX_GENERATOR_H

#include <CogNC/api.h>
#include <gnuradio/block.h>

namespace gr {
  namespace CogNC {

    /*!
     * \brief <+description of block+>
     * \ingroup CogNC
     *
     */
    class COGNC_API radom_complex_generator : virtual public gr::block
    {
     public:
      typedef boost::shared_ptr<radom_complex_generator> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of CogNC::radom_complex_generator.
       *
       * To avoid accidental use of raw pointers, CogNC::radom_complex_generator's
       * constructor is in a private implementation
       * class. CogNC::radom_complex_generator::make is the public interface for
       * creating new instances.
       */
      static sptr make(int vector_length, bool repeat);
    };

  } // namespace CogNC
} // namespace gr

#endif /* INCLUDED_COGNC_RADOM_COMPLEX_GENERATOR_H */
