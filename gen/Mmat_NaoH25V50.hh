/*
 * Automatically Generated from Mathematica.
 * Tue 10 Jul 2018 11:09:10 GMT-04:00
 */

#ifndef MMAT_NAOH25V50_HH
#define MMAT_NAOH25V50_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Mmat_NaoH25V50_raw(double *p_output1, const double *var1);

  inline void Mmat_NaoH25V50(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 30, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 30, 30);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Mmat_NaoH25V50_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // MMAT_NAOH25V50_HH
