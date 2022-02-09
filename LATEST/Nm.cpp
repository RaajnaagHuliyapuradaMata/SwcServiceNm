/*****************************************************/
/* File   : Nm.cpp                                   */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Nm.h"

#include "Nm_EcuM.h"
#include "Nm_SchM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
interface_Nm_EcuM_Init Nm_EcuM_Init;
interface_Nm_SchM_Main Nm_SchM_Main;
class_Nm Nm;

interface_EcuM_Init_Client *EcuM_Init_Client_ptr_Nm = &Nm_EcuM_Init;
interface_SchM_Main_Client *SchM_Main_Client_ptr_Nm = &Nm_SchM_Main;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, NM_CODE) interface_Nm_EcuM_Init::InitFunction(void){
}

FUNC(void, NM_CODE) interface_Nm_SchM_Main::MainFunction(void){
}

FUNC(void, NM_CODE) class_Nm::PassiveStartUp(void){
}

FUNC(void, NM_CODE) class_Nm::NetworkRequest(void){
}

FUNC(void, NM_CODE) class_Nm::NetworkRelease(void){
}

FUNC(void, NM_CODE) class_Nm::DisableCommunication(void){
}

FUNC(void, NM_CODE) class_Nm::EnableCommunication(void){
}

FUNC(void, NM_CODE) class_Nm::GetPduData(void){
}

FUNC(void, NM_CODE) class_Nm::GetUserData(void){
}

FUNC(void, NM_CODE) class_Nm::SetUserData(void){
}

FUNC(void, NM_CODE) class_Nm::RepeateMessageRequest(void){
}

FUNC(void, NM_CODE) class_Nm::GetNodeIdentifier(void){
}

FUNC(void, NM_CODE) class_Nm::GetLocalNodeIdentifier(void){
}

FUNC(void, NM_CODE) class_Nm::CheckRemoteSleepIndication(void){
}

FUNC(void, NM_CODE) class_Nm::GetState(void){
}

FUNC(void, NM_CODE) class_Nm::GetVersionInfo(void){
}

FUNC(void, NM_CODE) class_Nm::CbNetworkStartIndication(void){
}

FUNC(void, NM_CODE) class_Nm::CbNetworkMode(void){
}

FUNC(void, NM_CODE) class_Nm::CbBusSleepMode(void){
}

FUNC(void, NM_CODE) class_Nm::CbPrepareBusSleepMode(void){
}

FUNC(void, NM_CODE) class_Nm::CbRemoteSleepIndication(void){
}

FUNC(void, NM_CODE) class_Nm::CbRemoteSleepCancellation(void){
}

FUNC(void, NM_CODE) class_Nm::CbSynchronizationPoint(void){
}

FUNC(void, NM_CODE) class_Nm::CbCoordReadyToSleepIndication(void){
}

FUNC(void, NM_CODE) class_Nm::CbCoordReadyToSleepCancellation(void){
}

FUNC(void, NM_CODE) class_Nm::CbPduRxIndication(void){
}

FUNC(void, NM_CODE) class_Nm::CbStateChangeNotification(void){
}

FUNC(void, NM_CODE) class_Nm::CbRepeateMessageIndication(void){
}

FUNC(void, NM_CODE) class_Nm::CbTxTimeoutException(void){
}

FUNC(void, NM_CODE) class_Nm::CbCarWakeUpIndication(void){
}

FUNC(void, NM_CODE) class_Nm::CalloutCarWakeUp(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

