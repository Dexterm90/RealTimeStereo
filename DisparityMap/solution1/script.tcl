############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 2012 Xilinx Inc. All rights reserved.
############################################################
open_project DisparityMap
set_top disparityMap
add_files disparity_map.cpp
add_files ap_bmp.cpp
add_files -tb disparity_map_test.cpp
add_files -tb Tsukuba_R.bmp
add_files -tb Tsukuba_L.bmp
open_solution "solution1"
set_part  {xc7k160tfbg484-2}
create_clock -period 10

source "./DisparityMap/solution1/directives.tcl"
csynth_design
