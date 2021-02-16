-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2019.2.1
-- Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity product is
port (
    ap_ready : OUT STD_LOGIC;
    a_V : IN STD_LOGIC_VECTOR (11 downto 0);
    w_V : IN STD_LOGIC_VECTOR (11 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (11 downto 0) );
end;


architecture behav of product is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001111";
    constant ap_const_logic_0 : STD_LOGIC := '0';

    signal r_V_fu_41_p2 : STD_LOGIC_VECTOR (15 downto 0);

    component window_mul_mul_12dEe IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        din0 : IN STD_LOGIC_VECTOR (11 downto 0);
        din1 : IN STD_LOGIC_VECTOR (11 downto 0);
        dout : OUT STD_LOGIC_VECTOR (15 downto 0) );
    end component;



begin
    window_mul_mul_12dEe_U381 : component window_mul_mul_12dEe
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 12,
        din1_WIDTH => 12,
        dout_WIDTH => 16)
    port map (
        din0 => w_V,
        din1 => a_V,
        dout => r_V_fu_41_p2);




    ap_ready <= ap_const_logic_1;
    ap_return <= r_V_fu_41_p2(15 downto 4);
end behav;
