/*****************************************************/
/* File   : Nm.cpp                                   */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "infNm_EcuM.h"
#include "infNm_Dcm.h"
#include "infNm_SchM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_Nm:
      public abstract_module
{
   public:
      FUNC(void, NM_CODE) InitFunction   (void);
      FUNC(void, NM_CODE) DeInitFunction (void);
      FUNC(void, NM_CODE) GetVersionInfo (void);
      FUNC(void, NM_CODE) MainFunction   (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_Nm      Nm;
infEcuMClient* gptrinfEcuMClient_Nm = &Nm;
infDcmClient*  gptrinfDcmClient_Nm  = &Nm;
infSchMClient* gptrinfSchMClient_Nm = &Nm;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, NM_CODE) module_Nm::InitFunction(void){
}

FUNC(void, NM_CODE) module_Nm::DeInitFunction(void){
}

FUNC(void, NM_CODE) module_Nm::GetVersionInfo(void){
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

/*****************************************************/
/* EOF                                               */
/*****************************************************/

