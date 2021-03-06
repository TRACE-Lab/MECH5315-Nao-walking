/*
 * Automatically Generated from Mathematica.
 * Wed 11 Jul 2018 16:19:05 GMT-04:00
 */

#ifndef LKNEE_POSE_FUNC_HH
#define LKNEE_POSE_FUNC_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void LKnee_pose_func_raw(double *p_output1, const double *var1);

  inline void LKnee_pose_func(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 30, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    LKnee_pose_func_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // LKNEE_POSE_FUNC_HH
