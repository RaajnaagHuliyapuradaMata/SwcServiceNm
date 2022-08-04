/******************************************************************************/
/* File   : ServiceNm.cpp                                                            */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "ServiceNm.hpp"
#include "infServiceNm_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define NM_AR_RELEASE_VERSION_MAJOR                                            4
#define NM_AR_RELEASE_VERSION_MINOR                                            3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(NM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible NM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(NM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible NM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_ServiceNm, NM_VAR) ServiceNm;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, NM_CODE) module_ServiceNm::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, NM_CONST,       NM_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   NM_CONFIG_DATA, NM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == ServiceNm_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstServiceNm_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == ServiceNm_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == ServiceNm_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == ServiceNm_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  NM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, NM_CODE) module_ServiceNm::DeInitFunction(
   void
){
#if(STD_ON == ServiceNm_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceNm_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == ServiceNm_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  NM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, NM_CODE) module_ServiceNm::MainFunction(
   void
){
#if(STD_ON == ServiceNm_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceNm_InitCheck)
   }
   else{
#if(STD_ON == ServiceNm_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  NM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, NM_CODE) module_ServiceNm::PassiveServiceStartUp(
   void
){
}

FUNC(void, NM_CODE) module_ServiceNm::NetworkRequest(
   void
){
}

FUNC(void, NM_CODE) module_ServiceNm::NetworkRelease(
   void
){
}

FUNC(void, NM_CODE) module_ServiceNm::DisableServiceCommunication(
   void
){
}

FUNC(void, NM_CODE) module_ServiceNm::EnableServiceCommunication(
   void
){
}

FUNC(void, NM_CODE) module_ServiceNm::GetPduData(
   void
){
}

FUNC(void, NM_CODE) module_ServiceNm::GetUserData(
   void
){
}

FUNC(void, NM_CODE) module_ServiceNm::SetUserData(
   void
){
}

FUNC(void, NM_CODE) module_ServiceNm::RepeateMessageRequest(
   void
){
}

FUNC(void, NM_CODE) module_ServiceNm::GetNodeIdentifier(
   void
){
}

FUNC(void, NM_CODE) module_ServiceNm::GetLocalNodeIdentifier(
   void
){
}

FUNC(void, NM_CODE) module_ServiceNm::CheckRemoteSleepIndication(
   void
){
}

FUNC(void, NM_CODE) module_ServiceNm::GetState(
   void
){
}

FUNC(void, NM_CODE) module_ServiceNm::CbNetworkStartIndication(
   void
){
}

FUNC(void, NM_CODE) module_ServiceNm::CbNetworkMode(
   void
){
}

FUNC(void, NM_CODE) module_ServiceNm::CbBusSleepMode(
   void
){
}

FUNC(void, NM_CODE) module_ServiceNm::CbPrepareBusSleepMode(
   void
){
}

FUNC(void, NM_CODE) module_ServiceNm::CbRemoteSleepIndication(
   void
){
}

FUNC(void, NM_CODE) module_ServiceNm::CbRemoteSleepMcalCancellation(
   void
){
}

FUNC(void, NM_CODE) module_ServiceNm::CbSynchronizationPoint(
   void
){
}

FUNC(void, NM_CODE) module_ServiceNm::CbCoordReadyToSleepIndication(
   void
){
}

FUNC(void, NM_CODE) module_ServiceNm::CbCoordReadyToSleepMcalCancellation(
   void
){
}

FUNC(void, NM_CODE) module_ServiceNm::CbServicePduRxIndication(
   void
){
}

FUNC(void, NM_CODE) module_ServiceNm::CbStateChangeNotification(
   void
){
}

FUNC(void, NM_CODE) module_ServiceNm::CbRepeateMessageIndication(
   void
){
}

FUNC(void, NM_CODE) module_ServiceNm::CbTxTimeoutException(
   void
){
}

FUNC(void, NM_CODE) module_ServiceNm::CbCarWakeUpIndication(
   void
){
}

FUNC(void, NM_CODE) module_ServiceNm::CalloutCarWakeUp(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

