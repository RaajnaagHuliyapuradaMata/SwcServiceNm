/******************************************************************************/
/* File   : Nm.cpp                                                            */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.h"
#include "Nm_Cfg.h"
#include "infNm_EcuM.h"
#include "infNm_Dcm.h"
#include "infNm_SchM.h"

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
      FUNC(void, NM_CODE) InitFunction   (void);
      FUNC(void, NM_CODE) DeInitFunction (void);
      FUNC(void, NM_CODE) GetVersionInfo (void);
      FUNC(void, NM_CODE) MainFunction   (void);
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Nm, NM_VAR) Nm;
CONSTP2VAR(infEcuMClient, NM_VAR, NM_CONST) gptrinfEcuMClient_Nm = &Nm;
CONSTP2VAR(infDcmClient,  NM_VAR, NM_CONST) gptrinfDcmClient_Nm  = &Nm;
CONSTP2VAR(infSchMClient, NM_VAR, NM_CONST) gptrinfSchMClient_Nm = &Nm;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, NM_CODE) module_Nm::InitFunction(void){
   Nm.IsInitDone = E_OK;
}

FUNC(void, NM_CODE) module_Nm::DeInitFunction(void){
   Nm.IsInitDone = E_NOT_OK;
}

FUNC(void, NM_CODE) module_Nm::GetVersionInfo(void){
#if(STD_ON == Nm_DevErrorDetect)
//TBD: API parameter check
   Det_ReportError(
   );
#endif
}

FUNC(void, NM_CODE) module_Nm::MainFunction(void){
}

#include "Nm_Unused.h"

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

