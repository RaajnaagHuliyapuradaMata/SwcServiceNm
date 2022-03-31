/******************************************************************************/
/* File   : Nm.cpp                                                            */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "infNm_EcuM.hpp"
#include "infNm_Dcm.hpp"
#include "infNm_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define NM_AR_RELEASE_MAJOR_VERSION                                            4
#define NM_AR_RELEASE_MINOR_VERSION                                            3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(NM_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible NM_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(NM_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible NM_AR_RELEASE_MINOR_VERSION!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Nm:
      public abstract_module
{
   public:
      module_Nm(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, NM_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, NM_CONFIG_DATA, NM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, NM_CODE) DeInitFunction (void);
      FUNC(void, NM_CODE) MainFunction   (void);
};

extern VAR(module_Nm, NM_VAR) Nm;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, NM_VAR, NM_CONST) gptrinfEcuMClient_Nm = &Nm;
CONSTP2VAR(infDcmClient,  NM_VAR, NM_CONST) gptrinfDcmClient_Nm  = &Nm;
CONSTP2VAR(infSchMClient, NM_VAR, NM_CONST) gptrinfSchMClient_Nm = &Nm;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
#include "CfgNm.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Nm, NM_VAR) Nm(
   {
         0x0000
      ,  0xFFFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, NM_CODE) module_Nm::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, NM_CONFIG_DATA, NM_APPL_CONST) lptrCfgModule
){
   if(E_OK == IsInitDone){
#if(STD_ON == Nm_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == Nm_DevErrorDetect)
         Det_ReportError(
         );
#endif
      }
      else{
// check lptrCfgModule for memory faults
// use PBcfg_Nm as back-up configuration
      }
      IsInitDone = E_OK;
   }
}

FUNC(void, NM_CODE) module_Nm::DeInitFunction(void){
   if(E_OK != IsInitDone){
#if(STD_ON == Nm_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
      IsInitDone = E_NOT_OK;
   }
}

FUNC(void, NM_CODE) module_Nm::MainFunction(void){
}

class class_Nm_Unused{
   public:
      FUNC(void, NM_CODE) PassiveStartUp                  (void);
      FUNC(void, NM_CODE) NetworkRequest                  (void);
      FUNC(void, NM_CODE) NetworkRelease                  (void);
      FUNC(void, NM_CODE) DisableCommunication            (void);
      FUNC(void, NM_CODE) EnableCommunication             (void);
      FUNC(void, NM_CODE) GetPduData                      (void);
      FUNC(void, NM_CODE) GetUserData                     (void);
      FUNC(void, NM_CODE) SetUserData                     (void);
      FUNC(void, NM_CODE) RepeateMessageRequest           (void);
      FUNC(void, NM_CODE) GetNodeIdentifier               (void);
      FUNC(void, NM_CODE) GetLocalNodeIdentifier          (void);
      FUNC(void, NM_CODE) CheckRemoteSleepIndication      (void);
      FUNC(void, NM_CODE) GetState                        (void);
      FUNC(void, NM_CODE) CbNetworkStartIndication        (void);
      FUNC(void, NM_CODE) CbNetworkMode                   (void);
      FUNC(void, NM_CODE) CbBusSleepMode                  (void);
      FUNC(void, NM_CODE) CbPrepareBusSleepMode           (void);
      FUNC(void, NM_CODE) CbRemoteSleepIndication         (void);
      FUNC(void, NM_CODE) CbRemoteSleepCancellation       (void);
      FUNC(void, NM_CODE) CbSynchronizationPoint          (void);
      FUNC(void, NM_CODE) CbCoordReadyToSleepIndication   (void);
      FUNC(void, NM_CODE) CbCoordReadyToSleepCancellation (void);
      FUNC(void, NM_CODE) CbPduRxIndication               (void);
      FUNC(void, NM_CODE) CbStateChangeNotification       (void);
      FUNC(void, NM_CODE) CbRepeateMessageIndication      (void);
      FUNC(void, NM_CODE) CbTxTimeoutException            (void);
      FUNC(void, NM_CODE) CbCarWakeUpIndication           (void);
      FUNC(void, NM_CODE) CalloutCarWakeUp                (void);
};

FUNC(void, NM_CODE) class_Nm_Unused::PassiveStartUp(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::NetworkRequest(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::NetworkRelease(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::DisableCommunication(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::EnableCommunication(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::GetPduData(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::GetUserData(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::SetUserData(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::RepeateMessageRequest(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::GetNodeIdentifier(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::GetLocalNodeIdentifier(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CheckRemoteSleepIndication(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::GetState(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CbNetworkStartIndication(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CbNetworkMode(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CbBusSleepMode(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CbPrepareBusSleepMode(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CbRemoteSleepIndication(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CbRemoteSleepCancellation(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CbSynchronizationPoint(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CbCoordReadyToSleepIndication(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CbCoordReadyToSleepCancellation(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CbPduRxIndication(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CbStateChangeNotification(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CbRepeateMessageIndication(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CbTxTimeoutException(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CbCarWakeUpIndication(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CalloutCarWakeUp(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

