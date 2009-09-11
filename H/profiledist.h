#ifndef __VIENNA_RNA_PACKAGE_PROFILEDIST_H__
#define __VIENNA_RNA_PACKAGE_PROFILEDIST_H__

float *Make_bp_profile(int length);
/* condense pair probability matrix pr into a vector containing probabilities
   for upstream paired, downstream paired and unpaired. This resulting
   probability profile is used as input for profile_edit_distance */

float profile_edit_distance(const float *T1, const float *T2);
/* align two probability profiles */

void  print_bppm(const float *T);
/* print string representation of probability profile */

void  free_profile(float *T);
/* free space allocated in Make_bp_profile */

#endif
