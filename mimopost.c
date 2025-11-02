/******************************************************************************/
/*   Copyright (C) 2014 K. Vasudevan. Indian Institute of Technology Kanpur.  */
/*   All Rights Reserved.                                                     */
/******************************************************************************/
/******************************************************************************/
#include "mimotype.h"
#include "mimoext.h"
/******************************************************************************/
int Post_Processor()
{
    FILE *fp;
    double ser_val = (double)Ser / ((double)(Vec_Cnt * NUM_TX));
    if (CONSTELL == QAM16)
    {
        fp = fopen("mimodata/qam16r2t2simser.dat","a");
        if (fp == NULL)
        {
            printf("Error opening file!\n");
            exit(1);
        }
    }
    else if (CONSTELL == QAM8)
    {
        fp = fopen("mimodata/qam8r2t2simser.dat","a");
        if (fp == NULL)
        {
            printf("Error opening file!\n");
            exit(1);
        }
    }
    printf("\t SNR (dB): %lf.\n\n",SNR);
    printf("\t SER: %12.10lf.\n\n",(double)Ser/((double)(Vec_Cnt*NUM_TX)));
    printf("\t No. of vector errors is: %d.\n\n",Vec_Ser);
    printf("\t Vectors transmitted:%ld\n\n",Vec_Cnt);
    printf("\t Symbols transmitted:%ld\n\n",Vec_Cnt*NUM_TX);
    Power=Power/(double)(Vec_Cnt*NUM_RX);
    printf("\t Avg. transmit power after fade is: %lf.\n\n",Power);
    if (CONSTELL == QAM16)
    {
        fprintf(fp, "%.1f %.9lf\n", SNR, ser_val);
        fclose(fp);
    }
    else if (CONSTELL == QAM8)
    {
        fprintf(fp, "%.1f %.9lf\n", SNR, ser_val);
        fclose(fp);
    }
    return(0);
}
/******************************************************************************/
