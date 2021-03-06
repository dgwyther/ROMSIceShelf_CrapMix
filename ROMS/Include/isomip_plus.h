/*
** svn $Id: icetest.h 1307 2008-01-10 00:22:36Z bgalton $
*******************************************************************************
** Copyright (c) 2002-2008 The ROMS/TOMS Group                               **
**   Licensed under a MIT/X style license                                    **
**   See License_ROMS.txt                                                    **
*******************************************************************************
**
** Options for Ice Shelf Ocean Model Intercomparison (ISOMIP) Experiment.
**
** Application flag:   ISOMIP_PLUS
** Input script:       ocean_isomip_plus.in
*/
#define UV_ADV
#define DJ_GRADPS
#define UV_COR
#define UV_VIS2
#define UV_QDRAG
#define MIX_GEO_UV
#undef MIX_S_UV
#undef TS_C4HADVECTION
#define TS_U3HADVECTION
#define TS_C4VADVECTION
#define TS_DIF2
#define MIX_GEO_TS
#undef  MIX_S_TS
#define SOLVE3D
#define SALINITY
#undef NONLIN_EOS
#define CURVGRID
#define SPHERICAL
#define MASKING
#define SPLINES
#define ICESHELF
#undef ICESHELF_MORPH
#undef  AVERAGES
#undef ATM_PRESS
#undef ANA_PAIR
#define PERFECT_RESTART
#undef ANA_GRID
#define ANA_INITIAL
#define ANA_SMFLUX
#define ANA_STFLUX
#define ANA_SSFLUX
#define ANA_BSFLUX
#define ANA_BTFLUX
#define ANA_SRFLUX

#define TCLIMATOLOGY
#define ANA_TCLIMA
#define TCLM_NUDGING
#define ANA_NUDGCOEF

/* Define SET_VBC.F for open ocean boundary layer. Can be one of:
* * ANA_SEAICE
*  Note that both undef will set surface fluf of salt and temp to zero*/
#undef ANA_SEAICE
/* Define SET_VBC.F for ice-ocean Thermodynamics. Can be one of:
*  * VBC_ICE_2EQN
*  * VBC_ICE_3EQN       
*  * Note that both undef will set surface fluf of salt and temp to zero */
#undef ICESHELF_2EQN_VBC
#define ICESHELF_3EQN_VBC
#undef ICESHELF_TEOS10

#ifdef ISOMIP_PLUS
/* By default initial/forcing conditions are:
 * Initial conditions: Warm
 * Forcing conditions: Warm
 */
#define ISOMIP_PLUS_INIWARM
#define ISOMIP_PLUS_FORCEWARM
#undef ISOMIP_PLUS_INICOLD
#undef ISOMIP_PLUS_FORCECOLD
#define ISOMIP_PLUS_CRAPMIX
#endif

#undef  ANA_VMIX
#undef MY25_MIXING
#define LMD_MIXING

#ifdef MY25_MIXING
#define N2S2_HORAVG
#define K_C4ADVECTION
#endif

#ifdef  LMD_MIXING
#define LMD_CONVEC 
#undef LMD_DDMIX 
#undef LMD_RIMIX
#undef LMD_SKPP
#endif

#undef SEDIMENT
#ifdef SEDIMENT
#define ANA_SEDIMENT
#define SED_MORPH
/*#define SED_DENS
#define SUSPLOAD
#define ANA_BPFLUX
#define ANA_SPFLUX*/
#endif

/* Test groundwater fluxes */
#undef UV_PSOURCE
#undef ANA_PSOURCE
#undef TS_PSOURCE

