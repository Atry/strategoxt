#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
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
static Symbol sym_FILE_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_AOPTIONS_1;
static Symbol sym_AR_1;
static Symbol sym_AC_1;
static Symbol sym_AL_1;
static Symbol sym_IS_0;
static Symbol sym_HS_0;
static Symbol sym_VS_0;
static Symbol sym_SOpt_2;
static Symbol sym_C_2;
static Symbol sym_FBOX_2;
static Symbol sym_R_2;
static Symbol sym_A_3;
static Symbol sym_ALT_2;
static Symbol sym_HV_2;
static Symbol sym_V_2;
static Symbol sym_H_2;
static Symbol sym_S_1;
static void init_module_constructors (void)
{
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
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_AOPTIONS_1 = ATmakeSymbol("AOPTIONS", 1, ATfalse);
  ATprotectSymbol(sym_AOPTIONS_1);
  sym_AR_1 = ATmakeSymbol("AR", 1, ATfalse);
  ATprotectSymbol(sym_AR_1);
  sym_AC_1 = ATmakeSymbol("AC", 1, ATfalse);
  ATprotectSymbol(sym_AC_1);
  sym_AL_1 = ATmakeSymbol("AL", 1, ATfalse);
  ATprotectSymbol(sym_AL_1);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
  ATprotectSymbol(sym_C_2);
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
}
static ATerm term_o_8;
static ATerm term_l_8;
static ATerm term_k_8;
static ATerm term_t_6;
static ATerm term_j_6;
static ATerm term_a_6;
static ATerm term_y_4;
static ATerm term_w_4;
static ATerm term_r_4;
static ATerm term_q_4;
static ATerm term_n_4;
static ATerm term_j_4;
static ATerm term_i_4;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_i_4));
  term_i_4 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_4));
  term_j_4 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_4));
  term_q_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_r_4));
  term_r_4 = (ATerm) ATmakeInt(80);
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: too many columns in row: ", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: invalid box: ", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm close_file_0_0 (ATerm t);
ATerm print_0_0 (ATerm t);
ATerm is_string_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm l_94 (ATerm), ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm topdown_print_to_0_0 (ATerm t);
ATerm Fst_0_0 (ATerm t);
ATerm fatal_error_0_0 (ATerm t);
ATerm add_0_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
static ATerm t_3 (ATerm x_9, ATerm y_9, ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm get_width_0_0 (ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm g_3 (ATerm l_3, ATerm j_3, ATerm t);
static ATerm h_3 (ATerm c_0, ATerm n_0, ATerm e_0, ATerm t);
ATerm separate_by_0_0 (ATerm t);
ATerm _2_0 (ATerm b_81 (ATerm), ATerm c_81 (ATerm), ATerm t);
ATerm map_1_0 (ATerm w_100 (ATerm), ATerm t);
ATerm reverse_0_0 (ATerm t);
static ATerm p_3 (ATerm s_11 (ATerm), ATerm t_11 (ATerm), ATerm u_11 (ATerm), ATerm r_6, ATerm q_6, ATerm t);
static ATerm q_3 (ATerm q_11 (ATerm), ATerm r_11 (ATerm), ATerm j_5, ATerm h_5, ATerm k_5, ATerm i_5, ATerm t);
ATerm foldl_1_0 (ATerm y_107 (ATerm), ATerm t);
ATerm fetch_1_0 (ATerm e_101 (ATerm), ATerm t);
ATerm SOpt_value_1_0 (ATerm m_12 (ATerm), ATerm t);
ATerm string_length_0_0 (ATerm t);
ATerm copy_char_0_0 (ATerm t);
ATerm inc_0_0 (ATerm t);
ATerm subt_0_0 (ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm try_1_0 (ATerm o_92 (ATerm), ATerm t);
ATerm thread_map_1_0 (ATerm k_108 (ATerm), ATerm t);
ATerm is_real_hbox_0_0 (ATerm t);
ATerm filter_1_0 (ATerm x_108 (ATerm), ATerm t);
static ATerm r_3 (ATerm x_11 (ATerm), ATerm h_7, ATerm i_7, ATerm j_7, ATerm t);
ATerm Cons_2_0 (ATerm w_80 (ATerm), ATerm x_80 (ATerm), ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm is_real_vbox_0_0 (ATerm t);
ATerm matrix_transpose_0_0 (ATerm t);
ATerm conc_strings_0_0 (ATerm t);
ATerm align_right_0_0 (ATerm t);
ATerm align_center_0_0 (ATerm t);
ATerm align_left_0_0 (ATerm t);
ATerm align_column_0_0 (ATerm t);
ATerm list_max_0_0 (ATerm t);
ATerm concat_strings_0_0 (ATerm t);
ATerm flatten_list_0_0 (ATerm t);
ATerm unzip_0_0 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm s_3 (ATerm b_12 (ATerm), ATerm g_8, ATerm f_8, ATerm b_8, ATerm d_8, ATerm a_8, ATerm t);
ATerm do_A_column_1_0 (ATerm b_12 (ATerm), ATerm t);
ATerm zip_0_0 (ATerm t);
ATerm add_indices_0_0 (ATerm t);
ATerm length_0_0 (ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm gt_0_0 (ATerm t);
ATerm FitToMax_1_0 (ATerm d_12 (ATerm), ATerm t);
ATerm split_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm abox2text_1_0 (ATerm v_1 (ATerm), ATerm t);
ATerm try_abox2text_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm xtc_io_1_0 (ATerm o_5 (ATerm), ATerm t);
ATerm io_options_0_0 (ATerm t);
ATerm set_config_0_0 (ATerm t);
ATerm string_to_int_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm e_4 (ATerm), ATerm f_4 (ATerm), ATerm g_4 (ATerm), ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm Abox_2_text_options_0_0 (ATerm t);
ATerm option_wrap_2_0 (ATerm v_120 (ATerm), ATerm w_120 (ATerm), ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm io_Abox_2_text_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm a_0 = NULL,d_0 = NULL;
  a_0 = t;
  t = xtc_new_file_0_0(t);
  d_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_0, term_i_4);
  t = open_file_0_0(t);
  t = a_0;
  {
    static ATerm b_0 (ATerm t);
    static ATerm b_0 (ATerm t)
    {
      static ATerm f_0 (ATerm t);
      static ATerm f_0 (ATerm t)
      {
        ATerm j_0 = NULL;
        t = is_string_0_0(t);
        j_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_0, (ATerm) ATinsert(ATempty, j_0));
        t = print_0_0(t);
        t = j_0;
        return(t);
      }
      t = try_1_0(f_0, t);
      return(t);
    }
    t = topdown_1_0(b_0, t);
  }
  t = d_0;
  t = close_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, d_0);
  return(t);
}
static ATerm t_3 (ATerm x_9, ATerm y_9, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_j_4), x_9);
  t = string_tokenize_0_0(t);
  {
    ATerm k_4 = t;
    int m_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_12 = NULL,w_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = term_n_4;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_12 = ATgetFirst((ATermList) t);
                w_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_12;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = v_12;
            t = string_length_0_0(t);
          }
        LocalPopChoice(m_4);
      }
    else
      {
        t = k_4;
        {
          ATerm y_12 = NULL;
          t = last_0_0(t);
          t = string_length_0_0(t);
          y_12 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_12, y_9);
          t = subt_0_0(t);
        }
      }
  }
  return(t);
}
ATerm get_width_0_0 (ATerm t)
{
  ATerm o_4 = t;
  int p_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_4;
      t = get_config_0_0(t);
      LocalPopChoice(p_4);
    }
  else
    {
      t = o_4;
      t = term_r_4;
    }
  return(t);
}
static ATerm h_0 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm g_3 (ATerm l_3, ATerm j_3, ATerm t)
{
  ATerm l_0 = NULL,m_0 = NULL,p_0 = NULL,s_0 = NULL,u_0 = NULL;
  t = l_3;
  {
    ATerm s_4 = t;
    int t_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(h_0, t);
        LocalPopChoice(t_4);
      }
    else
      {
        t = s_4;
        t = term_n_4;
      }
  }
  t = inc_0_0(t);
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_0, term_j_4);
  t = copy_char_0_0(t);
  l_0 = t;
  t = l_3;
  {
    ATerm u_4 = t;
    int v_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SOpt_value_1_0(k_0, t);
        LocalPopChoice(v_4);
      }
    else
      {
        t = u_4;
        t = term_n_4;
      }
  }
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_0, term_w_4);
  t = copy_char_0_0(t);
  m_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_3, term_w_4);
  t = copy_char_0_0(t);
  p_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_0), m_0), l_0);
  t = concat_strings_0_0(t);
  return(t);
}
static ATerm h_3 (ATerm c_0, ATerm n_0, ATerm e_0, ATerm t)
{
  ATerm v_0 = NULL,w_0 = NULL,y_0 = NULL,z_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_0, e_0);
  t = g_3(c_0, e_0, t);
  w_0 = t;
  t = n_0;
  t = last_0_0(t);
  if(match_cons(t, sym__2))
    {
      ATerm x_4 = ATgetArgument(t, 0);
      v_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_0;
  t = map_1_0(Fst_0_0, t);
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_0, z_0);
  t = separate_by_0_0(t);
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_0, v_0);
  return(t);
}
static ATerm p_3 (ATerm s_11 (ATerm), ATerm t_11 (ATerm), ATerm u_11 (ATerm), ATerm r_6, ATerm q_6, ATerm t)
{
  ATerm e_1 = NULL,f_1 = NULL,g_1 = NULL,i_1 = NULL,k_1 = NULL;
  t = term_y_4;
  t = u_11(t);
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_6, k_1);
  t = s_11(t);
  if(match_cons(t, sym__2))
    {
      e_1 = ATgetArgument(t, 0);
      f_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_y_4;
  t = t_11(t);
  i_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_1, i_1);
  t = add_0_0(t);
  g_1 = t;
  t = (ATerm) ATinsert(CheckATermList(q_6), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, e_1), g_1));
  return(t);
}
static ATerm q_3 (ATerm q_11 (ATerm), ATerm r_11 (ATerm), ATerm j_5, ATerm h_5, ATerm k_5, ATerm i_5, ATerm t)
{
  ATerm p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,u_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_5, k_5);
  t = q_11(t);
  if(match_cons(t, sym__2))
    {
      p_1 = ATgetArgument(t, 0);
      q_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_y_4;
  t = get_width_0_0(t);
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_1, u_1);
  t = leq_0_0(t);
  t = term_y_4;
  t = r_11(t);
  s_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_1, s_1);
  t = add_0_0(t);
  r_1 = t;
  t = (ATerm) ATinsert(CheckATermList(i_5), (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_5), p_1), r_1));
  return(t);
}
ATerm SOpt_value_1_0 (ATerm m_12 (ATerm), ATerm t)
{
  ATerm w_1 = NULL;
  static ATerm o_0 (ATerm t);
  static ATerm o_0 (ATerm t)
  {
    ATerm x_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL,g_0 = NULL;
    b_2 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        y_1 = ATgetArgument(t, 0);
        z_1 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(b_2);
    x_1 = t;
    t = y_1;
    t = m_12(t);
    a_2 = t;
    t = z_1;
    if(((w_1 != NULL) && (w_1 != t)))
      _fail(t);
    else
      w_1 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, a_2, z_1);
    g_0 = t;
    t = SSLsetAnnotations(g_0, x_1);
    return(t);
  }
  t = fetch_1_0(o_0, t);
  t = not_null(w_1);
  t = string_to_int_0_0(t);
  return(t);
}
ATerm is_real_hbox_0_0 (ATerm t)
{
  ATerm z_4 = t;
  if((PushChoice() == 0))
    {
      ATerm a_5 = t;
      int c_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          LocalPopChoice(c_5);
        }
      else
        {
          t = a_5;
          {
            ATerm p_2 = NULL,r_2 = NULL,s_2 = NULL,i_0 = NULL,q_0 = NULL,t_0 = NULL,g_2 = NULL;
            p_2 = t;
            if(match_cons(t, sym_H_2))
              {
                r_2 = ATgetArgument(t, 0);
                s_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(p_2);
            i_0 = t;
            t = r_2;
            t = Nil_0_0(t);
            q_0 = t;
            t = s_2;
            t = Nil_0_0(t);
            t_0 = t;
            t = (ATerm) ATmakeAppl(sym_H_2, q_0, t_0);
            g_2 = t;
            t = SSLsetAnnotations(g_2, i_0);
          }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_4;
    }
  return(t);
}
static ATerm r_3 (ATerm x_11 (ATerm), ATerm h_7, ATerm i_7, ATerm j_7, ATerm t)
{
  static ATerm r_0 (ATerm t);
  static ATerm x_0 (ATerm t);
  static ATerm r_0 (ATerm t)
  {
    ATerm x_2 = NULL;
    x_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_2, h_7);
    t = x_11(t);
    return(t);
  }
  static ATerm x_0 (ATerm t)
  {
    static ATerm a_1 (ATerm t);
    static ATerm a_1 (ATerm t)
    {
      ATerm a_3 = NULL;
      a_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_3, i_7);
      t = x_11(t);
      return(t);
    }
    t = map_1_0(a_1, t);
    return(t);
  }
  t = j_7;
  t = Cons_2_0(r_0, x_0, t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = Cons_2_0(c_1, Nil_0_0, t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm d_5 = t;
  int l_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(l_5);
    }
  else
    {
      t = d_5;
      t = Cons_2_0(Nil_0_0, Nil_0_0, t);
    }
  return(t);
}
ATerm is_real_vbox_0_0 (ATerm t)
{
  ATerm m_5 = t;
  if((PushChoice() == 0))
    {
      ATerm n_5 = t;
      int p_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          LocalPopChoice(p_5);
        }
      else
        {
          t = n_5;
          {
            ATerm l_4 = NULL,h_1 = NULL,l_1 = NULL,m_1 = NULL;
            l_4 = t;
            t = SSL_explode_term(l_4);
            if(match_cons(t, sym__2))
              {
                h_1 = ATgetArgument(t, 0);
                l_1 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_1;
            t = Cons_2_0(_id, b_1, t);
            m_1 = t;
            t = SSL_mkterm(h_1, m_1);
          }
        }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_5;
    }
  return(t);
}
ATerm align_column_0_0 (ATerm t)
{
  ATerm b_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL,r_5 = NULL;
  e_5 = t;
  if(match_cons(t, sym__3))
    {
      f_5 = ATgetArgument(t, 0);
      g_5 = ATgetArgument(t, 1);
      r_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = g_5;
  {
    ATerm q_5 = t;
    int s_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_AL_1))
          {
            ATerm t_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(s_5);
        t = r_5;
        {
          ATerm u_5 = t;
          int v_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__3))
                {
                  ATerm w_5 = ATgetArgument(t, 0);
                  b_5 = ATgetArgument(t, 1);
                  {
                    ATerm x_5 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(v_5);
              t = f_5;
              if(match_int(t, 1))
                {
                  ATerm y_5 = t;
                  int z_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATmakeAppl(sym__2, f_5, term_a_6);
                      t = gt_0_0(t);
                      t = r_5;
                      t = align_left_0_0(t);
                      LocalPopChoice(z_5);
                    }
                  else
                    {
                      t = y_5;
                      t = b_5;
                    }
                }
              else
                {
                  t = (ATerm) ATmakeAppl(sym__2, f_5, term_a_6);
                  t = gt_0_0(t);
                  t = r_5;
                  t = align_left_0_0(t);
                }
            }
          else
            {
              t = u_5;
              t = (ATerm) ATmakeAppl(sym__2, f_5, term_a_6);
              t = gt_0_0(t);
              t = r_5;
              t = align_left_0_0(t);
            }
        }
      }
    else
      {
        t = q_5;
        {
          ATerm b_6 = t;
          int c_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AC_1))
                {
                  ATerm d_6 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(c_6);
              t = r_5;
              t = align_center_0_0(t);
            }
          else
            {
              t = b_6;
              if(match_cons(t, sym_AR_1))
                {
                  ATerm e_6 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = r_5;
              t = align_right_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = map_1_0(n_1, t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = try_1_0(o_1, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = flatten_list_0_0(t);
  t = concat_strings_0_0(t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm s_3 (ATerm b_12 (ATerm), ATerm g_8, ATerm f_8, ATerm b_8, ATerm d_8, ATerm a_8, ATerm t)
{
  ATerm o_7 = NULL,z_7 = NULL,t_8 = NULL,k_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL;
  t = b_8;
  {
    static ATerm d_1 (ATerm t);
    static ATerm d_1 (ATerm t)
    {
      ATerm c_10 = NULL;
      c_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_10, d_8);
      t = b_12(t);
      return(t);
    }
    t = map_1_0(d_1, t);
  }
  t = unzip_0_0(t);
  t = _2_0(j_1, list_max_0_0, t);
  if(match_cons(t, sym__2))
    {
      z_7 = ATgetArgument(t, 0);
      o_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_7, d_8);
  t = subt_0_0(t);
  t_8 = t;
  {
    ATerm f_6 = t;
    int g_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, f_8, term_a_6);
        t = gt_0_0(t);
        LocalPopChoice(g_6);
        {
          ATerm d_10 = NULL,f_10 = NULL;
          t = g_8;
          if(match_cons(t, sym_AC_1))
            {
              f_10 = ATgetArgument(t, 0);
              t = f_10;
            }
          else
            {
              if(match_cons(t, sym_AR_1))
                {
                  f_10 = ATgetArgument(t, 0);
                  t = f_10;
                }
              else
                {
                  if(match_cons(t, sym_AL_1))
                    {
                      f_10 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = f_10;
                }
            }
          {
            ATerm h_6 = t;
            int i_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SOpt_value_1_0(t_1, t);
                LocalPopChoice(i_6);
              }
            else
              {
                t = h_6;
                t = term_a_6;
              }
          }
          d_10 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_10, term_w_4);
          t = copy_char_0_0(t);
        }
      }
    else
      {
        t = f_6;
        t = term_j_6;
      }
  }
  k_9 = t;
  t = z_7;
  {
    static ATerm c_2 (ATerm t);
    static ATerm c_2 (ATerm t)
    {
      ATerm j_10 = NULL,k_10 = NULL;
      k_10 = t;
      t = (ATerm) ATmakeAppl(sym__3, f_8, g_8, (ATerm) ATmakeAppl(sym__3, term_w_4, k_10, t_8));
      t = align_column_0_0(t);
      j_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_10, k_9);
      t = conc_strings_0_0(t);
      return(t);
    }
    t = map_1_0(c_2, t);
  }
  q_9 = t;
  t = k_9;
  t = string_length_0_0(t);
  s_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_9, o_7);
  t = add_0_0(t);
  r_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_9, (ATerm) ATinsert(CheckATermList(a_8), q_9));
  return(t);
}
ATerm do_A_column_1_0 (ATerm b_12 (ATerm), ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_6 = ATgetArgument(t, 0);
      if(match_cons(k_6, sym__2))
        {
          l_10 = ATgetArgument(k_6, 0);
          {
            ATerm m_6 = ATgetArgument(k_6, 1);
            if(match_cons(m_6, sym__2))
              {
                m_10 = ATgetArgument(m_6, 0);
                n_10 = ATgetArgument(m_6, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm l_6 = ATgetArgument(t, 1);
        if(match_cons(l_6, sym__2))
          {
            o_10 = ATgetArgument(l_6, 0);
            p_10 = ATgetArgument(l_6, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_3(b_12, l_10, m_10, n_10, o_10, p_10, t);
  return(t);
}
ATerm FitToMax_1_0 (ATerm d_12 (ATerm), ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL;
  u_10 = t;
  t = length_0_0(t);
  r_10 = t;
  t = term_y_4;
  t = d_12(t);
  v_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_10, r_10);
  t = subt_0_0(t);
  s_10 = t;
  {
    ATerm n_6 = t;
    int o_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_10, term_n_4);
        t = gt_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, s_10, (ATerm) ATempty);
        t = copy_0_0(t);
        t_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_10, t_10);
        t = conc_0_0(t);
        LocalPopChoice(o_6);
      }
    else
      {
        t = n_6;
        {
          ATerm p_6 = t;
          int s_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
                _fail(t);
              t = u_10;
              LocalPopChoice(s_6);
            }
          else
            {
              t = p_6;
              t = (ATerm) ATinsert(ATinsert(ATempty, u_10), term_t_6);
              t = fatal_error_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm u_6 = t;
  if((PushChoice() == 0))
    {
      ATerm k_12 = NULL,l_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,i_2 = NULL;
      q_12 = t;
      if(match_cons(t, sym_R_2))
        {
          l_12 = ATgetArgument(t, 0);
          o_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_12);
      k_12 = t;
      t = o_12;
      t = Nil_0_0(t);
      p_12 = t;
      t = (ATerm) ATmakeAppl(sym_R_2, l_12, p_12);
      i_2 = t;
      t = SSLsetAnnotations(i_2, k_12);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_6;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  t = split_2_0(_id, d_2, t);
  {
    static ATerm r_12 (ATerm t);
    static ATerm r_12 (ATerm t)
    {
      ATerm c_11 = NULL,d_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL;
      if(match_cons(t, sym__2))
        {
          f_11 = ATgetArgument(t, 0);
          i_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_11;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm n_11 = NULL;
          t = i_11;
          t = reverse_0_0(t);
          n_11 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, n_11));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_11 = ATgetFirst((ATermList) t);
              h_11 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = g_11;
          if(match_cons(t, sym_R_2))
            {
              c_11 = ATgetArgument(t, 0);
              d_11 = ATgetArgument(t, 1);
              {
                ATerm v_6 = t;
                int w_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_11 = NULL,z_11 = NULL;
                    t = i_11;
                    t = reverse_0_0(t);
                    y_11 = t;
                    t = (ATerm) ATmakeAppl(sym__2, h_11, (ATerm) ATempty);
                    t = r_12(t);
                    z_11 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(z_11), (ATerm) ATmakeAppl(sym_R_2, c_11, d_11)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, y_11));
                    LocalPopChoice(w_6);
                  }
                else
                  {
                    t = v_6;
                    t = (ATerm) ATmakeAppl(sym__2, h_11, (ATerm) ATinsert(CheckATermList(i_11), g_11));
                    t = r_12(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, h_11, (ATerm) ATinsert(CheckATermList(i_11), g_11));
              t = r_12(t);
            }
        }
      return(t);
    }
    t = r_12(t);
  }
  t = filter_1_0(e_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm w_14 = NULL;
  if(match_cons(t, sym_R_2))
    {
      ATerm x_6 = ATgetArgument(t, 0);
      w_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_14;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm y_6 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_6;
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = _2_0(reverse_0_0, _id, t);
  return(t);
}
ATerm abox2text_1_0 (ATerm v_1 (ATerm), ATerm t)
{
  static ATerm o_18 (ATerm h_14, ATerm i_14, ATerm j_14, ATerm k_14, ATerm l_14, ATerm t);
  static ATerm p_18 (ATerm y_14, ATerm z_14, ATerm a_15, ATerm b_15, ATerm t);
  static ATerm q_18 (ATerm j_15, ATerm k_15, ATerm l_15, ATerm m_15, ATerm t);
  static ATerm r_18 (ATerm z_15, ATerm a_16, ATerm b_16, ATerm c_16, ATerm t);
  static ATerm o_18 (ATerm h_14, ATerm i_14, ATerm j_14, ATerm k_14, ATerm l_14, ATerm t)
  {
    ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL,s_14 = NULL,v_14 = NULL;
    t = j_14;
    t = construct_rows_0_0(t);
    t = map_1_0(f_2, t);
    {
      static ATerm h_2 (ATerm t);
      static ATerm h_2 (ATerm t)
      {
        static ATerm j_2 (ATerm t);
        static ATerm j_2 (ATerm t)
        {
          t = h_14;
          t = length_0_0(t);
          return(t);
        }
        t = FitToMax_1_0(j_2, t);
        return(t);
      }
      t = map_1_0(h_2, t);
    }
    t = matrix_transpose_0_0(t);
    t = reverse_0_0(t);
    t = add_indices_0_0(t);
    t = reverse_0_0(t);
    o_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_14, o_14);
    t = zip_0_0(t);
    p_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_14, (ATerm) ATmakeAppl(sym__2, k_14, (ATerm) ATempty));
    {
      static ATerm k_2 (ATerm t);
      static ATerm k_2 (ATerm t)
      {
        t = do_A_column_1_0(v_1, t);
        return(t);
      }
      t = foldl_1_0(k_2, t);
    }
    if(match_cons(t, sym__2))
      {
        s_14 = ATgetArgument(t, 0);
        q_14 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = q_14;
    t = reverse_0_0(t);
    t = matrix_transpose_0_0(t);
    {
      static ATerm l_2 (ATerm t);
      static ATerm l_2 (ATerm t)
      {
        ATerm x_14 = NULL;
        x_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_14, s_14);
        return(t);
      }
      t = map_1_0(l_2, t);
    }
    v_14 = t;
    t = (ATerm) ATmakeAppl(sym__3, i_14, v_14, k_14);
    t = h_3(i_14, v_14, k_14, t);
    return(t);
  }
  static ATerm p_18 (ATerm y_14, ATerm z_14, ATerm a_15, ATerm b_15, ATerm t)
  {
    ATerm d_15 = NULL,e_15 = NULL,h_15 = NULL;
    t = y_14;
    {
      ATerm z_6 = t;
      int a_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(m_2, t);
          LocalPopChoice(a_7);
        }
      else
        {
          t = z_6;
          t = term_n_4;
        }
    }
    h_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_15, h_15);
    t = add_0_0(t);
    e_15 = t;
    t = z_14;
    t = filter_1_0(is_real_vbox_0_0, t);
    d_15 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, a_15);
      }
    else
      {
        ATerm i_15 = NULL;
        t = (ATerm) ATmakeAppl(sym__3, a_15, e_15, d_15);
        t = r_3(v_1, a_15, e_15, d_15, t);
        i_15 = t;
        t = (ATerm) ATmakeAppl(sym__3, y_14, i_15, a_15);
        t = h_3(y_14, i_15, a_15, t);
      }
    return(t);
  }
  static ATerm q_18 (ATerm j_15, ATerm k_15, ATerm l_15, ATerm m_15, ATerm t)
  {
    ATerm p_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL;
    static ATerm u_2 (ATerm t);
    static ATerm u_2 (ATerm t)
    {
      static ATerm w_2 (ATerm t);
      static ATerm w_2 (ATerm t)
      {
        ATerm y_15 = NULL;
        y_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_15, not_null(s_15));
        t = subt_0_0(t);
        return(t);
      }
      t = _2_0(v_2, w_2, t);
      return(t);
    }
    t = j_15;
    {
      ATerm b_7 = t;
      int c_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(n_2, t);
          LocalPopChoice(c_7);
        }
      else
        {
          t = b_7;
          t = term_a_6;
        }
    }
    t_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_15, term_w_4);
    t = copy_char_0_0(t);
    r_15 = t;
    t = string_length_0_0(t);
    if(((s_15 != NULL) && (s_15 != t)))
      _fail(t);
    else
      s_15 = t;
    t = k_15;
    t = filter_1_0(is_real_hbox_0_0, t);
    p_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_15, l_15);
    {
      static ATerm o_2 (ATerm t);
      static ATerm o_2 (ATerm t)
      {
        static ATerm q_2 (ATerm t);
        static ATerm q_2 (ATerm t)
        {
          ATerm v_15 = NULL;
          v_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_15, v_15);
          t = add_0_0(t);
          return(t);
        }
        t = v_1(t);
        t = _2_0(_id, q_2, t);
        return(t);
      }
      t = thread_map_1_0(o_2, t);
    }
    {
      static ATerm t_2 (ATerm t);
      static ATerm t_2 (ATerm t)
      {
        ATerm w_15 = NULL;
        w_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_15, w_15);
        t = separate_by_0_0(t);
        return(t);
      }
      t = _2_0(t_2, _id, t);
    }
    t = try_1_0(u_2, t);
    return(t);
  }
  static ATerm r_18 (ATerm z_15, ATerm a_16, ATerm b_16, ATerm c_16, ATerm t)
  {
    ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL,j_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
    t = z_15;
    {
      ATerm d_7 = t;
      int e_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(c_3, t);
          LocalPopChoice(e_7);
        }
      else
        {
          t = d_7;
          t = term_a_6;
        }
    }
    n_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_16, term_w_4);
    t = copy_char_0_0(t);
    g_16 = t;
    t = z_15;
    {
      ATerm f_7 = t;
      int g_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(d_3, t);
          LocalPopChoice(g_7);
        }
      else
        {
          t = f_7;
          t = term_n_4;
        }
    }
    t = inc_0_0(t);
    m_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_16, term_j_4);
    t = copy_char_0_0(t);
    t = g_16;
    t = string_length_0_0(t);
    e_16 = t;
    t = z_15;
    {
      ATerm k_7 = t;
      int l_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SOpt_value_1_0(e_3, t);
          LocalPopChoice(l_7);
        }
      else
        {
          t = k_7;
          t = term_n_4;
        }
    }
    l_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_16, l_16);
    t = add_0_0(t);
    f_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_16, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, b_16)));
    {
      static ATerm f_3 (ATerm t);
      static ATerm f_3 (ATerm t)
      {
        ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
        s_16 = t;
        if(match_cons(t, sym__2))
          {
            t_16 = ATgetArgument(t, 0);
            u_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_16;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_16 = ATgetFirst((ATermList) t);
            r_16 = (ATerm) ATgetNext((ATermList) t);
            t = o_16;
            if(match_cons(t, sym__2))
              {
                p_16 = ATgetArgument(t, 0);
                q_16 = ATgetArgument(t, 1);
                {
                  ATerm m_7 = t;
                  int n_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm i_3 (ATerm t);
                      static ATerm i_3 (ATerm t)
                      {
                        t = e_16;
                        return(t);
                      }
                      t = s_16;
                      t = q_3(v_1, i_3, t_16, p_16, q_16, r_16, t);
                      LocalPopChoice(n_7);
                    }
                  else
                    {
                      t = m_7;
                      {
                        static ATerm k_3 (ATerm t);
                        static ATerm m_3 (ATerm t);
                        static ATerm k_3 (ATerm t)
                        {
                          t = e_16;
                          return(t);
                        }
                        static ATerm m_3 (ATerm t)
                        {
                          t = f_16;
                          return(t);
                        }
                        t = s_16;
                        t = p_3(v_1, k_3, m_3, t_16, u_16, t);
                      }
                    }
                }
              }
            else
              {
                static ATerm n_3 (ATerm t);
                static ATerm o_3 (ATerm t);
                static ATerm n_3 (ATerm t)
                {
                  t = e_16;
                  return(t);
                }
                static ATerm o_3 (ATerm t)
                {
                  t = f_16;
                  return(t);
                }
                t = s_16;
                t = p_3(v_1, n_3, o_3, t_16, u_16, t);
              }
          }
        else
          {
            static ATerm u_3 (ATerm t);
            static ATerm v_3 (ATerm t);
            static ATerm u_3 (ATerm t)
            {
              t = e_16;
              return(t);
            }
            static ATerm v_3 (ATerm t)
            {
              t = f_16;
              return(t);
            }
            t = s_16;
            t = p_3(v_1, u_3, v_3, t_16, u_16, t);
          }
        return(t);
      }
      t = foldl_1_0(f_3, t);
    }
    t = reverse_0_0(t);
    t = map_1_0(w_3, t);
    {
      static ATerm x_3 (ATerm t);
      static ATerm x_3 (ATerm t)
      {
        static ATerm y_3 (ATerm t);
        static ATerm y_3 (ATerm t)
        {
          ATerm g_17 = NULL;
          g_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_16, g_17);
          t = separate_by_0_0(t);
          return(t);
        }
        t = _2_0(y_3, _id, t);
        return(t);
      }
      t = map_1_0(x_3, t);
    }
    j_16 = t;
    t = (ATerm) ATmakeAppl(sym__3, z_15, j_16, b_16);
    t = h_3(z_15, j_16, b_16, t);
    return(t);
  }
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL;
  p_17 = t;
  if(match_cons(t, sym__2))
    {
      q_17 = ATgetArgument(t, 0);
      t_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_17;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_6, t_17);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_17 = ATgetFirst((ATermList) t);
          s_17 = (ATerm) ATgetNext((ATermList) t);
          t = s_17;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, r_17, t_17);
          t = v_1(t);
        }
      else
        {
          if(match_cons(t, sym_ALT_2))
            {
              r_17 = ATgetArgument(t, 0);
              s_17 = ATgetArgument(t, 1);
              {
                ATerm y_2 = NULL,z_2 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, r_17, t_17);
                t = v_1(t);
                y_2 = t;
                if(match_cons(t, sym__2))
                  {
                    ATerm p_7 = ATgetArgument(t, 0);
                    z_2 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, r_17, s_17), t_17);
                {
                  ATerm q_7 = t;
                  int r_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_3 = NULL;
                      t = get_width_0_0(t);
                      b_3 = t;
                      t = (ATerm) ATmakeAppl(sym__2, z_2, b_3);
                      t = leq_0_0(t);
                      LocalPopChoice(r_7);
                      t = y_2;
                    }
                  else
                    {
                      t = q_7;
                      t = (ATerm) ATmakeAppl(sym__2, s_17, t_17);
                      t = v_1(t);
                    }
                }
              }
            }
          else
            {
              if(match_cons(t, sym_R_2))
                {
                  r_17 = ATgetArgument(t, 0);
                  s_17 = ATgetArgument(t, 1);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, r_17, s_17), t_17);
                  t = v_1(t);
                }
              else
                {
                  ATerm s_7 = t;
                  int t_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_FBOX_2))
                        {
                          ATerm u_7 = ATgetArgument(t, 0);
                          s_17 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      LocalPopChoice(t_7);
                      t = (ATerm) ATmakeAppl(sym__2, s_17, t_17);
                      t = v_1(t);
                    }
                  else
                    {
                      t = s_7;
                      {
                        ATerm v_7 = t;
                        int w_7 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_C_2))
                              {
                                ATerm x_7 = ATgetArgument(t, 0);
                                s_17 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(w_7);
                            t = s_17;
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                i_17 = ATgetFirst((ATermList) t);
                                k_17 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = i_17;
                            if(match_cons(t, sym_S_1))
                              {
                                j_17 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = k_17;
                            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym__2, j_17, t_17);
                          }
                        else
                          {
                            t = v_7;
                            if(match_cons(t, sym_S_1))
                              {
                                r_17 = ATgetArgument(t, 0);
                                {
                                  ATerm j_18 = NULL,k_18 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, r_17, t_17);
                                  t = t_3(r_17, t_17, t);
                                  k_18 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, t_17, k_18);
                                  t = add_0_0(t);
                                  j_18 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, r_17, j_18);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_A_3))
                                  {
                                    r_17 = ATgetArgument(t, 0);
                                    s_17 = ATgetArgument(t, 1);
                                    o_17 = ATgetArgument(t, 2);
                                    t = r_17;
                                    if(match_cons(t, sym_AOPTIONS_1))
                                      {
                                        n_17 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = o_17;
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        l_17 = ATgetFirst((ATermList) t);
                                        m_17 = (ATerm) ATgetNext((ATermList) t);
                                        t = m_17;
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            t = l_17;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm y_7 = t;
                                                int c_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = o_18(n_17, s_17, o_17, t_17, p_17, t);
                                                    LocalPopChoice(c_8);
                                                  }
                                                else
                                                  {
                                                    t = y_7;
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, t_17);
                                                  }
                                              }
                                            else
                                              {
                                                t = o_18(n_17, s_17, o_17, t_17, p_17, t);
                                              }
                                          }
                                        else
                                          {
                                            t = l_17;
                                            t = o_18(n_17, s_17, o_17, t_17, p_17, t);
                                          }
                                      }
                                    else
                                      {
                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                          {
                                            ATerm e_8 = t;
                                            int h_8 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = o_18(n_17, s_17, o_17, t_17, p_17, t);
                                                LocalPopChoice(h_8);
                                              }
                                            else
                                              {
                                                t = e_8;
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, t_17);
                                              }
                                          }
                                        else
                                          {
                                            t = o_18(n_17, s_17, o_17, t_17, p_17, t);
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_V_2))
                                      {
                                        r_17 = ATgetArgument(t, 0);
                                        s_17 = ATgetArgument(t, 1);
                                        t = p_18(r_17, s_17, t_17, p_17, t);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_H_2))
                                          {
                                            r_17 = ATgetArgument(t, 0);
                                            s_17 = ATgetArgument(t, 1);
                                            t = q_18(r_17, s_17, t_17, p_17, t);
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_HV_2))
                                              {
                                                r_17 = ATgetArgument(t, 0);
                                                s_17 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = r_18(r_17, s_17, t_17, p_17, t);
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
ATerm try_abox2text_0_0 (ATerm t)
{
  ATerm i_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2text_1_0(try_abox2text_0_0, t);
      LocalPopChoice(j_8);
    }
  else
    {
      t = i_8;
      {
        ATerm s_18 = NULL;
        s_18 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, s_18), term_k_8);
        t = fatal_error_0_0(t);
      }
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm v_18 = NULL;
  v_18 = t;
  if(match_string(t, "-w"))
    {
      t = v_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = v_18;
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL;
  w_18 = t;
  t = string_to_int_0_0(t);
  x_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_4, x_18);
  t = set_config_0_0(t);
  t = w_18;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_l_8;
  return(t);
}
ATerm Abox_2_text_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_3, a_4, b_4, t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm m_8 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox_2_text_options_0_0(t);
      LocalPopChoice(n_8);
    }
  else
    {
      t = m_8;
      t = io_options_0_0(t);
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = xtc_io_1_0(h_4, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL;
  t = read_from_0_0(t);
  z_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_18, term_n_4);
  t = try_abox2text_0_0(t);
  t = Fst_0_0(t);
  y_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_18, term_o_8);
  t = topdown_print_to_0_0(t);
  return(t);
}
ATerm io_Abox_2_text_0_0 (ATerm t)
{
  t = option_wrap_2_0(c_4, d_4, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Abox_2_text_0_0(t);
  return(t);
}
