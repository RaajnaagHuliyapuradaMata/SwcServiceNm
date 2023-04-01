/******************************************************************************/
/* File   : ServiceNm.cpp                                                     */
/*                                                                            */
/* Author : Nagaraja HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright © 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/NagarajaHuliyapuradaMata?tab=repositories               */
/*                                                                            */
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
#define SERVICENM_AR_RELEASE_VERSION_MAJOR                                     4
#define SERVICENM_AR_RELEASE_VERSION_MINOR                                     3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(SERVICENM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible SERVICENM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(SERVICENM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible SERVICENM_AR_RELEASE_VERSION_MINOR!"
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
VAR(module_ServiceNm, SERVICENM_VAR) ServiceNm;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SERVICENM_CODE) module_ServiceNm::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, SERVICENM_CONST,       SERVICENM_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICENM_CONFIG_DATA, SERVICENM_APPL_CONST) lptrCfgModule
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
         ,  SERVICENM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::DeInitFunction(
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
         ,  SERVICENM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::MainFunction(
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
         ,  SERVICENM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::PassiveServiceStartUp(
   void
){
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::NetworkRequest(
   void
){
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::NetworkRelease(
   void
){
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::DisableServiceCommunication(
   void
){
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::EnableServiceCommunication(
   void
){
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::GetPduData(
   void
){
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::GetUserData(
   void
){
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::SetUserData(
   void
){
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::RepeateMessageRequest(
   void
){
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::GetNodeIdentifier(
   void
){
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::GetLocalNodeIdentifier(
   void
){
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::CheckRemoteSleepIndication(
   void
){
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::GetState(
   void
){
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::CbNetworkStartIndication(
   void
){
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::CbNetworkMode(
   void
){
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::CbBusSleepMode(
   void
){
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::CbPrepareBusSleepMode(
   void
){
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::CbRemoteSleepIndication(
   void
){
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::CbRemoteSleepMcalCancellation(
   void
){
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::CbSynchronizationPoint(
   void
){
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::CbCoordReadyToSleepIndication(
   void
){
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::CbCoordReadyToSleepMcalCancellation(
   void
){
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::CbServicePduRxIndication(
   void
){
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::CbStateChangeNotification(
   void
){
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::CbRepeateMessageIndication(
   void
){
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::CbTxTimeoutException(
   void
){
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::CbCarWakeUpIndication(
   void
){
}

FUNC(void, SERVICENM_CODE) module_ServiceNm::CalloutCarWakeUp(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

