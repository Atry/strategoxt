#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_PP_Table_1;
static Symbol sym_layout_1;
static Symbol sym_Verbose_0;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_Path_1;
static Symbol sym_Path_1;
static Symbol sym_Silent_0;
static Symbol sym_Verbose_1;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_Path_1;
static Symbol sym_Path_1;
static Symbol sym_Silent_0;
static Symbol sym_Verbose_1;
static Symbol sym_FILE_1;
static Symbol sym_iter_sep_n_2;
static Symbol sym_iter_n_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_selector_2;
static Symbol sym_Path_2;
static Symbol sym_Path1_1;
static Symbol sym_PP_Entry_2;
static Symbol sym_PP_Table_1;
static Symbol sym_KW_0;
static Symbol sym_HS_0;
static Symbol sym_VS_0;
static Symbol sym_SOpt_2;
static Symbol sym_Arg2_2;
static Symbol sym_Arg_1;
static Symbol sym_LNAT_2;
static Symbol sym_L_2;
static Symbol sym_C_2;
static Symbol sym_REF_2;
static Symbol sym_LBL_2;
static Symbol sym_FBOX_2;
static Symbol sym_R_2;
static Symbol sym_A_3;
static Symbol sym_ALT_2;
static Symbol sym_HV_2;
static Symbol sym_V_2;
static Symbol sym_H_2;
static Symbol sym_S_1;
static Symbol sym_Strict_0;
static Symbol sym_amb_1;
static Symbol sym_lit_1;
static Symbol sym_appl_2;
static Symbol sym_prod_3;
static Symbol sym_attrs_1;
static Symbol sym_no_attrs_0;
static Symbol sym_reject_0;
static Symbol sym_bracket_0;
static Symbol sym_term_1;
static Symbol sym_cons_1;
static Symbol sym_char_class_1;
static Symbol sym_layout_0;
static Symbol sym_func_2;
static Symbol sym_iter_sep_n_3;
static Symbol sym_iter_n_2;
static Symbol sym_iter_star_sep_2;
static Symbol sym_iter_sep_2;
static Symbol sym_iter_star_1;
static Symbol sym_iter_1;
static Symbol sym_sort_1;
static Symbol sym_seq_2;
static Symbol sym_alt_2;
static Symbol sym_opt_1;
static Symbol sym_lex_1;
static Symbol sym_cf_1;
static Symbol sym_lit_1;
static Symbol sym_empty_0;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_Conservative_0;
static Symbol sym_layout_place_holder_0;
static Symbol sym_Injections_0;
static Symbol sym_term_1;
static Symbol sym_seq_1;
static Symbol sym_bracket_symbol_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_alt_2;
static Symbol sym_seq_2;
static Symbol sym_char_class_1;
static Symbol sym_label_2;
static Symbol sym_lit_1;
static Symbol sym_sort_1;
static Symbol sym_char_class_1;
static Symbol sym_alt_2;
static Symbol sym_func_2;
static Symbol sym_pair_2;
static Symbol sym_iter_sep_n_3;
static Symbol sym_iter_n_2;
static Symbol sym_iter_star_sep_2;
static Symbol sym_iter_sep_2;
static Symbol sym_iter_star_1;
static Symbol sym_iter_1;
static Symbol sym_opt_1;
static Symbol sym_seq_2;
static Symbol sym_empty_0;
static Symbol sym_layout_0;
static Symbol sym_lex_1;
static Symbol sym_cf_1;
static Symbol sym_prod_fun_4;
static Symbol sym_prod_3;
static Symbol sym_no_attrs_0;
static Symbol sym_attrs_1;
static Symbol sym_reject_0;
static Symbol sym_bracket_0;
static Symbol sym_term_1;
static Symbol sym_appl_2;
static Symbol sym_fun_1;
static Symbol sym_uqlit_1;
static Symbol sym_qlit_1;
static void init_module_constructors (void)
{
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_layout_1 = ATmakeSymbol("layout", 1, ATfalse);
  ATprotectSymbol(sym_layout_1);
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym__0 = ATmakeSymbol("", 0, ATfalse);
  ATprotectSymbol(sym__0);
  sym__1 = ATmakeSymbol("", 1, ATfalse);
  ATprotectSymbol(sym__1);
  sym__2 = ATmakeSymbol("", 2, ATfalse);
  ATprotectSymbol(sym__2);
  sym__3 = ATmakeSymbol("", 3, ATfalse);
  ATprotectSymbol(sym__3);
  sym__4 = ATmakeSymbol("", 4, ATfalse);
  ATprotectSymbol(sym__4);
  sym__5 = ATmakeSymbol("", 5, ATfalse);
  ATprotectSymbol(sym__5);
  sym__6 = ATmakeSymbol("", 6, ATfalse);
  ATprotectSymbol(sym__6);
  sym__7 = ATmakeSymbol("", 7, ATfalse);
  ATprotectSymbol(sym__7);
  sym__8 = ATmakeSymbol("", 8, ATfalse);
  ATprotectSymbol(sym__8);
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym__0 = ATmakeSymbol("", 0, ATfalse);
  ATprotectSymbol(sym__0);
  sym__1 = ATmakeSymbol("", 1, ATfalse);
  ATprotectSymbol(sym__1);
  sym__2 = ATmakeSymbol("", 2, ATfalse);
  ATprotectSymbol(sym__2);
  sym__3 = ATmakeSymbol("", 3, ATfalse);
  ATprotectSymbol(sym__3);
  sym__4 = ATmakeSymbol("", 4, ATfalse);
  ATprotectSymbol(sym__4);
  sym__5 = ATmakeSymbol("", 5, ATfalse);
  ATprotectSymbol(sym__5);
  sym__6 = ATmakeSymbol("", 6, ATfalse);
  ATprotectSymbol(sym__6);
  sym__7 = ATmakeSymbol("", 7, ATfalse);
  ATprotectSymbol(sym__7);
  sym__8 = ATmakeSymbol("", 8, ATfalse);
  ATprotectSymbol(sym__8);
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_iter_sep_n_2 = ATmakeSymbol("iter-sep-n", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_n_2);
  sym_iter_n_1 = ATmakeSymbol("iter-n", 1, ATfalse);
  ATprotectSymbol(sym_iter_n_1);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
  ATprotectSymbol(sym_selector_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
  ATprotectSymbol(sym_Path1_1);
  sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
  ATprotectSymbol(sym_PP_Entry_2);
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
  ATprotectSymbol(sym_Arg2_2);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_LNAT_2 = ATmakeSymbol("LNAT", 2, ATfalse);
  ATprotectSymbol(sym_LNAT_2);
  sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
  ATprotectSymbol(sym_L_2);
  sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
  ATprotectSymbol(sym_C_2);
  sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
  ATprotectSymbol(sym_REF_2);
  sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
  ATprotectSymbol(sym_LBL_2);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_R_2 = ATmakeSymbol("R", 2, ATfalse);
  ATprotectSymbol(sym_R_2);
  sym_A_3 = ATmakeSymbol("A", 3, ATfalse);
  ATprotectSymbol(sym_A_3);
  sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
  ATprotectSymbol(sym_ALT_2);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
  ATprotectSymbol(sym_Strict_0);
  sym_amb_1 = ATmakeSymbol("amb", 1, ATfalse);
  ATprotectSymbol(sym_amb_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_reject_0 = ATmakeSymbol("reject", 0, ATfalse);
  ATprotectSymbol(sym_reject_0);
  sym_bracket_0 = ATmakeSymbol("bracket", 0, ATfalse);
  ATprotectSymbol(sym_bracket_0);
  sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
  ATprotectSymbol(sym_term_1);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_func_2 = ATmakeSymbol("func", 2, ATfalse);
  ATprotectSymbol(sym_func_2);
  sym_iter_sep_n_3 = ATmakeSymbol("iter-sep-n", 3, ATfalse);
  ATprotectSymbol(sym_iter_sep_n_3);
  sym_iter_n_2 = ATmakeSymbol("iter-n", 2, ATfalse);
  ATprotectSymbol(sym_iter_n_2);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
  ATprotectSymbol(sym_seq_2);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_empty_0 = ATmakeSymbol("empty", 0, ATfalse);
  ATprotectSymbol(sym_empty_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Conservative_0 = ATmakeSymbol("Conservative", 0, ATfalse);
  ATprotectSymbol(sym_Conservative_0);
  sym_layout_place_holder_0 = ATmakeSymbol("layout-place-holder", 0, ATfalse);
  ATprotectSymbol(sym_layout_place_holder_0);
  sym_Injections_0 = ATmakeSymbol("Injections", 0, ATfalse);
  ATprotectSymbol(sym_Injections_0);
  sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
  ATprotectSymbol(sym_term_1);
  sym_seq_1 = ATmakeSymbol("seq", 1, ATfalse);
  ATprotectSymbol(sym_seq_1);
  sym_bracket_symbol_1 = ATmakeSymbol("bracket-symbol", 1, ATfalse);
  ATprotectSymbol(sym_bracket_symbol_1);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
  ATprotectSymbol(sym_seq_2);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
  ATprotectSymbol(sym_label_2);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_func_2 = ATmakeSymbol("func", 2, ATfalse);
  ATprotectSymbol(sym_func_2);
  sym_pair_2 = ATmakeSymbol("pair", 2, ATfalse);
  ATprotectSymbol(sym_pair_2);
  sym_iter_sep_n_3 = ATmakeSymbol("iter-sep-n", 3, ATfalse);
  ATprotectSymbol(sym_iter_sep_n_3);
  sym_iter_n_2 = ATmakeSymbol("iter-n", 2, ATfalse);
  ATprotectSymbol(sym_iter_n_2);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
  ATprotectSymbol(sym_seq_2);
  sym_empty_0 = ATmakeSymbol("empty", 0, ATfalse);
  ATprotectSymbol(sym_empty_0);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_prod_fun_4 = ATmakeSymbol("prod-fun", 4, ATfalse);
  ATprotectSymbol(sym_prod_fun_4);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_reject_0 = ATmakeSymbol("reject", 0, ATfalse);
  ATprotectSymbol(sym_reject_0);
  sym_bracket_0 = ATmakeSymbol("bracket", 0, ATfalse);
  ATprotectSymbol(sym_bracket_0);
  sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
  ATprotectSymbol(sym_term_1);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_fun_1 = ATmakeSymbol("fun", 1, ATfalse);
  ATprotectSymbol(sym_fun_1);
  sym_uqlit_1 = ATmakeSymbol("uqlit", 1, ATfalse);
  ATprotectSymbol(sym_uqlit_1);
  sym_qlit_1 = ATmakeSymbol("qlit", 1, ATfalse);
  ATprotectSymbol(sym_qlit_1);
}
static ATerm term_m_38;
static ATerm term_l_38;
static ATerm term_k_38;
static ATerm term_j_38;
static ATerm term_e_38;
static ATerm term_b_38;
static ATerm term_a_38;
static ATerm term_x_37;
static ATerm term_w_37;
static ATerm term_u_37;
static ATerm term_t_37;
static ATerm term_m_37;
static ATerm term_i_36;
static ATerm term_f_36;
static ATerm term_e_36;
static ATerm term_s_35;
static ATerm term_y_34;
static ATerm term_t_34;
static ATerm term_q_34;
static ATerm term_m_34;
static ATerm term_j_34;
static ATerm term_g_34;
static ATerm term_d_34;
static ATerm term_a_34;
static ATerm term_x_33;
static ATerm term_u_33;
static ATerm term_p_33;
static ATerm term_m_33;
static ATerm term_i_33;
static ATerm term_e_33;
static ATerm term_b_33;
static ATerm term_x_32;
static ATerm term_u_32;
static ATerm term_r_32;
static ATerm term_o_32;
static ATerm term_j_32;
static ATerm term_f_32;
static ATerm term_c_32;
static ATerm term_v_31;
static ATerm term_q_31;
static ATerm term_m_31;
static ATerm term_j_31;
static ATerm term_f_31;
static ATerm term_c_31;
static ATerm term_z_30;
static ATerm term_u_30;
static ATerm term_r_30;
static ATerm term_m_30;
static ATerm term_j_30;
static ATerm term_e_30;
static ATerm term_b_30;
static ATerm term_y_29;
static ATerm term_p_29;
static ATerm term_h_29;
static ATerm term_d_29;
static ATerm term_c_29;
static ATerm term_b_29;
static ATerm term_w_28;
static ATerm term_s_28;
static ATerm term_r_28;
static ATerm term_q_28;
static ATerm term_p_28;
static ATerm term_n_28;
static ATerm term_m_28;
static ATerm term_l_28;
static ATerm term_k_28;
static ATerm term_j_28;
static ATerm term_i_28;
static ATerm term_h_28;
static ATerm term_g_28;
static ATerm term_f_28;
static ATerm term_e_28;
static ATerm term_d_28;
static ATerm term_c_28;
static ATerm term_b_28;
static ATerm term_z_27;
static ATerm term_l_27;
static ATerm term_u_26;
static ATerm term_c_26;
static ATerm term_f_25;
static ATerm term_e_25;
static ATerm term_d_25;
static ATerm term_q_24;
static ATerm term_i_24;
static ATerm term_h_24;
static ATerm term_g_24;
static ATerm term_f_24;
static ATerm term_e_24;
static ATerm term_a_21;
static ATerm term_z_20;
static ATerm term_x_20;
static ATerm term_v_20;
static ATerm term_u_20;
static ATerm term_t_20;
static ATerm term_r_20;
static ATerm term_q_20;
static ATerm term_n_20;
static ATerm term_m_20;
static ATerm term_i_18;
static ATerm term_t_16;
static ATerm term_g_16;
static ATerm term_r_15;
static ATerm term_s_14;
static ATerm term_r_14;
static ATerm term_q_14;
static ATerm term_x_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Conservative_0);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_HS_0);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_SOpt_2, term_q_14, term_r_14);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to pretty-print term due to ambiguities.", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-ensugar", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-bracket", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.pp.af", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning] No constructor defined for production", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("[ppgen | warning]   ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_lit_1, term_f_24);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_lit_1, term_h_24);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_SOpt_2, term_d_25, term_e_25);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Arg_1, term_t_16);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("START", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("LCons", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SCons", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("NL", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Bracket", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("assignOr", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("assignExp", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("assignAnd", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSR", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSL", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMin", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("assignPlus", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMod", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assignDiv", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMul", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("rightdoublearrow", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("rightarrow", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assign", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("equal", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("bar", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ge", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("gt", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("le", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("lt", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("not-equal", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-right", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-left", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("mod", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("tilde", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("minus", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("address", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("div", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("times", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("decr", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("incr", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("plus", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("semicolon", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("colon", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("comma", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("dunno", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("empty", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(sym_Injections_0);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--injections", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("no-cons-name", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-c               Conservative pretty-printing (only format where needed).", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <table>       Use pretty-print entries from <table>", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm split_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t);
static ATerm b_6 (ATerm b_26, ATerm t);
static ATerm c_0 (ATerm t);
ATerm has_significant_layout_0_0 (ATerm t);
ATerm has_layout_0_0 (ATerm t);
static ATerm e_0 (ATerm t);
static ATerm g_0 (ATerm t);
ATerm InsLayout_1_0 (ATerm h_44 (ATerm), ATerm t);
static ATerm j_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm o_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
ATerm insert_layout_0_0 (ATerm t);
ATerm crush_3_0 (ATerm w_112 (ATerm), ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm t);
static ATerm y_0 (ATerm t);
ATerm collect_p__1_0 (ATerm u_43 (ATerm), ATerm t);
ATerm fatal_ambiguity_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm Instantiate_1_0 (ATerm f_0 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm m_94 (ATerm), ATerm t);
ATerm is_string_0_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm d_6 (ATerm x_12, ATerm w_12, ATerm t);
ATerm instantiate_list_1_0 (ATerm a_44 (ATerm), ATerm t);
static ATerm f_6 (ATerm z_15, ATerm a_16, ATerm v_15, ATerm y_15, ATerm t);
ATerm instantiate_sep_list_1_0 (ATerm c_44 (ATerm), ATerm t);
ATerm even_0_0 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm g_6 (ATerm n_42 (ATerm), ATerm o_42 (ATerm), ATerm p_42 (ATerm), ATerm q_42 (ATerm), ATerm p_17, ATerm q_17, ATerm t);
ATerm nzip_1_0 (ATerm k_103 (ATerm), ATerm t);
static ATerm h_6 (ATerm e_17, ATerm f_17, ATerm d_17, ATerm l_17, ATerm t);
ATerm index_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm symbol2abox_0_0 (ATerm t);
ATerm seq2abox_0_0 (ATerm t);
ATerm Snd_0_0 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm pp_table_get_0_0 (ATerm t);
ATerm table_get_0_0 (ATerm t);
static ATerm i_6 (ATerm s_22, ATerm r_22, ATerm t);
ATerm say_1_0 (ATerm a_100 (ATerm), ATerm t);
ATerm trim_1_0 (ATerm j_107 (ATerm), ATerm t);
ATerm read_text_file_0_0 (ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm l_6 (ATerm), ATerm m_6 (ATerm), ATerm t);
ATerm separate_by_0_0 (ATerm t);
ATerm add_arg_flags_0_0 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm xtc_ast2abox_1_0 (ATerm c_43 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm xtc_pp_sdf2_0_0 (ATerm t);
ATerm write_to_0_0 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm n_5 (ATerm), ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm missing_constructor_warning_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm e_101 (ATerm), ATerm t);
static ATerm h_52 (ATerm h_49, ATerm i_49, ATerm j_49, ATerm k_49, ATerm t);
static ATerm z_4 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm ignore_prod_0_0 (ATerm t);
ATerm symbols2pp_entries_1_0 (ATerm s_42 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm g_101 (ATerm), ATerm t);
static ATerm s_7 (ATerm t);
ATerm get_cnstr_name_0_0 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
ATerm generate_pp_entries_0_0 (ATerm t);
ATerm pair_0_0 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm make_0_0 (ATerm t);
ATerm NonTerminal_0_0 (ATerm t);
ATerm add_0_0 (ATerm t);
static ATerm p_8 (ATerm t);
ATerm number_node_1_0 (ATerm w_42 (ATerm), ATerm t);
static ATerm q_8 (ATerm t);
static ATerm s_8 (ATerm t);
ATerm number_nonterminals_0_0 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
ATerm argument_list_0_0 (ATerm t);
ATerm _2_0 (ATerm b_81 (ATerm), ATerm c_81 (ATerm), ATerm t);
ATerm mkterm_0_0 (ATerm t);
ATerm flat_alt_0_0 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm k_9 (ATerm t);
ATerm symbol2abox_1_0 (ATerm t_42 (ATerm), ATerm t);
ATerm Fst_0_0 (ATerm t);
static ATerm a_65 (ATerm r_63, ATerm s_63, ATerm t_63, ATerm t);
static ATerm b_65 (ATerm j_64, ATerm k_64, ATerm l_64, ATerm m_64, ATerm n_64, ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
ATerm get_pp_entry_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm p_95 (ATerm), ATerm t);
static ATerm w_9 (ATerm t);
ATerm uq2q_0_0 (ATerm t);
ATerm get_constr_0_0 (ATerm t);
ATerm add_attributes_0_0 (ATerm t);
ATerm escape_0_0 (ATerm t);
ATerm is_subterm_0_0 (ATerm t);
ATerm string_Hd_0_0 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
ATerm strs2constr_0_0 (ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm l_101 (ATerm), ATerm t);
static ATerm f_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm l_10 (ATerm t);
ATerm Sym2Strs_0_0 (ATerm t);
static ATerm m_10 (ATerm t);
ATerm sym2strs_0_0 (ATerm t);
ATerm syms2strs_0_0 (ATerm t);
ATerm quote_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm w_101 (ATerm), ATerm t);
ATerm Tl_0_0 (ATerm t);
static ATerm n_10 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm Hd_0_0 (ATerm t);
ATerm is_lower_0_0 (ATerm t);
ATerm is_upper_0_0 (ATerm t);
ATerm is_num_0_0 (ATerm t);
static ATerm d_69 (ATerm z_68, ATerm t);
static ATerm r_10 (ATerm t);
ATerm toAlphaNum_0_0 (ATerm t);
ATerm separate_by_1_0 (ATerm s_100 (ATerm), ATerm t);
ATerm implode_string_0_0 (ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm explode_string_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm list_ana_1_0 (ATerm n_44 (ATerm), ATerm t);
static ATerm s_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm a_11 (ATerm t);
ATerm lit2str_0_0 (ATerm t);
static ATerm h_73 (ATerm m_72, ATerm n_72, ATerm o_72, ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
ATerm mk_constr_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm syntaxless_sort_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm w_80 (ATerm), ATerm x_80 (ATerm), ATerm t);
static ATerm d_11 (ATerm t);
ATerm is_injection_0_0 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm g_11 (ATerm t);
ATerm is_reject_0_0 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm k_11 (ATerm t);
ATerm is_bracket_0_0 (ATerm t);
ATerm prodcons_0_0 (ATerm t);
static ATerm q_6 (ATerm j_13, ATerm k_13, ATerm i_13, ATerm h_13, ATerm t);
static ATerm s_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm r_6 (ATerm q_12, ATerm o_12, ATerm p_12, ATerm r_12, ATerm t);
ATerm filter_1_0 (ATerm x_108 (ATerm), ATerm t);
ATerm is_list_0_0 (ATerm t);
ATerm try_1_0 (ATerm o_92 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm l_94 (ATerm), ATerm t);
ATerm sometd_1_0 (ATerm z_95 (ATerm), ATerm t);
ATerm repeat_1_0 (ATerm o_93 (ATerm), ATerm t);
ATerm concat_strings_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm int_to_string_0_0 (ATerm t);
static ATerm c_12 (ATerm t);
ATerm path_to_string_0_0 (ATerm t);
ATerm table_put_0_0 (ATerm t);
static ATerm d_12 (ATerm t);
ATerm mk_key_0_0 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm s_6 (ATerm g_22, ATerm q_22, ATerm t);
ATerm string_to_int_0_0 (ATerm t);
ATerm unescape_0_0 (ATerm t);
ATerm un_double_quote_0_0 (ATerm t);
ATerm MakePPTerm_0_0 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm t_6 (ATerm f_22, ATerm t);
ATerm error_0_0 (ATerm t);
ATerm fatal_error_0_0 (ATerm t);
ATerm has_option_1_0 (ATerm w_119 (ATerm), ATerm t);
static ATerm i_12 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm debug_1_0 (ATerm m_100 (ATerm), ATerm t);
ATerm if_verbose1_1_0 (ATerm d_118 (ATerm), ATerm t);
ATerm map_1_0 (ATerm w_100 (ATerm), ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
ATerm read_pp_tables_0_0 (ATerm t);
ATerm reverse_0_0 (ATerm t);
ATerm collect_1_0 (ATerm m_106 (ATerm), ATerm t);
static ATerm m_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm v_6 (ATerm y_18, ATerm x_18, ATerm t);
ATerm ArgOption_3_0 (ATerm e_4 (ATerm), ATerm f_4 (ATerm), ATerm g_4 (ATerm), ATerm t);
ATerm Option_3_0 (ATerm b_4 (ATerm), ATerm c_4 (ATerm), ATerm d_4 (ATerm), ATerm t);
static ATerm e_13 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm m_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm q_13 (ATerm t);
ATerm Asfix_2_abox_options_0_0 (ATerm t);
ATerm io_wrap_2_0 (ATerm k_121 (ATerm), ATerm l_121 (ATerm), ATerm t);
static ATerm r_13 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm b_6 (ATerm b_26, ATerm t)
{
  ATerm q_9 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_0 = NULL;
      t = has_significant_layout_0_0(t);
      t = b_26;
      t = concat_strings_0_0(t);
      a_0 = t;
      t = (ATerm) ATmakeAppl(sym_C_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, a_0)));
      LocalPopChoice(s_13);
    }
  else
    {
      t = q_9;
      {
        ATerm b_0 = NULL;
        t = b_26;
        t = concat_strings_0_0(t);
        b_0 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, b_0);
      }
    }
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm t_13 = t;
  if((PushChoice() == 0))
    {
      ATerm s_0 = NULL;
      s_0 = t;
      if(match_int(t, 9))
        {
          t = s_0;
        }
      else
        {
          if(match_int(t, 10))
            {
              t = s_0;
            }
          else
            {
              if(match_int(t, 13))
                {
                  t = s_0;
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
                    _fail(t);
                  t = s_0;
                }
            }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_13;
    }
  return(t);
}
ATerm has_significant_layout_0_0 (ATerm t)
{
  ATerm h_0 = NULL,m_0 = NULL;
  m_0 = t;
  {
    ATerm u_13 = t;
    if((PushChoice() == 0))
      {
        ATerm p_0 = NULL,q_0 = NULL,r_0 = NULL,d_0 = NULL;
        r_0 = t;
        if(match_cons(t, sym_layout_1))
          {
            q_0 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_0);
        p_0 = t;
        t = q_0;
        if(!(match_cons(t, sym_layout_place_holder_0)))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_layout_1, q_0);
        d_0 = t;
        t = SSLsetAnnotations(d_0, p_0);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_13;
      }
  }
  if(match_cons(t, sym_layout_1))
    {
      h_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_0;
  t = concat_strings_0_0(t);
  t = explode_string_0_0(t);
  t = filter_1_0(c_0, t);
  {
    ATerm v_13 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_13;
      }
  }
  t = m_0;
  return(t);
}
ATerm has_layout_0_0 (ATerm t)
{
  ATerm w_13 = t;
  if((PushChoice() == 0))
    {
      ATerm t_0 = NULL,u_0 = NULL,v_0 = NULL,l_0 = NULL;
      v_0 = t;
      if(match_cons(t, sym_layout_1))
        {
          u_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_0);
      t_0 = t;
      t = u_0;
      if(!(match_cons(t, sym_layout_place_holder_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_layout_1, u_0);
      l_0 = t;
      t = SSLsetAnnotations(l_0, t_0);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_13;
    }
  return(t);
}
static ATerm e_0 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm g_0 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm InsLayout_1_0 (ATerm h_44 (ATerm), ATerm t)
{
  static ATerm p_2 (ATerm t);
  static ATerm p_2 (ATerm t)
  {
    ATerm e_1 = NULL,g_1 = NULL,i_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL;
    ATerm y_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2_0(Nil_0_0, _id, t);
        LocalPopChoice(a_14);
      }
    else
      {
        t = y_13;
        {
          ATerm e_2 = NULL,h_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL;
          e_2 = t;
          if(match_cons(t, sym__2))
            {
              h_2 = ATgetArgument(t, 0);
              o_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_2;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_2 = ATgetFirst((ATermList) t);
              l_2 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = l_2;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = (ATerm) ATmakeAppl(sym__2, k_2, o_2);
              t = h_44(t);
              if(match_cons(t, sym__2))
                {
                  e_1 = ATgetArgument(t, 0);
                  l_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, e_1), l_1);
            }
          else
            {
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_2 = ATgetFirst((ATermList) t);
                  n_2 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, k_2, o_2);
              t = h_44(t);
              if(match_cons(t, sym__2))
                {
                  e_1 = ATgetArgument(t, 0);
                  {
                    ATerm e_14 = ATgetArgument(t, 1);
                    if(((ATgetType(e_14) == AT_LIST) && !(ATisEmpty(e_14))))
                      {
                        g_1 = ATgetFirst((ATermList) e_14);
                        l_1 = (ATerm) ATgetNext((ATermList) e_14);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_2), m_2), l_1);
              t = p_2(t);
              if(match_cons(t, sym__2))
                {
                  ATerm i_14 = ATgetArgument(t, 0);
                  if(((ATgetType(i_14) == AT_LIST) && !(ATisEmpty(i_14))))
                    {
                      i_1 = ATgetFirst((ATermList) i_14);
                      n_1 = (ATerm) ATgetNext((ATermList) i_14);
                    }
                  else
                    _fail(t);
                  m_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              {
                ATerm m_14 = t;
                int p_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_1 = NULL,c_1 = NULL;
                    t = has_option_1_0(e_0, t);
                    t = g_1;
                    t = has_layout_0_0(t);
                    t = g_1;
                    if(match_cons(t, sym_layout_1))
                      {
                        c_1 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = b_6(c_1, t);
                    b_1 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_1), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_s_14), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, i_1))), b_1), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, e_1))))), m_1);
                    LocalPopChoice(p_14);
                  }
                else
                  {
                    t = m_14;
                    {
                      ATerm t_14 = t;
                      int u_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm f_1 = NULL,z_1 = NULL;
                          ATerm v_14 = t;
                          if((PushChoice() == 0))
                            {
                              t = has_option_1_0(g_0, t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = v_14;
                            }
                          t = g_1;
                          t = has_significant_layout_0_0(t);
                          t = g_1;
                          if(match_cons(t, sym_layout_1))
                            {
                              z_1 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = b_6(z_1, t);
                          f_1 = t;
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(CheckATermList(n_1), i_1), f_1), e_1), m_1);
                          LocalPopChoice(u_14);
                        }
                      else
                        {
                          t = t_14;
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(CheckATermList(n_1), i_1), e_1), m_1);
                        }
                    }
                  }
              }
            }
        }
      }
    return(t);
  }
  t = p_2(t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = Cons_2_0(_id, _id, t);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = try_1_0(n_0, t);
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm a_7 = NULL;
  t = is_list_0_0(t);
  a_7 = t;
  t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, a_7);
  return(t);
}
static ATerm o_0 (ATerm t)
{
  ATerm w_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_14 = t;
      if((PushChoice() == 0))
        {
          ATerm d_7 = NULL,f_7 = NULL,g_7 = NULL,p_1 = NULL;
          g_7 = t;
          if(match_cons(t, sym_layout_1))
            {
              f_7 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_7);
          d_7 = t;
          t = (ATerm) ATmakeAppl(sym_layout_1, f_7);
          p_1 = t;
          t = SSLsetAnnotations(p_1, d_7);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = y_14;
        }
      LocalPopChoice(x_14);
    }
  else
    {
      t = w_14;
      {
        ATerm z_7 = NULL,a_8 = NULL;
        z_7 = t;
        if(match_cons(t, sym_layout_1))
          {
            a_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        {
          ATerm z_14 = t;
          int c_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_10 = NULL,h_10 = NULL,q_1 = NULL;
              t = SSLgetAnnotations(z_7);
              h_10 = t;
              t = (ATerm) ATmakeAppl(sym_layout_1, a_8);
              q_1 = t;
              t = SSLsetAnnotations(q_1, h_10);
              t = has_option_1_0(w_0, t);
              t = has_layout_0_0(t);
              if(match_cons(t, sym_layout_1))
                {
                  g_10 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = b_6(g_10, t);
              LocalPopChoice(c_15);
            }
          else
            {
              t = z_14;
              {
                ATerm o_10 = NULL,y_10 = NULL,r_1 = NULL;
                t = SSLgetAnnotations(z_7);
                y_10 = t;
                t = (ATerm) ATmakeAppl(sym_layout_1, a_8);
                r_1 = t;
                t = SSLsetAnnotations(r_1, y_10);
                {
                  ATerm d_15 = t;
                  if((PushChoice() == 0))
                    {
                      t = has_option_1_0(x_0, t);
                      PopChoice();
                      _fail(t);
                    }
                  else
                    {
                      t = d_15;
                    }
                }
                t = has_significant_layout_0_0(t);
                if(match_cons(t, sym_layout_1))
                  {
                    o_10 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = b_6(o_10, t);
              }
            }
        }
      }
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm insert_layout_0_0 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL;
  static ATerm i_0 (ATerm t);
  static ATerm i_0 (ATerm t)
  {
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((s_3 != NULL) && (s_3 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          s_3 = ATgetFirst((ATermList) t);
        {
          ATerm e_15 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = Tl_0_0(t);
    return(t);
  }
  t = _2_0(_id, i_0, t);
  {
    static ATerm k_8 (ATerm t);
    static ATerm k_8 (ATerm t)
    {
      ATerm y_3 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL;
      ATerm f_15 = t;
      int h_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_5 = NULL,x_5 = NULL,z_5 = NULL,a_6 = NULL,c_6 = NULL;
          if(match_cons(t, sym__2))
            {
              x_5 = ATgetArgument(t, 0);
              c_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_5;
          if(match_cons(t, sym_H_2))
            {
              z_5 = ATgetArgument(t, 0);
              a_6 = ATgetArgument(t, 1);
              t = (ATerm) ATmakeAppl(sym__2, a_6, c_6);
              t = InsLayout_1_0(k_8, t);
              if(match_cons(t, sym__2))
                {
                  h_4 = ATgetArgument(t, 0);
                  i_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, z_5, h_4), i_4);
            }
          else
            {
              if(match_cons(t, sym_HV_2))
                {
                  z_5 = ATgetArgument(t, 0);
                  a_6 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym__2, a_6, c_6);
                  t = InsLayout_1_0(k_8, t);
                  if(match_cons(t, sym__2))
                    {
                      h_4 = ATgetArgument(t, 0);
                      i_4 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, z_5, h_4), i_4);
                }
              else
                {
                  if(match_cons(t, sym_V_2))
                    {
                      z_5 = ATgetArgument(t, 0);
                      a_6 = ATgetArgument(t, 1);
                      t = (ATerm) ATmakeAppl(sym__2, a_6, c_6);
                      t = InsLayout_1_0(k_8, t);
                      if(match_cons(t, sym__2))
                        {
                          h_4 = ATgetArgument(t, 0);
                          i_4 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_V_2, z_5, h_4), i_4);
                    }
                  else
                    {
                      if(match_cons(t, sym_A_3))
                        {
                          z_5 = ATgetArgument(t, 0);
                          a_6 = ATgetArgument(t, 1);
                          v_5 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym__2, v_5, c_6);
                          t = InsLayout_1_0(k_8, t);
                          if(match_cons(t, sym__2))
                            {
                              h_4 = ATgetArgument(t, 0);
                              i_4 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_A_3, z_5, a_6, h_4), i_4);
                        }
                      else
                        {
                          if(match_cons(t, sym_R_2))
                            {
                              z_5 = ATgetArgument(t, 0);
                              a_6 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym__2, a_6, c_6);
                              t = InsLayout_1_0(k_8, t);
                              if(match_cons(t, sym__2))
                                {
                                  h_4 = ATgetArgument(t, 0);
                                  i_4 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_R_2, z_5, h_4), i_4);
                            }
                          else
                            {
                              if(match_cons(t, sym_ALT_2))
                                {
                                  z_5 = ATgetArgument(t, 0);
                                  a_6 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym__2, z_5, c_6);
                                  t = InsLayout_1_0(k_8, t);
                                  if(match_cons(t, sym__2))
                                    {
                                      y_3 = ATgetArgument(t, 0);
                                      {
                                        ATerm i_15 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym__2, a_6, c_6);
                                  t = InsLayout_1_0(k_8, t);
                                  if(match_cons(t, sym__2))
                                    {
                                      h_4 = ATgetArgument(t, 0);
                                      j_4 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, y_3, h_4), j_4);
                                }
                              else
                                {
                                  if(match_cons(t, sym_LBL_2))
                                    {
                                      z_5 = ATgetArgument(t, 0);
                                      a_6 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym__2, a_6, c_6);
                                      t = InsLayout_1_0(k_8, t);
                                      if(match_cons(t, sym__2))
                                        {
                                          h_4 = ATgetArgument(t, 0);
                                          i_4 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LBL_2, z_5, h_4), i_4);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_REF_2))
                                        {
                                          z_5 = ATgetArgument(t, 0);
                                          a_6 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym__2, a_6, c_6);
                                          t = InsLayout_1_0(k_8, t);
                                          if(match_cons(t, sym__2))
                                            {
                                              h_4 = ATgetArgument(t, 0);
                                              i_4 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_REF_2, z_5, h_4), i_4);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_L_2))
                                            {
                                              z_5 = ATgetArgument(t, 0);
                                              a_6 = ATgetArgument(t, 1);
                                              t = (ATerm) ATmakeAppl(sym__2, a_6, c_6);
                                              t = InsLayout_1_0(k_8, t);
                                              if(match_cons(t, sym__2))
                                                {
                                                  h_4 = ATgetArgument(t, 0);
                                                  i_4 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_L_2, z_5, h_4), i_4);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_LNAT_2))
                                                {
                                                  z_5 = ATgetArgument(t, 0);
                                                  a_6 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym__2, a_6, c_6);
                                              t = InsLayout_1_0(k_8, t);
                                              if(match_cons(t, sym__2))
                                                {
                                                  h_4 = ATgetArgument(t, 0);
                                                  i_4 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LNAT_2, z_5, h_4), i_4);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
          LocalPopChoice(h_15);
        }
      else
        {
          t = f_15;
          {
            ATerm j_15 = t;
            int k_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = _2_0(j_0, _id, t);
                t = InsLayout_1_0(k_8, t);
                LocalPopChoice(k_15);
              }
            else
              {
                t = j_15;
              }
          }
        }
      return(t);
    }
    t = k_8(t);
  }
  t = _2_0(k_0, _id, t);
  if(match_cons(t, sym__2))
    {
      t_3 = ATgetArgument(t, 0);
      {
        ATerm l_15 = ATgetArgument(t, 1);
        if(((ATgetType(l_15) == AT_LIST) && !(ATisEmpty(l_15))))
          {
            u_3 = ATgetFirst((ATermList) l_15);
            {
              ATerm o_15 = (ATerm) ATgetNext((ATermList) l_15);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_3), t_3), not_null(s_3));
  t = filter_1_0(o_0, t);
  t = flat_list_0_0(t);
  e_8 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_8 = ATgetFirst((ATermList) t);
      d_8 = (ATerm) ATgetNext((ATermList) t);
      t = d_8;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = c_8;
        }
      else
        {
          t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_s_14), e_8);
        }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_s_14), e_8);
    }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_p__1_0 (ATerm u_43 (ATerm), ATerm t)
{
  static ATerm a_9 (ATerm t);
  static ATerm a_9 (ATerm t)
  {
    ATerm p_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_8 = NULL;
        t = u_43(t);
        z_8 = t;
        t = (ATerm) ATinsert(ATempty, z_8);
        LocalPopChoice(q_15);
      }
    else
      {
        t = p_15;
        t = crush_3_0(y_0, conc_0_0, a_9, t);
      }
    return(t);
  }
  t = a_9(t);
  return(t);
}
ATerm fatal_ambiguity_0_0 (ATerm t)
{
  ATerm b_9 = NULL,d_9 = NULL,e_9 = NULL,v_1 = NULL;
  e_9 = t;
  if(match_cons(t, sym_amb_1))
    {
      d_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_9);
  b_9 = t;
  t = (ATerm) ATmakeAppl(sym_amb_1, d_9);
  v_1 = t;
  t = SSLsetAnnotations(v_1, b_9);
  t = (ATerm) ATinsert(ATempty, term_r_15);
  t = fatal_error_0_0(t);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm s_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(t_15);
    }
  else
    {
      t = s_15;
      {
        ATerm u_15 = t;
        int x_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(Nil_0_0, flat_list_0_0, t);
            LocalPopChoice(x_15);
          }
        else
          {
            t = u_15;
            {
              ATerm c_16 = t;
              int f_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_9 = NULL,m_9 = NULL,n_9 = NULL;
                  t = Cons_2_0(is_list_0_0, _id, t);
                  n_9 = t;
                  t = Hd_0_0(t);
                  j_9 = t;
                  t = n_9;
                  t = Tl_0_0(t);
                  m_9 = t;
                  t = (ATerm) ATmakeAppl(sym__2, j_9, m_9);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(f_16);
                }
              else
                {
                  t = c_16;
                  t = Cons_2_0(_id, flat_list_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Instantiate_1_0 (ATerm f_0 (ATerm), ATerm t)
{
  ATerm s_9 = NULL,v_9 = NULL;
  if(match_cons(t, sym_Arg2_2))
    {
      v_9 = ATgetArgument(t, 0);
      s_9 = ATgetArgument(t, 1);
      {
        ATerm y_9 = NULL,z_9 = NULL;
        t = term_g_16;
        t = f_0(t);
        z_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_9, z_9);
        t = index_0_0(t);
        y_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_9, y_9);
        t = index_0_0(t);
      }
    }
  else
    {
      ATerm b_10 = NULL;
      if(match_cons(t, sym_Arg_1))
        {
          v_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = term_g_16;
      t = f_0(t);
      b_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_9, b_10);
      t = index_0_0(t);
    }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = collect_p__1_0(a_1, t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL;
  n_11 = t;
  if(match_cons(t, sym_Arg_1))
    {
      o_11 = ATgetArgument(t, 0);
      {
        ATerm z_11 = NULL,x_1 = NULL;
        t = SSLgetAnnotations(n_11);
        z_11 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, o_11);
        x_1 = t;
        t = SSLsetAnnotations(x_1, z_11);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          o_11 = ATgetArgument(t, 0);
          m_11 = ATgetArgument(t, 1);
          {
            ATerm n_12 = NULL,y_1 = NULL;
            t = SSLgetAnnotations(n_11);
            n_12 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, o_11, m_11);
            y_1 = t;
            t = SSLsetAnnotations(y_1, n_12);
          }
        }
      else
        {
          ATerm d_13 = NULL,a_2 = NULL;
          if(match_cons(t, sym_S_1))
            {
              o_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_11);
          d_13 = t;
          t = (ATerm) ATmakeAppl(sym_S_1, o_11);
          a_2 = t;
          t = SSLsetAnnotations(a_2, d_13);
        }
    }
  return(t);
}
static ATerm d_6 (ATerm x_12, ATerm w_12, ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL;
  t = _2_0(z_0, _id, t);
  {
    static ATerm b_15 (ATerm t);
    static ATerm b_15 (ATerm t)
    {
      ATerm r_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,a_12 = NULL;
      ATerm i_16 = t;
      int j_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = _2_0(Nil_0_0, Nil_0_0, t);
          LocalPopChoice(j_16);
        }
      else
        {
          t = i_16;
          {
            static ATerm m_15 (ATerm z_13, ATerm b_14, ATerm c_14, ATerm t);
            static ATerm m_15 (ATerm z_13, ATerm b_14, ATerm c_14, ATerm t)
            {
              t = z_13;
              if(((a_12 != NULL) && (a_12 != t)))
                _fail(t);
              else
                a_12 = t;
              t = b_14;
              if(((r_11 != NULL) && (r_11 != t)))
                _fail(t);
              else
                r_11 = t;
              t = c_14;
              if(((u_11 != NULL) && (u_11 != t)))
                _fail(t);
              else
                u_11 = t;
              t = (ATerm) ATmakeAppl(sym__2, b_14, c_14);
              t = b_15(t);
              if(match_cons(t, sym__2))
                {
                  if(((t_11 != NULL) && (t_11 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    t_11 = ATgetArgument(t, 0);
                  if(((v_11 != NULL) && (v_11 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    v_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_11), z_13), v_11);
              return(t);
            }
            ATerm d_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,n_14 = NULL,o_14 = NULL;
            g_14 = t;
            if(match_cons(t, sym__2))
              {
                h_14 = ATgetArgument(t, 0);
                l_14 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = h_14;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_14 = ATgetFirst((ATermList) t);
                k_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_14;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_14 = ATgetFirst((ATermList) t);
                o_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_14;
            if(match_cons(t, sym_Arg_1))
              {
                d_14 = ATgetArgument(t, 0);
                {
                  ATerm k_16 = t;
                  int l_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = k_14;
                      if(((r_11 != NULL) && (r_11 != t)))
                        _fail(t);
                      else
                        r_11 = t;
                      t = o_14;
                      if(((u_11 != NULL) && (u_11 != t)))
                        _fail(t);
                      else
                        u_11 = t;
                      t = (ATerm) ATmakeAppl(sym__2, k_14, o_14);
                      t = b_15(t);
                      if(match_cons(t, sym__2))
                        {
                          if(((t_11 != NULL) && (t_11 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            t_11 = ATgetArgument(t, 0);
                          if(((v_11 != NULL) && (v_11 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            v_11 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_11), (ATerm) ATmakeAppl(sym_Arg_1, d_14)), (ATerm) ATinsert(CheckATermList(v_11), n_14));
                      LocalPopChoice(l_16);
                    }
                  else
                    {
                      t = k_16;
                      t = m_15(j_14, k_14, o_14, t);
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Arg2_2))
                  {
                    d_14 = ATgetArgument(t, 0);
                    f_14 = ATgetArgument(t, 1);
                    {
                      ATerm m_16 = t;
                      int n_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = f_14;
                          if(((p_10 != NULL) && (p_10 != t)))
                            _fail(t);
                          else
                            p_10 = t;
                          t = k_14;
                          if(((r_11 != NULL) && (r_11 != t)))
                            _fail(t);
                          else
                            r_11 = t;
                          t = o_14;
                          if(((u_11 != NULL) && (u_11 != t)))
                            _fail(t);
                          else
                            u_11 = t;
                          t = (ATerm) ATmakeAppl(sym__2, k_14, o_14);
                          t = b_15(t);
                          if(match_cons(t, sym__2))
                            {
                              if(((t_11 != NULL) && (t_11 != ATgetArgument(t, 0))))
                                _fail(ATgetArgument(t, 0));
                              else
                                t_11 = ATgetArgument(t, 0);
                              if(((v_11 != NULL) && (v_11 != ATgetArgument(t, 1))))
                                _fail(ATgetArgument(t, 1));
                              else
                                v_11 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_11), (ATerm) ATmakeAppl(sym_Arg2_2, d_14, f_14)), (ATerm) ATinsert(CheckATermList(v_11), n_14));
                          LocalPopChoice(n_16);
                        }
                      else
                        {
                          t = m_16;
                          t = m_15(j_14, k_14, o_14, t);
                        }
                    }
                  }
                else
                  {
                    t = m_15(j_14, k_14, o_14, t);
                  }
              }
          }
        }
      return(t);
    }
    t = b_15(t);
  }
  if(match_cons(t, sym__2))
    {
      ATerm o_16 = ATgetArgument(t, 0);
      q_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_12, q_10);
  return(t);
}
ATerm instantiate_list_1_0 (ATerm a_44 (ATerm), ATerm t)
{
  static ATerm h_16 (ATerm t);
  static ATerm h_16 (ATerm t)
  {
    ATerm p_16 = t;
    int q_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        LocalPopChoice(q_16);
      }
    else
      {
        t = p_16;
        {
          ATerm w_15 = NULL,d_16 = NULL,e_16 = NULL;
          static ATerm d_1 (ATerm t);
          static ATerm h_1 (ATerm t);
          static ATerm d_1 (ATerm t)
          {
            static ATerm j_1 (ATerm t);
            static ATerm j_1 (ATerm t)
            {
              static ATerm k_1 (ATerm t);
              static ATerm k_1 (ATerm t)
              {
                ATerm r_16 = t;
                int s_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    static ATerm o_1 (ATerm t);
                    static ATerm o_1 (ATerm t)
                    {
                      t = (ATerm) ATinsert(ATempty, not_null(d_16));
                      return(t);
                    }
                    t = Instantiate_1_0(o_1, t);
                    LocalPopChoice(s_16);
                  }
                else
                  {
                    t = r_16;
                    t = flat_list_0_0(t);
                  }
                return(t);
              }
              t = try_1_0(k_1, t);
              return(t);
            }
            t = term_g_16;
            t = a_44(t);
            t = bottomup_1_0(j_1, t);
            return(t);
          }
          static ATerm h_1 (ATerm t)
          {
            t = not_null(e_16);
            t = h_16(t);
            return(t);
          }
          w_15 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              if(((d_16 != NULL) && (d_16 != ATgetFirst((ATermList) t))))
                _fail(ATgetFirst((ATermList) t));
              else
                d_16 = ATgetFirst((ATermList) t);
              if(((e_16 != NULL) && (e_16 != (ATerm) ATgetNext((ATermList) t))))
                _fail((ATerm) ATgetNext((ATermList) t));
              else
                e_16 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = w_15;
          t = Cons_2_0(d_1, h_1, t);
        }
      }
    return(t);
  }
  t = h_16(t);
  return(t);
}
static ATerm f_6 (ATerm z_15, ATerm a_16, ATerm v_15, ATerm y_15, ATerm t)
{
  ATerm v_16 = NULL,b_17 = NULL,h_17 = NULL,e_18 = NULL;
  static ATerm t_1 (ATerm t);
  static ATerm t_1 (ATerm t)
  {
    t = not_null(b_17);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, v_15, (ATerm) ATinsert(ATempty, y_15));
  t = conc_0_0(t);
  h_17 = t;
  t = z_15;
  if(match_cons(t, sym_iter_1))
    {
      e_18 = ATgetArgument(t, 0);
      {
        ATerm a_15 = NULL,k_4 = NULL;
        t = SSLgetAnnotations(z_15);
        a_15 = t;
        t = e_18;
        v_16 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, e_18);
        k_4 = t;
        t = SSLsetAnnotations(k_4, a_15);
      }
    }
  else
    {
      ATerm g_15 = NULL,l_4 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          e_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_15);
      g_15 = t;
      t = e_18;
      v_16 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, e_18);
      l_4 = t;
      t = SSLsetAnnotations(l_4, g_15);
    }
  t = (ATerm) ATmakeAppl(sym__2, z_15, h_17);
  t = get_pp_entry_0_0(t);
  if(((b_17 != NULL) && (b_17 != t)))
    _fail(t);
  else
    b_17 = t;
  t = a_16;
  {
    static ATerm s_1 (ATerm t);
    static ATerm s_1 (ATerm t)
    {
      ATerm k_18 = NULL;
      k_18 = t;
      t = (ATerm) ATmakeAppl(sym__4, v_16, k_18, h_17, term_t_16);
      t = symbol2abox_0_0(t);
      return(t);
    }
    t = map_1_0(s_1, t);
  }
  t = instantiate_list_1_0(t_1, t);
  return(t);
}
ATerm instantiate_sep_list_1_0 (ATerm c_44 (ATerm), ATerm t)
{
  static ATerm m_22 (ATerm t);
  static ATerm m_22 (ATerm t)
  {
    ATerm u_16 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        LocalPopChoice(k_17);
      }
    else
      {
        t = u_16;
        {
          ATerm m_17 = t;
          int o_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, Nil_0_0, t);
              LocalPopChoice(o_17);
            }
          else
            {
              t = m_17;
              {
                ATerm w_20 = NULL,y_20 = NULL,q_21 = NULL,a_22 = NULL,j_22 = NULL;
                static ATerm u_1 (ATerm t);
                static ATerm w_1 (ATerm t);
                static ATerm u_1 (ATerm t)
                {
                  static ATerm b_2 (ATerm t);
                  static ATerm b_2 (ATerm t)
                  {
                    static ATerm c_2 (ATerm t);
                    static ATerm c_2 (ATerm t)
                    {
                      ATerm r_17 = t;
                      int u_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          static ATerm d_2 (ATerm t);
                          static ATerm d_2 (ATerm t)
                          {
                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_22)), not_null(y_20));
                            return(t);
                          }
                          t = Instantiate_1_0(d_2, t);
                          LocalPopChoice(u_17);
                        }
                      else
                        {
                          t = r_17;
                          t = flat_list_0_0(t);
                        }
                      return(t);
                    }
                    t = try_1_0(c_2, t);
                    return(t);
                  }
                  t = term_g_16;
                  t = c_44(t);
                  t = bottomup_1_0(b_2, t);
                  return(t);
                }
                static ATerm w_1 (ATerm t)
                {
                  t = not_null(j_22);
                  t = m_22(t);
                  return(t);
                }
                w_20 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    if(((y_20 != NULL) && (y_20 != ATgetFirst((ATermList) t))))
                      _fail(ATgetFirst((ATermList) t));
                    else
                      y_20 = ATgetFirst((ATermList) t);
                    q_21 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = q_21;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    if(((a_22 != NULL) && (a_22 != ATgetFirst((ATermList) t))))
                      _fail(ATgetFirst((ATermList) t));
                    else
                      a_22 = ATgetFirst((ATermList) t);
                    if(((j_22 != NULL) && (j_22 != (ATerm) ATgetNext((ATermList) t))))
                      _fail((ATerm) ATgetNext((ATermList) t));
                    else
                      j_22 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = w_20;
                t = Cons_2_0(u_1, w_1, t);
              }
            }
        }
      }
    return(t);
  }
  t = m_22(t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm y_22 = NULL;
  y_22 = t;
  {
    ATerm x_17 = t;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_17;
      }
  }
  t = (ATerm) ATinsert(ATempty, y_22);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm o_23 = NULL;
  o_23 = t;
  {
    ATerm y_17 = t;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_17;
      }
  }
  t = (ATerm) ATinsert(ATempty, o_23);
  return(t);
}
static ATerm g_6 (ATerm n_42 (ATerm), ATerm o_42 (ATerm), ATerm p_42 (ATerm), ATerm q_42 (ATerm), ATerm p_17, ATerm q_17, ATerm t)
{
  ATerm b_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_22 = NULL,p_22 = NULL;
      t = p_17;
      t = even_0_0(t);
      t = term_g_16;
      t = o_42(t);
      o_22 = t;
      t = term_g_16;
      t = p_42(t);
      p_22 = t;
      t = (ATerm) ATmakeAppl(sym__4, o_22, q_17, p_22, term_i_18);
      t = symbol2abox_0_0(t);
      t = try_1_0(f_2, t);
      LocalPopChoice(h_18);
    }
  else
    {
      t = b_18;
      {
        ATerm a_23 = NULL,m_23 = NULL;
        t = term_g_16;
        t = n_42(t);
        a_23 = t;
        t = term_g_16;
        t = p_42(t);
        m_23 = t;
        t = (ATerm) ATmakeAppl(sym__4, a_23, q_17, m_23, term_t_16);
        t = symbol2abox_0_0(t);
        t = try_1_0(g_2, t);
      }
    }
  return(t);
}
static ATerm h_6 (ATerm e_17, ATerm f_17, ATerm d_17, ATerm l_17, ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,w_24 = NULL,x_24 = NULL;
  static ATerm t_2 (ATerm t);
  static ATerm t_2 (ATerm t)
  {
    t = not_null(w_23);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym__2, d_17, (ATerm) ATinsert(ATempty, l_17));
  t = conc_0_0(t);
  x_23 = t;
  t = e_17;
  if(match_cons(t, sym_iter_sep_2))
    {
      w_24 = ATgetArgument(t, 0);
      x_24 = ATgetArgument(t, 1);
      {
        ATerm n_15 = NULL,o_4 = NULL;
        t = SSLgetAnnotations(e_17);
        n_15 = t;
        t = w_24;
        u_23 = t;
        t = x_24;
        v_23 = t;
        t = (ATerm) ATmakeAppl(sym_iter_sep_2, w_24, x_24);
        o_4 = t;
        t = SSLsetAnnotations(o_4, n_15);
      }
    }
  else
    {
      ATerm b_16 = NULL,p_4 = NULL;
      if(match_cons(t, sym_iter_star_sep_2))
        {
          w_24 = ATgetArgument(t, 0);
          x_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_17);
      b_16 = t;
      t = w_24;
      u_23 = t;
      t = x_24;
      v_23 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, w_24, x_24);
      p_4 = t;
      t = SSLsetAnnotations(p_4, b_16);
    }
  t = (ATerm) ATmakeAppl(sym__2, e_17, x_23);
  t = get_pp_entry_0_0(t);
  if(((w_23 != NULL) && (w_23 != t)))
    _fail(t);
  else
    w_23 = t;
  t = f_17;
  {
    static ATerm i_2 (ATerm t);
    static ATerm i_2 (ATerm t)
    {
      ATerm y_24 = NULL,h_25 = NULL;
      static ATerm j_2 (ATerm t);
      static ATerm q_2 (ATerm t);
      static ATerm r_2 (ATerm t);
      static ATerm s_2 (ATerm t);
      static ATerm j_2 (ATerm t)
      {
        t = u_23;
        return(t);
      }
      static ATerm q_2 (ATerm t)
      {
        t = v_23;
        return(t);
      }
      static ATerm r_2 (ATerm t)
      {
        t = x_23;
        return(t);
      }
      static ATerm s_2 (ATerm t)
      {
        t = l_17;
        return(t);
      }
      if(match_cons(t, sym__2))
        {
          y_24 = ATgetArgument(t, 0);
          h_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_6(j_2, q_2, r_2, s_2, y_24, h_25, t);
      return(t);
    }
    t = nzip_1_0(i_2, t);
  }
  t = instantiate_sep_list_1_0(t_2, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm j_18 = t;
  if((PushChoice() == 0))
    {
      ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL,v_4 = NULL;
      b_41 = t;
      if(match_cons(t, sym_lit_1))
        {
          a_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_41);
      z_40 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, a_41);
      v_4 = t;
      t = SSLsetAnnotations(v_4, z_40);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_18;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm l_18 = t;
  if((PushChoice() == 0))
    {
      ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL,x_4 = NULL;
      e_41 = t;
      if(match_cons(t, sym_lit_1))
        {
          d_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_41);
      c_41 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, d_41);
      x_4 = t;
      t = SSLsetAnnotations(x_4, c_41);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_18;
    }
  return(t);
}
ATerm symbol2abox_0_0 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL,w_39 = NULL,x_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,g_40 = NULL,h_40 = NULL;
  x_39 = t;
  if(match_cons(t, sym__4))
    {
      a_40 = ATgetArgument(t, 0);
      c_40 = ATgetArgument(t, 1);
      g_40 = ATgetArgument(t, 2);
      h_40 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = a_40;
  if(match_cons(t, sym_seq_1))
    {
      b_40 = ATgetArgument(t, 0);
      {
        ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL,v_40 = NULL,w_40 = NULL;
        static ATerm w_2 (ATerm t);
        static ATerm w_2 (ATerm t)
        {
          static ATerm x_2 (ATerm t);
          static ATerm x_2 (ATerm t)
          {
            ATerm m_18 = t;
            int n_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                static ATerm y_2 (ATerm t);
                static ATerm y_2 (ATerm t)
                {
                  t = not_null(p_40);
                  return(t);
                }
                t = Instantiate_1_0(y_2, t);
                LocalPopChoice(n_18);
              }
            else
              {
                t = m_18;
                t = flat_list_0_0(t);
              }
            return(t);
          }
          t = try_1_0(x_2, t);
          return(t);
        }
        t = c_40;
        if(match_cons(t, sym_appl_2))
          {
            ATerm o_18 = ATgetArgument(t, 0);
            w_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_40, (ATerm) ATinsert(ATempty, h_40));
        t = conc_0_0(t);
        w_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_seq_1, b_40), w_40);
        t = get_pp_entry_0_0(t);
        o_40 = t;
        t = b_40;
        t = filter_1_0(u_2, t);
        q_40 = t;
        t = w_39;
        t = filter_1_0(v_2, t);
        v_40 = t;
        t = (ATerm) ATmakeAppl(sym__4, q_40, v_40, w_40, term_t_16);
        t = seq2abox_0_0(t);
        if(((p_40 != NULL) && (p_40 != t)))
          _fail(t);
        else
          p_40 = t;
        t = o_40;
        t = bottomup_1_0(w_2, t);
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          b_40 = ATgetArgument(t, 0);
          n_39 = ATgetArgument(t, 1);
          {
            ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
            static ATerm u_22 (ATerm t);
            static ATerm u_22 (ATerm t)
            {
              ATerm z_16 = NULL,a_17 = NULL,c_17 = NULL,g_17 = NULL,i_17 = NULL,j_17 = NULL,n_17 = NULL,s_17 = NULL,t_17 = NULL,v_17 = NULL,w_17 = NULL,z_17 = NULL,a_18 = NULL,c_18 = NULL,d_18 = NULL,f_18 = NULL,g_18 = NULL;
              if(match_cons(t, sym__4))
                {
                  v_17 = ATgetArgument(t, 0);
                  w_17 = ATgetArgument(t, 1);
                  f_18 = ATgetArgument(t, 2);
                  g_18 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = w_17;
              if(match_cons(t, sym_appl_2))
                {
                  z_17 = ATgetArgument(t, 0);
                  a_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = a_18;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_18 = ATgetFirst((ATermList) t);
                  d_18 = (ATerm) ATgetNext((ATermList) t);
                  t = d_18;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = z_17;
                      if(match_cons(t, sym_prod_3))
                        {
                          c_17 = ATgetArgument(t, 0);
                          j_17 = ATgetArgument(t, 1);
                          t_17 = ATgetArgument(t, 2);
                          t = j_17;
                          if(match_cons(t, sym_alt_2))
                            {
                              n_17 = ATgetArgument(t, 0);
                              s_17 = ATgetArgument(t, 1);
                              t = c_17;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  g_17 = ATgetFirst((ATermList) t);
                                  i_17 = (ATerm) ATgetNext((ATermList) t);
                                  t = i_17;
                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                    {
                                      t = v_17;
                                      if(match_cons(t, sym_alt_2))
                                        {
                                          z_16 = ATgetArgument(t, 0);
                                          a_17 = ATgetArgument(t, 1);
                                          {
                                            ATerm p_18 = t;
                                            int q_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = g_17;
                                                if((z_16 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = n_17;
                                                if((z_16 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = s_17;
                                                if((a_17 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                t = (ATerm) ATmakeAppl(sym__4, z_16, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, z_16), z_16, t_17), a_18), f_18, g_18);
                                                t = u_22(t);
                                                LocalPopChoice(q_18);
                                              }
                                            else
                                              {
                                                t = p_18;
                                                {
                                                  ATerm r_18 = t;
                                                  int s_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm a_19 = NULL;
                                                      t = n_17;
                                                      if((z_16 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = s_17;
                                                      if((a_17 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym__2, g_18, term_t_16);
                                                      t = add_0_0(t);
                                                      a_19 = t;
                                                      t = (ATerm) ATmakeAppl(sym__4, a_17, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, g_17), a_17, t_17), a_18), f_18, a_19);
                                                      t = u_22(t);
                                                      LocalPopChoice(s_18);
                                                    }
                                                  else
                                                    {
                                                      t = r_18;
                                                      {
                                                        ATerm i_19 = NULL;
                                                        static ATerm z_2 (ATerm t);
                                                        static ATerm z_2 (ATerm t)
                                                        {
                                                          static ATerm a_3 (ATerm t);
                                                          static ATerm a_3 (ATerm t)
                                                          {
                                                            ATerm t_18 = t;
                                                            int u_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                static ATerm b_3 (ATerm t);
                                                                static ATerm b_3 (ATerm t)
                                                                {
                                                                  t = (ATerm) ATinsert(ATempty, not_null(x_16));
                                                                  return(t);
                                                                }
                                                                t = Instantiate_1_0(b_3, t);
                                                                LocalPopChoice(u_18);
                                                              }
                                                            else
                                                              {
                                                                t = t_18;
                                                                t = flat_list_0_0(t);
                                                              }
                                                            return(t);
                                                          }
                                                          t = try_1_0(a_3, t);
                                                          return(t);
                                                        }
                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, b_40, n_39), f_18);
                                                        t = get_pp_entry_0_0(t);
                                                        if(((w_16 != NULL) && (w_16 != t)))
                                                          _fail(t);
                                                        else
                                                          w_16 = t;
                                                        t = (ATerm) ATmakeAppl(sym__4, v_17, c_18, f_18, term_t_16);
                                                        t = symbol2abox_0_0(t);
                                                        if(((x_16 != NULL) && (x_16 != t)))
                                                          _fail(t);
                                                        else
                                                          x_16 = t;
                                                        t = (ATerm) ATmakeAppl(sym__2, g_18, w_16);
                                                        t = index_0_0(t);
                                                        i_19 = t;
                                                        t = (ATerm) ATinsert(ATempty, i_19);
                                                        t = bottomup_1_0(z_2, t);
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm q_19 = NULL;
                                          static ATerm c_3 (ATerm t);
                                          static ATerm c_3 (ATerm t)
                                          {
                                            static ATerm d_3 (ATerm t);
                                            static ATerm d_3 (ATerm t)
                                            {
                                              ATerm v_18 = t;
                                              int w_18 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  static ATerm e_3 (ATerm t);
                                                  static ATerm e_3 (ATerm t)
                                                  {
                                                    t = (ATerm) ATinsert(ATempty, not_null(x_16));
                                                    return(t);
                                                  }
                                                  t = Instantiate_1_0(e_3, t);
                                                  LocalPopChoice(w_18);
                                                }
                                              else
                                                {
                                                  t = v_18;
                                                  t = flat_list_0_0(t);
                                                }
                                              return(t);
                                            }
                                            t = try_1_0(d_3, t);
                                            return(t);
                                          }
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, b_40, n_39), f_18);
                                          t = get_pp_entry_0_0(t);
                                          if(((w_16 != NULL) && (w_16 != t)))
                                            _fail(t);
                                          else
                                            w_16 = t;
                                          t = (ATerm) ATmakeAppl(sym__4, v_17, c_18, f_18, term_t_16);
                                          t = symbol2abox_0_0(t);
                                          if(((x_16 != NULL) && (x_16 != t)))
                                            _fail(t);
                                          else
                                            x_16 = t;
                                          t = (ATerm) ATmakeAppl(sym__2, g_18, w_16);
                                          t = index_0_0(t);
                                          q_19 = t;
                                          t = (ATerm) ATinsert(ATempty, q_19);
                                          t = bottomup_1_0(c_3, t);
                                        }
                                    }
                                  else
                                    {
                                      ATerm y_19 = NULL;
                                      static ATerm f_3 (ATerm t);
                                      static ATerm f_3 (ATerm t)
                                      {
                                        static ATerm g_3 (ATerm t);
                                        static ATerm g_3 (ATerm t)
                                        {
                                          ATerm z_18 = t;
                                          int b_19 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              static ATerm h_3 (ATerm t);
                                              static ATerm h_3 (ATerm t)
                                              {
                                                t = (ATerm) ATinsert(ATempty, not_null(x_16));
                                                return(t);
                                              }
                                              t = Instantiate_1_0(h_3, t);
                                              LocalPopChoice(b_19);
                                            }
                                          else
                                            {
                                              t = z_18;
                                              t = flat_list_0_0(t);
                                            }
                                          return(t);
                                        }
                                        t = try_1_0(g_3, t);
                                        return(t);
                                      }
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, b_40, n_39), f_18);
                                      t = get_pp_entry_0_0(t);
                                      if(((w_16 != NULL) && (w_16 != t)))
                                        _fail(t);
                                      else
                                        w_16 = t;
                                      t = (ATerm) ATmakeAppl(sym__4, v_17, c_18, f_18, term_t_16);
                                      t = symbol2abox_0_0(t);
                                      if(((x_16 != NULL) && (x_16 != t)))
                                        _fail(t);
                                      else
                                        x_16 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, g_18, w_16);
                                      t = index_0_0(t);
                                      y_19 = t;
                                      t = (ATerm) ATinsert(ATempty, y_19);
                                      t = bottomup_1_0(f_3, t);
                                    }
                                }
                              else
                                {
                                  ATerm i_20 = NULL;
                                  static ATerm i_3 (ATerm t);
                                  static ATerm i_3 (ATerm t)
                                  {
                                    static ATerm j_3 (ATerm t);
                                    static ATerm j_3 (ATerm t)
                                    {
                                      ATerm c_19 = t;
                                      int d_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          static ATerm k_3 (ATerm t);
                                          static ATerm k_3 (ATerm t)
                                          {
                                            t = (ATerm) ATinsert(ATempty, not_null(x_16));
                                            return(t);
                                          }
                                          t = Instantiate_1_0(k_3, t);
                                          LocalPopChoice(d_19);
                                        }
                                      else
                                        {
                                          t = c_19;
                                          t = flat_list_0_0(t);
                                        }
                                      return(t);
                                    }
                                    t = try_1_0(j_3, t);
                                    return(t);
                                  }
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, b_40, n_39), f_18);
                                  t = get_pp_entry_0_0(t);
                                  if(((w_16 != NULL) && (w_16 != t)))
                                    _fail(t);
                                  else
                                    w_16 = t;
                                  t = (ATerm) ATmakeAppl(sym__4, v_17, c_18, f_18, term_t_16);
                                  t = symbol2abox_0_0(t);
                                  if(((x_16 != NULL) && (x_16 != t)))
                                    _fail(t);
                                  else
                                    x_16 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, g_18, w_16);
                                  t = index_0_0(t);
                                  i_20 = t;
                                  t = (ATerm) ATinsert(ATempty, i_20);
                                  t = bottomup_1_0(i_3, t);
                                }
                            }
                          else
                            {
                              ATerm s_20 = NULL;
                              static ATerm l_3 (ATerm t);
                              static ATerm l_3 (ATerm t)
                              {
                                static ATerm m_3 (ATerm t);
                                static ATerm m_3 (ATerm t)
                                {
                                  ATerm e_19 = t;
                                  int f_19 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      static ATerm n_3 (ATerm t);
                                      static ATerm n_3 (ATerm t)
                                      {
                                        t = (ATerm) ATinsert(ATempty, not_null(x_16));
                                        return(t);
                                      }
                                      t = Instantiate_1_0(n_3, t);
                                      LocalPopChoice(f_19);
                                    }
                                  else
                                    {
                                      t = e_19;
                                      t = flat_list_0_0(t);
                                    }
                                  return(t);
                                }
                                t = try_1_0(m_3, t);
                                return(t);
                              }
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, b_40, n_39), f_18);
                              t = get_pp_entry_0_0(t);
                              if(((w_16 != NULL) && (w_16 != t)))
                                _fail(t);
                              else
                                w_16 = t;
                              t = (ATerm) ATmakeAppl(sym__4, v_17, c_18, f_18, term_t_16);
                              t = symbol2abox_0_0(t);
                              if(((x_16 != NULL) && (x_16 != t)))
                                _fail(t);
                              else
                                x_16 = t;
                              t = (ATerm) ATmakeAppl(sym__2, g_18, w_16);
                              t = index_0_0(t);
                              s_20 = t;
                              t = (ATerm) ATinsert(ATempty, s_20);
                              t = bottomup_1_0(l_3, t);
                            }
                        }
                      else
                        {
                          ATerm c_21 = NULL;
                          static ATerm o_3 (ATerm t);
                          static ATerm o_3 (ATerm t)
                          {
                            static ATerm p_3 (ATerm t);
                            static ATerm p_3 (ATerm t)
                            {
                              ATerm g_19 = t;
                              int h_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  static ATerm q_3 (ATerm t);
                                  static ATerm q_3 (ATerm t)
                                  {
                                    t = (ATerm) ATinsert(ATempty, not_null(x_16));
                                    return(t);
                                  }
                                  t = Instantiate_1_0(q_3, t);
                                  LocalPopChoice(h_19);
                                }
                              else
                                {
                                  t = g_19;
                                  t = flat_list_0_0(t);
                                }
                              return(t);
                            }
                            t = try_1_0(p_3, t);
                            return(t);
                          }
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, b_40, n_39), f_18);
                          t = get_pp_entry_0_0(t);
                          if(((w_16 != NULL) && (w_16 != t)))
                            _fail(t);
                          else
                            w_16 = t;
                          t = (ATerm) ATmakeAppl(sym__4, v_17, c_18, f_18, term_t_16);
                          t = symbol2abox_0_0(t);
                          if(((x_16 != NULL) && (x_16 != t)))
                            _fail(t);
                          else
                            x_16 = t;
                          t = (ATerm) ATmakeAppl(sym__2, g_18, w_16);
                          t = index_0_0(t);
                          c_21 = t;
                          t = (ATerm) ATinsert(ATempty, c_21);
                          t = bottomup_1_0(o_3, t);
                        }
                    }
                  else
                    {
                      t = z_17;
                      if(match_cons(t, sym_prod_3))
                        {
                          c_17 = ATgetArgument(t, 0);
                          j_17 = ATgetArgument(t, 1);
                          t_17 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = v_17;
                      if(match_cons(t, sym_alt_2))
                        {
                          z_16 = ATgetArgument(t, 0);
                          a_17 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_17;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          g_17 = ATgetFirst((ATermList) t);
                          i_17 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = i_17;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = j_17;
                      if(match_cons(t, sym_alt_2))
                        {
                          n_17 = ATgetArgument(t, 0);
                          s_17 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm j_19 = t;
                        int k_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = g_17;
                            if((z_16 != t))
                              {
                                _fail(t);
                              }
                            t = n_17;
                            if((z_16 != t))
                              {
                                _fail(t);
                              }
                            t = s_17;
                            if((a_17 != t))
                              {
                                _fail(t);
                              }
                            t = (ATerm) ATmakeAppl(sym__4, z_16, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, z_16), z_16, t_17), a_18), f_18, g_18);
                            t = u_22(t);
                            LocalPopChoice(k_19);
                          }
                        else
                          {
                            t = j_19;
                            {
                              ATerm s_21 = NULL;
                              t = n_17;
                              if((z_16 != t))
                                {
                                  _fail(t);
                                }
                              t = s_17;
                              if((a_17 != t))
                                {
                                  _fail(t);
                                }
                              t = (ATerm) ATmakeAppl(sym__2, g_18, term_t_16);
                              t = add_0_0(t);
                              s_21 = t;
                              t = (ATerm) ATmakeAppl(sym__4, a_17, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, g_17), a_17, t_17), a_18), f_18, s_21);
                              t = u_22(t);
                            }
                          }
                      }
                    }
                }
              else
                {
                  t = z_17;
                  if(match_cons(t, sym_prod_3))
                    {
                      c_17 = ATgetArgument(t, 0);
                      j_17 = ATgetArgument(t, 1);
                      t_17 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = v_17;
                  if(match_cons(t, sym_alt_2))
                    {
                      z_16 = ATgetArgument(t, 0);
                      a_17 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = c_17;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      g_17 = ATgetFirst((ATermList) t);
                      i_17 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = i_17;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = j_17;
                  if(match_cons(t, sym_alt_2))
                    {
                      n_17 = ATgetArgument(t, 0);
                      s_17 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm l_19 = t;
                    int m_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = g_17;
                        if((z_16 != t))
                          {
                            _fail(t);
                          }
                        t = n_17;
                        if((z_16 != t))
                          {
                            _fail(t);
                          }
                        t = s_17;
                        if((a_17 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym__4, z_16, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, z_16), z_16, t_17), a_18), f_18, g_18);
                        t = u_22(t);
                        LocalPopChoice(m_19);
                      }
                    else
                      {
                        t = l_19;
                        {
                          ATerm t_22 = NULL;
                          t = n_17;
                          if((z_16 != t))
                            {
                              _fail(t);
                            }
                          t = s_17;
                          if((a_17 != t))
                            {
                              _fail(t);
                            }
                          t = (ATerm) ATmakeAppl(sym__2, g_18, term_t_16);
                          t = add_0_0(t);
                          t_22 = t;
                          t = (ATerm) ATmakeAppl(sym__4, a_17, (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, g_17), a_17, t_17), a_18), f_18, t_22);
                          t = u_22(t);
                        }
                      }
                  }
                }
              return(t);
            }
            t = (ATerm) ATmakeAppl(sym__2, g_40, (ATerm) ATinsert(ATempty, h_40));
            t = conc_0_0(t);
            y_16 = t;
            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_alt_2, b_40, n_39), c_40, y_16, term_t_16);
            t = u_22(t);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_star_sep_2))
            {
              b_40 = ATgetArgument(t, 0);
              n_39 = ATgetArgument(t, 1);
              {
                ATerm n_41 = NULL;
                t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, b_40, n_39);
                n_41 = t;
                t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_sep_2, b_40, n_39), c_40, g_40, h_40);
                t = h_6(n_41, c_40, g_40, h_40, t);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_sep_2))
                {
                  b_40 = ATgetArgument(t, 0);
                  n_39 = ATgetArgument(t, 1);
                  {
                    ATerm w_41 = NULL;
                    t = (ATerm) ATmakeAppl(sym_iter_sep_2, b_40, n_39);
                    w_41 = t;
                    t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_sep_2, b_40, n_39), c_40, g_40, h_40);
                    t = h_6(w_41, c_40, g_40, h_40, t);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      b_40 = ATgetArgument(t, 0);
                      {
                        ATerm z_42 = NULL;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, b_40);
                        z_42 = t;
                        t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_1, b_40), c_40, g_40, h_40);
                        t = f_6(z_42, c_40, g_40, h_40, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          b_40 = ATgetArgument(t, 0);
                          {
                            ATerm o_43 = NULL;
                            t = (ATerm) ATmakeAppl(sym_iter_1, b_40);
                            o_43 = t;
                            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_1, b_40), c_40, g_40, h_40);
                            t = f_6(o_43, c_40, g_40, h_40, t);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_opt_1))
                            {
                              b_40 = ATgetArgument(t, 0);
                              t = c_40;
                              if(match_cons(t, sym_appl_2))
                                {
                                  ATerm n_19 = ATgetArgument(t, 0);
                                  w_39 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = w_39;
                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                {
                                  o_39 = ATgetFirst((ATermList) t);
                                  p_39 = (ATerm) ATgetNext((ATermList) t);
                                  {
                                    ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,a_24 = NULL;
                                    static ATerm r_3 (ATerm t);
                                    static ATerm r_3 (ATerm t)
                                    {
                                      static ATerm v_3 (ATerm t);
                                      static ATerm v_3 (ATerm t)
                                      {
                                        ATerm o_19 = t;
                                        int p_19 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            static ATerm w_3 (ATerm t);
                                            static ATerm w_3 (ATerm t)
                                            {
                                              t = not_null(s_23);
                                              return(t);
                                            }
                                            t = Instantiate_1_0(w_3, t);
                                            LocalPopChoice(p_19);
                                          }
                                        else
                                          {
                                            t = o_19;
                                            t = flat_list_0_0(t);
                                          }
                                        return(t);
                                      }
                                      t = try_1_0(v_3, t);
                                      return(t);
                                    }
                                    t = p_39;
                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym__2, g_40, (ATerm) ATinsert(ATempty, h_40));
                                    t = conc_0_0(t);
                                    a_24 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_opt_1, b_40), a_24);
                                    t = get_pp_entry_0_0(t);
                                    p_23 = t;
                                    t = (ATerm) ATmakeAppl(sym__4, b_40, o_39, a_24, term_t_16);
                                    t = symbol2abox_0_0(t);
                                    q_23 = t;
                                    t = (ATerm) ATinsert(ATempty, q_23);
                                    t_23 = t;
                                    t = (ATerm) ATmakeAppl(sym__2, p_23, (ATerm) ATinsert(ATempty, q_23));
                                    t = d_6(p_23, t_23, t);
                                    if(match_cons(t, sym__2))
                                      {
                                        r_23 = ATgetArgument(t, 0);
                                        if(((s_23 != NULL) && (s_23 != ATgetArgument(t, 1))))
                                          _fail(ATgetArgument(t, 1));
                                        else
                                          s_23 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = r_23;
                                    t = bottomup_1_0(r_3, t);
                                  }
                                }
                              else
                                {
                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                    _fail(t);
                                  t = (ATerm) ATempty;
                                }
                            }
                          else
                            {
                              ATerm r_19 = t;
                              int s_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_sort_1))
                                    {
                                      ATerm t_19 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(s_19);
                                  {
                                    ATerm u_19 = t;
                                    int v_19 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = c_40;
                                        {
                                          ATerm w_19 = t;
                                          if((PushChoice() == 0))
                                            {
                                              t = is_string_0_0(t);
                                              PopChoice();
                                              _fail(t);
                                            }
                                          else
                                            {
                                              t = w_19;
                                            }
                                        }
                                        t = c_40;
                                        {
                                          ATerm x_19 = t;
                                          int z_19 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL,z_24 = NULL,a_25 = NULL;
                                              if(match_cons(t, sym_appl_2))
                                                {
                                                  t_24 = ATgetArgument(t, 0);
                                                  a_25 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = t_24;
                                              if(match_cons(t, sym_prod_3))
                                                {
                                                  u_24 = ATgetArgument(t, 0);
                                                  v_24 = ATgetArgument(t, 1);
                                                  z_24 = ATgetArgument(t, 2);
                                                }
                                              else
                                                _fail(t);
                                              t = c_40;
                                              t = r_6(u_24, v_24, z_24, a_25, t);
                                              LocalPopChoice(z_19);
                                            }
                                          else
                                            {
                                              t = x_19;
                                              t = fatal_ambiguity_0_0(t);
                                            }
                                        }
                                        LocalPopChoice(v_19);
                                      }
                                    else
                                      {
                                        t = u_19;
                                        t = c_40;
                                        t = is_string_0_0(t);
                                        t = (ATerm) ATmakeAppl(sym_S_1, c_40);
                                      }
                                  }
                                }
                              else
                                {
                                  t = r_19;
                                  {
                                    ATerm a_20 = t;
                                    int b_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        if(match_cons(t, sym_char_class_1))
                                          {
                                            ATerm c_20 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        LocalPopChoice(b_20);
                                        {
                                          ATerm z_43 = NULL;
                                          t = (ATerm) ATinsert(ATempty, c_40);
                                          t = implode_string_0_0(t);
                                          z_43 = t;
                                          t = (ATerm) ATmakeAppl(sym_S_1, z_43);
                                        }
                                      }
                                    else
                                      {
                                        t = a_20;
                                        if(match_cons(t, sym_lit_1))
                                          {
                                            b_40 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_S_1, b_40);
                                      }
                                  }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm seq2abox_0_0 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,h_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,p_45 = NULL;
  if(match_cons(t, sym__4))
    {
      d_45 = ATgetArgument(t, 0);
      j_45 = ATgetArgument(t, 1);
      m_45 = ATgetArgument(t, 2);
      p_45 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = d_45;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_45;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_45 = ATgetFirst((ATermList) t);
          h_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_45;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_45 = ATgetFirst((ATermList) t);
          l_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_45;
      {
        ATerm d_20 = t;
        int e_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_lit_1))
              {
                ATerm f_20 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(e_20);
            t = e_45;
            {
              ATerm g_20 = t;
              int h_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_lit_1))
                    {
                      ATerm j_20 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(h_20);
                  {
                    ATerm k_20 = t;
                    int l_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__4, h_45, l_45, m_45, p_45);
                        t = seq2abox_0_0(t);
                        LocalPopChoice(l_20);
                      }
                    else
                      {
                        t = k_20;
                        {
                          ATerm m_46 = NULL,n_46 = NULL,p_46 = NULL;
                          t = (ATerm) ATmakeAppl(sym__4, e_45, k_45, m_45, p_45);
                          t = symbol2abox_0_0(t);
                          m_46 = t;
                          t = (ATerm) ATmakeAppl(sym__2, p_45, term_t_16);
                          t = add_0_0(t);
                          p_46 = t;
                          t = (ATerm) ATmakeAppl(sym__4, h_45, l_45, m_45, p_46);
                          t = seq2abox_0_0(t);
                          n_46 = t;
                          t = (ATerm) ATinsert(CheckATermList(n_46), m_46);
                        }
                      }
                  }
                }
              else
                {
                  t = g_20;
                  {
                    ATerm v_46 = NULL,w_46 = NULL,y_46 = NULL;
                    t = (ATerm) ATmakeAppl(sym__4, e_45, k_45, m_45, p_45);
                    t = symbol2abox_0_0(t);
                    v_46 = t;
                    t = (ATerm) ATmakeAppl(sym__2, p_45, term_t_16);
                    t = add_0_0(t);
                    y_46 = t;
                    t = (ATerm) ATmakeAppl(sym__4, h_45, l_45, m_45, y_46);
                    t = seq2abox_0_0(t);
                    w_46 = t;
                    t = (ATerm) ATinsert(CheckATermList(w_46), v_46);
                  }
                }
            }
          }
        else
          {
            t = d_20;
            {
              ATerm e_47 = NULL,f_47 = NULL,h_47 = NULL;
              t = (ATerm) ATmakeAppl(sym__4, e_45, k_45, m_45, p_45);
              t = symbol2abox_0_0(t);
              e_47 = t;
              t = (ATerm) ATmakeAppl(sym__2, p_45, term_t_16);
              t = add_0_0(t);
              h_47 = t;
              t = (ATerm) ATmakeAppl(sym__4, h_45, l_45, m_45, h_47);
              t = seq2abox_0_0(t);
              f_47 = t;
              t = (ATerm) ATinsert(CheckATermList(f_47), e_47);
            }
          }
      }
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = debug_1_0(z_3, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_m_20;
  return(t);
}
ATerm pp_table_get_0_0 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL;
  j_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_20, j_47);
  t = table_get_0_0(t);
  if(match_cons(t, sym__2))
    {
      l_47 = ATgetArgument(t, 0);
      k_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_47;
  t = path_to_string_0_0(t);
  t = if_verbose1_1_0(x_3, t);
  t = (ATerm) ATmakeAppl(sym__2, l_47, k_47);
  return(t);
}
static ATerm i_6 (ATerm s_22, ATerm r_22, ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL;
  n_47 = t;
  if(match_cons(t, sym_PP_Entry_2))
    {
      o_47 = ATgetArgument(t, 0);
      p_47 = ATgetArgument(t, 1);
      {
        ATerm o_20 = t;
        int p_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_47 = NULL;
            t = s_22;
            t = mk_key_0_0(t);
            r_47 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_n_20, r_47);
            t = table_get_0_0(t);
            t = n_47;
            LocalPopChoice(p_20);
          }
        else
          {
            t = o_20;
            t = n_47;
            t = s_6(o_47, p_47, t);
          }
      }
    }
  else
    {
      ATerm v_47 = NULL;
      t = s_22;
      t = mk_key_0_0(t);
      v_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_n_20, v_47);
      t = table_get_0_0(t);
      t = n_47;
    }
  return(t);
}
ATerm add_arg_flags_0_0 (ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL;
  if(match_cons(t, sym__2))
    {
      z_47 = ATgetArgument(t, 0);
      a_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_48;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      ATerm g_48 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, z_47, a_48);
      t = separate_by_0_0(t);
      g_48 = t;
      t = (ATerm) ATinsert(CheckATermList(g_48), z_47);
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_q_20;
  return(t);
}
ATerm xtc_ast2abox_1_0 (ATerm c_43 (ATerm), ATerm t)
{
  static ATerm m_4 (ATerm t);
  static ATerm m_4 (ATerm t)
  {
    ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL;
    t = term_g_16;
    t = pass_verbose_0_0(t);
    h_48 = t;
    t = term_g_16;
    t = c_43(t);
    t = map_1_0(xtc_find_0_0, t);
    j_48 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_r_20, j_48);
    t = add_arg_flags_0_0(t);
    i_48 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_48, i_48);
    t = conc_0_0(t);
    return(t);
  }
  t = xtc_transform_2_0(a_4, m_4, t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_t_20;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_u_20;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_v_20);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_x_20;
  return(t);
}
ATerm xtc_pp_sdf2_0_0 (ATerm t)
{
  t = xtc_transform_2_0(n_4, pass_verbose_0_0, t);
  t = xtc_transform_2_0(q_4, pass_verbose_0_0, t);
  t = xtc_ast2abox_1_0(r_4, t);
  t = xtc_transform_2_0(s_4, pass_verbose_0_0, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm n_48 = NULL;
  t = write_to_0_0(t);
  t = xtc_pp_sdf2_0_0(t);
  if(match_cons(t, sym_FILE_1))
    {
      n_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_48;
  t = read_text_file_0_0(t);
  t = trim_1_0(u_4, t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm o_48 = NULL;
  o_48 = t;
  if(match_int(t, 10))
    {
      t = o_48;
    }
  else
    {
      if(match_int(t, 13))
        {
          t = o_48;
        }
      else
        {
          if(match_int(t, 32))
            {
              t = o_48;
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 9)))
                _fail(t);
              t = o_48;
            }
        }
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_a_21;
  return(t);
}
ATerm missing_constructor_warning_0_0 (ATerm t)
{
  t = xtc_temp_files_1_0(t_4, t);
  t = say_1_0(w_4, t);
  t = debug_1_0(y_4, t);
  return(t);
}
static ATerm h_52 (ATerm h_49, ATerm i_49, ATerm j_49, ATerm k_49, ATerm t)
{
  t = j_49;
  t = fetch_1_0(z_4, t);
  t = j_49;
  {
    ATerm b_21 = t;
    if((PushChoice() == 0))
      {
        t = get_cnstr_name_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_prod_3, h_49, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_sort_1, i_49)), (ATerm) ATmakeAppl(sym_attrs_1, j_49));
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm ignore_prod_0_0 (ATerm t)
{
  ATerm o_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL;
  t_49 = t;
  if(match_cons(t, sym_prod_3))
    {
      u_49 = ATgetArgument(t, 0);
      v_49 = ATgetArgument(t, 1);
      w_49 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_49;
  if(match_cons(t, sym_attrs_1))
    {
      x_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_49;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_49;
      {
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_sort_1))
              {
                ATerm f_21 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(e_21);
            t = u_49;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_49 = ATgetFirst((ATermList) t);
                q_49 = (ATerm) ATgetNext((ATermList) t);
                t = q_49;
                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                  {
                    t = o_49;
                    {
                      ATerm g_21 = t;
                      int h_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_sort_1))
                            {
                              ATerm i_21 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(h_21);
                          {
                            ATerm j_21 = t;
                            int k_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = x_49;
                                t = fetch_1_0(d_5, t);
                                t = t_49;
                                LocalPopChoice(k_21);
                              }
                            else
                              {
                                t = j_21;
                                {
                                  ATerm l_21 = t;
                                  int m_21 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = x_49;
                                      t = fetch_1_0(j_5, t);
                                      t = t_49;
                                      LocalPopChoice(m_21);
                                    }
                                  else
                                    {
                                      t = l_21;
                                      t = t_49;
                                    }
                                }
                              }
                          }
                        }
                      else
                        {
                          t = g_21;
                          {
                            ATerm n_21 = t;
                            int o_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = x_49;
                                t = fetch_1_0(k_5, t);
                                t = t_49;
                                LocalPopChoice(o_21);
                              }
                            else
                              {
                                t = n_21;
                                {
                                  ATerm p_21 = t;
                                  int r_21 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = x_49;
                                      t = fetch_1_0(l_5, t);
                                      t = t_49;
                                      LocalPopChoice(r_21);
                                    }
                                  else
                                    {
                                      t = p_21;
                                      t = x_49;
                                      t = fetch_1_0(m_5, t);
                                      t = t_49;
                                    }
                                }
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    t = o_49;
                    {
                      ATerm t_21 = t;
                      int u_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = x_49;
                          t = fetch_1_0(o_5, t);
                          t = t_49;
                          LocalPopChoice(u_21);
                        }
                      else
                        {
                          t = t_21;
                          {
                            ATerm v_21 = t;
                            int w_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = x_49;
                                t = fetch_1_0(p_5, t);
                                t = t_49;
                                LocalPopChoice(w_21);
                              }
                            else
                              {
                                t = v_21;
                                t = x_49;
                                t = fetch_1_0(q_5, t);
                                t = t_49;
                              }
                          }
                        }
                    }
                  }
              }
            else
              {
                ATerm x_21 = t;
                int y_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = x_49;
                    t = fetch_1_0(r_5, t);
                    t = t_49;
                    LocalPopChoice(y_21);
                  }
                else
                  {
                    t = x_21;
                    {
                      ATerm z_21 = t;
                      int b_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = x_49;
                          t = fetch_1_0(t_5, t);
                          t = t_49;
                          LocalPopChoice(b_22);
                        }
                      else
                        {
                          t = z_21;
                          t = x_49;
                          t = fetch_1_0(w_5, t);
                          t = t_49;
                        }
                    }
                  }
              }
          }
        else
          {
            t = d_21;
            if(match_cons(t, sym_cf_1))
              {
                r_49 = ATgetArgument(t, 0);
                t = r_49;
                if(match_cons(t, sym_sort_1))
                  {
                    s_49 = ATgetArgument(t, 0);
                    t = u_49;
                    {
                      ATerm c_22 = t;
                      int d_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = x_49;
                          t = fetch_1_0(y_5, t);
                          t = t_49;
                          LocalPopChoice(d_22);
                        }
                      else
                        {
                          t = c_22;
                          {
                            ATerm e_22 = t;
                            int h_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = x_49;
                                t = fetch_1_0(e_6, t);
                                t = t_49;
                                LocalPopChoice(h_22);
                              }
                            else
                              {
                                t = e_22;
                                {
                                  ATerm i_22 = t;
                                  int k_22 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = h_52(u_49, s_49, x_49, t_49, t);
                                      LocalPopChoice(k_22);
                                    }
                                  else
                                    {
                                      t = i_22;
                                      t = x_49;
                                      t = fetch_1_0(j_6, t);
                                      t = t_49;
                                    }
                                }
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    t = u_49;
                    {
                      ATerm l_22 = t;
                      int n_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = x_49;
                          t = fetch_1_0(k_6, t);
                          t = t_49;
                          LocalPopChoice(n_22);
                        }
                      else
                        {
                          t = l_22;
                          {
                            ATerm v_22 = t;
                            int w_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = x_49;
                                t = fetch_1_0(n_6, t);
                                t = t_49;
                                LocalPopChoice(w_22);
                              }
                            else
                              {
                                t = v_22;
                                t = x_49;
                                t = fetch_1_0(o_6, t);
                                t = t_49;
                              }
                          }
                        }
                    }
                  }
              }
            else
              {
                t = u_49;
                {
                  ATerm x_22 = t;
                  int z_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = x_49;
                      t = fetch_1_0(p_6, t);
                      t = t_49;
                      LocalPopChoice(z_22);
                    }
                  else
                    {
                      t = x_22;
                      {
                        ATerm b_23 = t;
                        int c_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = x_49;
                            t = fetch_1_0(u_6, t);
                            t = t_49;
                            LocalPopChoice(c_23);
                          }
                        else
                          {
                            t = b_23;
                            t = x_49;
                            t = fetch_1_0(w_6, t);
                            t = t_49;
                          }
                      }
                    }
                }
              }
          }
      }
    }
  else
    {
      t = v_49;
      if(match_cons(t, sym_cf_1))
        {
          r_49 = ATgetArgument(t, 0);
          t = r_49;
          if(match_cons(t, sym_sort_1))
            {
              s_49 = ATgetArgument(t, 0);
              t = u_49;
              {
                ATerm d_23 = t;
                int e_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = x_49;
                    t = fetch_1_0(x_6, t);
                    t = t_49;
                    LocalPopChoice(e_23);
                  }
                else
                  {
                    t = d_23;
                    {
                      ATerm f_23 = t;
                      int g_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = x_49;
                          t = fetch_1_0(y_6, t);
                          t = t_49;
                          LocalPopChoice(g_23);
                        }
                      else
                        {
                          t = f_23;
                          {
                            ATerm h_23 = t;
                            int i_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = h_52(u_49, s_49, x_49, t_49, t);
                                LocalPopChoice(i_23);
                              }
                            else
                              {
                                t = h_23;
                                t = x_49;
                                t = fetch_1_0(z_6, t);
                                t = t_49;
                              }
                          }
                        }
                    }
                  }
              }
            }
          else
            {
              t = u_49;
              {
                ATerm j_23 = t;
                int k_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = x_49;
                    t = fetch_1_0(b_7, t);
                    t = t_49;
                    LocalPopChoice(k_23);
                  }
                else
                  {
                    t = j_23;
                    {
                      ATerm l_23 = t;
                      int n_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = x_49;
                          t = fetch_1_0(c_7, t);
                          t = t_49;
                          LocalPopChoice(n_23);
                        }
                      else
                        {
                          t = l_23;
                          t = x_49;
                          t = fetch_1_0(e_7, t);
                          t = t_49;
                        }
                    }
                  }
              }
            }
        }
      else
        {
          t = u_49;
          {
            ATerm y_23 = t;
            int z_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = x_49;
                t = fetch_1_0(h_7, t);
                t = t_49;
                LocalPopChoice(z_23);
              }
            else
              {
                t = y_23;
                {
                  ATerm b_24 = t;
                  int c_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = x_49;
                      t = fetch_1_0(i_7, t);
                      t = t_49;
                      LocalPopChoice(c_24);
                    }
                  else
                    {
                      t = b_24;
                      t = x_49;
                      t = fetch_1_0(k_7, t);
                      t = t_49;
                    }
                }
              }
          }
        }
    }
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm s_42 (ATerm), ATerm t)
{
  ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL,l_52 = NULL;
  t = number_nonterminals_0_0(t);
  l_52 = t;
  t = make_0_0(t);
  i_52 = t;
  t = l_52;
  {
    static ATerm p_7 (ATerm t);
    static ATerm p_7 (ATerm t)
    {
      static ATerm q_7 (ATerm t);
      static ATerm q_7 (ATerm t)
      {
        ATerm m_52 = NULL;
        t = term_g_16;
        t = s_42(t);
        m_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_52, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(q_7, t);
      return(t);
    }
    t = map_1_0(p_7, t);
  }
  t = concat_0_0(t);
  j_52 = t;
  t = term_g_16;
  t = s_42(t);
  k_52 = t;
  t = (ATerm) ATinsert(CheckATermList(j_52), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, k_52), i_52));
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL,b_53 = NULL,d_53 = NULL;
  if(match_cons(t, sym_term_1))
    {
      d_53 = ATgetArgument(t, 0);
      t = d_53;
      if(match_cons(t, sym_appl_2))
        {
          b_53 = ATgetArgument(t, 0);
          w_52 = ATgetArgument(t, 1);
          t = b_53;
          if(match_cons(t, sym_uqlit_1))
            {
              v_52 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_52;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("cons", 0, ATtrue)))
            _fail(t);
          t = w_52;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_52 = ATgetFirst((ATermList) t);
              a_53 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = x_52;
          if(match_cons(t, sym_fun_1))
            {
              y_52 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_52;
          if(match_cons(t, sym_qlit_1))
            {
              z_52 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_53;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = z_52;
          t = un_double_quote_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_cons_1))
            {
              b_53 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_53;
        }
    }
  else
    {
      if(match_cons(t, sym_cons_1))
        {
          d_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_53;
    }
  return(t);
}
ATerm get_cnstr_name_0_0 (ATerm t)
{
  t = fetch_elem_1_0(s_7, t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm d_24 = t;
  if((PushChoice() == 0))
    {
      t = has_option_1_0(w_7, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_24;
    }
  t = missing_constructor_warning_0_0(t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_e_24;
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL;
  r_53 = t;
  if(match_cons(t, sym_prod_fun_4))
    {
      s_53 = ATgetArgument(t, 0);
      t_53 = ATgetArgument(t, 1);
      u_53 = ATgetArgument(t, 2);
      q_53 = ATgetArgument(t, 3);
      {
        ATerm z_53 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_i_24)), t_53), (ATerm) ATinsert(ATinsert(ATempty, term_g_24), (ATerm) ATmakeAppl(sym_lit_1, s_53)));
        t = concat_0_0(t);
        z_53 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, z_53, u_53, q_53);
        t = generate_pp_entries_0_0(t);
      }
    }
  else
    {
      ATerm n_25 = NULL;
      if(match_cons(t, sym_prod_3))
        {
          s_53 = ATgetArgument(t, 0);
          {
            ATerm j_24 = ATgetArgument(t, 1);
          }
          u_53 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = r_53;
      {
        ATerm k_24 = t;
        int l_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_25 = NULL;
            t = u_53;
            if(match_cons(t, sym_attrs_1))
              {
                o_25 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = o_25;
            t = get_cnstr_name_0_0(t);
            n_25 = t;
            LocalPopChoice(l_24);
            {
              static ATerm u_7 (ATerm t);
              static ATerm u_7 (ATerm t)
              {
                t = n_25;
                return(t);
              }
              t = s_53;
              t = symbols2pp_entries_1_0(u_7, t);
            }
          }
        else
          {
            t = k_24;
            {
              ATerm m_24 = t;
              int n_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ignore_prod_0_0(t);
                  LocalPopChoice(n_24);
                  t = (ATerm) ATempty;
                }
              else
                {
                  t = m_24;
                  t = try_1_0(v_7, t);
                  t = (ATerm) ATempty;
                }
            }
          }
      }
    }
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm o_24 = t;
  int p_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(p_24);
    }
  else
    {
      t = o_24;
      {
        ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL,l_54 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_54 = ATgetFirst((ATermList) t);
            f_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_54;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_54 = ATgetFirst((ATermList) t);
            h_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_54;
        t = pair_0_0(t);
        l_54 = t;
        t = (ATerm) ATinsert(CheckATermList(l_54), (ATerm) ATmakeAppl(sym__2, e_54, g_54));
      }
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm n_56 = NULL;
  t = _2_0(_id, b_8, t);
  if(match_cons(t, sym_lit_1))
    {
      n_56 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_q_24, (ATerm) ATmakeAppl(sym_S_1, n_56));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          n_56 = ATgetArgument(t, 0);
          {
            ATerm r_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, n_56);
    }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = map_1_0(f_8, t);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL;
  j_56 = t;
  if(match_cons(t, sym_iter_1))
    {
      k_56 = ATgetArgument(t, 0);
      {
        ATerm u_25 = NULL,a_5 = NULL;
        t = SSLgetAnnotations(j_56);
        u_25 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, k_56);
        a_5 = t;
        t = SSLsetAnnotations(a_5, u_25);
      }
    }
  else
    {
      if(match_cons(t, sym_iter_star_1))
        {
          k_56 = ATgetArgument(t, 0);
          {
            ATerm e_26 = NULL,b_5 = NULL;
            t = SSLgetAnnotations(j_56);
            e_26 = t;
            t = (ATerm) ATmakeAppl(sym_iter_star_1, k_56);
            b_5 = t;
            t = SSLsetAnnotations(b_5, e_26);
          }
        }
      else
        {
          if(match_cons(t, sym_iter_sep_2))
            {
              k_56 = ATgetArgument(t, 0);
              l_56 = ATgetArgument(t, 1);
              {
                ATerm m_26 = NULL,c_5 = NULL;
                t = SSLgetAnnotations(j_56);
                m_26 = t;
                t = (ATerm) ATmakeAppl(sym_iter_sep_2, k_56, l_56);
                c_5 = t;
                t = SSLsetAnnotations(c_5, m_26);
              }
            }
          else
            {
              ATerm w_26 = NULL,e_5 = NULL;
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  k_56 = ATgetArgument(t, 0);
                  l_56 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(j_56);
              w_26 = t;
              t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, k_56, l_56);
              e_5 = t;
              t = SSLsetAnnotations(e_5, w_26);
            }
        }
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL,v_56 = NULL,f_5 = NULL;
  t_56 = t;
  if(match_cons(t, sym_lit_1))
    {
      s_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_56);
  r_56 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, s_56);
  f_5 = t;
  t = SSLsetAnnotations(f_5, r_56);
  if(match_cons(t, sym_lit_1))
    {
      v_56 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_q_24, (ATerm) ATmakeAppl(sym_S_1, v_56));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          v_56 = ATgetArgument(t, 0);
          {
            ATerm s_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, v_56);
    }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL;
  static ATerm j_8 (ATerm t);
  static ATerm l_8 (ATerm t);
  static ATerm j_8 (ATerm t)
  {
    ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL,l_57 = NULL,g_5 = NULL;
    j_57 = t;
    if(match_cons(t, sym_lit_1))
      {
        i_57 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_57);
    h_57 = t;
    t = (ATerm) ATmakeAppl(sym_lit_1, i_57);
    g_5 = t;
    t = SSLsetAnnotations(g_5, h_57);
    if(match_cons(t, sym_lit_1))
      {
        l_57 = ATgetArgument(t, 0);
        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_q_24, (ATerm) ATmakeAppl(sym_S_1, l_57));
      }
    else
      {
        if(match_cons(t, sym__2))
          {
            l_57 = ATgetArgument(t, 0);
            {
              ATerm b_25 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Arg_1, l_57);
      }
    if(((f_57 != NULL) && (f_57 != t)))
      _fail(t);
    else
      f_57 = t;
    return(t);
  }
  static ATerm l_8 (ATerm t)
  {
    ATerm d_58 = NULL;
    t = _2_0(_id, m_8, t);
    if(match_cons(t, sym_lit_1))
      {
        d_58 = ATgetArgument(t, 0);
        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_q_24, (ATerm) ATmakeAppl(sym_S_1, d_58));
      }
    else
      {
        if(match_cons(t, sym__2))
          {
            d_58 = ATgetArgument(t, 0);
            {
              ATerm c_25 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Arg_1, d_58);
      }
    if(((g_57 != NULL) && (g_57 != t)))
      _fail(t);
    else
      g_57 = t;
    return(t);
  }
  t = _2_0(j_8, l_8, t);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_f_25), (ATerm) ATinsert(ATinsert(ATempty, not_null(g_57)), not_null(f_57)));
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL;
  a_58 = t;
  if(match_cons(t, sym_iter_1))
    {
      b_58 = ATgetArgument(t, 0);
      {
        ATerm f_27 = NULL,h_5 = NULL;
        t = SSLgetAnnotations(a_58);
        f_27 = t;
        t = (ATerm) ATmakeAppl(sym_iter_1, b_58);
        h_5 = t;
        t = SSLsetAnnotations(h_5, f_27);
      }
    }
  else
    {
      ATerm m_27 = NULL,i_5 = NULL;
      if(match_cons(t, sym_iter_star_1))
        {
          b_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_58);
      m_27 = t;
      t = (ATerm) ATmakeAppl(sym_iter_star_1, b_58);
      i_5 = t;
      t = SSLsetAnnotations(i_5, m_27);
    }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm i_58 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      i_58 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_q_24, (ATerm) ATmakeAppl(sym_S_1, i_58));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          i_58 = ATgetArgument(t, 0);
          {
            ATerm g_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, i_58);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL;
  ATerm i_25 = t;
  int j_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_55 = NULL;
      t = reverse_0_0(t);
      t = Cons_2_0(x_7, y_7, t);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_55 = ATgetFirst((ATermList) t);
          e_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm k_25 = t;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, Nil_0_0, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = k_25;
          }
      }
      t = e_55;
      t = reverse_0_0(t);
      j_55 = t;
      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, f_55), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, j_55)));
      LocalPopChoice(j_25);
    }
  else
    {
      t = i_25;
      {
        ATerm l_25 = t;
        int m_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = reverse_0_0(t);
            {
              static ATerm g_8 (ATerm t);
              static ATerm h_8 (ATerm t);
              static ATerm g_8 (ATerm t)
              {
                ATerm b_57 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    b_57 = ATgetArgument(t, 0);
                    t = (ATerm) ATmakeAppl(sym_FBOX_2, term_q_24, (ATerm) ATmakeAppl(sym_S_1, b_57));
                  }
                else
                  {
                    if(match_cons(t, sym__2))
                      {
                        b_57 = ATgetArgument(t, 0);
                        {
                          ATerm p_25 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Arg_1, b_57);
                  }
                if(((i_55 != NULL) && (i_55 != t)))
                  _fail(t);
                else
                  i_55 = t;
                return(t);
              }
              static ATerm h_8 (ATerm t)
              {
                ATerm q_25 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = q_25;
                  }
                t = reverse_0_0(t);
                if(((g_55 != NULL) && (g_55 != t)))
                  _fail(t);
                else
                  g_55 = t;
                return(t);
              }
              t = Cons_2_0(g_8, h_8, t);
            }
            t = not_null(g_55);
            t = pair_0_0(t);
            t = map_1_0(i_8, t);
            h_55 = t;
            t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_55)), h_55));
            LocalPopChoice(m_25);
          }
        else
          {
            t = l_25;
            t = map_1_0(n_8, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm r_25 = t;
  if((PushChoice() == 0))
    {
      ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL,s_5 = NULL;
      u_58 = t;
      if(match_cons(t, sym_lit_1))
        {
          t_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_58);
      s_58 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, t_58);
      s_5 = t;
      t = SSLsetAnnotations(s_5, s_58);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_25;
    }
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_t_16;
  return(t);
}
ATerm number_node_1_0 (ATerm w_42 (ATerm), ATerm t)
{
  static ATerm m_59 (ATerm t);
  static ATerm m_59 (ATerm t)
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2_0(_id, Nil_0_0, t);
        t = (ATerm) ATempty;
        LocalPopChoice(t_25);
      }
    else
      {
        t = s_25;
        {
          ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL;
          if(match_cons(t, sym__2))
            {
              f_59 = ATgetArgument(t, 0);
              g_59 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_59;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_59 = ATgetFirst((ATermList) t);
              i_59 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm v_25 = t;
            int w_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_59 = NULL,k_59 = NULL;
                t = h_59;
                t = w_42(t);
                t = (ATerm) ATmakeAppl(sym__2, f_59, term_t_16);
                t = add_0_0(t);
                k_59 = t;
                t = (ATerm) ATmakeAppl(sym__2, k_59, i_59);
                t = m_59(t);
                j_59 = t;
                t = (ATerm) ATinsert(CheckATermList(j_59), (ATerm) ATmakeAppl(sym__2, f_59, h_59));
                LocalPopChoice(w_25);
              }
            else
              {
                t = v_25;
                {
                  ATerm l_59 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, f_59, i_59);
                  t = m_59(t);
                  l_59 = t;
                  t = (ATerm) ATinsert(CheckATermList(l_59), h_59);
                }
              }
          }
        }
      }
    return(t);
  }
  t = split_2_0(p_8, _id, t);
  t = m_59(t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = try_1_0(s_8, t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm n_59 = NULL;
  if(match_cons(t, sym_label_2))
    {
      ATerm x_25 = ATgetArgument(t, 0);
      n_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_59;
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  t = map_1_0(q_8, t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  t = try_1_0(w_8, t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm o_59 = NULL;
  o_59 = t;
  {
    ATerm y_25 = t;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_25;
      }
  }
  t = (ATerm) ATinsert(ATempty, o_59);
  return(t);
}
ATerm argument_list_0_0 (ATerm t)
{
  t = map_1_0(v_8, t);
  t = concat_0_0(t);
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm r_59 = NULL,s_59 = NULL,u_59 = NULL,v_59 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      u_59 = ATgetArgument(t, 0);
      v_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_59;
  if(match_cons(t, sym_alt_2))
    {
      r_59 = ATgetArgument(t, 0);
      s_59 = ATgetArgument(t, 1);
      {
        ATerm z_25 = t;
        int a_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_59 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, r_59, s_59);
            t = flat_alt_0_0(t);
            z_59 = t;
            t = (ATerm) ATinsert(CheckATermList(z_59), u_59);
            LocalPopChoice(a_26);
          }
        else
          {
            t = z_25;
            t = (ATerm) ATinsert(ATinsert(ATempty, v_59), u_59);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, v_59), u_59);
    }
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = topdown_1_0(g_9, t);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = try_1_0(h_9, t);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL,v_61 = NULL,u_5 = NULL;
  v_61 = t;
  if(match_cons(t, sym_Arg_1))
    {
      u_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_61);
  t_61 = t;
  t = (ATerm) ATmakeAppl(sym_Arg_1, u_61);
  u_5 = t;
  t = SSLsetAnnotations(u_5, t_61);
  t = term_c_26;
  return(t);
}
static ATerm i_9 (ATerm t)
{
  t = _2_0(_id, k_9, t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm b_62 = NULL,c_62 = NULL;
  ATerm d_26 = t;
  int f_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_iter_sep_n_3))
        {
          b_62 = ATgetArgument(t, 0);
          c_62 = ATgetArgument(t, 1);
          {
            ATerm g_26 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_26);
      t = (ATerm) ATmakeAppl(sym_iter_sep_n_2, b_62, c_62);
    }
  else
    {
      t = d_26;
      if(match_cons(t, sym_iter_n_2))
        {
          b_62 = ATgetArgument(t, 0);
          {
            ATerm h_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_iter_n_1, b_62);
    }
  return(t);
}
ATerm symbol2abox_1_0 (ATerm t_42 (ATerm), ATerm t)
{
  ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL;
  static ATerm i_63 (ATerm t);
  static ATerm i_63 (ATerm t)
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL,n_61 = NULL;
        if(match_cons(t, sym__2))
          {
            e_61 = ATgetArgument(t, 0);
            h_61 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_61;
        {
          ATerm k_26 = t;
          int l_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_lit_1))
                {
                  ATerm n_26 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(l_26);
              t = (ATerm) ATempty;
            }
          else
            {
              t = k_26;
              if(match_cons(t, sym__2))
                {
                  i_61 = ATgetArgument(t, 0);
                  j_61 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = j_61;
              {
                ATerm o_26 = t;
                int p_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_sort_1))
                      {
                        ATerm q_26 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(p_26);
                    t = (ATerm) ATempty;
                  }
                else
                  {
                    t = o_26;
                    {
                      ATerm r_26 = t;
                      int s_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_char_class_1))
                            {
                              ATerm t_26 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(s_26);
                          t = (ATerm) ATempty;
                        }
                      else
                        {
                          t = r_26;
                          {
                            ATerm r_61 = NULL,s_61 = NULL;
                            if(match_cons(t, sym_alt_2))
                              {
                                k_61 = ATgetArgument(t, 0);
                                l_61 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = e_61;
                            if(match_cons(t, sym__2))
                              {
                                f_61 = ATgetArgument(t, 0);
                                g_61 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = l_61;
                            if(match_cons(t, sym_alt_2))
                              {
                                m_61 = ATgetArgument(t, 0);
                                n_61 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = f_61;
                            if(((z_60 != NULL) && (z_60 != t)))
                              _fail(t);
                            else
                              z_60 = t;
                            t = g_61;
                            if(((a_61 != NULL) && (a_61 != t)))
                              _fail(t);
                            else
                              a_61 = t;
                            t = i_61;
                            if(((b_61 != NULL) && (b_61 != t)))
                              _fail(t);
                            else
                              b_61 = t;
                            t = (ATerm) ATmakeAppl(sym_alt_2, k_61, (ATerm) ATmakeAppl(sym_alt_2, m_61, n_61));
                            t = flat_alt_0_0(t);
                            r_61 = t;
                            t = (ATerm) ATmakeAppl(sym__2, term_u_26, r_61);
                            t = mkterm_0_0(t);
                            s_61 = t;
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_61, g_61), (ATerm) ATmakeAppl(sym__2, i_61, s_61));
                            t = i_63(t);
                            t = Cons_2_0(f_9, _id, t);
                          }
                        }
                    }
                  }
              }
            }
        }
        LocalPopChoice(j_26);
      }
    else
      {
        t = i_26;
        {
          ATerm v_26 = t;
          int x_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2_0(_id, i_9, t);
              t = i_63(t);
              LocalPopChoice(x_26);
            }
          else
            {
              t = v_26;
              {
                static ATerm j_63 (ATerm g_62, ATerm h_62, ATerm i_62, ATerm j_62, ATerm k_62, ATerm t);
                static ATerm j_63 (ATerm g_62, ATerm h_62, ATerm i_62, ATerm j_62, ATerm k_62, ATerm t)
                {
                  ATerm n_62 = NULL,o_62 = NULL,p_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL;
                  t = SSL_explode_term(j_62);
                  if(match_cons(t, sym__2))
                    {
                      r_62 = ATgetArgument(t, 0);
                      s_62 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, h_62, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, i_62, r_62)));
                  t = conc_0_0(t);
                  n_62 = t;
                  t = s_62;
                  t = argument_list_0_0(t);
                  t = number_nonterminals_0_0(t);
                  t_62 = t;
                  t = make_0_0(t);
                  o_62 = t;
                  t = t_62;
                  {
                    static ATerm l_9 (ATerm t);
                    static ATerm l_9 (ATerm t)
                    {
                      ATerm v_62 = NULL;
                      v_62 = t;
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_62, n_62), v_62);
                      t = i_63(t);
                      return(t);
                    }
                    t = map_1_0(l_9, t);
                  }
                  t = concat_0_0(t);
                  p_62 = t;
                  t = (ATerm) ATinsert(CheckATermList(p_62), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, g_62, n_62), o_62));
                  return(t);
                }
                ATerm w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL;
                x_62 = t;
                if(match_cons(t, sym__2))
                  {
                    y_62 = ATgetArgument(t, 0);
                    b_63 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_62;
                if(match_cons(t, sym__2))
                  {
                    z_62 = ATgetArgument(t, 0);
                    a_63 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = b_63;
                if(match_cons(t, sym__2))
                  {
                    c_63 = ATgetArgument(t, 0);
                    d_63 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = d_63;
                if(match_cons(t, sym_bracket_symbol_1))
                  {
                    w_62 = ATgetArgument(t, 0);
                    {
                      ATerm y_26 = t;
                      int z_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_62, a_63), (ATerm) ATmakeAppl(sym__2, c_63, w_62));
                          t = i_63(t);
                          LocalPopChoice(z_26);
                        }
                      else
                        {
                          t = y_26;
                          t = j_63(z_62, a_63, c_63, d_63, x_62, t);
                        }
                    }
                  }
                else
                  {
                    t = j_63(z_62, a_63, c_63, d_63, x_62, t);
                  }
              }
            }
        }
      }
    return(t);
  }
  static ATerm c_9 (ATerm t);
  static ATerm c_9 (ATerm t)
  {
    t = term_g_16;
    t = t_42(t);
    return(t);
  }
  t = split_2_0(c_9, _id, t);
  t = i_63(t);
  return(t);
}
static ATerm a_65 (ATerm r_63, ATerm s_63, ATerm t_63, ATerm t)
{
  ATerm u_63 = NULL,v_63 = NULL,x_63 = NULL;
  t = t_63;
  {
    ATerm a_27 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_63;
        t = pp_table_get_0_0(t);
        t = Snd_0_0(t);
        LocalPopChoice(b_27);
      }
    else
      {
        t = a_27;
        {
          ATerm z_63 = NULL,a_64 = NULL,b_64 = NULL,d_64 = NULL;
          t = s_63;
          t = reverse_0_0(t);
          {
            static ATerm o_9 (ATerm t);
            static ATerm p_9 (ATerm t);
            static ATerm o_9 (ATerm t)
            {
              if(((v_63 != NULL) && (v_63 != t)))
                _fail(t);
              else
                v_63 = t;
              return(t);
            }
            static ATerm p_9 (ATerm t)
            {
              t = reverse_0_0(t);
              if(((u_63 != NULL) && (u_63 != t)))
                _fail(t);
              else
                u_63 = t;
              return(t);
            }
            t = Cons_2_0(o_9, p_9, t);
          }
          t = not_null(u_63);
          t = pp_table_get_0_0(t);
          t = Fst_0_0(t);
          if(match_cons(t, sym_Path_2))
            {
              d_64 = ATgetArgument(t, 0);
              z_63 = ATgetArgument(t, 1);
              t = z_63;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_64 = ATgetFirst((ATermList) t);
                  b_64 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = b_64;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, d_64, (ATerm) ATinsert(ATempty, a_64));
            }
          else
            {
              if(match_cons(t, sym_Path1_1))
                {
                  d_64 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, d_64, (ATerm) ATempty);
            }
          x_63 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_63), r_63);
          {
            static ATerm r_9 (ATerm t);
            static ATerm r_9 (ATerm t)
            {
              t = x_63;
              return(t);
            }
            t = symbol2abox_1_0(r_9, t);
          }
          t = map_1_0(t_9, t);
          t = s_63;
          t = pp_table_get_0_0(t);
          t = Snd_0_0(t);
        }
      }
  }
  return(t);
}
static ATerm b_65 (ATerm j_64, ATerm k_64, ATerm l_64, ATerm m_64, ATerm n_64, ATerm t)
{
  t = n_64;
  {
    ATerm c_27 = t;
    int d_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_64;
        t = pp_table_get_0_0(t);
        t = Snd_0_0(t);
        LocalPopChoice(d_27);
      }
    else
      {
        t = c_27;
        t = (ATerm) ATmakeAppl(sym_prod_3, j_64, k_64, l_64);
        t = generate_pp_entries_0_0(t);
        t = map_1_0(u_9, t);
        t = m_64;
        t = pp_table_get_0_0(t);
        t = Snd_0_0(t);
      }
  }
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm h_64 = NULL,i_64 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      h_64 = ATgetArgument(t, 0);
      i_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(h_64, i_64, t);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm s_64 = NULL,t_64 = NULL;
  if(match_cons(t, sym_PP_Entry_2))
    {
      s_64 = ATgetArgument(t, 0);
      t_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(s_64, t_64, t);
  return(t);
}
ATerm get_pp_entry_0_0 (ATerm t)
{
  ATerm u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL;
  u_64 = t;
  if(match_cons(t, sym__2))
    {
      v_64 = ATgetArgument(t, 0);
      z_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_64;
  if(match_cons(t, sym_prod_3))
    {
      w_64 = ATgetArgument(t, 0);
      x_64 = ATgetArgument(t, 1);
      y_64 = ATgetArgument(t, 2);
      {
        ATerm e_27 = t;
        int g_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_65(v_64, z_64, u_64, t);
            LocalPopChoice(g_27);
          }
        else
          {
            t = e_27;
            t = b_65(w_64, x_64, y_64, z_64, u_64, t);
          }
      }
    }
  else
    {
      t = a_65(v_64, z_64, u_64, t);
    }
  return(t);
}
static ATerm w_9 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_27 = ATgetFirst((ATermList) t);
      if(((ATgetType(h_27) != AT_INT) || (ATgetInt((ATermInt) h_27) != 34)))
        _fail(t);
      {
        ATerm i_27 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(i_27) != AT_LIST) || !(ATisEmpty(i_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm uq2q_0_0 (ATerm t)
{
  ATerm c_65 = NULL;
  t = explode_string_0_0(t);
  c_65 = t;
  {
    ATerm j_27 = t;
    if((PushChoice() == 0))
      {
        t = Hd_0_0(t);
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_27;
      }
  }
  t = c_65;
  {
    ATerm k_27 = t;
    if((PushChoice() == 0))
      {
        t = at_last_1_0(w_9, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_27;
      }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_l_27)), c_65), (ATerm) ATinsert(ATempty, term_l_27));
  t = concat_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm get_constr_0_0 (ATerm t)
{
  ATerm e_65 = NULL,i_65 = NULL;
  ATerm n_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm p_27 = ATgetArgument(t, 0);
          ATerm q_27 = ATgetArgument(t, 1);
          ATerm r_27 = ATgetArgument(t, 2);
          e_65 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(o_27);
      {
        ATerm k_65 = NULL;
        t = e_65;
        {
          static ATerm x_9 (ATerm t);
          static ATerm x_9 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((k_65 != NULL) && (k_65 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_65 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(x_9, t);
        }
        t = not_null(k_65);
      }
    }
  else
    {
      t = n_27;
      {
        ATerm m_65 = NULL;
        if(match_cons(t, sym_prod_3))
          {
            ATerm s_27 = ATgetArgument(t, 0);
            ATerm u_27 = ATgetArgument(t, 1);
            i_65 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = i_65;
        {
          static ATerm a_10 (ATerm t);
          static ATerm a_10 (ATerm t)
          {
            if(match_cons(t, sym_cons_1))
              {
                if(((m_65 != NULL) && (m_65 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_65 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1_0(a_10, t);
        }
        t = not_null(m_65);
      }
    }
  return(t);
}
ATerm add_attributes_0_0 (ATerm t)
{
  ATerm r_65 = NULL,s_65 = NULL,t_65 = NULL,v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL;
  if(match_cons(t, sym__2))
    {
      v_65 = ATgetArgument(t, 0);
      z_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_65;
  if(match_cons(t, sym_prod_fun_4))
    {
      w_65 = ATgetArgument(t, 0);
      x_65 = ATgetArgument(t, 1);
      y_65 = ATgetArgument(t, 2);
      s_65 = ATgetArgument(t, 3);
      t = s_65;
      if(match_cons(t, sym_attrs_1))
        {
          r_65 = ATgetArgument(t, 0);
          {
            ATerm g_66 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, r_65, z_65);
            t = conc_0_0(t);
            g_66 = t;
            t = (ATerm) ATmakeAppl(sym_prod_fun_4, w_65, x_65, y_65, (ATerm) ATmakeAppl(sym_attrs_1, g_66));
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_fun_4, w_65, x_65, y_65, (ATerm) ATmakeAppl(sym_attrs_1, z_65));
        }
    }
  else
    {
      if(match_cons(t, sym_prod_3))
        {
          w_65 = ATgetArgument(t, 0);
          x_65 = ATgetArgument(t, 1);
          y_65 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = y_65;
      if(match_cons(t, sym_attrs_1))
        {
          t_65 = ATgetArgument(t, 0);
          {
            ATerm q_66 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, t_65, z_65);
            t = conc_0_0(t);
            q_66 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, w_65, x_65, (ATerm) ATmakeAppl(sym_attrs_1, q_66));
          }
        }
      else
        {
          if(!(match_cons(t, sym_no_attrs_0)))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_prod_3, w_65, x_65, (ATerm) ATmakeAppl(sym_attrs_1, z_65));
        }
    }
  return(t);
}
ATerm string_Hd_0_0 (ATerm t)
{
  t = explode_string_0_0(t);
  t = Hd_0_0(t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm v_27 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_27;
    }
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm w_66 = NULL;
  w_66 = t;
  t = string_Hd_0_0(t);
  {
    ATerm x_27 = t;
    int y_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_upper_0_0(t);
        LocalPopChoice(y_27);
      }
    else
      {
        t = x_27;
        t = is_lower_0_0(t);
      }
  }
  t = w_66;
  return(t);
}
static ATerm e_10 (ATerm t)
{
  t = term_z_27;
  return(t);
}
ATerm strs2constr_0_0 (ATerm t)
{
  ATerm v_66 = NULL;
  t = filter_1_0(c_10, t);
  t = Cons_2_0(d_10, _id, t);
  t = separate_by_1_0(e_10, t);
  t = concat_strings_0_0(t);
  v_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_66, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_28), term_m_28), term_l_28), term_k_28), term_j_28), term_i_28), term_h_28), term_g_28), term_f_28), term_e_28), term_d_28), term_c_28), term_b_28));
  {
    ATerm o_28 = t;
    if((PushChoice() == 0))
      {
        t = is_subterm_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_28;
      }
  }
  t = v_66;
  t = escape_0_0(t);
  t = quote_0_0(t);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_p_28);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_q_28);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_r_28);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  t = de_quote_0_0(t);
  t = de_escape_0_0(t);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  t = de_quote_0_0(t);
  t = de_escape_0_0(t);
  return(t);
}
ATerm Sym2Strs_0_0 (ATerm t)
{
  ATerm a_67 = NULL,b_67 = NULL,c_67 = NULL;
  c_67 = t;
  if(match_cons(t, sym_cf_1))
    {
      a_67 = ATgetArgument(t, 0);
      t = a_67;
      t = Sym2Strs_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          a_67 = ATgetArgument(t, 0);
          t = a_67;
          t = Sym2Strs_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_s_28);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  a_67 = ATgetArgument(t, 0);
                  b_67 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(b_67), a_67);
                  t = filter_1_0(Sym2Strs_0_0, t);
                  t = concat_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      a_67 = ATgetArgument(t, 0);
                      t = a_67;
                      t = Sym2Strs_0_0(t);
                      t = at_end_1_0(f_10, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          a_67 = ATgetArgument(t, 0);
                          t = a_67;
                          t = Sym2Strs_0_0(t);
                          t = at_end_1_0(i_10, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              a_67 = ATgetArgument(t, 0);
                              t = a_67;
                              t = Sym2Strs_0_0(t);
                              t = at_end_1_0(j_10, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  a_67 = ATgetArgument(t, 0);
                                  b_67 = ATgetArgument(t, 1);
                                  {
                                    ATerm m_67 = NULL,n_67 = NULL;
                                    t = a_67;
                                    t = Sym2Strs_0_0(t);
                                    m_67 = t;
                                    t = b_67;
                                    t = Sym2Strs_0_0(t);
                                    n_67 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_q_28)), n_67), m_67);
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      a_67 = ATgetArgument(t, 0);
                                      b_67 = ATgetArgument(t, 1);
                                      {
                                        ATerm r_67 = NULL,s_67 = NULL;
                                        t = a_67;
                                        t = Sym2Strs_0_0(t);
                                        r_67 = t;
                                        t = b_67;
                                        t = Sym2Strs_0_0(t);
                                        s_67 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_r_28)), s_67), r_67);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm t_28 = t;
                                      int u_28 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              a_67 = ATgetArgument(t, 0);
                                              {
                                                ATerm v_28 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(u_28);
                                          {
                                            ATerm u_67 = NULL;
                                            t = a_67;
                                            t = Sym2Strs_0_0(t);
                                            u_67 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_28)), u_67);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = t_28;
                                          {
                                            ATerm x_28 = t;
                                            int y_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    a_67 = ATgetArgument(t, 0);
                                                    b_67 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm z_28 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(y_28);
                                                {
                                                  ATerm y_67 = NULL,z_67 = NULL;
                                                  t = a_67;
                                                  t = Sym2Strs_0_0(t);
                                                  y_67 = t;
                                                  t = b_67;
                                                  t = Sym2Strs_0_0(t);
                                                  z_67 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_28)), z_67), y_67);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = x_28;
                                                if(match_cons(t, sym_pair_2))
                                                  {
                                                    a_67 = ATgetArgument(t, 0);
                                                    b_67 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm d_68 = NULL,e_68 = NULL;
                                                      t = a_67;
                                                      t = Sym2Strs_0_0(t);
                                                      d_68 = t;
                                                      t = b_67;
                                                      t = Sym2Strs_0_0(t);
                                                      e_68 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_68), (ATerm) ATinsert(ATempty, term_b_29)), d_68);
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_func_2))
                                                      {
                                                        a_67 = ATgetArgument(t, 0);
                                                        b_67 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_68 = NULL,i_68 = NULL;
                                                          t = a_67;
                                                          t = filter_1_0(Sym2Strs_0_0, t);
                                                          t = concat_0_0(t);
                                                          h_68 = t;
                                                          t = b_67;
                                                          t = Sym2Strs_0_0(t);
                                                          i_68 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, i_68), (ATerm) ATinsert(ATempty, term_c_29)), h_68);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_alt_2))
                                                          {
                                                            a_67 = ATgetArgument(t, 0);
                                                            b_67 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm l_68 = NULL,m_68 = NULL;
                                                              t = a_67;
                                                              t = Sym2Strs_0_0(t);
                                                              l_68 = t;
                                                              t = b_67;
                                                              t = Sym2Strs_0_0(t);
                                                              m_68 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_68), (ATerm) ATinsert(ATempty, term_d_29)), l_68);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_sort_1))
                                                              {
                                                                a_67 = ATgetArgument(t, 0);
                                                                t = (ATerm) ATinsert(ATempty, a_67);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_lit_1))
                                                                  {
                                                                    a_67 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm p_68 = NULL;
                                                                      t = a_67;
                                                                      t = try_1_0(k_10, t);
                                                                      p_68 = t;
                                                                      t = (ATerm) ATinsert(ATempty, p_68);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    ATerm e_29 = t;
                                                                    int f_29 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_label_2))
                                                                          {
                                                                            a_67 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm g_29 = ATgetArgument(t, 1);
                                                                            }
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(f_29);
                                                                        {
                                                                          ATerm r_68 = NULL;
                                                                          t = a_67;
                                                                          t = try_1_0(l_10, t);
                                                                          r_68 = t;
                                                                          t = (ATerm) ATinsert(ATempty, r_68);
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = e_29;
                                                                        if(!(match_cons(t, sym_layout_0)))
                                                                          _fail(t);
                                                                        t = (ATerm) ATinsert(ATempty, term_h_29);
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm j_29 = t;
  int l_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = toAlphaNum_0_0(t);
      LocalPopChoice(l_29);
    }
  else
    {
      t = j_29;
    }
  return(t);
}
ATerm sym2strs_0_0 (ATerm t)
{
  t = Sym2Strs_0_0(t);
  t = map_1_0(m_10, t);
  return(t);
}
ATerm syms2strs_0_0 (ATerm t)
{
  t = filter_1_0(sym2strs_0_0, t);
  t = concat_0_0(t);
  return(t);
}
ATerm quote_0_0 (ATerm t)
{
  ATerm w_27 = NULL;
  t = explode_string_0_0(t);
  w_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_l_27)), w_27), (ATerm) ATinsert(ATempty, term_l_27));
  t = concat_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_29 = ATgetFirst((ATermList) t);
      if(((ATgetType(m_29) != AT_INT) || (ATgetInt((ATermInt) m_29) != 34)))
        _fail(t);
      {
        ATerm n_29 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(n_29) != AT_LIST) || !(ATisEmpty(n_29))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm de_quote_0_0 (ATerm t)
{
  ATerm i_72 = NULL;
  t = explode_string_0_0(t);
  i_72 = t;
  t = Hd_0_0(t);
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = i_72;
  t = Tl_0_0(t);
  t = at_last_1_0(n_10, t);
  t = implode_string_0_0(t);
  return(t);
}
static ATerm d_69 (ATerm z_68, ATerm t)
{
  t = z_68;
  t = explode_string_0_0(t);
  {
    ATerm o_29 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(r_10, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_29;
      }
  }
  t = term_p_29;
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm q_29 = t;
  int r_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_num_0_0(t);
      LocalPopChoice(r_29);
    }
  else
    {
      t = q_29;
      {
        ATerm s_29 = t;
        int t_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = is_upper_0_0(t);
            LocalPopChoice(t_29);
          }
        else
          {
            t = s_29;
            {
              ATerm u_29 = t;
              int v_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = is_lower_0_0(t);
                  LocalPopChoice(v_29);
                }
              else
                {
                  t = u_29;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 45)))
                    _fail(t);
                  t = term_g_16;
                }
            }
          }
      }
    }
  return(t);
}
ATerm toAlphaNum_0_0 (ATerm t)
{
  ATerm c_69 = NULL;
  c_69 = t;
  if(match_string(t, "|="))
    {
      ATerm w_29 = t;
      int x_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_69(c_69, t);
          LocalPopChoice(x_29);
        }
      else
        {
          t = w_29;
          t = term_y_29;
        }
    }
  else
    {
      if(match_string(t, "^="))
        {
          ATerm z_29 = t;
          int a_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_69(c_69, t);
              LocalPopChoice(a_30);
            }
          else
            {
              t = z_29;
              t = term_b_30;
            }
        }
      else
        {
          if(match_string(t, "&="))
            {
              ATerm c_30 = t;
              int d_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_69(c_69, t);
                  LocalPopChoice(d_30);
                }
              else
                {
                  t = c_30;
                  t = term_e_30;
                }
            }
          else
            {
              if(match_string(t, ">>="))
                {
                  ATerm f_30 = t;
                  int h_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = d_69(c_69, t);
                      LocalPopChoice(h_30);
                    }
                  else
                    {
                      t = f_30;
                      t = term_j_30;
                    }
                }
              else
                {
                  if(match_string(t, "<<="))
                    {
                      ATerm k_30 = t;
                      int l_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = d_69(c_69, t);
                          LocalPopChoice(l_30);
                        }
                      else
                        {
                          t = k_30;
                          t = term_m_30;
                        }
                    }
                  else
                    {
                      if(match_string(t, "-="))
                        {
                          ATerm n_30 = t;
                          int p_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = d_69(c_69, t);
                              LocalPopChoice(p_30);
                            }
                          else
                            {
                              t = n_30;
                              t = term_r_30;
                            }
                        }
                      else
                        {
                          if(match_string(t, "+="))
                            {
                              ATerm s_30 = t;
                              int t_30 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = d_69(c_69, t);
                                  LocalPopChoice(t_30);
                                }
                              else
                                {
                                  t = s_30;
                                  t = term_u_30;
                                }
                            }
                          else
                            {
                              if(match_string(t, "%="))
                                {
                                  ATerm v_30 = t;
                                  int x_30 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = d_69(c_69, t);
                                      LocalPopChoice(x_30);
                                    }
                                  else
                                    {
                                      t = v_30;
                                      t = term_z_30;
                                    }
                                }
                              else
                                {
                                  if(match_string(t, "/="))
                                    {
                                      ATerm a_31 = t;
                                      int b_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = d_69(c_69, t);
                                          LocalPopChoice(b_31);
                                        }
                                      else
                                        {
                                          t = a_31;
                                          t = term_c_31;
                                        }
                                    }
                                  else
                                    {
                                      if(match_string(t, "*="))
                                        {
                                          ATerm d_31 = t;
                                          int e_31 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = d_69(c_69, t);
                                              LocalPopChoice(e_31);
                                            }
                                          else
                                            {
                                              t = d_31;
                                              t = term_f_31;
                                            }
                                        }
                                      else
                                        {
                                          if(match_string(t, "=>"))
                                            {
                                              ATerm h_31 = t;
                                              int i_31 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = d_69(c_69, t);
                                                  LocalPopChoice(i_31);
                                                }
                                              else
                                                {
                                                  t = h_31;
                                                  t = term_j_31;
                                                }
                                            }
                                          else
                                            {
                                              if(match_string(t, "->"))
                                                {
                                                  ATerm k_31 = t;
                                                  int l_31 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = d_69(c_69, t);
                                                      LocalPopChoice(l_31);
                                                    }
                                                  else
                                                    {
                                                      t = k_31;
                                                      t = term_m_31;
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_string(t, ":="))
                                                    {
                                                      ATerm n_31 = t;
                                                      int p_31 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = d_69(c_69, t);
                                                          LocalPopChoice(p_31);
                                                        }
                                                      else
                                                        {
                                                          t = n_31;
                                                          t = term_q_31;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_string(t, "||"))
                                                        {
                                                          ATerm r_31 = t;
                                                          int s_31 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = d_69(c_69, t);
                                                              LocalPopChoice(s_31);
                                                            }
                                                          else
                                                            {
                                                              t = r_31;
                                                              t = term_d_29;
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_string(t, "=="))
                                                            {
                                                              ATerm t_31 = t;
                                                              int u_31 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = d_69(c_69, t);
                                                                  LocalPopChoice(u_31);
                                                                }
                                                              else
                                                                {
                                                                  t = t_31;
                                                                  t = term_v_31;
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t, "="))
                                                                {
                                                                  ATerm w_31 = t;
                                                                  int y_31 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = d_69(c_69, t);
                                                                      LocalPopChoice(y_31);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = w_31;
                                                                      t = term_v_31;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t, "|"))
                                                                    {
                                                                      ATerm z_31 = t;
                                                                      int b_32 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = d_69(c_69, t);
                                                                          LocalPopChoice(b_32);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = z_31;
                                                                          t = term_c_32;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t, ">="))
                                                                        {
                                                                          ATerm d_32 = t;
                                                                          int e_32 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = d_69(c_69, t);
                                                                              LocalPopChoice(e_32);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = d_32;
                                                                              t = term_f_32;
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t, ">"))
                                                                            {
                                                                              ATerm g_32 = t;
                                                                              int i_32 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  t = d_69(c_69, t);
                                                                                  LocalPopChoice(i_32);
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = g_32;
                                                                                  t = term_j_32;
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t, "<="))
                                                                                {
                                                                                  ATerm k_32 = t;
                                                                                  int m_32 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = d_69(c_69, t);
                                                                                      LocalPopChoice(m_32);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = k_32;
                                                                                      t = term_o_32;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t, "<"))
                                                                                    {
                                                                                      ATerm p_32 = t;
                                                                                      int q_32 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = d_69(c_69, t);
                                                                                          LocalPopChoice(q_32);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = p_32;
                                                                                          t = term_r_32;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t, "!="))
                                                                                        {
                                                                                          ATerm s_32 = t;
                                                                                          int t_32 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = d_69(c_69, t);
                                                                                              LocalPopChoice(t_32);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = s_32;
                                                                                              t = term_u_32;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t, ">>"))
                                                                                            {
                                                                                              ATerm v_32 = t;
                                                                                              int w_32 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = d_69(c_69, t);
                                                                                                  LocalPopChoice(w_32);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = v_32;
                                                                                                  t = term_x_32;
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t, "<<"))
                                                                                                {
                                                                                                  ATerm y_32 = t;
                                                                                                  int a_33 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = d_69(c_69, t);
                                                                                                      LocalPopChoice(a_33);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = y_32;
                                                                                                      t = term_b_33;
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t, "%"))
                                                                                                    {
                                                                                                      ATerm c_33 = t;
                                                                                                      int d_33 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          t = d_69(c_69, t);
                                                                                                          LocalPopChoice(d_33);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = c_33;
                                                                                                          t = term_e_33;
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t, "~"))
                                                                                                        {
                                                                                                          ATerm f_33 = t;
                                                                                                          int h_33 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = d_69(c_69, t);
                                                                                                              LocalPopChoice(h_33);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = f_33;
                                                                                                              t = term_i_33;
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t, "-"))
                                                                                                            {
                                                                                                              ATerm k_33 = t;
                                                                                                              int l_33 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = d_69(c_69, t);
                                                                                                                  LocalPopChoice(l_33);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = k_33;
                                                                                                                  t = term_m_33;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t, "!"))
                                                                                                                {
                                                                                                                  ATerm n_33 = t;
                                                                                                                  int o_33 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      t = d_69(c_69, t);
                                                                                                                      LocalPopChoice(o_33);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = n_33;
                                                                                                                      t = term_p_33;
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t, "&&"))
                                                                                                                    {
                                                                                                                      ATerm q_33 = t;
                                                                                                                      int r_33 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = d_69(c_69, t);
                                                                                                                          LocalPopChoice(r_33);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = q_33;
                                                                                                                          t = term_b_29;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t, "&"))
                                                                                                                        {
                                                                                                                          ATerm s_33 = t;
                                                                                                                          int t_33 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = d_69(c_69, t);
                                                                                                                              LocalPopChoice(t_33);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = s_33;
                                                                                                                              t = term_u_33;
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t, "/"))
                                                                                                                            {
                                                                                                                              ATerm v_33 = t;
                                                                                                                              int w_33 = stack_ptr;
                                                                                                                              if((PushChoice() == 0))
                                                                                                                                {
                                                                                                                                  t = d_69(c_69, t);
                                                                                                                                  LocalPopChoice(w_33);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = v_33;
                                                                                                                                  t = term_x_33;
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t, "*"))
                                                                                                                                {
                                                                                                                                  ATerm y_33 = t;
                                                                                                                                  int z_33 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      t = d_69(c_69, t);
                                                                                                                                      LocalPopChoice(z_33);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = y_33;
                                                                                                                                      t = term_a_34;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t, "--"))
                                                                                                                                    {
                                                                                                                                      ATerm b_34 = t;
                                                                                                                                      int c_34 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = d_69(c_69, t);
                                                                                                                                          LocalPopChoice(c_34);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = b_34;
                                                                                                                                          t = term_d_34;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t, "++"))
                                                                                                                                        {
                                                                                                                                          ATerm e_34 = t;
                                                                                                                                          int f_34 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              t = d_69(c_69, t);
                                                                                                                                              LocalPopChoice(f_34);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = e_34;
                                                                                                                                              t = term_g_34;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t, "+"))
                                                                                                                                            {
                                                                                                                                              ATerm h_34 = t;
                                                                                                                                              int i_34 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  t = d_69(c_69, t);
                                                                                                                                                  LocalPopChoice(i_34);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = h_34;
                                                                                                                                                  t = term_j_34;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t, ";"))
                                                                                                                                                {
                                                                                                                                                  ATerm k_34 = t;
                                                                                                                                                  int l_34 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = d_69(c_69, t);
                                                                                                                                                      LocalPopChoice(l_34);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = k_34;
                                                                                                                                                      t = term_m_34;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_string(t, ":"))
                                                                                                                                                    {
                                                                                                                                                      ATerm n_34 = t;
                                                                                                                                                      int p_34 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = d_69(c_69, t);
                                                                                                                                                          LocalPopChoice(p_34);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = n_34;
                                                                                                                                                          t = term_q_34;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      if(match_string(t, ","))
                                                                                                                                                        {
                                                                                                                                                          ATerm r_34 = t;
                                                                                                                                                          int s_34 = stack_ptr;
                                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                                            {
                                                                                                                                                              t = d_69(c_69, t);
                                                                                                                                                              LocalPopChoice(s_34);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = r_34;
                                                                                                                                                              t = term_t_34;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = d_69(c_69, t);
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_69 = ATgetFirst((ATermList) t);
      o_69 = (ATerm) ATgetNext((ATermList) t);
      t = o_69;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_69 = ATgetFirst((ATermList) t);
          m_69 = (ATerm) ATgetNext((ATermList) t);
          t = l_69;
          if(match_int(t, 34))
            {
              t = n_69;
              if(match_int(t, 92))
                {
                  ATerm u_34 = t;
                  int v_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_69 = NULL;
                      t = m_69;
                      t = De_Escape_0_0(t);
                      r_69 = t;
                      t = (ATerm) ATinsert(CheckATermList(r_69), term_l_27);
                      LocalPopChoice(v_34);
                    }
                  else
                    {
                      t = u_34;
                      {
                        ATerm u_69 = NULL;
                        t = o_69;
                        t = De_Escape_0_0(t);
                        u_69 = t;
                        t = (ATerm) ATinsert(CheckATermList(u_69), n_69);
                      }
                    }
                }
              else
                {
                  ATerm x_69 = NULL;
                  t = o_69;
                  t = De_Escape_0_0(t);
                  x_69 = t;
                  t = (ATerm) ATinsert(CheckATermList(x_69), n_69);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = n_69;
                  if(match_int(t, 92))
                    {
                      ATerm w_34 = t;
                      int x_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_69 = NULL;
                          t = m_69;
                          t = De_Escape_0_0(t);
                          z_69 = t;
                          t = (ATerm) ATinsert(CheckATermList(z_69), term_y_34);
                          LocalPopChoice(x_34);
                        }
                      else
                        {
                          t = w_34;
                          {
                            ATerm c_70 = NULL;
                            t = o_69;
                            t = De_Escape_0_0(t);
                            c_70 = t;
                            t = (ATerm) ATinsert(CheckATermList(c_70), n_69);
                          }
                        }
                    }
                  else
                    {
                      ATerm f_70 = NULL;
                      t = o_69;
                      t = De_Escape_0_0(t);
                      f_70 = t;
                      t = (ATerm) ATinsert(CheckATermList(f_70), n_69);
                    }
                }
              else
                {
                  ATerm i_70 = NULL;
                  t = o_69;
                  t = De_Escape_0_0(t);
                  i_70 = t;
                  t = (ATerm) ATinsert(CheckATermList(i_70), n_69);
                }
            }
        }
      else
        {
          ATerm l_70 = NULL;
          t = o_69;
          t = De_Escape_0_0(t);
          l_70 = t;
          t = (ATerm) ATinsert(CheckATermList(l_70), n_69);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm de_escape_0_0 (ATerm t)
{
  ATerm t_70 = NULL,u_70 = NULL,v_70 = NULL,w_70 = NULL;
  t = explode_string_0_0(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_70 = ATgetFirst((ATermList) t);
      w_70 = (ATerm) ATgetNext((ATermList) t);
      t = w_70;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_70 = ATgetFirst((ATermList) t);
          u_70 = (ATerm) ATgetNext((ATermList) t);
          t = t_70;
          if(match_int(t, 34))
            {
              t = v_70;
              if(match_int(t, 92))
                {
                  ATerm z_34 = t;
                  int a_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_70 = NULL;
                      t = u_70;
                      t = De_Escape_0_0(t);
                      z_70 = t;
                      t = (ATerm) ATinsert(CheckATermList(z_70), term_l_27);
                      LocalPopChoice(a_35);
                    }
                  else
                    {
                      t = z_34;
                      {
                        ATerm d_71 = NULL;
                        t = w_70;
                        t = De_Escape_0_0(t);
                        d_71 = t;
                        t = (ATerm) ATinsert(CheckATermList(d_71), v_70);
                      }
                    }
                }
              else
                {
                  ATerm g_71 = NULL;
                  t = w_70;
                  t = De_Escape_0_0(t);
                  g_71 = t;
                  t = (ATerm) ATinsert(CheckATermList(g_71), v_70);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = v_70;
                  if(match_int(t, 92))
                    {
                      ATerm b_35 = t;
                      int c_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm i_71 = NULL;
                          t = u_70;
                          t = De_Escape_0_0(t);
                          i_71 = t;
                          t = (ATerm) ATinsert(CheckATermList(i_71), term_y_34);
                          LocalPopChoice(c_35);
                        }
                      else
                        {
                          t = b_35;
                          {
                            ATerm l_71 = NULL;
                            t = w_70;
                            t = De_Escape_0_0(t);
                            l_71 = t;
                            t = (ATerm) ATinsert(CheckATermList(l_71), v_70);
                          }
                        }
                    }
                  else
                    {
                      ATerm o_71 = NULL;
                      t = w_70;
                      t = De_Escape_0_0(t);
                      o_71 = t;
                      t = (ATerm) ATinsert(CheckATermList(o_71), v_70);
                    }
                }
              else
                {
                  ATerm r_71 = NULL;
                  t = w_70;
                  t = De_Escape_0_0(t);
                  r_71 = t;
                  t = (ATerm) ATinsert(CheckATermList(r_71), v_70);
                }
            }
        }
      else
        {
          ATerm u_71 = NULL;
          t = w_70;
          t = De_Escape_0_0(t);
          u_71 = t;
          t = (ATerm) ATinsert(CheckATermList(u_71), v_70);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  t = implode_string_0_0(t);
  return(t);
}
ATerm list_ana_1_0 (ATerm n_44 (ATerm), ATerm t)
{
  static ATerm b_72 (ATerm t);
  static ATerm b_72 (ATerm t)
  {
    ATerm d_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_71 = NULL;
        t = n_44(t);
        w_71 = t;
        t = (ATerm) ATinsert(ATempty, w_71);
        LocalPopChoice(e_35);
      }
    else
      {
        t = d_35;
        {
          ATerm f_35 = t;
          int g_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_72 = NULL,t_27 = NULL;
              a_72 = t;
              t = SSL_explode_term(a_72);
              if(match_cons(t, sym__2))
                {
                  ATerm i_35 = ATgetArgument(t, 0);
                  t_27 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_27;
              t = filter_1_0(b_72, t);
              t = concat_0_0(t);
              LocalPopChoice(g_35);
            }
          else
            {
              t = f_35;
              t = (ATerm) ATempty;
            }
        }
      }
    return(t);
  }
  t = b_72(t);
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm e_72 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      e_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_72;
  t = try_1_0(z_10, t);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  t = de_quote_0_0(t);
  t = de_escape_0_0(t);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  t = term_z_27;
  return(t);
}
ATerm lit2str_0_0 (ATerm t)
{
  t = list_ana_1_0(s_10, t);
  t = separate_by_1_0(a_11, t);
  t = concat_strings_0_0(t);
  {
    ATerm j_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = toAlphaNum_0_0(t);
        LocalPopChoice(k_35);
      }
    else
      {
        t = j_35;
      }
  }
  return(t);
}
static ATerm h_73 (ATerm m_72, ATerm n_72, ATerm o_72, ATerm t)
{
  ATerm s_72 = NULL;
  t = o_72;
  {
    ATerm l_35 = t;
    int m_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_72;
        t = filter_1_0(lit2str_0_0, t);
        t = strs2constr_0_0(t);
        s_72 = t;
        LocalPopChoice(m_35);
      }
    else
      {
        t = l_35;
        {
          ATerm n_35 = t;
          int o_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_72 = NULL,v_72 = NULL;
              t = (ATerm) ATinsert(ATempty, n_72);
              t = syms2strs_0_0(t);
              u_72 = t;
              t = m_72;
              t = filter_1_0(lit2str_0_0, t);
              v_72 = t;
              t = filter_1_0(b_11, t);
              t = Hd_0_0(t);
              t = (ATerm) ATmakeAppl(sym__2, u_72, v_72);
              t = conc_0_0(t);
              t = strs2constr_0_0(t);
              s_72 = t;
              LocalPopChoice(o_35);
            }
          else
            {
              t = n_35;
              {
                ATerm p_35 = t;
                int r_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = m_72;
                    t = syms2strs_0_0(t);
                    t = strs2constr_0_0(t);
                    s_72 = t;
                    LocalPopChoice(r_35);
                  }
                else
                  {
                    t = p_35;
                    {
                      ATerm w_72 = NULL,x_72 = NULL;
                      t = (ATerm) ATinsert(ATempty, n_72);
                      t = syms2strs_0_0(t);
                      w_72 = t;
                      t = term_g_16;
                      t = new_0_0(t);
                      x_72 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_72, (ATerm) ATinsert(ATinsert(ATempty, x_72), term_s_35));
                      t = conc_0_0(t);
                      t = strs2constr_0_0(t);
                      s_72 = t;
                    }
                  }
              }
            }
        }
      }
  }
  t = s_72;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm t_35 = t;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_35;
    }
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm e_73 = NULL;
  e_73 = t;
  {
    ATerm u_35 = t;
    if((PushChoice() == 0))
      {
        t = de_quote_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_35;
      }
  }
  t = e_73;
  t = quote_0_0(t);
  return(t);
}
ATerm mk_constr_0_0 (ATerm t)
{
  ATerm z_72 = NULL,a_73 = NULL,b_73 = NULL;
  z_72 = t;
  {
    ATerm v_35 = t;
    int w_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_prod_fun_4))
          {
            a_73 = ATgetArgument(t, 0);
            {
              ATerm x_35 = ATgetArgument(t, 1);
            }
            {
              ATerm y_35 = ATgetArgument(t, 2);
            }
            {
              ATerm z_35 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(w_35);
        t = a_73;
        t = try_1_0(c_11, t);
      }
    else
      {
        t = v_35;
        if(match_cons(t, sym_prod_3))
          {
            a_73 = ATgetArgument(t, 0);
            b_73 = ATgetArgument(t, 1);
            {
              ATerm a_36 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = a_73;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm c_36 = t;
            int d_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = h_73(a_73, b_73, z_72, t);
                LocalPopChoice(d_36);
              }
            else
              {
                t = c_36;
                {
                  ATerm g_73 = NULL;
                  t = (ATerm) ATinsert(ATempty, b_73);
                  t = syms2strs_0_0(t);
                  g_73 = t;
                  t = (ATerm) ATmakeAppl(sym__2, g_73, (ATerm) ATinsert(ATempty, term_e_36));
                  t = conc_0_0(t);
                  t = strs2constr_0_0(t);
                }
              }
          }
        else
          {
            t = h_73(a_73, b_73, z_72, t);
          }
      }
  }
  return(t);
}
ATerm syntaxless_sort_0_0 (ATerm t)
{
  ATerm o_75 = NULL,p_75 = NULL,q_75 = NULL;
  o_75 = t;
  if(match_cons(t, sym_sort_1))
    {
      p_75 = ATgetArgument(t, 0);
      {
        ATerm a_28 = NULL,j_7 = NULL;
        t = SSLgetAnnotations(o_75);
        a_28 = t;
        t = (ATerm) ATmakeAppl(sym_sort_1, p_75);
        j_7 = t;
        t = SSLsetAnnotations(j_7, a_28);
      }
    }
  else
    {
      if(match_cons(t, sym_alt_2))
        {
          p_75 = ATgetArgument(t, 0);
          q_75 = ATgetArgument(t, 1);
          {
            ATerm a_29 = NULL,i_29 = NULL,k_29 = NULL,l_7 = NULL;
            t = SSLgetAnnotations(o_75);
            a_29 = t;
            t = p_75;
            t = syntaxless_sort_0_0(t);
            i_29 = t;
            t = q_75;
            t = syntaxless_sort_0_0(t);
            k_29 = t;
            t = (ATerm) ATmakeAppl(sym_alt_2, i_29, k_29);
            l_7 = t;
            t = SSLsetAnnotations(l_7, a_29);
          }
        }
      else
        {
          if(match_cons(t, sym_opt_1))
            {
              p_75 = ATgetArgument(t, 0);
              {
                ATerm g_30 = NULL,i_30 = NULL,m_7 = NULL;
                t = SSLgetAnnotations(o_75);
                g_30 = t;
                t = p_75;
                t = syntaxless_sort_0_0(t);
                i_30 = t;
                t = (ATerm) ATmakeAppl(sym_opt_1, i_30);
                m_7 = t;
                t = SSLsetAnnotations(m_7, g_30);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_1))
                {
                  p_75 = ATgetArgument(t, 0);
                  {
                    ATerm o_30 = NULL,q_30 = NULL,n_7 = NULL;
                    t = SSLgetAnnotations(o_75);
                    o_30 = t;
                    t = p_75;
                    t = syntaxless_sort_0_0(t);
                    q_30 = t;
                    t = (ATerm) ATmakeAppl(sym_iter_1, q_30);
                    n_7 = t;
                    t = SSLsetAnnotations(n_7, o_30);
                  }
                }
              else
                {
                  if(match_cons(t, sym_iter_star_1))
                    {
                      p_75 = ATgetArgument(t, 0);
                      {
                        ATerm w_30 = NULL,y_30 = NULL,o_7 = NULL;
                        t = SSLgetAnnotations(o_75);
                        w_30 = t;
                        t = p_75;
                        t = syntaxless_sort_0_0(t);
                        y_30 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_star_1, y_30);
                        o_7 = t;
                        t = SSLsetAnnotations(o_7, w_30);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_sep_2))
                        {
                          p_75 = ATgetArgument(t, 0);
                          q_75 = ATgetArgument(t, 1);
                          {
                            ATerm g_31 = NULL,o_31 = NULL,r_7 = NULL;
                            t = SSLgetAnnotations(o_75);
                            g_31 = t;
                            t = p_75;
                            t = syntaxless_sort_0_0(t);
                            o_31 = t;
                            t = (ATerm) ATmakeAppl(sym_iter_sep_2, o_31, q_75);
                            r_7 = t;
                            t = SSLsetAnnotations(r_7, g_31);
                          }
                        }
                      else
                        {
                          ATerm x_31 = NULL,a_32 = NULL,t_7 = NULL;
                          if(match_cons(t, sym_iter_star_sep_2))
                            {
                              p_75 = ATgetArgument(t, 0);
                              q_75 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(o_75);
                          x_31 = t;
                          t = p_75;
                          t = syntaxless_sort_0_0(t);
                          a_32 = t;
                          t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, a_32, q_75);
                          t_7 = t;
                          t = SSLsetAnnotations(t_7, x_31);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm d_11 (ATerm t)
{
  t = term_f_36;
  return(t);
}
ATerm is_injection_0_0 (ATerm t)
{
  ATerm z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL,f_76 = NULL,o_8 = NULL;
  f_76 = t;
  if(match_cons(t, sym_prod_3))
    {
      a_76 = ATgetArgument(t, 0);
      b_76 = ATgetArgument(t, 1);
      c_76 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_76);
  z_75 = t;
  t = a_76;
  t = Cons_2_0(syntaxless_sort_0_0, Nil_0_0, t);
  d_76 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, d_76, b_76, c_76);
  o_8 = t;
  t = SSLsetAnnotations(o_8, z_75);
  e_76 = t;
  {
    ATerm g_36 = t;
    int h_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = has_option_1_0(d_11, t);
        LocalPopChoice(h_36);
      }
    else
      {
        t = g_36;
        t = term_i_36;
        t = get_config_0_0(t);
      }
  }
  t = e_76;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  if(!(match_cons(t, sym_reject_0)))
    _fail(t);
  return(t);
}
ATerm is_reject_0_0 (ATerm t)
{
  ATerm h_76 = NULL,l_76 = NULL;
  ATerm j_36 = t;
  int k_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm l_36 = ATgetArgument(t, 0);
          ATerm m_36 = ATgetArgument(t, 1);
          ATerm n_36 = ATgetArgument(t, 2);
          h_76 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(k_36);
      t = h_76;
      t = oncetd_1_0(e_11, t);
      t = term_g_16;
    }
  else
    {
      t = j_36;
      if(match_cons(t, sym_prod_3))
        {
          ATerm o_36 = ATgetArgument(t, 0);
          ATerm p_36 = ATgetArgument(t, 1);
          l_76 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = l_76;
      t = oncetd_1_0(g_11, t);
      t = term_g_16;
    }
  return(t);
}
static ATerm j_11 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
static ATerm k_11 (ATerm t)
{
  if(!(match_cons(t, sym_bracket_0)))
    _fail(t);
  return(t);
}
ATerm is_bracket_0_0 (ATerm t)
{
  ATerm p_76 = NULL,t_76 = NULL;
  ATerm q_36 = t;
  int r_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_prod_fun_4))
        {
          ATerm s_36 = ATgetArgument(t, 0);
          ATerm t_36 = ATgetArgument(t, 1);
          ATerm u_36 = ATgetArgument(t, 2);
          p_76 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      LocalPopChoice(r_36);
      t = p_76;
      t = oncetd_1_0(j_11, t);
      t = term_g_16;
    }
  else
    {
      t = q_36;
      if(match_cons(t, sym_prod_3))
        {
          ATerm w_36 = ATgetArgument(t, 0);
          ATerm x_36 = ATgetArgument(t, 1);
          t_76 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = t_76;
      t = oncetd_1_0(k_11, t);
      t = term_g_16;
    }
  return(t);
}
ATerm prodcons_0_0 (ATerm t)
{
  ATerm a_77 = NULL;
  a_77 = t;
  {
    ATerm y_36 = t;
    int z_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_32 = NULL;
        t = a_77;
        {
          ATerm a_37 = t;
          if((PushChoice() == 0))
            {
              ATerm b_37 = t;
              int c_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = get_constr_0_0(t);
                  LocalPopChoice(c_37);
                }
              else
                {
                  t = b_37;
                  {
                    ATerm d_37 = t;
                    int e_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = is_bracket_0_0(t);
                        LocalPopChoice(e_37);
                      }
                    else
                      {
                        t = d_37;
                        {
                          ATerm f_37 = t;
                          int g_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = is_reject_0_0(t);
                              LocalPopChoice(g_37);
                            }
                          else
                            {
                              t = f_37;
                              t = is_injection_0_0(t);
                            }
                        }
                      }
                  }
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_37;
            }
        }
        t = a_77;
        t = mk_constr_0_0(t);
        h_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_77, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_term_1, (ATerm) ATmakeAppl(sym_cons_1, h_32))));
        t = add_attributes_0_0(t);
        LocalPopChoice(z_36);
      }
    else
      {
        t = y_36;
        {
          ATerm c_77 = NULL;
          static ATerm l_11 (ATerm t);
          static ATerm l_11 (ATerm t)
          {
            ATerm d_77 = NULL,e_77 = NULL,f_77 = NULL,r_8 = NULL;
            f_77 = t;
            if(match_cons(t, sym_cons_1))
              {
                ATerm h_37 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(f_77);
            d_77 = t;
            t = not_null(c_77);
            t = uq2q_0_0(t);
            e_77 = t;
            t = (ATerm) ATmakeAppl(sym_cons_1, e_77);
            r_8 = t;
            t = SSLsetAnnotations(r_8, d_77);
            return(t);
          }
          t = a_77;
          t = get_constr_0_0(t);
          if(((c_77 != NULL) && (c_77 != t)))
            _fail(t);
          else
            c_77 = t;
          t = a_77;
          t = oncetd_1_0(l_11, t);
        }
      }
  }
  return(t);
}
static ATerm q_6 (ATerm j_13, ATerm k_13, ATerm i_13, ATerm h_13, ATerm t)
{
  ATerm h_77 = NULL,i_77 = NULL;
  ATerm i_37 = t;
  int j_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm p_11 (ATerm t);
      static ATerm p_11 (ATerm t)
      {
        if(match_cons(t, sym_cons_1))
          {
            if(((h_77 != NULL) && (h_77 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              h_77 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        return(t);
      }
      t = i_13;
      t = oncetd_1_0(p_11, t);
      LocalPopChoice(j_37);
    }
  else
    {
      t = i_37;
      {
        ATerm k_37 = t;
        int l_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_77 = NULL,k_77 = NULL,l_77 = NULL,m_77 = NULL,n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL,u_8 = NULL,t_8 = NULL;
            t = k_13;
            if(match_cons(t, sym_sort_1))
              {
                q_77 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_13);
            p_77 = t;
            t = (ATerm) ATmakeAppl(sym_sort_1, q_77);
            t_8 = t;
            t = SSLsetAnnotations(t_8, p_77);
            t = (ATerm) ATmakeAppl(sym_prod_3, j_13, k_13, i_13);
            t = prodcons_0_0(t);
            o_77 = t;
            if(match_cons(t, sym_prod_3))
              {
                k_77 = ATgetArgument(t, 0);
                l_77 = ATgetArgument(t, 1);
                m_77 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(o_77);
            j_77 = t;
            t = m_77;
            {
              static ATerm q_11 (ATerm t);
              static ATerm q_11 (ATerm t)
              {
                if(match_cons(t, sym_cons_1))
                  {
                    if(((h_77 != NULL) && (h_77 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      h_77 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(q_11, t);
            }
            n_77 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, k_77, l_77, n_77);
            u_8 = t;
            t = SSLsetAnnotations(u_8, j_77);
            LocalPopChoice(l_37);
          }
        else
          {
            t = k_37;
            t = term_m_37;
            h_77 = t;
          }
      }
    }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_prod_3, j_13, k_13, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, not_null(h_77))))), (ATerm) ATinsert(ATempty, not_null(h_77)));
  t = get_pp_entry_0_0(t);
  i_77 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_77), i_77);
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm n_37 = t;
  if((PushChoice() == 0))
    {
      ATerm w_77 = NULL,x_77 = NULL,y_77 = NULL,x_8 = NULL;
      y_77 = t;
      if(match_cons(t, sym_lit_1))
        {
          x_77 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_77);
      w_77 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, x_77);
      x_8 = t;
      t = SSLsetAnnotations(x_8, w_77);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_37;
    }
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm o_37 = t;
  if((PushChoice() == 0))
    {
      ATerm z_77 = NULL,a_78 = NULL,b_78 = NULL,y_8 = NULL;
      b_78 = t;
      if(match_cons(t, sym_lit_1))
        {
          a_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_78);
      z_77 = t;
      t = (ATerm) ATmakeAppl(sym_lit_1, a_78);
      y_8 = t;
      t = SSLsetAnnotations(y_8, z_77);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_37;
    }
  return(t);
}
static ATerm r_6 (ATerm q_12, ATerm o_12, ATerm p_12, ATerm r_12, ATerm t)
{
  ATerm r_77 = NULL,s_77 = NULL,t_77 = NULL,u_77 = NULL,v_77 = NULL;
  static ATerm x_11 (ATerm t);
  static ATerm x_11 (ATerm t)
  {
    static ATerm y_11 (ATerm t);
    static ATerm y_11 (ATerm t)
    {
      ATerm q_37 = t;
      int s_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm b_12 (ATerm t);
          static ATerm b_12 (ATerm t)
          {
            t = not_null(t_77);
            return(t);
          }
          t = Instantiate_1_0(b_12, t);
          LocalPopChoice(s_37);
        }
      else
        {
          t = q_37;
          t = flat_list_0_0(t);
        }
      return(t);
    }
    t = try_1_0(y_11, t);
    return(t);
  }
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, q_12, o_12, p_12), r_12);
  t = q_6(q_12, o_12, p_12, r_12, t);
  if(match_cons(t, sym__2))
    {
      r_77 = ATgetArgument(t, 0);
      s_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_12;
  t = filter_1_0(s_11, t);
  u_77 = t;
  t = r_12;
  t = filter_1_0(w_11, t);
  v_77 = t;
  t = (ATerm) ATmakeAppl(sym__4, u_77, v_77, (ATerm)ATinsert(ATempty, r_77), term_t_16);
  t = seq2abox_0_0(t);
  if(((t_77 != NULL) && (t_77 != t)))
    _fail(t);
  else
    t_77 = t;
  t = s_77;
  t = bottomup_1_0(x_11, t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      o_78 = ATgetArgument(t, 0);
      p_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_78;
  t = int_to_string_0_0(t);
  q_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_78), term_u_37), q_78), term_t_37);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm e_78 = NULL,f_78 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      e_78 = ATgetArgument(t, 0);
      t = e_78;
    }
  else
    {
      ATerm n_78 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          e_78 = ATgetArgument(t, 0);
          f_78 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_78;
      t = map_1_0(c_12, t);
      t = concat_0_0(t);
      n_78 = t;
      t = (ATerm) ATinsert(CheckATermList(n_78), e_78);
      t = concat_strings_0_0(t);
    }
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm d_79 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      d_79 = ATgetArgument(t, 0);
      {
        ATerm v_37 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = d_79;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm t_78 = NULL,u_78 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      t_78 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, t_78);
    }
  else
    {
      ATerm c_79 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          t_78 = ATgetArgument(t, 0);
          u_78 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_78;
      t = map_1_0(d_12, t);
      c_79 = t;
      t = (ATerm) ATinsert(CheckATermList(c_79), t_78);
    }
  return(t);
}
static ATerm e_12 (ATerm t)
{
  t = debug_1_0(f_12, t);
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = term_w_37;
  return(t);
}
static ATerm s_6 (ATerm g_22, ATerm q_22, ATerm t)
{
  ATerm e_79 = NULL,f_79 = NULL;
  t = g_22;
  t = mk_key_0_0(t);
  f_79 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_20, f_79, (ATerm) ATmakeAppl(sym__2, g_22, q_22));
  t = table_put_0_0(t);
  t = g_22;
  t = path_to_string_0_0(t);
  e_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_79, q_22);
  t = if_verbose1_1_0(e_12, t);
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm y_80 = NULL,z_80 = NULL,a_81 = NULL;
  y_80 = t;
  if(match_cons(t, sym_Arg_1))
    {
      z_80 = ATgetArgument(t, 0);
      {
        ATerm l_32 = NULL,n_32 = NULL,t_10 = NULL;
        t = SSLgetAnnotations(y_80);
        l_32 = t;
        t = z_80;
        t = string_to_int_0_0(t);
        n_32 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, n_32);
        t_10 = t;
        t = SSLsetAnnotations(t_10, l_32);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          z_80 = ATgetArgument(t, 0);
          a_81 = ATgetArgument(t, 1);
          {
            ATerm z_32 = NULL,g_33 = NULL,j_33 = NULL,u_10 = NULL;
            t = SSLgetAnnotations(y_80);
            z_32 = t;
            t = z_80;
            t = string_to_int_0_0(t);
            g_33 = t;
            t = a_81;
            t = string_to_int_0_0(t);
            j_33 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, g_33, j_33);
            u_10 = t;
            t = SSLsetAnnotations(u_10, z_32);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              z_80 = ATgetArgument(t, 0);
              a_81 = ATgetArgument(t, 1);
              {
                ATerm o_34 = NULL,v_10 = NULL;
                t = SSLgetAnnotations(y_80);
                o_34 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, z_80, a_81);
                v_10 = t;
                t = SSLsetAnnotations(v_10, o_34);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  z_80 = ATgetArgument(t, 0);
                  {
                    ATerm h_35 = NULL,q_35 = NULL,w_10 = NULL;
                    t = SSLgetAnnotations(y_80);
                    h_35 = t;
                    t = z_80;
                    t = un_double_quote_0_0(t);
                    t = unescape_0_0(t);
                    q_35 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, q_35);
                    w_10 = t;
                    t = SSLsetAnnotations(w_10, h_35);
                  }
                }
              else
                {
                  ATerm b_36 = NULL,v_36 = NULL,x_10 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      z_80 = ATgetArgument(t, 0);
                      a_81 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(y_80);
                  b_36 = t;
                  t = z_80;
                  t = string_to_int_0_0(t);
                  v_36 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, v_36, a_81);
                  x_10 = t;
                  t = SSLsetAnnotations(x_10, b_36);
                }
            }
        }
    }
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm i_81 = NULL,j_81 = NULL;
  t = topdown_1_0(h_12, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      i_81 = ATgetArgument(t, 0);
      j_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(i_81, j_81, t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  t = try_1_0(MakePPTerm_0_0, t);
  return(t);
}
static ATerm t_6 (ATerm f_22, ATerm t)
{
  t = f_22;
  t = reverse_0_0(t);
  t = map_1_0(g_12, t);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = term_x_37;
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm y_37 = t;
  int z_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = has_option_1_0(i_12, t);
      t = (ATerm) ATinsert(ATempty, term_a_38);
      t = fatal_error_0_0(t);
      LocalPopChoice(z_37);
    }
  else
    {
      t = y_37;
      t = (ATerm) ATinsert(ATempty, term_b_38);
      t = error_0_0(t);
    }
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm o_81 = NULL,p_81 = NULL,p_37 = NULL,r_37 = NULL;
  t = if_verbose1_1_0(k_12, t);
  t = ReadFromFile_0_0(t);
  p_81 = t;
  t = SSL_explode_term(p_81);
  if(match_cons(t, sym__2))
    {
      r_37 = ATgetArgument(t, 0);
      {
        ATerm c_38 = ATgetArgument(t, 1);
        if(((ATgetType(c_38) == AT_LIST) && !(ATisEmpty(c_38))))
          {
            p_37 = ATgetFirst((ATermList) c_38);
            {
              ATerm d_38 = (ATerm) ATgetNext((ATermList) c_38);
              if(((ATgetType(d_38) != AT_LIST) || !(ATisEmpty(d_38))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_37;
  if(!(match_string(t, "\"pp-tables-0\"")))
    {
      t = type_failure_0_0(t);
    }
  t = p_37;
  if(match_cons(t, sym_PP_Table_1))
    {
      o_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(o_81, t);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  t = debug_1_0(l_12, t);
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = term_e_38;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm n_81 = NULL;
  n_81 = t;
  t = term_n_20;
  t = table_create_0_0(t);
  t = n_81;
  t = map_1_0(j_12, t);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm t_81 = NULL;
  if(match_cons(t, sym_PP_Table_1))
    {
      t_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_81;
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = sometd_1_0(t_12, t);
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm u_81 = NULL;
  if(match_cons(t, sym_cf_1))
    {
      u_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_81;
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = topdown_1_0(y_12, t);
  {
    ATerm f_38 = t;
    int g_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_82 = NULL,c_82 = NULL,d_82 = NULL,e_82 = NULL,f_82 = NULL,g_82 = NULL;
        b_82 = t;
        if(match_cons(t, sym_appl_2))
          {
            c_82 = ATgetArgument(t, 0);
            g_82 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_82;
        if(match_cons(t, sym_prod_3))
          {
            d_82 = ATgetArgument(t, 0);
            e_82 = ATgetArgument(t, 1);
            f_82 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = b_82;
        t = r_6(d_82, e_82, f_82, g_82, t);
        LocalPopChoice(g_38);
      }
    else
      {
        t = f_38;
        t = fatal_ambiguity_0_0(t);
      }
  }
  return(t);
}
static ATerm v_12 (ATerm t)
{
  t = collect_p__1_0(b_13, t);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = try_1_0(z_12, t);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = is_list_0_0(t);
  t = filter_1_0(a_13, t);
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm h_38 = t;
  if((PushChoice() == 0))
    {
      ATerm v_81 = NULL,w_81 = NULL,x_81 = NULL,f_11 = NULL;
      x_81 = t;
      if(match_cons(t, sym_opt_1))
        {
          w_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_81);
      v_81 = t;
      t = w_81;
      if(!(match_cons(t, sym_layout_0)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_opt_1, w_81);
      f_11 = t;
      t = SSLsetAnnotations(f_11, v_81);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_38;
    }
  {
    ATerm i_38 = t;
    if((PushChoice() == 0))
      {
        ATerm y_81 = NULL,z_81 = NULL,a_82 = NULL,h_11 = NULL;
        a_82 = t;
        if(match_cons(t, sym_layout_1))
          {
            z_81 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_82);
        y_81 = t;
        t = (ATerm) ATmakeAppl(sym_layout_1, z_81);
        h_11 = t;
        t = SSLsetAnnotations(h_11, y_81);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_38;
      }
  }
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm l_82 = NULL,m_82 = NULL,n_82 = NULL,i_11 = NULL;
  n_82 = t;
  if(match_cons(t, sym_layout_1))
    {
      m_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_82);
  l_82 = t;
  t = (ATerm) ATmakeAppl(sym_layout_1, m_82);
  i_11 = t;
  t = SSLsetAnnotations(i_11, l_82);
  return(t);
}
static ATerm v_6 (ATerm y_18, ATerm x_18, ATerm t)
{
  static ATerm c_13 (ATerm t);
  static ATerm c_13 (ATerm t)
  {
    t = y_18;
    return(t);
  }
  t = y_18;
  t = collect_1_0(m_12, t);
  t = reverse_0_0(t);
  t = read_pp_tables_0_0(t);
  t = x_18;
  t = repeat_1_0(s_12, t);
  t = split_2_0(u_12, v_12, t);
  t = insert_layout_0_0(t);
  t = split_2_0(c_13, _id, t);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-V", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  t = term_j_38;
  return(t);
}
static ATerm g_13 (ATerm t)
{
  t = term_k_38;
  return(t);
}
static ATerm l_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_13 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm n_13 (ATerm t)
{
  t = term_l_38;
  return(t);
}
static ATerm o_13 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_13 (ATerm t)
{
  ATerm p_82 = NULL;
  p_82 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, p_82);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  t = term_m_38;
  return(t);
}
ATerm Asfix_2_abox_options_0_0 (ATerm t)
{
  ATerm n_38 = t;
  int o_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_13, f_13, g_13, t);
      LocalPopChoice(o_38);
    }
  else
    {
      t = n_38;
      {
        ATerm p_38 = t;
        int q_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(l_13, m_13, n_13, t);
            LocalPopChoice(q_38);
          }
        else
          {
            t = p_38;
            t = ArgOption_3_0(o_13, p_13, q_13, t);
          }
      }
    }
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm q_82 = NULL,r_82 = NULL;
  if(match_cons(t, sym__2))
    {
      q_82 = ATgetArgument(t, 0);
      r_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(q_82, r_82, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_wrap_2_0(Asfix_2_abox_options_0_0, r_13, t);
  return(t);
}
