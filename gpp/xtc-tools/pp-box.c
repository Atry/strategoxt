#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static void init_module_constructors (void)
{
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
}
static ATerm term_m_0;
static ATerm term_l_0;
static ATerm term_j_0;
static ATerm term_i_0;
static ATerm term_g_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_g_0));
  term_g_0 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_i_0));
  term_i_0 = (ATerm) ATmakeAppl(ATmakeSymbol("Box.pp.af", 0, ATtrue));
  ATprotect(&(term_j_0));
  term_j_0 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_l_0));
  term_l_0 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_m_0));
  term_m_0 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm pass_verbose_0_0 (ATerm t);
ATerm xtc_transform_2_0 (ATerm l_6 (ATerm), ATerm m_6 (ATerm), ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_io_wrap_1_0 (ATerm r_5 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm d_0 (ATerm t);
static ATerm e_0 (ATerm t);
static ATerm f_0 (ATerm t);
ATerm io_pp_box_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = xtc_transform_2_0(c_0, d_0, t);
  t = xtc_transform_2_0(e_0, pass_verbose_0_0, t);
  t = xtc_transform_2_0(f_0, pass_verbose_0_0, t);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  t = term_g_0;
  return(t);
}
static ATerm d_0 (ATerm t)
{
  ATerm a_0 = NULL;
  t = term_i_0;
  t = xtc_find_0_0(t);
  a_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_j_0);
  return(t);
}
static ATerm e_0 (ATerm t)
{
  t = term_l_0;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_m_0;
  return(t);
}
ATerm io_pp_box_0_0 (ATerm t)
{
  t = xtc_io_wrap_1_0(b_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_pp_box_0_0(t);
  return(t);
}
