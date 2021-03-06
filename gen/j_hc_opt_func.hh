/*
 * Automatically Generated from Mathematica.
 * Sun 29 Jul 2018 10:10:39 GMT-04:00
 */

#ifndef J_HC_OPT_FUNC_HH
#define J_HC_OPT_FUNC_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void j_hc_opt_func_raw(double *p_output1, const double *var1);

  inline void j_hc_opt_func(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 30, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 30, 30);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    j_hc_opt_func_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_HC_OPT_FUNC_HH
