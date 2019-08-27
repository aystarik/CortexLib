/*******************************************************************************
* Filename      : otgfsdeviceregisters.hpp
*
* Details       : USB on the go full speed. This header file is auto-generated
*                 for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(OTGFSDEVICEREGISTERS_HPP)
#define OTGFSDEVICEREGISTERS_HPP

#include "otgfsdevicebitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct OTG_FS_DEVICE
{
  struct OTG_FS_DEVICEFS_DCFGBase {} ;

  struct FS_DCFG : public RegisterBase<0x50000800, 32, ReadWriteMode>
  {
    using DSPD = OTG_FS_DEVICE_FS_DCFG_DSPD_Values<OTG_FS_DEVICE::FS_DCFG, 0, 2, ReadWriteMode, OTG_FS_DEVICEFS_DCFGBase> ;
    using NZLSOHSK = OTG_FS_DEVICE_FS_DCFG_NZLSOHSK_Values<OTG_FS_DEVICE::FS_DCFG, 2, 1, ReadWriteMode, OTG_FS_DEVICEFS_DCFGBase> ;
    using DAD = OTG_FS_DEVICE_FS_DCFG_DAD_Values<OTG_FS_DEVICE::FS_DCFG, 4, 7, ReadWriteMode, OTG_FS_DEVICEFS_DCFGBase> ;
    using PFIVL = OTG_FS_DEVICE_FS_DCFG_PFIVL_Values<OTG_FS_DEVICE::FS_DCFG, 11, 2, ReadWriteMode, OTG_FS_DEVICEFS_DCFGBase> ;
  } ;

  template<typename... T> 
  using FS_DCFGPack  = Register<0x50000800, 32, ReadWriteMode, OTG_FS_DEVICEFS_DCFGBase, T...> ;

  struct OTG_FS_DEVICEFS_DCTLBase {} ;

  struct FS_DCTL : public RegisterBase<0x50000804, 32, ReadWriteMode>
  {
    using RWUSIG = OTG_FS_DEVICE_FS_DCTL_RWUSIG_Values<OTG_FS_DEVICE::FS_DCTL, 0, 1, ReadWriteMode, OTG_FS_DEVICEFS_DCTLBase> ;
    using SDIS = OTG_FS_DEVICE_FS_DCTL_SDIS_Values<OTG_FS_DEVICE::FS_DCTL, 1, 1, ReadWriteMode, OTG_FS_DEVICEFS_DCTLBase> ;
    using GINSTS = OTG_FS_DEVICE_FS_DCTL_GINSTS_Values<OTG_FS_DEVICE::FS_DCTL, 2, 1, ReadMode, OTG_FS_DEVICEFS_DCTLBase> ;
    using GONSTS = OTG_FS_DEVICE_FS_DCTL_GONSTS_Values<OTG_FS_DEVICE::FS_DCTL, 3, 1, ReadMode, OTG_FS_DEVICEFS_DCTLBase> ;
    using TCTL = OTG_FS_DEVICE_FS_DCTL_TCTL_Values<OTG_FS_DEVICE::FS_DCTL, 4, 3, ReadWriteMode, OTG_FS_DEVICEFS_DCTLBase> ;
    using SGINAK = OTG_FS_DEVICE_FS_DCTL_SGINAK_Values<OTG_FS_DEVICE::FS_DCTL, 7, 1, ReadWriteMode, OTG_FS_DEVICEFS_DCTLBase> ;
    using CGINAK = OTG_FS_DEVICE_FS_DCTL_CGINAK_Values<OTG_FS_DEVICE::FS_DCTL, 8, 1, ReadWriteMode, OTG_FS_DEVICEFS_DCTLBase> ;
    using SGONAK = OTG_FS_DEVICE_FS_DCTL_SGONAK_Values<OTG_FS_DEVICE::FS_DCTL, 9, 1, ReadWriteMode, OTG_FS_DEVICEFS_DCTLBase> ;
    using CGONAK = OTG_FS_DEVICE_FS_DCTL_CGONAK_Values<OTG_FS_DEVICE::FS_DCTL, 10, 1, ReadWriteMode, OTG_FS_DEVICEFS_DCTLBase> ;
    using POPRGDNE = OTG_FS_DEVICE_FS_DCTL_POPRGDNE_Values<OTG_FS_DEVICE::FS_DCTL, 11, 1, ReadWriteMode, OTG_FS_DEVICEFS_DCTLBase> ;
  } ;

  template<typename... T> 
  using FS_DCTLPack  = Register<0x50000804, 32, ReadWriteMode, OTG_FS_DEVICEFS_DCTLBase, T...> ;

  struct OTG_FS_DEVICEFS_DSTSBase {} ;

  struct FS_DSTS : public RegisterBase<0x50000808, 32, ReadMode>
  {
    using SUSPSTS = OTG_FS_DEVICE_FS_DSTS_SUSPSTS_Values<OTG_FS_DEVICE::FS_DSTS, 0, 1, ReadMode, OTG_FS_DEVICEFS_DSTSBase> ;
    using ENUMSPD = OTG_FS_DEVICE_FS_DSTS_ENUMSPD_Values<OTG_FS_DEVICE::FS_DSTS, 1, 2, ReadMode, OTG_FS_DEVICEFS_DSTSBase> ;
    using EERR = OTG_FS_DEVICE_FS_DSTS_EERR_Values<OTG_FS_DEVICE::FS_DSTS, 3, 1, ReadMode, OTG_FS_DEVICEFS_DSTSBase> ;
    using FNSOF = OTG_FS_DEVICE_FS_DSTS_FNSOF_Values<OTG_FS_DEVICE::FS_DSTS, 8, 14, ReadMode, OTG_FS_DEVICEFS_DSTSBase> ;
  } ;

  template<typename... T> 
  using FS_DSTSPack  = Register<0x50000808, 32, ReadMode, OTG_FS_DEVICEFS_DSTSBase, T...> ;

  struct OTG_FS_DEVICEFS_DIEPMSKBase {} ;

  struct FS_DIEPMSK : public RegisterBase<0x50000810, 32, ReadWriteMode>
  {
    using XFRCM = OTG_FS_DEVICE_FS_DIEPMSK_XFRCM_Values<OTG_FS_DEVICE::FS_DIEPMSK, 0, 1, ReadWriteMode, OTG_FS_DEVICEFS_DIEPMSKBase> ;
    using EPDM = OTG_FS_DEVICE_FS_DIEPMSK_EPDM_Values<OTG_FS_DEVICE::FS_DIEPMSK, 1, 1, ReadWriteMode, OTG_FS_DEVICEFS_DIEPMSKBase> ;
    using TOM = OTG_FS_DEVICE_FS_DIEPMSK_TOM_Values<OTG_FS_DEVICE::FS_DIEPMSK, 3, 1, ReadWriteMode, OTG_FS_DEVICEFS_DIEPMSKBase> ;
    using ITTXFEMSK = OTG_FS_DEVICE_FS_DIEPMSK_ITTXFEMSK_Values<OTG_FS_DEVICE::FS_DIEPMSK, 4, 1, ReadWriteMode, OTG_FS_DEVICEFS_DIEPMSKBase> ;
    using INEPNMM = OTG_FS_DEVICE_FS_DIEPMSK_INEPNMM_Values<OTG_FS_DEVICE::FS_DIEPMSK, 5, 1, ReadWriteMode, OTG_FS_DEVICEFS_DIEPMSKBase> ;
    using INEPNEM = OTG_FS_DEVICE_FS_DIEPMSK_INEPNEM_Values<OTG_FS_DEVICE::FS_DIEPMSK, 6, 1, ReadWriteMode, OTG_FS_DEVICEFS_DIEPMSKBase> ;
  } ;

  template<typename... T> 
  using FS_DIEPMSKPack  = Register<0x50000810, 32, ReadWriteMode, OTG_FS_DEVICEFS_DIEPMSKBase, T...> ;

  struct OTG_FS_DEVICEFS_DOEPMSKBase {} ;

  struct FS_DOEPMSK : public RegisterBase<0x50000814, 32, ReadWriteMode>
  {
    using XFRCM = OTG_FS_DEVICE_FS_DOEPMSK_XFRCM_Values<OTG_FS_DEVICE::FS_DOEPMSK, 0, 1, ReadWriteMode, OTG_FS_DEVICEFS_DOEPMSKBase> ;
    using EPDM = OTG_FS_DEVICE_FS_DOEPMSK_EPDM_Values<OTG_FS_DEVICE::FS_DOEPMSK, 1, 1, ReadWriteMode, OTG_FS_DEVICEFS_DOEPMSKBase> ;
    using STUPM = OTG_FS_DEVICE_FS_DOEPMSK_STUPM_Values<OTG_FS_DEVICE::FS_DOEPMSK, 3, 1, ReadWriteMode, OTG_FS_DEVICEFS_DOEPMSKBase> ;
    using OTEPDM = OTG_FS_DEVICE_FS_DOEPMSK_OTEPDM_Values<OTG_FS_DEVICE::FS_DOEPMSK, 4, 1, ReadWriteMode, OTG_FS_DEVICEFS_DOEPMSKBase> ;
  } ;

  template<typename... T> 
  using FS_DOEPMSKPack  = Register<0x50000814, 32, ReadWriteMode, OTG_FS_DEVICEFS_DOEPMSKBase, T...> ;

  struct OTG_FS_DEVICEFS_DAINTBase {} ;

  struct FS_DAINT : public RegisterBase<0x50000818, 32, ReadMode>
  {
    using IEPINT = OTG_FS_DEVICE_FS_DAINT_IEPINT_Values<OTG_FS_DEVICE::FS_DAINT, 0, 16, ReadMode, OTG_FS_DEVICEFS_DAINTBase> ;
    using OEPINT = OTG_FS_DEVICE_FS_DAINT_OEPINT_Values<OTG_FS_DEVICE::FS_DAINT, 16, 16, ReadMode, OTG_FS_DEVICEFS_DAINTBase> ;
  } ;

  template<typename... T> 
  using FS_DAINTPack  = Register<0x50000818, 32, ReadMode, OTG_FS_DEVICEFS_DAINTBase, T...> ;

  struct OTG_FS_DEVICEFS_DAINTMSKBase {} ;

  struct FS_DAINTMSK : public RegisterBase<0x5000081C, 32, ReadWriteMode>
  {
    using IEPM = OTG_FS_DEVICE_FS_DAINTMSK_IEPM_Values<OTG_FS_DEVICE::FS_DAINTMSK, 0, 16, ReadWriteMode, OTG_FS_DEVICEFS_DAINTMSKBase> ;
    using OEPINT = OTG_FS_DEVICE_FS_DAINTMSK_OEPINT_Values<OTG_FS_DEVICE::FS_DAINTMSK, 16, 16, ReadWriteMode, OTG_FS_DEVICEFS_DAINTMSKBase> ;
  } ;

  template<typename... T> 
  using FS_DAINTMSKPack  = Register<0x5000081C, 32, ReadWriteMode, OTG_FS_DEVICEFS_DAINTMSKBase, T...> ;

  struct OTG_FS_DEVICEDVBUSDISBase {} ;

  struct DVBUSDIS : public RegisterBase<0x50000828, 32, ReadWriteMode>
  {
    using VBUSDT = OTG_FS_DEVICE_DVBUSDIS_VBUSDT_Values<OTG_FS_DEVICE::DVBUSDIS, 0, 16, ReadWriteMode, OTG_FS_DEVICEDVBUSDISBase> ;
  } ;

  template<typename... T> 
  using DVBUSDISPack  = Register<0x50000828, 32, ReadWriteMode, OTG_FS_DEVICEDVBUSDISBase, T...> ;

  struct OTG_FS_DEVICEDVBUSPULSEBase {} ;

  struct DVBUSPULSE : public RegisterBase<0x5000082C, 32, ReadWriteMode>
  {
    using DVBUSP = OTG_FS_DEVICE_DVBUSPULSE_DVBUSP_Values<OTG_FS_DEVICE::DVBUSPULSE, 0, 12, ReadWriteMode, OTG_FS_DEVICEDVBUSPULSEBase> ;
  } ;

  template<typename... T> 
  using DVBUSPULSEPack  = Register<0x5000082C, 32, ReadWriteMode, OTG_FS_DEVICEDVBUSPULSEBase, T...> ;

  struct OTG_FS_DEVICEDIEPEMPMSKBase {} ;

  struct DIEPEMPMSK : public RegisterBase<0x50000834, 32, ReadWriteMode>
  {
    using INEPTXFEM = OTG_FS_DEVICE_DIEPEMPMSK_INEPTXFEM_Values<OTG_FS_DEVICE::DIEPEMPMSK, 0, 16, ReadWriteMode, OTG_FS_DEVICEDIEPEMPMSKBase> ;
  } ;

  template<typename... T> 
  using DIEPEMPMSKPack  = Register<0x50000834, 32, ReadWriteMode, OTG_FS_DEVICEDIEPEMPMSKBase, T...> ;

  struct OTG_FS_DEVICEFS_DIEPCTL0Base {} ;

  struct FS_DIEPCTL0 : public RegisterBase<0x50000900, 32, ReadWriteMode>
  {
    using MPSIZ = OTG_FS_DEVICE_FS_DIEPCTL_MPSIZ_Values<OTG_FS_DEVICE::FS_DIEPCTL0, 0, 2, ReadWriteMode, OTG_FS_DEVICEFS_DIEPCTL0Base> ;
    using USBAEP = OTG_FS_DEVICE_FS_DIEPCTL_USBAEP_Values<OTG_FS_DEVICE::FS_DIEPCTL0, 15, 1, ReadMode, OTG_FS_DEVICEFS_DIEPCTL0Base> ;
    using NAKSTS = OTG_FS_DEVICE_FS_DIEPCTL_NAKSTS_Values<OTG_FS_DEVICE::FS_DIEPCTL0, 17, 1, ReadMode, OTG_FS_DEVICEFS_DIEPCTL0Base> ;
    using EPTYP = OTG_FS_DEVICE_FS_DIEPCTL_EPTYP_Values<OTG_FS_DEVICE::FS_DIEPCTL0, 18, 2, ReadMode, OTG_FS_DEVICEFS_DIEPCTL0Base> ;
    using STALL = OTG_FS_DEVICE_FS_DIEPCTL_STALL_Values<OTG_FS_DEVICE::FS_DIEPCTL0, 21, 1, ReadWriteMode, OTG_FS_DEVICEFS_DIEPCTL0Base> ;
    using TXFNUM = OTG_FS_DEVICE_FS_DIEPCTL_TXFNUM_Values<OTG_FS_DEVICE::FS_DIEPCTL0, 22, 4, ReadWriteMode, OTG_FS_DEVICEFS_DIEPCTL0Base> ;
    using CNAK = OTG_FS_DEVICE_FS_DIEPCTL_CNAK_Values<OTG_FS_DEVICE::FS_DIEPCTL0, 26, 1, WriteMode, OTG_FS_DEVICEFS_DIEPCTL0Base> ;
    using SNAK = OTG_FS_DEVICE_FS_DIEPCTL_SNAK_Values<OTG_FS_DEVICE::FS_DIEPCTL0, 27, 1, WriteMode, OTG_FS_DEVICEFS_DIEPCTL0Base> ;
    using EPDIS = OTG_FS_DEVICE_FS_DIEPCTL_EPDIS_Values<OTG_FS_DEVICE::FS_DIEPCTL0, 30, 1, ReadMode, OTG_FS_DEVICEFS_DIEPCTL0Base> ;
    using EPENA = OTG_FS_DEVICE_FS_DIEPCTL_EPENA_Values<OTG_FS_DEVICE::FS_DIEPCTL0, 31, 1, ReadMode, OTG_FS_DEVICEFS_DIEPCTL0Base> ;
  } ;

  template<typename... T> 
  using FS_DIEPCTL0Pack  = Register<0x50000900, 32, ReadWriteMode, OTG_FS_DEVICEFS_DIEPCTL0Base, T...> ;

  struct OTG_FS_DEVICEDIEPCTL1Base {} ;

  struct DIEPCTL1 : public RegisterBase<0x50000920, 32, ReadWriteMode>
  {
    using EPENA = OTG_FS_DEVICE_DIEPCTL_EPENA_Values<OTG_FS_DEVICE::DIEPCTL1, 31, 1, ReadWriteMode, OTG_FS_DEVICEDIEPCTL1Base> ;
    using EPDIS = OTG_FS_DEVICE_DIEPCTL_EPDIS_Values<OTG_FS_DEVICE::DIEPCTL1, 30, 1, ReadWriteMode, OTG_FS_DEVICEDIEPCTL1Base> ;
    using SODDFRM_SD1PID = OTG_FS_DEVICE_DIEPCTL_SODDFRM_SDPID_Values<OTG_FS_DEVICE::DIEPCTL1, 29, 1, WriteMode, OTG_FS_DEVICEDIEPCTL1Base> ;
    using SD0PID_SEVNFRM = OTG_FS_DEVICE_DIEPCTL_SDPID_SEVNFRM_Values<OTG_FS_DEVICE::DIEPCTL1, 28, 1, WriteMode, OTG_FS_DEVICEDIEPCTL1Base> ;
    using SNAK = OTG_FS_DEVICE_DIEPCTL_SNAK_Values<OTG_FS_DEVICE::DIEPCTL1, 27, 1, WriteMode, OTG_FS_DEVICEDIEPCTL1Base> ;
    using CNAK = OTG_FS_DEVICE_DIEPCTL_CNAK_Values<OTG_FS_DEVICE::DIEPCTL1, 26, 1, WriteMode, OTG_FS_DEVICEDIEPCTL1Base> ;
    using TXFNUM = OTG_FS_DEVICE_DIEPCTL_TXFNUM_Values<OTG_FS_DEVICE::DIEPCTL1, 22, 4, ReadWriteMode, OTG_FS_DEVICEDIEPCTL1Base> ;
    using Stall = OTG_FS_DEVICE_DIEPCTL_Stall_Values<OTG_FS_DEVICE::DIEPCTL1, 21, 1, ReadWriteMode, OTG_FS_DEVICEDIEPCTL1Base> ;
    using EPTYP = OTG_FS_DEVICE_DIEPCTL_EPTYP_Values<OTG_FS_DEVICE::DIEPCTL1, 18, 2, ReadWriteMode, OTG_FS_DEVICEDIEPCTL1Base> ;
    using NAKSTS = OTG_FS_DEVICE_DIEPCTL_NAKSTS_Values<OTG_FS_DEVICE::DIEPCTL1, 17, 1, ReadMode, OTG_FS_DEVICEDIEPCTL1Base> ;
    using EONUM_DPID = OTG_FS_DEVICE_DIEPCTL_EONUM_DPID_Values<OTG_FS_DEVICE::DIEPCTL1, 16, 1, ReadMode, OTG_FS_DEVICEDIEPCTL1Base> ;
    using USBAEP = OTG_FS_DEVICE_DIEPCTL_USBAEP_Values<OTG_FS_DEVICE::DIEPCTL1, 15, 1, ReadWriteMode, OTG_FS_DEVICEDIEPCTL1Base> ;
    using MPSIZ = OTG_FS_DEVICE_DIEPCTL_MPSIZ_Values<OTG_FS_DEVICE::DIEPCTL1, 0, 11, ReadWriteMode, OTG_FS_DEVICEDIEPCTL1Base> ;
  } ;

  template<typename... T> 
  using DIEPCTL1Pack  = Register<0x50000920, 32, ReadWriteMode, OTG_FS_DEVICEDIEPCTL1Base, T...> ;

  struct OTG_FS_DEVICEDIEPCTL2Base {} ;

  struct DIEPCTL2 : public RegisterBase<0x50000940, 32, ReadWriteMode>
  {
    using EPENA = OTG_FS_DEVICE_DIEPCTL_EPENA_Values<OTG_FS_DEVICE::DIEPCTL2, 31, 1, ReadWriteMode, OTG_FS_DEVICEDIEPCTL2Base> ;
    using EPDIS = OTG_FS_DEVICE_DIEPCTL_EPDIS_Values<OTG_FS_DEVICE::DIEPCTL2, 30, 1, ReadWriteMode, OTG_FS_DEVICEDIEPCTL2Base> ;
    using SODDFRM = OTG_FS_DEVICE_DIEPCTL_SODDFRM_Values<OTG_FS_DEVICE::DIEPCTL2, 29, 1, WriteMode, OTG_FS_DEVICEDIEPCTL2Base> ;
    using SD0PID_SEVNFRM = OTG_FS_DEVICE_DIEPCTL_SDPID_SEVNFRM_Values<OTG_FS_DEVICE::DIEPCTL2, 28, 1, WriteMode, OTG_FS_DEVICEDIEPCTL2Base> ;
    using SNAK = OTG_FS_DEVICE_DIEPCTL_SNAK_Values<OTG_FS_DEVICE::DIEPCTL2, 27, 1, WriteMode, OTG_FS_DEVICEDIEPCTL2Base> ;
    using CNAK = OTG_FS_DEVICE_DIEPCTL_CNAK_Values<OTG_FS_DEVICE::DIEPCTL2, 26, 1, WriteMode, OTG_FS_DEVICEDIEPCTL2Base> ;
    using TXFNUM = OTG_FS_DEVICE_DIEPCTL_TXFNUM_Values<OTG_FS_DEVICE::DIEPCTL2, 22, 4, ReadWriteMode, OTG_FS_DEVICEDIEPCTL2Base> ;
    using Stall = OTG_FS_DEVICE_DIEPCTL_Stall_Values<OTG_FS_DEVICE::DIEPCTL2, 21, 1, ReadWriteMode, OTG_FS_DEVICEDIEPCTL2Base> ;
    using EPTYP = OTG_FS_DEVICE_DIEPCTL_EPTYP_Values<OTG_FS_DEVICE::DIEPCTL2, 18, 2, ReadWriteMode, OTG_FS_DEVICEDIEPCTL2Base> ;
    using NAKSTS = OTG_FS_DEVICE_DIEPCTL_NAKSTS_Values<OTG_FS_DEVICE::DIEPCTL2, 17, 1, ReadMode, OTG_FS_DEVICEDIEPCTL2Base> ;
    using EONUM_DPID = OTG_FS_DEVICE_DIEPCTL_EONUM_DPID_Values<OTG_FS_DEVICE::DIEPCTL2, 16, 1, ReadMode, OTG_FS_DEVICEDIEPCTL2Base> ;
    using USBAEP = OTG_FS_DEVICE_DIEPCTL_USBAEP_Values<OTG_FS_DEVICE::DIEPCTL2, 15, 1, ReadWriteMode, OTG_FS_DEVICEDIEPCTL2Base> ;
    using MPSIZ = OTG_FS_DEVICE_DIEPCTL_MPSIZ_Values<OTG_FS_DEVICE::DIEPCTL2, 0, 11, ReadWriteMode, OTG_FS_DEVICEDIEPCTL2Base> ;
  } ;

  template<typename... T> 
  using DIEPCTL2Pack  = Register<0x50000940, 32, ReadWriteMode, OTG_FS_DEVICEDIEPCTL2Base, T...> ;

  struct OTG_FS_DEVICEDIEPCTL3Base {} ;

  struct DIEPCTL3 : public RegisterBase<0x50000960, 32, ReadWriteMode>
  {
    using EPENA = OTG_FS_DEVICE_DIEPCTL_EPENA_Values<OTG_FS_DEVICE::DIEPCTL3, 31, 1, ReadWriteMode, OTG_FS_DEVICEDIEPCTL3Base> ;
    using EPDIS = OTG_FS_DEVICE_DIEPCTL_EPDIS_Values<OTG_FS_DEVICE::DIEPCTL3, 30, 1, ReadWriteMode, OTG_FS_DEVICEDIEPCTL3Base> ;
    using SODDFRM = OTG_FS_DEVICE_DIEPCTL_SODDFRM_Values<OTG_FS_DEVICE::DIEPCTL3, 29, 1, WriteMode, OTG_FS_DEVICEDIEPCTL3Base> ;
    using SD0PID_SEVNFRM = OTG_FS_DEVICE_DIEPCTL_SDPID_SEVNFRM_Values<OTG_FS_DEVICE::DIEPCTL3, 28, 1, WriteMode, OTG_FS_DEVICEDIEPCTL3Base> ;
    using SNAK = OTG_FS_DEVICE_DIEPCTL_SNAK_Values<OTG_FS_DEVICE::DIEPCTL3, 27, 1, WriteMode, OTG_FS_DEVICEDIEPCTL3Base> ;
    using CNAK = OTG_FS_DEVICE_DIEPCTL_CNAK_Values<OTG_FS_DEVICE::DIEPCTL3, 26, 1, WriteMode, OTG_FS_DEVICEDIEPCTL3Base> ;
    using TXFNUM = OTG_FS_DEVICE_DIEPCTL_TXFNUM_Values<OTG_FS_DEVICE::DIEPCTL3, 22, 4, ReadWriteMode, OTG_FS_DEVICEDIEPCTL3Base> ;
    using Stall = OTG_FS_DEVICE_DIEPCTL_Stall_Values<OTG_FS_DEVICE::DIEPCTL3, 21, 1, ReadWriteMode, OTG_FS_DEVICEDIEPCTL3Base> ;
    using EPTYP = OTG_FS_DEVICE_DIEPCTL_EPTYP_Values<OTG_FS_DEVICE::DIEPCTL3, 18, 2, ReadWriteMode, OTG_FS_DEVICEDIEPCTL3Base> ;
    using NAKSTS = OTG_FS_DEVICE_DIEPCTL_NAKSTS_Values<OTG_FS_DEVICE::DIEPCTL3, 17, 1, ReadMode, OTG_FS_DEVICEDIEPCTL3Base> ;
    using EONUM_DPID = OTG_FS_DEVICE_DIEPCTL_EONUM_DPID_Values<OTG_FS_DEVICE::DIEPCTL3, 16, 1, ReadMode, OTG_FS_DEVICEDIEPCTL3Base> ;
    using USBAEP = OTG_FS_DEVICE_DIEPCTL_USBAEP_Values<OTG_FS_DEVICE::DIEPCTL3, 15, 1, ReadWriteMode, OTG_FS_DEVICEDIEPCTL3Base> ;
    using MPSIZ = OTG_FS_DEVICE_DIEPCTL_MPSIZ_Values<OTG_FS_DEVICE::DIEPCTL3, 0, 11, ReadWriteMode, OTG_FS_DEVICEDIEPCTL3Base> ;
  } ;

  template<typename... T> 
  using DIEPCTL3Pack  = Register<0x50000960, 32, ReadWriteMode, OTG_FS_DEVICEDIEPCTL3Base, T...> ;

  struct OTG_FS_DEVICEDOEPCTL0Base {} ;

  struct DOEPCTL0 : public RegisterBase<0x50000B00, 32, ReadWriteMode>
  {
    using EPENA = OTG_FS_DEVICE_DOEPCTL_EPENA_Values<OTG_FS_DEVICE::DOEPCTL0, 31, 1, WriteMode, OTG_FS_DEVICEDOEPCTL0Base> ;
    using EPDIS = OTG_FS_DEVICE_DOEPCTL_EPDIS_Values<OTG_FS_DEVICE::DOEPCTL0, 30, 1, ReadMode, OTG_FS_DEVICEDOEPCTL0Base> ;
    using SNAK = OTG_FS_DEVICE_DOEPCTL_SNAK_Values<OTG_FS_DEVICE::DOEPCTL0, 27, 1, WriteMode, OTG_FS_DEVICEDOEPCTL0Base> ;
    using CNAK = OTG_FS_DEVICE_DOEPCTL_CNAK_Values<OTG_FS_DEVICE::DOEPCTL0, 26, 1, WriteMode, OTG_FS_DEVICEDOEPCTL0Base> ;
    using Stall = OTG_FS_DEVICE_DOEPCTL_Stall_Values<OTG_FS_DEVICE::DOEPCTL0, 21, 1, ReadWriteMode, OTG_FS_DEVICEDOEPCTL0Base> ;
    using SNPM = OTG_FS_DEVICE_DOEPCTL_SNPM_Values<OTG_FS_DEVICE::DOEPCTL0, 20, 1, ReadWriteMode, OTG_FS_DEVICEDOEPCTL0Base> ;
    using EPTYP = OTG_FS_DEVICE_DOEPCTL_EPTYP_Values<OTG_FS_DEVICE::DOEPCTL0, 18, 2, ReadMode, OTG_FS_DEVICEDOEPCTL0Base> ;
    using NAKSTS = OTG_FS_DEVICE_DOEPCTL_NAKSTS_Values<OTG_FS_DEVICE::DOEPCTL0, 17, 1, ReadMode, OTG_FS_DEVICEDOEPCTL0Base> ;
    using USBAEP = OTG_FS_DEVICE_DOEPCTL_USBAEP_Values<OTG_FS_DEVICE::DOEPCTL0, 15, 1, ReadMode, OTG_FS_DEVICEDOEPCTL0Base> ;
    using MPSIZ = OTG_FS_DEVICE_DOEPCTL_MPSIZ_Values<OTG_FS_DEVICE::DOEPCTL0, 0, 2, ReadMode, OTG_FS_DEVICEDOEPCTL0Base> ;
  } ;

  template<typename... T> 
  using DOEPCTL0Pack  = Register<0x50000B00, 32, ReadWriteMode, OTG_FS_DEVICEDOEPCTL0Base, T...> ;

  struct OTG_FS_DEVICEDOEPCTL1Base {} ;

  struct DOEPCTL1 : public RegisterBase<0x50000B20, 32, ReadWriteMode>
  {
    using EPENA = OTG_FS_DEVICE_DOEPCTL_EPENA_Values<OTG_FS_DEVICE::DOEPCTL1, 31, 1, ReadWriteMode, OTG_FS_DEVICEDOEPCTL1Base> ;
    using EPDIS = OTG_FS_DEVICE_DOEPCTL_EPDIS_Values<OTG_FS_DEVICE::DOEPCTL1, 30, 1, ReadWriteMode, OTG_FS_DEVICEDOEPCTL1Base> ;
    using SODDFRM = OTG_FS_DEVICE_DOEPCTL_SODDFRM_Values<OTG_FS_DEVICE::DOEPCTL1, 29, 1, WriteMode, OTG_FS_DEVICEDOEPCTL1Base> ;
    using SD0PID_SEVNFRM = OTG_FS_DEVICE_DOEPCTL_SDPID_SEVNFRM_Values<OTG_FS_DEVICE::DOEPCTL1, 28, 1, WriteMode, OTG_FS_DEVICEDOEPCTL1Base> ;
    using SNAK = OTG_FS_DEVICE_DOEPCTL_SNAK_Values<OTG_FS_DEVICE::DOEPCTL1, 27, 1, WriteMode, OTG_FS_DEVICEDOEPCTL1Base> ;
    using CNAK = OTG_FS_DEVICE_DOEPCTL_CNAK_Values<OTG_FS_DEVICE::DOEPCTL1, 26, 1, WriteMode, OTG_FS_DEVICEDOEPCTL1Base> ;
    using Stall = OTG_FS_DEVICE_DOEPCTL_Stall_Values<OTG_FS_DEVICE::DOEPCTL1, 21, 1, ReadWriteMode, OTG_FS_DEVICEDOEPCTL1Base> ;
    using SNPM = OTG_FS_DEVICE_DOEPCTL_SNPM_Values<OTG_FS_DEVICE::DOEPCTL1, 20, 1, ReadWriteMode, OTG_FS_DEVICEDOEPCTL1Base> ;
    using EPTYP = OTG_FS_DEVICE_DOEPCTL_EPTYP_Values<OTG_FS_DEVICE::DOEPCTL1, 18, 2, ReadWriteMode, OTG_FS_DEVICEDOEPCTL1Base> ;
    using NAKSTS = OTG_FS_DEVICE_DOEPCTL_NAKSTS_Values<OTG_FS_DEVICE::DOEPCTL1, 17, 1, ReadMode, OTG_FS_DEVICEDOEPCTL1Base> ;
    using EONUM_DPID = OTG_FS_DEVICE_DOEPCTL_EONUM_DPID_Values<OTG_FS_DEVICE::DOEPCTL1, 16, 1, ReadMode, OTG_FS_DEVICEDOEPCTL1Base> ;
    using USBAEP = OTG_FS_DEVICE_DOEPCTL_USBAEP_Values<OTG_FS_DEVICE::DOEPCTL1, 15, 1, ReadWriteMode, OTG_FS_DEVICEDOEPCTL1Base> ;
    using MPSIZ = OTG_FS_DEVICE_DOEPCTL_MPSIZ_Values<OTG_FS_DEVICE::DOEPCTL1, 0, 11, ReadWriteMode, OTG_FS_DEVICEDOEPCTL1Base> ;
  } ;

  template<typename... T> 
  using DOEPCTL1Pack  = Register<0x50000B20, 32, ReadWriteMode, OTG_FS_DEVICEDOEPCTL1Base, T...> ;

  struct OTG_FS_DEVICEDOEPCTL2Base {} ;

  struct DOEPCTL2 : public RegisterBase<0x50000B40, 32, ReadWriteMode>
  {
    using EPENA = OTG_FS_DEVICE_DOEPCTL_EPENA_Values<OTG_FS_DEVICE::DOEPCTL2, 31, 1, ReadWriteMode, OTG_FS_DEVICEDOEPCTL2Base> ;
    using EPDIS = OTG_FS_DEVICE_DOEPCTL_EPDIS_Values<OTG_FS_DEVICE::DOEPCTL2, 30, 1, ReadWriteMode, OTG_FS_DEVICEDOEPCTL2Base> ;
    using SODDFRM = OTG_FS_DEVICE_DOEPCTL_SODDFRM_Values<OTG_FS_DEVICE::DOEPCTL2, 29, 1, WriteMode, OTG_FS_DEVICEDOEPCTL2Base> ;
    using SD0PID_SEVNFRM = OTG_FS_DEVICE_DOEPCTL_SDPID_SEVNFRM_Values<OTG_FS_DEVICE::DOEPCTL2, 28, 1, WriteMode, OTG_FS_DEVICEDOEPCTL2Base> ;
    using SNAK = OTG_FS_DEVICE_DOEPCTL_SNAK_Values<OTG_FS_DEVICE::DOEPCTL2, 27, 1, WriteMode, OTG_FS_DEVICEDOEPCTL2Base> ;
    using CNAK = OTG_FS_DEVICE_DOEPCTL_CNAK_Values<OTG_FS_DEVICE::DOEPCTL2, 26, 1, WriteMode, OTG_FS_DEVICEDOEPCTL2Base> ;
    using Stall = OTG_FS_DEVICE_DOEPCTL_Stall_Values<OTG_FS_DEVICE::DOEPCTL2, 21, 1, ReadWriteMode, OTG_FS_DEVICEDOEPCTL2Base> ;
    using SNPM = OTG_FS_DEVICE_DOEPCTL_SNPM_Values<OTG_FS_DEVICE::DOEPCTL2, 20, 1, ReadWriteMode, OTG_FS_DEVICEDOEPCTL2Base> ;
    using EPTYP = OTG_FS_DEVICE_DOEPCTL_EPTYP_Values<OTG_FS_DEVICE::DOEPCTL2, 18, 2, ReadWriteMode, OTG_FS_DEVICEDOEPCTL2Base> ;
    using NAKSTS = OTG_FS_DEVICE_DOEPCTL_NAKSTS_Values<OTG_FS_DEVICE::DOEPCTL2, 17, 1, ReadMode, OTG_FS_DEVICEDOEPCTL2Base> ;
    using EONUM_DPID = OTG_FS_DEVICE_DOEPCTL_EONUM_DPID_Values<OTG_FS_DEVICE::DOEPCTL2, 16, 1, ReadMode, OTG_FS_DEVICEDOEPCTL2Base> ;
    using USBAEP = OTG_FS_DEVICE_DOEPCTL_USBAEP_Values<OTG_FS_DEVICE::DOEPCTL2, 15, 1, ReadWriteMode, OTG_FS_DEVICEDOEPCTL2Base> ;
    using MPSIZ = OTG_FS_DEVICE_DOEPCTL_MPSIZ_Values<OTG_FS_DEVICE::DOEPCTL2, 0, 11, ReadWriteMode, OTG_FS_DEVICEDOEPCTL2Base> ;
  } ;

  template<typename... T> 
  using DOEPCTL2Pack  = Register<0x50000B40, 32, ReadWriteMode, OTG_FS_DEVICEDOEPCTL2Base, T...> ;

  struct OTG_FS_DEVICEDOEPCTL3Base {} ;

  struct DOEPCTL3 : public RegisterBase<0x50000B60, 32, ReadWriteMode>
  {
    using EPENA = OTG_FS_DEVICE_DOEPCTL_EPENA_Values<OTG_FS_DEVICE::DOEPCTL3, 31, 1, ReadWriteMode, OTG_FS_DEVICEDOEPCTL3Base> ;
    using EPDIS = OTG_FS_DEVICE_DOEPCTL_EPDIS_Values<OTG_FS_DEVICE::DOEPCTL3, 30, 1, ReadWriteMode, OTG_FS_DEVICEDOEPCTL3Base> ;
    using SODDFRM = OTG_FS_DEVICE_DOEPCTL_SODDFRM_Values<OTG_FS_DEVICE::DOEPCTL3, 29, 1, WriteMode, OTG_FS_DEVICEDOEPCTL3Base> ;
    using SD0PID_SEVNFRM = OTG_FS_DEVICE_DOEPCTL_SDPID_SEVNFRM_Values<OTG_FS_DEVICE::DOEPCTL3, 28, 1, WriteMode, OTG_FS_DEVICEDOEPCTL3Base> ;
    using SNAK = OTG_FS_DEVICE_DOEPCTL_SNAK_Values<OTG_FS_DEVICE::DOEPCTL3, 27, 1, WriteMode, OTG_FS_DEVICEDOEPCTL3Base> ;
    using CNAK = OTG_FS_DEVICE_DOEPCTL_CNAK_Values<OTG_FS_DEVICE::DOEPCTL3, 26, 1, WriteMode, OTG_FS_DEVICEDOEPCTL3Base> ;
    using Stall = OTG_FS_DEVICE_DOEPCTL_Stall_Values<OTG_FS_DEVICE::DOEPCTL3, 21, 1, ReadWriteMode, OTG_FS_DEVICEDOEPCTL3Base> ;
    using SNPM = OTG_FS_DEVICE_DOEPCTL_SNPM_Values<OTG_FS_DEVICE::DOEPCTL3, 20, 1, ReadWriteMode, OTG_FS_DEVICEDOEPCTL3Base> ;
    using EPTYP = OTG_FS_DEVICE_DOEPCTL_EPTYP_Values<OTG_FS_DEVICE::DOEPCTL3, 18, 2, ReadWriteMode, OTG_FS_DEVICEDOEPCTL3Base> ;
    using NAKSTS = OTG_FS_DEVICE_DOEPCTL_NAKSTS_Values<OTG_FS_DEVICE::DOEPCTL3, 17, 1, ReadMode, OTG_FS_DEVICEDOEPCTL3Base> ;
    using EONUM_DPID = OTG_FS_DEVICE_DOEPCTL_EONUM_DPID_Values<OTG_FS_DEVICE::DOEPCTL3, 16, 1, ReadMode, OTG_FS_DEVICEDOEPCTL3Base> ;
    using USBAEP = OTG_FS_DEVICE_DOEPCTL_USBAEP_Values<OTG_FS_DEVICE::DOEPCTL3, 15, 1, ReadWriteMode, OTG_FS_DEVICEDOEPCTL3Base> ;
    using MPSIZ = OTG_FS_DEVICE_DOEPCTL_MPSIZ_Values<OTG_FS_DEVICE::DOEPCTL3, 0, 11, ReadWriteMode, OTG_FS_DEVICEDOEPCTL3Base> ;
  } ;

  template<typename... T> 
  using DOEPCTL3Pack  = Register<0x50000B60, 32, ReadWriteMode, OTG_FS_DEVICEDOEPCTL3Base, T...> ;

  struct OTG_FS_DEVICEDIEPINT0Base {} ;

  struct DIEPINT0 : public RegisterBase<0x50000908, 32, ReadWriteMode>
  {
    using TXFE = OTG_FS_DEVICE_DIEPINT_TXFE_Values<OTG_FS_DEVICE::DIEPINT0, 7, 1, ReadMode, OTG_FS_DEVICEDIEPINT0Base> ;
    using INEPNE = OTG_FS_DEVICE_DIEPINT_INEPNE_Values<OTG_FS_DEVICE::DIEPINT0, 6, 1, ReadWriteMode, OTG_FS_DEVICEDIEPINT0Base> ;
    using ITTXFE = OTG_FS_DEVICE_DIEPINT_ITTXFE_Values<OTG_FS_DEVICE::DIEPINT0, 4, 1, ReadWriteMode, OTG_FS_DEVICEDIEPINT0Base> ;
    using TOC = OTG_FS_DEVICE_DIEPINT_TOC_Values<OTG_FS_DEVICE::DIEPINT0, 3, 1, ReadWriteMode, OTG_FS_DEVICEDIEPINT0Base> ;
    using EPDISD = OTG_FS_DEVICE_DIEPINT_EPDISD_Values<OTG_FS_DEVICE::DIEPINT0, 1, 1, ReadWriteMode, OTG_FS_DEVICEDIEPINT0Base> ;
    using XFRC = OTG_FS_DEVICE_DIEPINT_XFRC_Values<OTG_FS_DEVICE::DIEPINT0, 0, 1, ReadWriteMode, OTG_FS_DEVICEDIEPINT0Base> ;
  } ;

  template<typename... T> 
  using DIEPINT0Pack  = Register<0x50000908, 32, ReadWriteMode, OTG_FS_DEVICEDIEPINT0Base, T...> ;

  struct OTG_FS_DEVICEDIEPINT1Base {} ;

  struct DIEPINT1 : public RegisterBase<0x50000928, 32, ReadWriteMode>
  {
    using TXFE = OTG_FS_DEVICE_DIEPINT_TXFE_Values<OTG_FS_DEVICE::DIEPINT1, 7, 1, ReadMode, OTG_FS_DEVICEDIEPINT1Base> ;
    using INEPNE = OTG_FS_DEVICE_DIEPINT_INEPNE_Values<OTG_FS_DEVICE::DIEPINT1, 6, 1, ReadWriteMode, OTG_FS_DEVICEDIEPINT1Base> ;
    using ITTXFE = OTG_FS_DEVICE_DIEPINT_ITTXFE_Values<OTG_FS_DEVICE::DIEPINT1, 4, 1, ReadWriteMode, OTG_FS_DEVICEDIEPINT1Base> ;
    using TOC = OTG_FS_DEVICE_DIEPINT_TOC_Values<OTG_FS_DEVICE::DIEPINT1, 3, 1, ReadWriteMode, OTG_FS_DEVICEDIEPINT1Base> ;
    using EPDISD = OTG_FS_DEVICE_DIEPINT_EPDISD_Values<OTG_FS_DEVICE::DIEPINT1, 1, 1, ReadWriteMode, OTG_FS_DEVICEDIEPINT1Base> ;
    using XFRC = OTG_FS_DEVICE_DIEPINT_XFRC_Values<OTG_FS_DEVICE::DIEPINT1, 0, 1, ReadWriteMode, OTG_FS_DEVICEDIEPINT1Base> ;
  } ;

  template<typename... T> 
  using DIEPINT1Pack  = Register<0x50000928, 32, ReadWriteMode, OTG_FS_DEVICEDIEPINT1Base, T...> ;

  struct OTG_FS_DEVICEDIEPINT2Base {} ;

  struct DIEPINT2 : public RegisterBase<0x50000948, 32, ReadWriteMode>
  {
    using TXFE = OTG_FS_DEVICE_DIEPINT_TXFE_Values<OTG_FS_DEVICE::DIEPINT2, 7, 1, ReadMode, OTG_FS_DEVICEDIEPINT2Base> ;
    using INEPNE = OTG_FS_DEVICE_DIEPINT_INEPNE_Values<OTG_FS_DEVICE::DIEPINT2, 6, 1, ReadWriteMode, OTG_FS_DEVICEDIEPINT2Base> ;
    using ITTXFE = OTG_FS_DEVICE_DIEPINT_ITTXFE_Values<OTG_FS_DEVICE::DIEPINT2, 4, 1, ReadWriteMode, OTG_FS_DEVICEDIEPINT2Base> ;
    using TOC = OTG_FS_DEVICE_DIEPINT_TOC_Values<OTG_FS_DEVICE::DIEPINT2, 3, 1, ReadWriteMode, OTG_FS_DEVICEDIEPINT2Base> ;
    using EPDISD = OTG_FS_DEVICE_DIEPINT_EPDISD_Values<OTG_FS_DEVICE::DIEPINT2, 1, 1, ReadWriteMode, OTG_FS_DEVICEDIEPINT2Base> ;
    using XFRC = OTG_FS_DEVICE_DIEPINT_XFRC_Values<OTG_FS_DEVICE::DIEPINT2, 0, 1, ReadWriteMode, OTG_FS_DEVICEDIEPINT2Base> ;
  } ;

  template<typename... T> 
  using DIEPINT2Pack  = Register<0x50000948, 32, ReadWriteMode, OTG_FS_DEVICEDIEPINT2Base, T...> ;

  struct OTG_FS_DEVICEDIEPINT3Base {} ;

  struct DIEPINT3 : public RegisterBase<0x50000968, 32, ReadWriteMode>
  {
    using TXFE = OTG_FS_DEVICE_DIEPINT_TXFE_Values<OTG_FS_DEVICE::DIEPINT3, 7, 1, ReadMode, OTG_FS_DEVICEDIEPINT3Base> ;
    using INEPNE = OTG_FS_DEVICE_DIEPINT_INEPNE_Values<OTG_FS_DEVICE::DIEPINT3, 6, 1, ReadWriteMode, OTG_FS_DEVICEDIEPINT3Base> ;
    using ITTXFE = OTG_FS_DEVICE_DIEPINT_ITTXFE_Values<OTG_FS_DEVICE::DIEPINT3, 4, 1, ReadWriteMode, OTG_FS_DEVICEDIEPINT3Base> ;
    using TOC = OTG_FS_DEVICE_DIEPINT_TOC_Values<OTG_FS_DEVICE::DIEPINT3, 3, 1, ReadWriteMode, OTG_FS_DEVICEDIEPINT3Base> ;
    using EPDISD = OTG_FS_DEVICE_DIEPINT_EPDISD_Values<OTG_FS_DEVICE::DIEPINT3, 1, 1, ReadWriteMode, OTG_FS_DEVICEDIEPINT3Base> ;
    using XFRC = OTG_FS_DEVICE_DIEPINT_XFRC_Values<OTG_FS_DEVICE::DIEPINT3, 0, 1, ReadWriteMode, OTG_FS_DEVICEDIEPINT3Base> ;
  } ;

  template<typename... T> 
  using DIEPINT3Pack  = Register<0x50000968, 32, ReadWriteMode, OTG_FS_DEVICEDIEPINT3Base, T...> ;

  struct OTG_FS_DEVICEDOEPINT0Base {} ;

  struct DOEPINT0 : public RegisterBase<0x50000B08, 32, ReadWriteMode>
  {
    using B2BSTUP = OTG_FS_DEVICE_DOEPINT_BBSTUP_Values<OTG_FS_DEVICE::DOEPINT0, 6, 1, ReadWriteMode, OTG_FS_DEVICEDOEPINT0Base> ;
    using OTEPDIS = OTG_FS_DEVICE_DOEPINT_OTEPDIS_Values<OTG_FS_DEVICE::DOEPINT0, 4, 1, ReadWriteMode, OTG_FS_DEVICEDOEPINT0Base> ;
    using STUP = OTG_FS_DEVICE_DOEPINT_STUP_Values<OTG_FS_DEVICE::DOEPINT0, 3, 1, ReadWriteMode, OTG_FS_DEVICEDOEPINT0Base> ;
    using EPDISD = OTG_FS_DEVICE_DOEPINT_EPDISD_Values<OTG_FS_DEVICE::DOEPINT0, 1, 1, ReadWriteMode, OTG_FS_DEVICEDOEPINT0Base> ;
    using XFRC = OTG_FS_DEVICE_DOEPINT_XFRC_Values<OTG_FS_DEVICE::DOEPINT0, 0, 1, ReadWriteMode, OTG_FS_DEVICEDOEPINT0Base> ;
  } ;

  template<typename... T> 
  using DOEPINT0Pack  = Register<0x50000B08, 32, ReadWriteMode, OTG_FS_DEVICEDOEPINT0Base, T...> ;

  struct OTG_FS_DEVICEDOEPINT1Base {} ;

  struct DOEPINT1 : public RegisterBase<0x50000B28, 32, ReadWriteMode>
  {
    using B2BSTUP = OTG_FS_DEVICE_DOEPINT_BBSTUP_Values<OTG_FS_DEVICE::DOEPINT1, 6, 1, ReadWriteMode, OTG_FS_DEVICEDOEPINT1Base> ;
    using OTEPDIS = OTG_FS_DEVICE_DOEPINT_OTEPDIS_Values<OTG_FS_DEVICE::DOEPINT1, 4, 1, ReadWriteMode, OTG_FS_DEVICEDOEPINT1Base> ;
    using STUP = OTG_FS_DEVICE_DOEPINT_STUP_Values<OTG_FS_DEVICE::DOEPINT1, 3, 1, ReadWriteMode, OTG_FS_DEVICEDOEPINT1Base> ;
    using EPDISD = OTG_FS_DEVICE_DOEPINT_EPDISD_Values<OTG_FS_DEVICE::DOEPINT1, 1, 1, ReadWriteMode, OTG_FS_DEVICEDOEPINT1Base> ;
    using XFRC = OTG_FS_DEVICE_DOEPINT_XFRC_Values<OTG_FS_DEVICE::DOEPINT1, 0, 1, ReadWriteMode, OTG_FS_DEVICEDOEPINT1Base> ;
  } ;

  template<typename... T> 
  using DOEPINT1Pack  = Register<0x50000B28, 32, ReadWriteMode, OTG_FS_DEVICEDOEPINT1Base, T...> ;

  struct OTG_FS_DEVICEDOEPINT2Base {} ;

  struct DOEPINT2 : public RegisterBase<0x50000B48, 32, ReadWriteMode>
  {
    using B2BSTUP = OTG_FS_DEVICE_DOEPINT_BBSTUP_Values<OTG_FS_DEVICE::DOEPINT2, 6, 1, ReadWriteMode, OTG_FS_DEVICEDOEPINT2Base> ;
    using OTEPDIS = OTG_FS_DEVICE_DOEPINT_OTEPDIS_Values<OTG_FS_DEVICE::DOEPINT2, 4, 1, ReadWriteMode, OTG_FS_DEVICEDOEPINT2Base> ;
    using STUP = OTG_FS_DEVICE_DOEPINT_STUP_Values<OTG_FS_DEVICE::DOEPINT2, 3, 1, ReadWriteMode, OTG_FS_DEVICEDOEPINT2Base> ;
    using EPDISD = OTG_FS_DEVICE_DOEPINT_EPDISD_Values<OTG_FS_DEVICE::DOEPINT2, 1, 1, ReadWriteMode, OTG_FS_DEVICEDOEPINT2Base> ;
    using XFRC = OTG_FS_DEVICE_DOEPINT_XFRC_Values<OTG_FS_DEVICE::DOEPINT2, 0, 1, ReadWriteMode, OTG_FS_DEVICEDOEPINT2Base> ;
  } ;

  template<typename... T> 
  using DOEPINT2Pack  = Register<0x50000B48, 32, ReadWriteMode, OTG_FS_DEVICEDOEPINT2Base, T...> ;

  struct OTG_FS_DEVICEDOEPINT3Base {} ;

  struct DOEPINT3 : public RegisterBase<0x50000B68, 32, ReadWriteMode>
  {
    using B2BSTUP = OTG_FS_DEVICE_DOEPINT_BBSTUP_Values<OTG_FS_DEVICE::DOEPINT3, 6, 1, ReadWriteMode, OTG_FS_DEVICEDOEPINT3Base> ;
    using OTEPDIS = OTG_FS_DEVICE_DOEPINT_OTEPDIS_Values<OTG_FS_DEVICE::DOEPINT3, 4, 1, ReadWriteMode, OTG_FS_DEVICEDOEPINT3Base> ;
    using STUP = OTG_FS_DEVICE_DOEPINT_STUP_Values<OTG_FS_DEVICE::DOEPINT3, 3, 1, ReadWriteMode, OTG_FS_DEVICEDOEPINT3Base> ;
    using EPDISD = OTG_FS_DEVICE_DOEPINT_EPDISD_Values<OTG_FS_DEVICE::DOEPINT3, 1, 1, ReadWriteMode, OTG_FS_DEVICEDOEPINT3Base> ;
    using XFRC = OTG_FS_DEVICE_DOEPINT_XFRC_Values<OTG_FS_DEVICE::DOEPINT3, 0, 1, ReadWriteMode, OTG_FS_DEVICEDOEPINT3Base> ;
  } ;

  template<typename... T> 
  using DOEPINT3Pack  = Register<0x50000B68, 32, ReadWriteMode, OTG_FS_DEVICEDOEPINT3Base, T...> ;

  struct OTG_FS_DEVICEDIEPTSIZ0Base {} ;

  struct DIEPTSIZ0 : public RegisterBase<0x50000910, 32, ReadWriteMode>
  {
    using PKTCNT = OTG_FS_DEVICE_DIEPTSIZ_PKTCNT_Values<OTG_FS_DEVICE::DIEPTSIZ0, 19, 2, ReadWriteMode, OTG_FS_DEVICEDIEPTSIZ0Base> ;
    using XFRSIZ = OTG_FS_DEVICE_DIEPTSIZ_XFRSIZ_Values<OTG_FS_DEVICE::DIEPTSIZ0, 0, 7, ReadWriteMode, OTG_FS_DEVICEDIEPTSIZ0Base> ;
  } ;

  template<typename... T> 
  using DIEPTSIZ0Pack  = Register<0x50000910, 32, ReadWriteMode, OTG_FS_DEVICEDIEPTSIZ0Base, T...> ;

  struct OTG_FS_DEVICEDOEPTSIZ0Base {} ;

  struct DOEPTSIZ0 : public RegisterBase<0x50000B10, 32, ReadWriteMode>
  {
    using STUPCNT = OTG_FS_DEVICE_DOEPTSIZ_STUPCNT_Values<OTG_FS_DEVICE::DOEPTSIZ0, 29, 2, ReadWriteMode, OTG_FS_DEVICEDOEPTSIZ0Base> ;
    using PKTCNT = OTG_FS_DEVICE_DOEPTSIZ_PKTCNT_Values<OTG_FS_DEVICE::DOEPTSIZ0, 19, 1, ReadWriteMode, OTG_FS_DEVICEDOEPTSIZ0Base> ;
    using XFRSIZ = OTG_FS_DEVICE_DOEPTSIZ_XFRSIZ_Values<OTG_FS_DEVICE::DOEPTSIZ0, 0, 7, ReadWriteMode, OTG_FS_DEVICEDOEPTSIZ0Base> ;
  } ;

  template<typename... T> 
  using DOEPTSIZ0Pack  = Register<0x50000B10, 32, ReadWriteMode, OTG_FS_DEVICEDOEPTSIZ0Base, T...> ;

  struct OTG_FS_DEVICEDIEPTSIZ1Base {} ;

  struct DIEPTSIZ1 : public RegisterBase<0x50000930, 32, ReadWriteMode>
  {
    using MCNT = OTG_FS_DEVICE_DIEPTSIZ_MCNT_Values<OTG_FS_DEVICE::DIEPTSIZ1, 29, 2, ReadWriteMode, OTG_FS_DEVICEDIEPTSIZ1Base> ;
    using PKTCNT = OTG_FS_DEVICE_DIEPTSIZ_PKTCNT_Values<OTG_FS_DEVICE::DIEPTSIZ1, 19, 10, ReadWriteMode, OTG_FS_DEVICEDIEPTSIZ1Base> ;
    using XFRSIZ = OTG_FS_DEVICE_DIEPTSIZ_XFRSIZ_Values<OTG_FS_DEVICE::DIEPTSIZ1, 0, 19, ReadWriteMode, OTG_FS_DEVICEDIEPTSIZ1Base> ;
  } ;

  template<typename... T> 
  using DIEPTSIZ1Pack  = Register<0x50000930, 32, ReadWriteMode, OTG_FS_DEVICEDIEPTSIZ1Base, T...> ;

  struct OTG_FS_DEVICEDIEPTSIZ2Base {} ;

  struct DIEPTSIZ2 : public RegisterBase<0x50000950, 32, ReadWriteMode>
  {
    using MCNT = OTG_FS_DEVICE_DIEPTSIZ_MCNT_Values<OTG_FS_DEVICE::DIEPTSIZ2, 29, 2, ReadWriteMode, OTG_FS_DEVICEDIEPTSIZ2Base> ;
    using PKTCNT = OTG_FS_DEVICE_DIEPTSIZ_PKTCNT_Values<OTG_FS_DEVICE::DIEPTSIZ2, 19, 10, ReadWriteMode, OTG_FS_DEVICEDIEPTSIZ2Base> ;
    using XFRSIZ = OTG_FS_DEVICE_DIEPTSIZ_XFRSIZ_Values<OTG_FS_DEVICE::DIEPTSIZ2, 0, 19, ReadWriteMode, OTG_FS_DEVICEDIEPTSIZ2Base> ;
  } ;

  template<typename... T> 
  using DIEPTSIZ2Pack  = Register<0x50000950, 32, ReadWriteMode, OTG_FS_DEVICEDIEPTSIZ2Base, T...> ;

  struct OTG_FS_DEVICEDIEPTSIZ3Base {} ;

  struct DIEPTSIZ3 : public RegisterBase<0x50000970, 32, ReadWriteMode>
  {
    using MCNT = OTG_FS_DEVICE_DIEPTSIZ_MCNT_Values<OTG_FS_DEVICE::DIEPTSIZ3, 29, 2, ReadWriteMode, OTG_FS_DEVICEDIEPTSIZ3Base> ;
    using PKTCNT = OTG_FS_DEVICE_DIEPTSIZ_PKTCNT_Values<OTG_FS_DEVICE::DIEPTSIZ3, 19, 10, ReadWriteMode, OTG_FS_DEVICEDIEPTSIZ3Base> ;
    using XFRSIZ = OTG_FS_DEVICE_DIEPTSIZ_XFRSIZ_Values<OTG_FS_DEVICE::DIEPTSIZ3, 0, 19, ReadWriteMode, OTG_FS_DEVICEDIEPTSIZ3Base> ;
  } ;

  template<typename... T> 
  using DIEPTSIZ3Pack  = Register<0x50000970, 32, ReadWriteMode, OTG_FS_DEVICEDIEPTSIZ3Base, T...> ;

  struct OTG_FS_DEVICEDTXFSTS0Base {} ;

  struct DTXFSTS0 : public RegisterBase<0x50000918, 32, ReadMode>
  {
    using INEPTFSAV = OTG_FS_DEVICE_DTXFSTS_INEPTFSAV_Values<OTG_FS_DEVICE::DTXFSTS0, 0, 16, ReadMode, OTG_FS_DEVICEDTXFSTS0Base> ;
  } ;

  template<typename... T> 
  using DTXFSTS0Pack  = Register<0x50000918, 32, ReadMode, OTG_FS_DEVICEDTXFSTS0Base, T...> ;

  struct OTG_FS_DEVICEDTXFSTS1Base {} ;

  struct DTXFSTS1 : public RegisterBase<0x50000938, 32, ReadMode>
  {
    using INEPTFSAV = OTG_FS_DEVICE_DTXFSTS_INEPTFSAV_Values<OTG_FS_DEVICE::DTXFSTS1, 0, 16, ReadMode, OTG_FS_DEVICEDTXFSTS1Base> ;
  } ;

  template<typename... T> 
  using DTXFSTS1Pack  = Register<0x50000938, 32, ReadMode, OTG_FS_DEVICEDTXFSTS1Base, T...> ;

  struct OTG_FS_DEVICEDTXFSTS2Base {} ;

  struct DTXFSTS2 : public RegisterBase<0x50000958, 32, ReadMode>
  {
    using INEPTFSAV = OTG_FS_DEVICE_DTXFSTS_INEPTFSAV_Values<OTG_FS_DEVICE::DTXFSTS2, 0, 16, ReadMode, OTG_FS_DEVICEDTXFSTS2Base> ;
  } ;

  template<typename... T> 
  using DTXFSTS2Pack  = Register<0x50000958, 32, ReadMode, OTG_FS_DEVICEDTXFSTS2Base, T...> ;

  struct OTG_FS_DEVICEDTXFSTS3Base {} ;

  struct DTXFSTS3 : public RegisterBase<0x50000978, 32, ReadMode>
  {
    using INEPTFSAV = OTG_FS_DEVICE_DTXFSTS_INEPTFSAV_Values<OTG_FS_DEVICE::DTXFSTS3, 0, 16, ReadMode, OTG_FS_DEVICEDTXFSTS3Base> ;
  } ;

  template<typename... T> 
  using DTXFSTS3Pack  = Register<0x50000978, 32, ReadMode, OTG_FS_DEVICEDTXFSTS3Base, T...> ;

  struct OTG_FS_DEVICEDOEPTSIZ1Base {} ;

  struct DOEPTSIZ1 : public RegisterBase<0x50000B30, 32, ReadWriteMode>
  {
    using RXDPID_STUPCNT = OTG_FS_DEVICE_DOEPTSIZ_RXDPID_STUPCNT_Values<OTG_FS_DEVICE::DOEPTSIZ1, 29, 2, ReadWriteMode, OTG_FS_DEVICEDOEPTSIZ1Base> ;
    using PKTCNT = OTG_FS_DEVICE_DOEPTSIZ_PKTCNT_Values<OTG_FS_DEVICE::DOEPTSIZ1, 19, 10, ReadWriteMode, OTG_FS_DEVICEDOEPTSIZ1Base> ;
    using XFRSIZ = OTG_FS_DEVICE_DOEPTSIZ_XFRSIZ_Values<OTG_FS_DEVICE::DOEPTSIZ1, 0, 19, ReadWriteMode, OTG_FS_DEVICEDOEPTSIZ1Base> ;
  } ;

  template<typename... T> 
  using DOEPTSIZ1Pack  = Register<0x50000B30, 32, ReadWriteMode, OTG_FS_DEVICEDOEPTSIZ1Base, T...> ;

  struct OTG_FS_DEVICEDOEPTSIZ2Base {} ;

  struct DOEPTSIZ2 : public RegisterBase<0x50000B50, 32, ReadWriteMode>
  {
    using RXDPID_STUPCNT = OTG_FS_DEVICE_DOEPTSIZ_RXDPID_STUPCNT_Values<OTG_FS_DEVICE::DOEPTSIZ2, 29, 2, ReadWriteMode, OTG_FS_DEVICEDOEPTSIZ2Base> ;
    using PKTCNT = OTG_FS_DEVICE_DOEPTSIZ_PKTCNT_Values<OTG_FS_DEVICE::DOEPTSIZ2, 19, 10, ReadWriteMode, OTG_FS_DEVICEDOEPTSIZ2Base> ;
    using XFRSIZ = OTG_FS_DEVICE_DOEPTSIZ_XFRSIZ_Values<OTG_FS_DEVICE::DOEPTSIZ2, 0, 19, ReadWriteMode, OTG_FS_DEVICEDOEPTSIZ2Base> ;
  } ;

  template<typename... T> 
  using DOEPTSIZ2Pack  = Register<0x50000B50, 32, ReadWriteMode, OTG_FS_DEVICEDOEPTSIZ2Base, T...> ;

  struct OTG_FS_DEVICEDOEPTSIZ3Base {} ;

  struct DOEPTSIZ3 : public RegisterBase<0x50000B70, 32, ReadWriteMode>
  {
    using RXDPID_STUPCNT = OTG_FS_DEVICE_DOEPTSIZ_RXDPID_STUPCNT_Values<OTG_FS_DEVICE::DOEPTSIZ3, 29, 2, ReadWriteMode, OTG_FS_DEVICEDOEPTSIZ3Base> ;
    using PKTCNT = OTG_FS_DEVICE_DOEPTSIZ_PKTCNT_Values<OTG_FS_DEVICE::DOEPTSIZ3, 19, 10, ReadWriteMode, OTG_FS_DEVICEDOEPTSIZ3Base> ;
    using XFRSIZ = OTG_FS_DEVICE_DOEPTSIZ_XFRSIZ_Values<OTG_FS_DEVICE::DOEPTSIZ3, 0, 19, ReadWriteMode, OTG_FS_DEVICEDOEPTSIZ3Base> ;
  } ;

  template<typename... T> 
  using DOEPTSIZ3Pack  = Register<0x50000B70, 32, ReadWriteMode, OTG_FS_DEVICEDOEPTSIZ3Base, T...> ;

} ;

#endif //#if !defined(OTGFSDEVICEREGISTERS_HPP)
