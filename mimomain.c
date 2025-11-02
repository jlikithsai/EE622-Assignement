/******************************************************************************/
/*   Copyright (C) 2014 K. Vasudevan. Indian Institute of Technology Kanpur.  */
/*   All Rights Reserved.                                                     */
/******************************************************************************/
/******************************************************************************/
#include "mimotype.h"
#include "mimoglob.h"
/******************************************************************************/
double SNR = 5.0;
int main()
{
    for (SNR  = 5.0 ; SNR<=35.0 ; SNR +=2.5)
    {
        printf("\t Preprocessor...\n\n");
        Pre_Processor();
        printf("\t Simulation...\n\n");
        Simulation();
        printf("\t Postprocessor...\n\n");
        Post_Processor();
    }
 
 return(0);
}
/******************************************************************************/
