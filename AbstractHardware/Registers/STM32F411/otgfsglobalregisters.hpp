/*******************************************************************************
* Filename      : otgfsglobalregisters.hpp
*
* Details       : USB on the go full speed. This header file is auto-generated
*                 for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(OTGFSGLOBALREGISTERS_HPP)
#define OTGFSGLOBALREGISTERS_HPP

#include "otgfsglobalbitsfield.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct OTG_FS_GLOBAL
{
  struct OTG_FS_GLOBALFS_GOTGCTLBase {} ;

  struct FS_GOTGCTL : public RegisterBase<0x50000000, 32, ReadWriteMode>
  {
    using SRQSCS = OTG_FS_GLOBAL_FS_GOTGCTL_SRQSCS_Values<OTG_FS_GLOBAL::FS_GOTGCTL, 0, 1, ReadMode, OTG_FS_GLOBALFS_GOTGCTLBase> ;
    using SRQ = OTG_FS_GLOBAL_FS_GOTGCTL_SRQ_Values<OTG_FS_GLOBAL::FS_GOTGCTL, 1, 1, ReadWriteMode, OTG_FS_GLOBALFS_GOTGCTLBase> ;
    using HNGSCS = OTG_FS_GLOBAL_FS_GOTGCTL_HNGSCS_Values<OTG_FS_GLOBAL::FS_GOTGCTL, 8, 1, ReadMode, OTG_FS_GLOBALFS_GOTGCTLBase> ;
    using HNPRQ = OTG_FS_GLOBAL_FS_GOTGCTL_HNPRQ_Values<OTG_FS_GLOBAL::FS_GOTGCTL, 9, 1, ReadWriteMode, OTG_FS_GLOBALFS_GOTGCTLBase> ;
    using HSHNPEN = OTG_FS_GLOBAL_FS_GOTGCTL_HSHNPEN_Values<OTG_FS_GLOBAL::FS_GOTGCTL, 10, 1, ReadWriteMode, OTG_FS_GLOBALFS_GOTGCTLBase> ;
    using DHNPEN = OTG_FS_GLOBAL_FS_GOTGCTL_DHNPEN_Values<OTG_FS_GLOBAL::FS_GOTGCTL, 11, 1, ReadWriteMode, OTG_FS_GLOBALFS_GOTGCTLBase> ;
    using CIDSTS = OTG_FS_GLOBAL_FS_GOTGCTL_CIDSTS_Values<OTG_FS_GLOBAL::FS_GOTGCTL, 16, 1, ReadMode, OTG_FS_GLOBALFS_GOTGCTLBase> ;
    using DBCT = OTG_FS_GLOBAL_FS_GOTGCTL_DBCT_Values<OTG_FS_GLOBAL::FS_GOTGCTL, 17, 1, ReadMode, OTG_FS_GLOBALFS_GOTGCTLBase> ;
    using ASVLD = OTG_FS_GLOBAL_FS_GOTGCTL_ASVLD_Values<OTG_FS_GLOBAL::FS_GOTGCTL, 18, 1, ReadMode, OTG_FS_GLOBALFS_GOTGCTLBase> ;
    using BSVLD = OTG_FS_GLOBAL_FS_GOTGCTL_BSVLD_Values<OTG_FS_GLOBAL::FS_GOTGCTL, 19, 1, ReadMode, OTG_FS_GLOBALFS_GOTGCTLBase> ;
  } ;

  template<typename... T> 
  using FS_GOTGCTLPack  = Register<0x50000000, 32, ReadWriteMode, OTG_FS_GLOBALFS_GOTGCTLBase, T...> ;

  struct OTG_FS_GLOBALFS_GOTGINTBase {} ;

  struct FS_GOTGINT : public RegisterBase<0x50000004, 32, ReadWriteMode>
  {
    using SEDET = OTG_FS_GLOBAL_FS_GOTGINT_SEDET_Values<OTG_FS_GLOBAL::FS_GOTGINT, 2, 1, ReadWriteMode, OTG_FS_GLOBALFS_GOTGINTBase> ;
    using SRSSCHG = OTG_FS_GLOBAL_FS_GOTGINT_SRSSCHG_Values<OTG_FS_GLOBAL::FS_GOTGINT, 8, 1, ReadWriteMode, OTG_FS_GLOBALFS_GOTGINTBase> ;
    using HNSSCHG = OTG_FS_GLOBAL_FS_GOTGINT_HNSSCHG_Values<OTG_FS_GLOBAL::FS_GOTGINT, 9, 1, ReadWriteMode, OTG_FS_GLOBALFS_GOTGINTBase> ;
    using HNGDET = OTG_FS_GLOBAL_FS_GOTGINT_HNGDET_Values<OTG_FS_GLOBAL::FS_GOTGINT, 17, 1, ReadWriteMode, OTG_FS_GLOBALFS_GOTGINTBase> ;
    using ADTOCHG = OTG_FS_GLOBAL_FS_GOTGINT_ADTOCHG_Values<OTG_FS_GLOBAL::FS_GOTGINT, 18, 1, ReadWriteMode, OTG_FS_GLOBALFS_GOTGINTBase> ;
    using DBCDNE = OTG_FS_GLOBAL_FS_GOTGINT_DBCDNE_Values<OTG_FS_GLOBAL::FS_GOTGINT, 19, 1, ReadWriteMode, OTG_FS_GLOBALFS_GOTGINTBase> ;
  } ;

  template<typename... T> 
  using FS_GOTGINTPack  = Register<0x50000004, 32, ReadWriteMode, OTG_FS_GLOBALFS_GOTGINTBase, T...> ;

  struct OTG_FS_GLOBALFS_GAHBCFGBase {} ;

  struct FS_GAHBCFG : public RegisterBase<0x50000008, 32, ReadWriteMode>
  {
    using GINT = OTG_FS_GLOBAL_FS_GAHBCFG_GINT_Values<OTG_FS_GLOBAL::FS_GAHBCFG, 0, 1, ReadWriteMode, OTG_FS_GLOBALFS_GAHBCFGBase> ;
    using TXFELVL = OTG_FS_GLOBAL_FS_GAHBCFG_TXFELVL_Values<OTG_FS_GLOBAL::FS_GAHBCFG, 7, 1, ReadWriteMode, OTG_FS_GLOBALFS_GAHBCFGBase> ;
    using PTXFELVL = OTG_FS_GLOBAL_FS_GAHBCFG_PTXFELVL_Values<OTG_FS_GLOBAL::FS_GAHBCFG, 8, 1, ReadWriteMode, OTG_FS_GLOBALFS_GAHBCFGBase> ;
  } ;

  template<typename... T> 
  using FS_GAHBCFGPack  = Register<0x50000008, 32, ReadWriteMode, OTG_FS_GLOBALFS_GAHBCFGBase, T...> ;

  struct OTG_FS_GLOBALFS_GUSBCFGBase {} ;

  struct FS_GUSBCFG : public RegisterBase<0x5000000C, 32, ReadWriteMode>
  {
    using TOCAL = OTG_FS_GLOBAL_FS_GUSBCFG_TOCAL_Values<OTG_FS_GLOBAL::FS_GUSBCFG, 0, 3, ReadWriteMode, OTG_FS_GLOBALFS_GUSBCFGBase> ;
    using PHYSEL = OTG_FS_GLOBAL_FS_GUSBCFG_PHYSEL_Values<OTG_FS_GLOBAL::FS_GUSBCFG, 6, 1, WriteMode, OTG_FS_GLOBALFS_GUSBCFGBase> ;
    using SRPCAP = OTG_FS_GLOBAL_FS_GUSBCFG_SRPCAP_Values<OTG_FS_GLOBAL::FS_GUSBCFG, 8, 1, ReadWriteMode, OTG_FS_GLOBALFS_GUSBCFGBase> ;
    using HNPCAP = OTG_FS_GLOBAL_FS_GUSBCFG_HNPCAP_Values<OTG_FS_GLOBAL::FS_GUSBCFG, 9, 1, ReadWriteMode, OTG_FS_GLOBALFS_GUSBCFGBase> ;
    using TRDT = OTG_FS_GLOBAL_FS_GUSBCFG_TRDT_Values<OTG_FS_GLOBAL::FS_GUSBCFG, 10, 4, ReadWriteMode, OTG_FS_GLOBALFS_GUSBCFGBase> ;
    using FHMOD = OTG_FS_GLOBAL_FS_GUSBCFG_FHMOD_Values<OTG_FS_GLOBAL::FS_GUSBCFG, 29, 1, ReadWriteMode, OTG_FS_GLOBALFS_GUSBCFGBase> ;
    using FDMOD = OTG_FS_GLOBAL_FS_GUSBCFG_FDMOD_Values<OTG_FS_GLOBAL::FS_GUSBCFG, 30, 1, ReadWriteMode, OTG_FS_GLOBALFS_GUSBCFGBase> ;
    using CTXPKT = OTG_FS_GLOBAL_FS_GUSBCFG_CTXPKT_Values<OTG_FS_GLOBAL::FS_GUSBCFG, 31, 1, ReadWriteMode, OTG_FS_GLOBALFS_GUSBCFGBase> ;
  } ;

  template<typename... T> 
  using FS_GUSBCFGPack  = Register<0x5000000C, 32, ReadWriteMode, OTG_FS_GLOBALFS_GUSBCFGBase, T...> ;

  struct OTG_FS_GLOBALFS_GRSTCTLBase {} ;

  struct FS_GRSTCTL : public RegisterBase<0x50000010, 32, ReadWriteMode>
  {
    using CSRST = OTG_FS_GLOBAL_FS_GRSTCTL_CSRST_Values<OTG_FS_GLOBAL::FS_GRSTCTL, 0, 1, ReadWriteMode, OTG_FS_GLOBALFS_GRSTCTLBase> ;
    using HSRST = OTG_FS_GLOBAL_FS_GRSTCTL_HSRST_Values<OTG_FS_GLOBAL::FS_GRSTCTL, 1, 1, ReadWriteMode, OTG_FS_GLOBALFS_GRSTCTLBase> ;
    using FCRST = OTG_FS_GLOBAL_FS_GRSTCTL_FCRST_Values<OTG_FS_GLOBAL::FS_GRSTCTL, 2, 1, ReadWriteMode, OTG_FS_GLOBALFS_GRSTCTLBase> ;
    using RXFFLSH = OTG_FS_GLOBAL_FS_GRSTCTL_RXFFLSH_Values<OTG_FS_GLOBAL::FS_GRSTCTL, 4, 1, ReadWriteMode, OTG_FS_GLOBALFS_GRSTCTLBase> ;
    using TXFFLSH = OTG_FS_GLOBAL_FS_GRSTCTL_TXFFLSH_Values<OTG_FS_GLOBAL::FS_GRSTCTL, 5, 1, ReadWriteMode, OTG_FS_GLOBALFS_GRSTCTLBase> ;
    using TXFNUM = OTG_FS_GLOBAL_FS_GRSTCTL_TXFNUM_Values<OTG_FS_GLOBAL::FS_GRSTCTL, 6, 5, ReadWriteMode, OTG_FS_GLOBALFS_GRSTCTLBase> ;
    using AHBIDL = OTG_FS_GLOBAL_FS_GRSTCTL_AHBIDL_Values<OTG_FS_GLOBAL::FS_GRSTCTL, 31, 1, ReadMode, OTG_FS_GLOBALFS_GRSTCTLBase> ;
  } ;

  template<typename... T> 
  using FS_GRSTCTLPack  = Register<0x50000010, 32, ReadWriteMode, OTG_FS_GLOBALFS_GRSTCTLBase, T...> ;

  struct OTG_FS_GLOBALFS_GINTSTSBase {} ;

  struct FS_GINTSTS : public RegisterBase<0x50000014, 32, ReadWriteMode>
  {
    using CMOD = OTG_FS_GLOBAL_FS_GINTSTS_CMOD_Values<OTG_FS_GLOBAL::FS_GINTSTS, 0, 1, ReadMode, OTG_FS_GLOBALFS_GINTSTSBase> ;
    using MMIS = OTG_FS_GLOBAL_FS_GINTSTS_MMIS_Values<OTG_FS_GLOBAL::FS_GINTSTS, 1, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTSTSBase> ;
    using OTGINT = OTG_FS_GLOBAL_FS_GINTSTS_OTGINT_Values<OTG_FS_GLOBAL::FS_GINTSTS, 2, 1, ReadMode, OTG_FS_GLOBALFS_GINTSTSBase> ;
    using SOF = OTG_FS_GLOBAL_FS_GINTSTS_SOF_Values<OTG_FS_GLOBAL::FS_GINTSTS, 3, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTSTSBase> ;
    using RXFLVL = OTG_FS_GLOBAL_FS_GINTSTS_RXFLVL_Values<OTG_FS_GLOBAL::FS_GINTSTS, 4, 1, ReadMode, OTG_FS_GLOBALFS_GINTSTSBase> ;
    using NPTXFE = OTG_FS_GLOBAL_FS_GINTSTS_NPTXFE_Values<OTG_FS_GLOBAL::FS_GINTSTS, 5, 1, ReadMode, OTG_FS_GLOBALFS_GINTSTSBase> ;
    using GINAKEFF = OTG_FS_GLOBAL_FS_GINTSTS_GINAKEFF_Values<OTG_FS_GLOBAL::FS_GINTSTS, 6, 1, ReadMode, OTG_FS_GLOBALFS_GINTSTSBase> ;
    using GOUTNAKEFF = OTG_FS_GLOBAL_FS_GINTSTS_GOUTNAKEFF_Values<OTG_FS_GLOBAL::FS_GINTSTS, 7, 1, ReadMode, OTG_FS_GLOBALFS_GINTSTSBase> ;
    using ESUSP = OTG_FS_GLOBAL_FS_GINTSTS_ESUSP_Values<OTG_FS_GLOBAL::FS_GINTSTS, 10, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTSTSBase> ;
    using USBSUSP = OTG_FS_GLOBAL_FS_GINTSTS_USBSUSP_Values<OTG_FS_GLOBAL::FS_GINTSTS, 11, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTSTSBase> ;
    using USBRST = OTG_FS_GLOBAL_FS_GINTSTS_USBRST_Values<OTG_FS_GLOBAL::FS_GINTSTS, 12, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTSTSBase> ;
    using ENUMDNE = OTG_FS_GLOBAL_FS_GINTSTS_ENUMDNE_Values<OTG_FS_GLOBAL::FS_GINTSTS, 13, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTSTSBase> ;
    using ISOODRP = OTG_FS_GLOBAL_FS_GINTSTS_ISOODRP_Values<OTG_FS_GLOBAL::FS_GINTSTS, 14, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTSTSBase> ;
    using EOPF = OTG_FS_GLOBAL_FS_GINTSTS_EOPF_Values<OTG_FS_GLOBAL::FS_GINTSTS, 15, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTSTSBase> ;
    using IEPINT = OTG_FS_GLOBAL_FS_GINTSTS_IEPINT_Values<OTG_FS_GLOBAL::FS_GINTSTS, 18, 1, ReadMode, OTG_FS_GLOBALFS_GINTSTSBase> ;
    using OEPINT = OTG_FS_GLOBAL_FS_GINTSTS_OEPINT_Values<OTG_FS_GLOBAL::FS_GINTSTS, 19, 1, ReadMode, OTG_FS_GLOBALFS_GINTSTSBase> ;
    using IISOIXFR = OTG_FS_GLOBAL_FS_GINTSTS_IISOIXFR_Values<OTG_FS_GLOBAL::FS_GINTSTS, 20, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTSTSBase> ;
    using IPXFR_INCOMPISOOUT = OTG_FS_GLOBAL_FS_GINTSTS_IPXFR_INCOMPISOOUT_Values<OTG_FS_GLOBAL::FS_GINTSTS, 21, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTSTSBase> ;
    using HPRTINT = OTG_FS_GLOBAL_FS_GINTSTS_HPRTINT_Values<OTG_FS_GLOBAL::FS_GINTSTS, 24, 1, ReadMode, OTG_FS_GLOBALFS_GINTSTSBase> ;
    using HCINT = OTG_FS_GLOBAL_FS_GINTSTS_HCINT_Values<OTG_FS_GLOBAL::FS_GINTSTS, 25, 1, ReadMode, OTG_FS_GLOBALFS_GINTSTSBase> ;
    using PTXFE = OTG_FS_GLOBAL_FS_GINTSTS_PTXFE_Values<OTG_FS_GLOBAL::FS_GINTSTS, 26, 1, ReadMode, OTG_FS_GLOBALFS_GINTSTSBase> ;
    using CIDSCHG = OTG_FS_GLOBAL_FS_GINTSTS_CIDSCHG_Values<OTG_FS_GLOBAL::FS_GINTSTS, 28, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTSTSBase> ;
    using DISCINT = OTG_FS_GLOBAL_FS_GINTSTS_DISCINT_Values<OTG_FS_GLOBAL::FS_GINTSTS, 29, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTSTSBase> ;
    using SRQINT = OTG_FS_GLOBAL_FS_GINTSTS_SRQINT_Values<OTG_FS_GLOBAL::FS_GINTSTS, 30, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTSTSBase> ;
    using WKUPINT = OTG_FS_GLOBAL_FS_GINTSTS_WKUPINT_Values<OTG_FS_GLOBAL::FS_GINTSTS, 31, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTSTSBase> ;
  } ;

  template<typename... T> 
  using FS_GINTSTSPack  = Register<0x50000014, 32, ReadWriteMode, OTG_FS_GLOBALFS_GINTSTSBase, T...> ;

  struct OTG_FS_GLOBALFS_GINTMSKBase {} ;

  struct FS_GINTMSK : public RegisterBase<0x50000018, 32, ReadWriteMode>
  {
    using MMISM = OTG_FS_GLOBAL_FS_GINTMSK_MMISM_Values<OTG_FS_GLOBAL::FS_GINTMSK, 1, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTMSKBase> ;
    using OTGINT = OTG_FS_GLOBAL_FS_GINTMSK_OTGINT_Values<OTG_FS_GLOBAL::FS_GINTMSK, 2, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTMSKBase> ;
    using SOFM = OTG_FS_GLOBAL_FS_GINTMSK_SOFM_Values<OTG_FS_GLOBAL::FS_GINTMSK, 3, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTMSKBase> ;
    using RXFLVLM = OTG_FS_GLOBAL_FS_GINTMSK_RXFLVLM_Values<OTG_FS_GLOBAL::FS_GINTMSK, 4, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTMSKBase> ;
    using NPTXFEM = OTG_FS_GLOBAL_FS_GINTMSK_NPTXFEM_Values<OTG_FS_GLOBAL::FS_GINTMSK, 5, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTMSKBase> ;
    using GINAKEFFM = OTG_FS_GLOBAL_FS_GINTMSK_GINAKEFFM_Values<OTG_FS_GLOBAL::FS_GINTMSK, 6, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTMSKBase> ;
    using GONAKEFFM = OTG_FS_GLOBAL_FS_GINTMSK_GONAKEFFM_Values<OTG_FS_GLOBAL::FS_GINTMSK, 7, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTMSKBase> ;
    using ESUSPM = OTG_FS_GLOBAL_FS_GINTMSK_ESUSPM_Values<OTG_FS_GLOBAL::FS_GINTMSK, 10, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTMSKBase> ;
    using USBSUSPM = OTG_FS_GLOBAL_FS_GINTMSK_USBSUSPM_Values<OTG_FS_GLOBAL::FS_GINTMSK, 11, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTMSKBase> ;
    using USBRST = OTG_FS_GLOBAL_FS_GINTMSK_USBRST_Values<OTG_FS_GLOBAL::FS_GINTMSK, 12, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTMSKBase> ;
    using ENUMDNEM = OTG_FS_GLOBAL_FS_GINTMSK_ENUMDNEM_Values<OTG_FS_GLOBAL::FS_GINTMSK, 13, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTMSKBase> ;
    using ISOODRPM = OTG_FS_GLOBAL_FS_GINTMSK_ISOODRPM_Values<OTG_FS_GLOBAL::FS_GINTMSK, 14, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTMSKBase> ;
    using EOPFM = OTG_FS_GLOBAL_FS_GINTMSK_EOPFM_Values<OTG_FS_GLOBAL::FS_GINTMSK, 15, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTMSKBase> ;
    using EPMISM = OTG_FS_GLOBAL_FS_GINTMSK_EPMISM_Values<OTG_FS_GLOBAL::FS_GINTMSK, 17, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTMSKBase> ;
    using IEPINT = OTG_FS_GLOBAL_FS_GINTMSK_IEPINT_Values<OTG_FS_GLOBAL::FS_GINTMSK, 18, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTMSKBase> ;
    using OEPINT = OTG_FS_GLOBAL_FS_GINTMSK_OEPINT_Values<OTG_FS_GLOBAL::FS_GINTMSK, 19, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTMSKBase> ;
    using IISOIXFRM = OTG_FS_GLOBAL_FS_GINTMSK_IISOIXFRM_Values<OTG_FS_GLOBAL::FS_GINTMSK, 20, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTMSKBase> ;
    using IPXFRM_IISOOXFRM = OTG_FS_GLOBAL_FS_GINTMSK_IPXFRM_IISOOXFRM_Values<OTG_FS_GLOBAL::FS_GINTMSK, 21, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTMSKBase> ;
    using PRTIM = OTG_FS_GLOBAL_FS_GINTMSK_PRTIM_Values<OTG_FS_GLOBAL::FS_GINTMSK, 24, 1, ReadMode, OTG_FS_GLOBALFS_GINTMSKBase> ;
    using HCIM = OTG_FS_GLOBAL_FS_GINTMSK_HCIM_Values<OTG_FS_GLOBAL::FS_GINTMSK, 25, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTMSKBase> ;
    using PTXFEM = OTG_FS_GLOBAL_FS_GINTMSK_PTXFEM_Values<OTG_FS_GLOBAL::FS_GINTMSK, 26, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTMSKBase> ;
    using CIDSCHGM = OTG_FS_GLOBAL_FS_GINTMSK_CIDSCHGM_Values<OTG_FS_GLOBAL::FS_GINTMSK, 28, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTMSKBase> ;
    using DISCINT = OTG_FS_GLOBAL_FS_GINTMSK_DISCINT_Values<OTG_FS_GLOBAL::FS_GINTMSK, 29, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTMSKBase> ;
    using SRQIM = OTG_FS_GLOBAL_FS_GINTMSK_SRQIM_Values<OTG_FS_GLOBAL::FS_GINTMSK, 30, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTMSKBase> ;
    using WUIM = OTG_FS_GLOBAL_FS_GINTMSK_WUIM_Values<OTG_FS_GLOBAL::FS_GINTMSK, 31, 1, ReadWriteMode, OTG_FS_GLOBALFS_GINTMSKBase> ;
  } ;

  template<typename... T> 
  using FS_GINTMSKPack  = Register<0x50000018, 32, ReadWriteMode, OTG_FS_GLOBALFS_GINTMSKBase, T...> ;

  struct OTG_FS_GLOBALFS_GRXSTSR_DeviceBase {} ;

  struct FS_GRXSTSR_Device : public RegisterBase<0x5000001C, 32, ReadMode>
  {
    using EPNUM = OTG_FS_GLOBAL_FS_GRXSTSR_Device_EPNUM_Values<OTG_FS_GLOBAL::FS_GRXSTSR_Device, 0, 4, ReadMode, OTG_FS_GLOBALFS_GRXSTSR_DeviceBase> ;
    using BCNT = OTG_FS_GLOBAL_FS_GRXSTSR_Device_BCNT_Values<OTG_FS_GLOBAL::FS_GRXSTSR_Device, 4, 11, ReadMode, OTG_FS_GLOBALFS_GRXSTSR_DeviceBase> ;
    using DPID = OTG_FS_GLOBAL_FS_GRXSTSR_Device_DPID_Values<OTG_FS_GLOBAL::FS_GRXSTSR_Device, 15, 2, ReadMode, OTG_FS_GLOBALFS_GRXSTSR_DeviceBase> ;
    using PKTSTS = OTG_FS_GLOBAL_FS_GRXSTSR_Device_PKTSTS_Values<OTG_FS_GLOBAL::FS_GRXSTSR_Device, 17, 4, ReadMode, OTG_FS_GLOBALFS_GRXSTSR_DeviceBase> ;
    using FRMNUM = OTG_FS_GLOBAL_FS_GRXSTSR_Device_FRMNUM_Values<OTG_FS_GLOBAL::FS_GRXSTSR_Device, 21, 4, ReadMode, OTG_FS_GLOBALFS_GRXSTSR_DeviceBase> ;
  } ;

  template<typename... T> 
  using FS_GRXSTSR_DevicePack  = Register<0x5000001C, 32, ReadMode, OTG_FS_GLOBALFS_GRXSTSR_DeviceBase, T...> ;

  struct OTG_FS_GLOBALFS_GRXSTSR_HostBase {} ;

  struct FS_GRXSTSR_Host : public RegisterBase<0x5000001C, 32, ReadMode>
  {
    using EPNUM = OTG_FS_GLOBAL_FS_GRXSTSR_Host_EPNUM_Values<OTG_FS_GLOBAL::FS_GRXSTSR_Host, 0, 4, ReadMode, OTG_FS_GLOBALFS_GRXSTSR_HostBase> ;
    using BCNT = OTG_FS_GLOBAL_FS_GRXSTSR_Host_BCNT_Values<OTG_FS_GLOBAL::FS_GRXSTSR_Host, 4, 11, ReadMode, OTG_FS_GLOBALFS_GRXSTSR_HostBase> ;
    using DPID = OTG_FS_GLOBAL_FS_GRXSTSR_Host_DPID_Values<OTG_FS_GLOBAL::FS_GRXSTSR_Host, 15, 2, ReadMode, OTG_FS_GLOBALFS_GRXSTSR_HostBase> ;
    using PKTSTS = OTG_FS_GLOBAL_FS_GRXSTSR_Host_PKTSTS_Values<OTG_FS_GLOBAL::FS_GRXSTSR_Host, 17, 4, ReadMode, OTG_FS_GLOBALFS_GRXSTSR_HostBase> ;
    using FRMNUM = OTG_FS_GLOBAL_FS_GRXSTSR_Host_FRMNUM_Values<OTG_FS_GLOBAL::FS_GRXSTSR_Host, 21, 4, ReadMode, OTG_FS_GLOBALFS_GRXSTSR_HostBase> ;
  } ;

  template<typename... T> 
  using FS_GRXSTSR_HostPack  = Register<0x5000001C, 32, ReadMode, OTG_FS_GLOBALFS_GRXSTSR_HostBase, T...> ;

  struct OTG_FS_GLOBALFS_GRXFSIZBase {} ;

  struct FS_GRXFSIZ : public RegisterBase<0x50000024, 32, ReadWriteMode>
  {
    using RXFD = OTG_FS_GLOBAL_FS_GRXFSIZ_RXFD_Values<OTG_FS_GLOBAL::FS_GRXFSIZ, 0, 16, ReadWriteMode, OTG_FS_GLOBALFS_GRXFSIZBase> ;
  } ;

  template<typename... T> 
  using FS_GRXFSIZPack  = Register<0x50000024, 32, ReadWriteMode, OTG_FS_GLOBALFS_GRXFSIZBase, T...> ;

  struct OTG_FS_GLOBALFS_GNPTXFSIZ_DeviceBase {} ;

  struct FS_GNPTXFSIZ_Device : public RegisterBase<0x50000028, 32, ReadWriteMode>
  {
    using TX0FSA = OTG_FS_GLOBAL_FS_GNPTXFSIZ_Device_TXFSA_Values<OTG_FS_GLOBAL::FS_GNPTXFSIZ_Device, 0, 16, ReadWriteMode, OTG_FS_GLOBALFS_GNPTXFSIZ_DeviceBase> ;
    using TX0FD = OTG_FS_GLOBAL_FS_GNPTXFSIZ_Device_TXFD_Values<OTG_FS_GLOBAL::FS_GNPTXFSIZ_Device, 16, 16, ReadWriteMode, OTG_FS_GLOBALFS_GNPTXFSIZ_DeviceBase> ;
  } ;

  template<typename... T> 
  using FS_GNPTXFSIZ_DevicePack  = Register<0x50000028, 32, ReadWriteMode, OTG_FS_GLOBALFS_GNPTXFSIZ_DeviceBase, T...> ;

  struct OTG_FS_GLOBALFS_GNPTXFSIZ_HostBase {} ;

  struct FS_GNPTXFSIZ_Host : public RegisterBase<0x50000028, 32, ReadWriteMode>
  {
    using NPTXFSA = OTG_FS_GLOBAL_FS_GNPTXFSIZ_Host_NPTXFSA_Values<OTG_FS_GLOBAL::FS_GNPTXFSIZ_Host, 0, 16, ReadWriteMode, OTG_FS_GLOBALFS_GNPTXFSIZ_HostBase> ;
    using NPTXFD = OTG_FS_GLOBAL_FS_GNPTXFSIZ_Host_NPTXFD_Values<OTG_FS_GLOBAL::FS_GNPTXFSIZ_Host, 16, 16, ReadWriteMode, OTG_FS_GLOBALFS_GNPTXFSIZ_HostBase> ;
  } ;

  template<typename... T> 
  using FS_GNPTXFSIZ_HostPack  = Register<0x50000028, 32, ReadWriteMode, OTG_FS_GLOBALFS_GNPTXFSIZ_HostBase, T...> ;

  struct OTG_FS_GLOBALFS_GNPTXSTSBase {} ;

  struct FS_GNPTXSTS : public RegisterBase<0x5000002C, 32, ReadMode>
  {
    using NPTXFSAV = OTG_FS_GLOBAL_FS_GNPTXSTS_NPTXFSAV_Values<OTG_FS_GLOBAL::FS_GNPTXSTS, 0, 16, ReadMode, OTG_FS_GLOBALFS_GNPTXSTSBase> ;
    using NPTQXSAV = OTG_FS_GLOBAL_FS_GNPTXSTS_NPTQXSAV_Values<OTG_FS_GLOBAL::FS_GNPTXSTS, 16, 8, ReadMode, OTG_FS_GLOBALFS_GNPTXSTSBase> ;
    using NPTXQTOP = OTG_FS_GLOBAL_FS_GNPTXSTS_NPTXQTOP_Values<OTG_FS_GLOBAL::FS_GNPTXSTS, 24, 7, ReadMode, OTG_FS_GLOBALFS_GNPTXSTSBase> ;
  } ;

  template<typename... T> 
  using FS_GNPTXSTSPack  = Register<0x5000002C, 32, ReadMode, OTG_FS_GLOBALFS_GNPTXSTSBase, T...> ;

  struct OTG_FS_GLOBALFS_GCCFGBase {} ;

  struct FS_GCCFG : public RegisterBase<0x50000038, 32, ReadWriteMode>
  {
    using PWRDWN = OTG_FS_GLOBAL_FS_GCCFG_PWRDWN_Values<OTG_FS_GLOBAL::FS_GCCFG, 16, 1, ReadWriteMode, OTG_FS_GLOBALFS_GCCFGBase> ;
    using VBUSASEN = OTG_FS_GLOBAL_FS_GCCFG_VBUSASEN_Values<OTG_FS_GLOBAL::FS_GCCFG, 18, 1, ReadWriteMode, OTG_FS_GLOBALFS_GCCFGBase> ;
    using VBUSBSEN = OTG_FS_GLOBAL_FS_GCCFG_VBUSBSEN_Values<OTG_FS_GLOBAL::FS_GCCFG, 19, 1, ReadWriteMode, OTG_FS_GLOBALFS_GCCFGBase> ;
    using SOFOUTEN = OTG_FS_GLOBAL_FS_GCCFG_SOFOUTEN_Values<OTG_FS_GLOBAL::FS_GCCFG, 20, 1, ReadWriteMode, OTG_FS_GLOBALFS_GCCFGBase> ;
  } ;

  template<typename... T> 
  using FS_GCCFGPack  = Register<0x50000038, 32, ReadWriteMode, OTG_FS_GLOBALFS_GCCFGBase, T...> ;

  struct OTG_FS_GLOBALFS_CIDBase {} ;

  struct FS_CID : public RegisterBase<0x5000003C, 32, ReadWriteMode>
  {
    using PRODUCT_ID = OTG_FS_GLOBAL_FS_CID_PRODUCT_ID_Values<OTG_FS_GLOBAL::FS_CID, 0, 32, ReadWriteMode, OTG_FS_GLOBALFS_CIDBase> ;
  } ;

  template<typename... T> 
  using FS_CIDPack  = Register<0x5000003C, 32, ReadWriteMode, OTG_FS_GLOBALFS_CIDBase, T...> ;

  struct OTG_FS_GLOBALFS_HPTXFSIZBase {} ;

  struct FS_HPTXFSIZ : public RegisterBase<0x50000100, 32, ReadWriteMode>
  {
    using PTXSA = OTG_FS_GLOBAL_FS_HPTXFSIZ_PTXSA_Values<OTG_FS_GLOBAL::FS_HPTXFSIZ, 0, 16, ReadWriteMode, OTG_FS_GLOBALFS_HPTXFSIZBase> ;
    using PTXFSIZ = OTG_FS_GLOBAL_FS_HPTXFSIZ_PTXFSIZ_Values<OTG_FS_GLOBAL::FS_HPTXFSIZ, 16, 16, ReadWriteMode, OTG_FS_GLOBALFS_HPTXFSIZBase> ;
  } ;

  template<typename... T> 
  using FS_HPTXFSIZPack  = Register<0x50000100, 32, ReadWriteMode, OTG_FS_GLOBALFS_HPTXFSIZBase, T...> ;

  struct OTG_FS_GLOBALFS_DIEPTXF1Base {} ;

  struct FS_DIEPTXF1 : public RegisterBase<0x50000104, 32, ReadWriteMode>
  {
    using INEPTXSA = OTG_FS_GLOBAL_FS_DIEPTXF_INEPTXSA_Values<OTG_FS_GLOBAL::FS_DIEPTXF1, 0, 16, ReadWriteMode, OTG_FS_GLOBALFS_DIEPTXF1Base> ;
    using INEPTXFD = OTG_FS_GLOBAL_FS_DIEPTXF_INEPTXFD_Values<OTG_FS_GLOBAL::FS_DIEPTXF1, 16, 16, ReadWriteMode, OTG_FS_GLOBALFS_DIEPTXF1Base> ;
  } ;

  template<typename... T> 
  using FS_DIEPTXF1Pack  = Register<0x50000104, 32, ReadWriteMode, OTG_FS_GLOBALFS_DIEPTXF1Base, T...> ;

  struct OTG_FS_GLOBALFS_DIEPTXF2Base {} ;

  struct FS_DIEPTXF2 : public RegisterBase<0x50000108, 32, ReadWriteMode>
  {
    using INEPTXSA = OTG_FS_GLOBAL_FS_DIEPTXF_INEPTXSA_Values<OTG_FS_GLOBAL::FS_DIEPTXF2, 0, 16, ReadWriteMode, OTG_FS_GLOBALFS_DIEPTXF2Base> ;
    using INEPTXFD = OTG_FS_GLOBAL_FS_DIEPTXF_INEPTXFD_Values<OTG_FS_GLOBAL::FS_DIEPTXF2, 16, 16, ReadWriteMode, OTG_FS_GLOBALFS_DIEPTXF2Base> ;
  } ;

  template<typename... T> 
  using FS_DIEPTXF2Pack  = Register<0x50000108, 32, ReadWriteMode, OTG_FS_GLOBALFS_DIEPTXF2Base, T...> ;

  struct OTG_FS_GLOBALFS_DIEPTXF3Base {} ;

  struct FS_DIEPTXF3 : public RegisterBase<0x5000010C, 32, ReadWriteMode>
  {
    using INEPTXSA = OTG_FS_GLOBAL_FS_DIEPTXF_INEPTXSA_Values<OTG_FS_GLOBAL::FS_DIEPTXF3, 0, 16, ReadWriteMode, OTG_FS_GLOBALFS_DIEPTXF3Base> ;
    using INEPTXFD = OTG_FS_GLOBAL_FS_DIEPTXF_INEPTXFD_Values<OTG_FS_GLOBAL::FS_DIEPTXF3, 16, 16, ReadWriteMode, OTG_FS_GLOBALFS_DIEPTXF3Base> ;
  } ;

  template<typename... T> 
  using FS_DIEPTXF3Pack  = Register<0x5000010C, 32, ReadWriteMode, OTG_FS_GLOBALFS_DIEPTXF3Base, T...> ;

} ;

#endif //#if !defined(OTGFSGLOBALREGISTERS_HPP)
