/* -*- c++ -*- */
/* 
   Network Coding project at: Signals and Systems Laboratory, VNU-UET.
   written by: Van-Ly Nguyen
   email: lynguyenvan.uet@gmail.com 
*/

#ifndef INCLUDED_DNC_END_NODE_CONTROLLER_IMPL_H
#define INCLUDED_DNC_END_NODE_CONTROLLER_IMPL_H

#include <DNC/end_node_controller.h>

namespace gr {
  namespace DNC {

    class end_node_controller_impl : public end_node_controller
    {
     private:
	enum state_tx
	{
		ST_REQUEST_TRANS,
		ST_BUFFER_MANAGEMENT,
		ST_HEADER_TRANS,
		ST_DATA_TRANS,
		ST_GUARD_INTERVAL_TRANS,
		ST_ZERO_TRANS,
		ST_SLEEP
	};
	enum state_rx
	{
		ST_IDLE,
		ST_CHECK_RELAY_NODE_ID,
		ST_CHECK_PACKET_NUMBER,
		ST_GET_DATA,
		ST_CHECK_CONFIRM_PACKET_NUMBER,
		ST_XOR_DATA,
		ST_CHECK_END_PACKET
	};
	state_tx d_tx_state;
	state_rx d_rx_state;

	int d_packet_size;
	int d_buffer_size;
	int d_guard_interval;
	unsigned char d_end_node_id;
	unsigned char d_relay_node_id;

	int d_request_index;
	int d_tx_buffer_index;

	int d_check_rx_id_index;
	int d_check_rx_id_count;

	bool d_check_confirm;
	bool d_load_data;
	bool d_loaded_data;
	int d_load_data_index;
	int d_trans_header_index;
	int d_trans_data_index;
	int d_guard_index;
	unsigned char d_load_packet_number;
	bool d_check_end_data;
	bool d_data_out;
	int d_number_of_packets_out;
	int d_data_out_index;
	int d_packets_out_index;
	int d_rx_data_xored_index;
	unsigned char d_xor_rx_pkt_no;
	int d_check_recv_packet_number_index;
	int d_zero_trans_index;
	int d_check_end_packet_index;
	int d_check_end_packet_count;
	std::vector<unsigned char> d_transmitted_packet_number;
	std::vector<unsigned char> d_transmitted_data_buffer;
	std::vector<unsigned char> d_received_packet_number;
	std::vector<unsigned char> d_received_data_buffer;
	std::vector<unsigned char> d_received_data_out;
	std::vector<unsigned char> d_rx_xored_packet;
	std::vector<unsigned char> d_load_packet;
	unsigned char d_request[6];
	unsigned char d_rx_packet_number[3];
	//-----------------------------

	int d_data_trans_buffer_index;
	int d_packet_data_index;
	int d_end_data_trans_buffer;
	int d_tx_index;


	int d_req_xor_index;


	int d_rx_xor_data_index;


	unsigned char d_packet_no;

     public:
      end_node_controller_impl(int packet_size, int guard_interval, unsigned char end_node_id, unsigned char relay_node_id);
      ~end_node_controller_impl();

      // Where all the action really happens
      void forecast (int noutput_items, gr_vector_int &ninput_items_required);

      int general_work(int noutput_items,
		       gr_vector_int &ninput_items,
		       gr_vector_const_void_star &input_items,
		       gr_vector_void_star &output_items);
    };

  } // namespace DNC
} // namespace gr

#endif /* INCLUDED_DNC_END_NODE_CONTROLLER_IMPL_H */

