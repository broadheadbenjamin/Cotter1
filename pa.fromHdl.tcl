
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name Cotter1 -dir "H:/CS 3710/Cotter1 Project/Cotter1/planAhead_run_2" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "wired_together.ucf" [current_fileset -constrset]
add_files [list {ipcore_dir/MemoryCore.ngc}]
set hdlfile [add_files [list {ipcore_dir/MemoryCore.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {vgaSource.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {sevenSegmenDisplay.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Debouncer.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {CPU_Set.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Control.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {bin16ToBCD.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {wired_together.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top wired_together $srcset
add_files [list {wired_together.ucf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/core_one.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/MemoryCore.ncf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3
