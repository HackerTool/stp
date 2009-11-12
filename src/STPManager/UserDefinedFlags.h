// -*- c++ -*-
/********************************************************************
 * AUTHORS: Vijay Ganesh
 *
 * BEGIN DATE: November, 2005
 *
 * LICENSE: Please view LICENSE file in the home dir of this Program
 ********************************************************************/
#ifndef UDEFFLAGS_H
#define UDEFFLAGS_H

namespace BEEV
{

  /******************************************************************
   * Struct UserDefFlags:
   *
   * Some userdefined variables that are set through commandline
   * options. 
   ******************************************************************/

  struct UserDefinedFlags {
  public:
    //collect statistics on certain functions
    bool stats_flag;
    
    //print DAG nodes
    bool print_nodes_flag;
    
    //run STP in optimized mode
    bool optimize_flag;
    
    //do sat refinement, i.e. underconstraint the problem, and feed to
    //SAT. if this works, great. else, add a set of suitable constraints
    //to re-constraint the problem correctly, and call SAT again, until
    //all constraints have been added.
    bool arrayread_refinement_flag;
    
    //switch to control write refinements
    bool arraywrite_refinement_flag;
    
    //check the counterexample against the original input to STP
    bool check_counterexample_flag;
    
    //construct the counterexample in terms of original variable based
    //on the counterexample returned by SAT solver
    bool construct_counterexample_flag;
    bool print_counterexample_flag;
    bool print_binary_flag;
    
    //Expands out the finite for-construct completely
    bool expand_finitefor_flag;
    
    //Determines the number of abstraction-refinement loop count for the
    //for-construct
    bool num_absrefine_flag;
    int num_absrefine;
    
    //if this option is true then print the way dawson wants using a
    //different printer. do not use this printer.
    bool print_arrayval_declaredorder_flag;
    
    //flag to decide whether to print "valid/invalid" or not
    bool print_output_flag;
    
    //print the variable order chosen by the sat solver while it is
    //solving.
    bool print_sat_varorder_flag;
    
    //turn on word level bitvector solver
    bool wordlevel_solve_flag;
    
    //XOR flattening optimizations.
    bool xor_flatten_flag;
    
    //this flag indicates that the BVSolver() succeeded
    bool toplevel_solved_flag;
  
    //print the input back
    bool print_STPinput_back_flag;
    
    //Flag to switch on the smtlib parser
    bool smtlib_parser_flag;
    
    bool division_by_zero_returns_one_flag;
    
    bool quick_statistics_flag;
  
    bool tseitin_are_decision_variables_flag;

    //CONSTRUCTOR    
    UserDefinedFlags()
    {  
      //collect statistics on certain functions
      stats_flag = false;
      
      //print DAG nodes
      print_nodes_flag = false;
      
      //run STP in optimized mode
      optimize_flag = true;
      
      // Do sat refinement, i.e. underconstraint the problem, and feed to
      // SAT. if this works, great. else, add a set of suitable
      // constraints to re-constraint the problem correctly, and call SAT again, 
      // until all constraints have been added.
      arrayread_refinement_flag = true;
  
      //flag to control write refinement
      arraywrite_refinement_flag = true;
      
      //check the counterexample against the original input to STP
      check_counterexample_flag = false;
      
      //construct the counterexample in terms of original variable based
      //on the counterexample returned by SAT solver
      construct_counterexample_flag = true;
      print_counterexample_flag = false;
      print_binary_flag = false;
      
      //Expands out the finite for-construct completely
      expand_finitefor_flag = false;
      
      //Determines the number of abstraction-refinement loop count for the
      //for-construct
      num_absrefine_flag = false;
      int num_absrefine = 0;
            
      //if this option is true then print the way dawson wants using a
      //different printer. do not use this printer.
      print_arrayval_declaredorder_flag = false;
      
      //flag to decide whether to print "valid/invalid" or not
      print_output_flag = false;
      
      //print the variable order chosen by the sat solver while it is
      //solving.
      print_sat_varorder_flag = false;
      
      //turn on word level bitvector solver
      wordlevel_solve_flag = true;
      
      //turn off XOR flattening
      xor_flatten_flag = false;
      
      //Flag to switch on the smtlib parser
      smtlib_parser_flag = false;
      
      //print the input back
      print_STPinput_back_flag = false;
      
      // If enabled. division, mod and remainder by zero will evaluate to
      // 1.
      division_by_zero_returns_one_flag = false;
      
      quick_statistics_flag=false;

      tseitin_are_decision_variables_flag=true;
    } //End of constructor for UserDefinedFlags

  }; //End of struct UserDefinedFlags
};//end of namespace

#endif