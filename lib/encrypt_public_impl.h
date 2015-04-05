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

#ifndef INCLUDED_NACL_ENCRYPT_PUBLIC_IMPL_H
#define INCLUDED_NACL_ENCRYPT_PUBLIC_IMPL_H

#include <nacl/encrypt_public.h>

namespace gr {
  namespace nacl {

    class encrypt_public_impl : public encrypt_public
    {
     private:
      // Nothing to declare in this block.

     public:
      encrypt_public_impl(std::string pk, std::string sk);
      ~encrypt_public_impl();
      
      void handle_msg(pmt::pmt_t msg);
      
      pmt::pmt_t d_port_id_in, d_port_id_out;
      std::string d_pk, d_sk;
    };

  } // namespace nacl
} // namespace gr

#endif /* INCLUDED_NACL_ENCRYPT_PUBLIC_IMPL_H */

