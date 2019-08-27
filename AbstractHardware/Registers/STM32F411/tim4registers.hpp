/*******************************************************************************
* Filename      : tim4registers.hpp
*
* Details       : General purpose timers. This header file is auto-generated for
*                 STM32F411 device.
*
*
*******************************************************************************/

#if !defined(TIM4REGISTERS_HPP)
#define TIM4REGISTERS_HPP

#include "tim4bitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct TIM4
{
  struct TIM4CR1Base {} ;

  struct CR1 : public RegisterBase<0x40000800, 32, ReadWriteMode>
  {
    using CKD = TIM_CR_CKD_Values<TIM4::CR1, 8, 2, ReadWriteMode, TIM4CR1Base> ;
    using ARPE = TIM_CR_ARPE_Values<TIM4::CR1, 7, 1, ReadWriteMode, TIM4CR1Base> ;
    using CMS = TIM_CR_CMS_Values<TIM4::CR1, 5, 2, ReadWriteMode, TIM4CR1Base> ;
    using DIR = TIM_CR_DIR_Values<TIM4::CR1, 4, 1, ReadWriteMode, TIM4CR1Base> ;
    using OPM = TIM_CR_OPM_Values<TIM4::CR1, 3, 1, ReadWriteMode, TIM4CR1Base> ;
    using URS = TIM_CR_URS_Values<TIM4::CR1, 2, 1, ReadWriteMode, TIM4CR1Base> ;
    using UDIS = TIM_CR_UDIS_Values<TIM4::CR1, 1, 1, ReadWriteMode, TIM4CR1Base> ;
    using CEN = TIM_CR_CEN_Values<TIM4::CR1, 0, 1, ReadWriteMode, TIM4CR1Base> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40000800, 32, ReadWriteMode, TIM4CR1Base, T...> ;

  struct TIM4CR2Base {} ;

  struct CR2 : public RegisterBase<0x40000804, 32, ReadWriteMode>
  {
    using TI1S = TIM_CR_TIS_Values<TIM4::CR2, 7, 1, ReadWriteMode, TIM4CR2Base> ;
    using MMS = TIM_CR_MMS_Values<TIM4::CR2, 4, 3, ReadWriteMode, TIM4CR2Base> ;
    using CCDS = TIM_CR_CCDS_Values<TIM4::CR2, 3, 1, ReadWriteMode, TIM4CR2Base> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40000804, 32, ReadWriteMode, TIM4CR2Base, T...> ;

  struct TIM4SMCRBase {} ;

  struct SMCR : public RegisterBase<0x40000808, 32, ReadWriteMode>
  {
    using ETP = TIM_SMCR_ETP_Values<TIM4::SMCR, 15, 1, ReadWriteMode, TIM4SMCRBase> ;
    using ECE = TIM_SMCR_ECE_Values<TIM4::SMCR, 14, 1, ReadWriteMode, TIM4SMCRBase> ;
    using ETPS = TIM_SMCR_ETPS_Values<TIM4::SMCR, 12, 2, ReadWriteMode, TIM4SMCRBase> ;
    using ETF = TIM_SMCR_ETF_Values<TIM4::SMCR, 8, 4, ReadWriteMode, TIM4SMCRBase> ;
    using MSM = TIM_SMCR_MSM_Values<TIM4::SMCR, 7, 1, ReadWriteMode, TIM4SMCRBase> ;
    using TS = TIM_SMCR_TS_Values<TIM4::SMCR, 4, 3, ReadWriteMode, TIM4SMCRBase> ;
    using SMS = TIM_SMCR_SMS_Values<TIM4::SMCR, 0, 3, ReadWriteMode, TIM4SMCRBase> ;
  } ;

  template<typename... T> 
  using SMCRPack  = Register<0x40000808, 32, ReadWriteMode, TIM4SMCRBase, T...> ;

  struct TIM4DIERBase {} ;

  struct DIER : public RegisterBase<0x4000080C, 32, ReadWriteMode>
  {
    using TDE = TIM_DIER_TDE_Values<TIM4::DIER, 14, 1, ReadWriteMode, TIM4DIERBase> ;
    using CC4DE = TIM_DIER_CCDE_Values<TIM4::DIER, 12, 1, ReadWriteMode, TIM4DIERBase> ;
    using CC3DE = TIM_DIER_CCDE_Values<TIM4::DIER, 11, 1, ReadWriteMode, TIM4DIERBase> ;
    using CC2DE = TIM_DIER_CCDE_Values<TIM4::DIER, 10, 1, ReadWriteMode, TIM4DIERBase> ;
    using CC1DE = TIM_DIER_CCDE_Values<TIM4::DIER, 9, 1, ReadWriteMode, TIM4DIERBase> ;
    using UDE = TIM_DIER_UDE_Values<TIM4::DIER, 8, 1, ReadWriteMode, TIM4DIERBase> ;
    using TIE = TIM_DIER_TIE_Values<TIM4::DIER, 6, 1, ReadWriteMode, TIM4DIERBase> ;
    using CC4IE = TIM_DIER_CCIE_Values<TIM4::DIER, 4, 1, ReadWriteMode, TIM4DIERBase> ;
    using CC3IE = TIM_DIER_CCIE_Values<TIM4::DIER, 3, 1, ReadWriteMode, TIM4DIERBase> ;
    using CC2IE = TIM_DIER_CCIE_Values<TIM4::DIER, 2, 1, ReadWriteMode, TIM4DIERBase> ;
    using CC1IE = TIM_DIER_CCIE_Values<TIM4::DIER, 1, 1, ReadWriteMode, TIM4DIERBase> ;
    using UIE = TIM_DIER_UIE_Values<TIM4::DIER, 0, 1, ReadWriteMode, TIM4DIERBase> ;
  } ;

  template<typename... T> 
  using DIERPack  = Register<0x4000080C, 32, ReadWriteMode, TIM4DIERBase, T...> ;

  struct TIM4SRBase {} ;

  struct SR : public RegisterBase<0x40000810, 32, ReadWriteMode>
  {
    using CC4OF = TIM_SR_CCOF_Values<TIM4::SR, 12, 1, ReadWriteMode, TIM4SRBase> ;
    using CC3OF = TIM_SR_CCOF_Values<TIM4::SR, 11, 1, ReadWriteMode, TIM4SRBase> ;
    using CC2OF = TIM_SR_CCOF_Values<TIM4::SR, 10, 1, ReadWriteMode, TIM4SRBase> ;
    using CC1OF = TIM_SR_CCOF_Values<TIM4::SR, 9, 1, ReadWriteMode, TIM4SRBase> ;
    using TIF = TIM_SR_TIF_Values<TIM4::SR, 6, 1, ReadWriteMode, TIM4SRBase> ;
    using CC4IF = TIM_SR_CCIF_Values<TIM4::SR, 4, 1, ReadWriteMode, TIM4SRBase> ;
    using CC3IF = TIM_SR_CCIF_Values<TIM4::SR, 3, 1, ReadWriteMode, TIM4SRBase> ;
    using CC2IF = TIM_SR_CCIF_Values<TIM4::SR, 2, 1, ReadWriteMode, TIM4SRBase> ;
    using CC1IF = TIM_SR_CCIF_Values<TIM4::SR, 1, 1, ReadWriteMode, TIM4SRBase> ;
    using UIF = TIM_SR_UIF_Values<TIM4::SR, 0, 1, ReadWriteMode, TIM4SRBase> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40000810, 32, ReadWriteMode, TIM4SRBase, T...> ;

  struct TIM4EGRBase {} ;

  struct EGR : public RegisterBase<0x40000814, 32, WriteMode>
  {
    using TG = TIM_EGR_TG_Values<TIM4::EGR, 6, 1, WriteMode, TIM4EGRBase> ;
    using CC4G = TIM_EGR_CCG_Values<TIM4::EGR, 4, 1, WriteMode, TIM4EGRBase> ;
    using CC3G = TIM_EGR_CCG_Values<TIM4::EGR, 3, 1, WriteMode, TIM4EGRBase> ;
    using CC2G = TIM_EGR_CCG_Values<TIM4::EGR, 2, 1, WriteMode, TIM4EGRBase> ;
    using CC1G = TIM_EGR_CCG_Values<TIM4::EGR, 1, 1, WriteMode, TIM4EGRBase> ;
    using UG = TIM_EGR_UG_Values<TIM4::EGR, 0, 1, WriteMode, TIM4EGRBase> ;
  } ;

  template<typename... T> 
  using EGRPack  = Register<0x40000814, 32, WriteMode, TIM4EGRBase, T...> ;

  struct TIM4CCMR1_OutputBase {} ;

  struct CCMR1_Output : public RegisterBase<0x40000818, 32, ReadWriteMode>
  {
    using OC2CE = TIM_CCMR_Output_OCCE_Values<TIM4::CCMR1_Output, 15, 1, ReadWriteMode, TIM4CCMR1_OutputBase> ;
    using OC2M = TIM_CCMR_Output_OCM_Values<TIM4::CCMR1_Output, 12, 3, ReadWriteMode, TIM4CCMR1_OutputBase> ;
    using OC2PE = TIM_CCMR_Output_OCPE_Values<TIM4::CCMR1_Output, 11, 1, ReadWriteMode, TIM4CCMR1_OutputBase> ;
    using OC2FE = TIM_CCMR_Output_OCFE_Values<TIM4::CCMR1_Output, 10, 1, ReadWriteMode, TIM4CCMR1_OutputBase> ;
    using CC2S = TIM_CCMR_Output_CCS_Values<TIM4::CCMR1_Output, 8, 2, ReadWriteMode, TIM4CCMR1_OutputBase> ;
    using OC1CE = TIM_CCMR_Output_OCCE_Values<TIM4::CCMR1_Output, 7, 1, ReadWriteMode, TIM4CCMR1_OutputBase> ;
    using OC1M = TIM_CCMR_Output_OCM_Values<TIM4::CCMR1_Output, 4, 3, ReadWriteMode, TIM4CCMR1_OutputBase> ;
    using OC1PE = TIM_CCMR_Output_OCPE_Values<TIM4::CCMR1_Output, 3, 1, ReadWriteMode, TIM4CCMR1_OutputBase> ;
    using OC1FE = TIM_CCMR_Output_OCFE_Values<TIM4::CCMR1_Output, 2, 1, ReadWriteMode, TIM4CCMR1_OutputBase> ;
    using CC1S = TIM_CCMR_Output_CCS_Values<TIM4::CCMR1_Output, 0, 2, ReadWriteMode, TIM4CCMR1_OutputBase> ;
  } ;

  template<typename... T> 
  using CCMR1_OutputPack  = Register<0x40000818, 32, ReadWriteMode, TIM4CCMR1_OutputBase, T...> ;

  struct TIM4CCMR1_InputBase {} ;

  struct CCMR1_Input : public RegisterBase<0x40000818, 32, ReadWriteMode>
  {
    using IC2F = TIM_CCMR_Input_ICF_Values<TIM4::CCMR1_Input, 12, 4, ReadWriteMode, TIM4CCMR1_InputBase> ;
    using IC2PCS = TIM_CCMR_Input_ICPCS_Values<TIM4::CCMR1_Input, 10, 2, ReadWriteMode, TIM4CCMR1_InputBase> ;
    using CC2S = TIM_CCMR_Input_CCS_Values<TIM4::CCMR1_Input, 8, 2, ReadWriteMode, TIM4CCMR1_InputBase> ;
    using IC1F = TIM_CCMR_Input_ICF_Values<TIM4::CCMR1_Input, 4, 4, ReadWriteMode, TIM4CCMR1_InputBase> ;
    using ICPCS = TIM_CCMR_Input_ICPCS_Values<TIM4::CCMR1_Input, 2, 2, ReadWriteMode, TIM4CCMR1_InputBase> ;
    using CC1S = TIM_CCMR_Input_CCS_Values<TIM4::CCMR1_Input, 0, 2, ReadWriteMode, TIM4CCMR1_InputBase> ;
  } ;

  template<typename... T> 
  using CCMR1_InputPack  = Register<0x40000818, 32, ReadWriteMode, TIM4CCMR1_InputBase, T...> ;

  struct TIM4CCMR2_OutputBase {} ;

  struct CCMR2_Output : public RegisterBase<0x4000081C, 32, ReadWriteMode>
  {
    using O24CE = TIM_CCMR_Output_OCE_Values<TIM4::CCMR2_Output, 15, 1, ReadWriteMode, TIM4CCMR2_OutputBase> ;
    using OC4M = TIM_CCMR_Output_OCM_Values<TIM4::CCMR2_Output, 12, 3, ReadWriteMode, TIM4CCMR2_OutputBase> ;
    using OC4PE = TIM_CCMR_Output_OCPE_Values<TIM4::CCMR2_Output, 11, 1, ReadWriteMode, TIM4CCMR2_OutputBase> ;
    using OC4FE = TIM_CCMR_Output_OCFE_Values<TIM4::CCMR2_Output, 10, 1, ReadWriteMode, TIM4CCMR2_OutputBase> ;
    using CC4S = TIM_CCMR_Output_CCS_Values<TIM4::CCMR2_Output, 8, 2, ReadWriteMode, TIM4CCMR2_OutputBase> ;
    using OC3CE = TIM_CCMR_Output_OCCE_Values<TIM4::CCMR2_Output, 7, 1, ReadWriteMode, TIM4CCMR2_OutputBase> ;
    using OC3M = TIM_CCMR_Output_OCM_Values<TIM4::CCMR2_Output, 4, 3, ReadWriteMode, TIM4CCMR2_OutputBase> ;
    using OC3PE = TIM_CCMR_Output_OCPE_Values<TIM4::CCMR2_Output, 3, 1, ReadWriteMode, TIM4CCMR2_OutputBase> ;
    using OC3FE = TIM_CCMR_Output_OCFE_Values<TIM4::CCMR2_Output, 2, 1, ReadWriteMode, TIM4CCMR2_OutputBase> ;
    using CC3S = TIM_CCMR_Output_CCS_Values<TIM4::CCMR2_Output, 0, 2, ReadWriteMode, TIM4CCMR2_OutputBase> ;
  } ;

  template<typename... T> 
  using CCMR2_OutputPack  = Register<0x4000081C, 32, ReadWriteMode, TIM4CCMR2_OutputBase, T...> ;

  struct TIM4CCMR2_InputBase {} ;

  struct CCMR2_Input : public RegisterBase<0x4000081C, 32, ReadWriteMode>
  {
    using IC4F = TIM_CCMR_Input_ICF_Values<TIM4::CCMR2_Input, 12, 4, ReadWriteMode, TIM4CCMR2_InputBase> ;
    using IC4PSC = TIM_CCMR_Input_ICPSC_Values<TIM4::CCMR2_Input, 10, 2, ReadWriteMode, TIM4CCMR2_InputBase> ;
    using CC4S = TIM_CCMR_Input_CCS_Values<TIM4::CCMR2_Input, 8, 2, ReadWriteMode, TIM4CCMR2_InputBase> ;
    using IC3F = TIM_CCMR_Input_ICF_Values<TIM4::CCMR2_Input, 4, 4, ReadWriteMode, TIM4CCMR2_InputBase> ;
    using IC3PSC = TIM_CCMR_Input_ICPSC_Values<TIM4::CCMR2_Input, 2, 2, ReadWriteMode, TIM4CCMR2_InputBase> ;
    using CC3S = TIM_CCMR_Input_CCS_Values<TIM4::CCMR2_Input, 0, 2, ReadWriteMode, TIM4CCMR2_InputBase> ;
  } ;

  template<typename... T> 
  using CCMR2_InputPack  = Register<0x4000081C, 32, ReadWriteMode, TIM4CCMR2_InputBase, T...> ;

  struct TIM4CCERBase {} ;

  struct CCER : public RegisterBase<0x40000820, 32, ReadWriteMode>
  {
    using CC4NP = TIM_CCER_CCNP_Values<TIM4::CCER, 15, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC4P = TIM_CCER_CCP_Values<TIM4::CCER, 13, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC4E = TIM_CCER_CCE_Values<TIM4::CCER, 12, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC3NP = TIM_CCER_CCNP_Values<TIM4::CCER, 11, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC3P = TIM_CCER_CCP_Values<TIM4::CCER, 9, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC3E = TIM_CCER_CCE_Values<TIM4::CCER, 8, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC2NP = TIM_CCER_CCNP_Values<TIM4::CCER, 7, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC2P = TIM_CCER_CCP_Values<TIM4::CCER, 5, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC2E = TIM_CCER_CCE_Values<TIM4::CCER, 4, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC1NP = TIM_CCER_CCNP_Values<TIM4::CCER, 3, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC1P = TIM_CCER_CCP_Values<TIM4::CCER, 1, 1, ReadWriteMode, TIM4CCERBase> ;
    using CC1E = TIM_CCER_CCE_Values<TIM4::CCER, 0, 1, ReadWriteMode, TIM4CCERBase> ;
  } ;

  template<typename... T> 
  using CCERPack  = Register<0x40000820, 32, ReadWriteMode, TIM4CCERBase, T...> ;

  struct TIM4CNTBase {} ;

  struct CNT : public RegisterBase<0x40000824, 32, ReadWriteMode>
  {
    using CNT_H = TIM_CNT_CNT_H_Values<TIM4::CNT, 16, 16, ReadWriteMode, TIM4CNTBase> ;
    using CNT_L = TIM_CNT_CNT_L_Values<TIM4::CNT, 0, 16, ReadWriteMode, TIM4CNTBase> ;
  } ;

  template<typename... T> 
  using CNTPack  = Register<0x40000824, 32, ReadWriteMode, TIM4CNTBase, T...> ;

  struct TIM4PSCBase {} ;

  struct PSC : public RegisterBase<0x40000828, 32, ReadWriteMode>
  {
    using PSCField = TIM_PSC_PSC_Values<TIM4::PSC, 0, 16, ReadWriteMode, TIM4PSCBase> ;
  } ;

  template<typename... T> 
  using PSCPack  = Register<0x40000828, 32, ReadWriteMode, TIM4PSCBase, T...> ;

  struct TIM4ARRBase {} ;

  struct ARR : public RegisterBase<0x4000082C, 32, ReadWriteMode>
  {
    using ARR_H = TIM_ARR_ARR_H_Values<TIM4::ARR, 16, 16, ReadWriteMode, TIM4ARRBase> ;
    using ARR_L = TIM_ARR_ARR_L_Values<TIM4::ARR, 0, 16, ReadWriteMode, TIM4ARRBase> ;
  } ;

  template<typename... T> 
  using ARRPack  = Register<0x4000082C, 32, ReadWriteMode, TIM4ARRBase, T...> ;

  struct TIM4CCR1Base {} ;

  struct CCR1 : public RegisterBase<0x40000834, 32, ReadWriteMode>
  {
    using CCR1_H = TIM_CCR_CCR_H_Values<TIM4::CCR1, 16, 16, ReadWriteMode, TIM4CCR1Base> ;
    using CCR1_L = TIM_CCR_CCR_L_Values<TIM4::CCR1, 0, 16, ReadWriteMode, TIM4CCR1Base> ;
  } ;

  template<typename... T> 
  using CCR1Pack  = Register<0x40000834, 32, ReadWriteMode, TIM4CCR1Base, T...> ;

  struct TIM4CCR2Base {} ;

  struct CCR2 : public RegisterBase<0x40000838, 32, ReadWriteMode>
  {
    using CCR2_H = TIM_CCR_CCR_H_Values<TIM4::CCR2, 16, 16, ReadWriteMode, TIM4CCR2Base> ;
    using CCR2_L = TIM_CCR_CCR_L_Values<TIM4::CCR2, 0, 16, ReadWriteMode, TIM4CCR2Base> ;
  } ;

  template<typename... T> 
  using CCR2Pack  = Register<0x40000838, 32, ReadWriteMode, TIM4CCR2Base, T...> ;

  struct TIM4CCR3Base {} ;

  struct CCR3 : public RegisterBase<0x4000083C, 32, ReadWriteMode>
  {
    using CCR3_H = TIM_CCR_CCR_H_Values<TIM4::CCR3, 16, 16, ReadWriteMode, TIM4CCR3Base> ;
    using CCR3_L = TIM_CCR_CCR_L_Values<TIM4::CCR3, 0, 16, ReadWriteMode, TIM4CCR3Base> ;
  } ;

  template<typename... T> 
  using CCR3Pack  = Register<0x4000083C, 32, ReadWriteMode, TIM4CCR3Base, T...> ;

  struct TIM4CCR4Base {} ;

  struct CCR4 : public RegisterBase<0x40000840, 32, ReadWriteMode>
  {
    using CCR4_H = TIM_CCR_CCR_H_Values<TIM4::CCR4, 16, 16, ReadWriteMode, TIM4CCR4Base> ;
    using CCR4_L = TIM_CCR_CCR_L_Values<TIM4::CCR4, 0, 16, ReadWriteMode, TIM4CCR4Base> ;
  } ;

  template<typename... T> 
  using CCR4Pack  = Register<0x40000840, 32, ReadWriteMode, TIM4CCR4Base, T...> ;

  struct TIM4DCRBase {} ;

  struct DCR : public RegisterBase<0x40000848, 32, ReadWriteMode>
  {
    using DBL = TIM_DCR_DBL_Values<TIM4::DCR, 8, 5, ReadWriteMode, TIM4DCRBase> ;
    using DBA = TIM_DCR_DBA_Values<TIM4::DCR, 0, 5, ReadWriteMode, TIM4DCRBase> ;
  } ;

  template<typename... T> 
  using DCRPack  = Register<0x40000848, 32, ReadWriteMode, TIM4DCRBase, T...> ;

  struct TIM4DMARBase {} ;

  struct DMAR : public RegisterBase<0x4000084C, 32, ReadWriteMode>
  {
    using DMAB = TIM_DMAR_DMAB_Values<TIM4::DMAR, 0, 16, ReadWriteMode, TIM4DMARBase> ;
  } ;

  template<typename... T> 
  using DMARPack  = Register<0x4000084C, 32, ReadWriteMode, TIM4DMARBase, T...> ;

} ;

#endif //#if !defined(TIM4REGISTERS_HPP)
