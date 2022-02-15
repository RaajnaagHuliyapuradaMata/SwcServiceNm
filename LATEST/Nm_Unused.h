#pragma once
/*****************************************************/
/* File   : Nm_Unused.h                              */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Std_Types.h"
#include "Compiler_Cfg_Nm.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class class_Nm_Unused{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
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
      FUNC(void, NM_CODE) GetVersionInfo                  (void);
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

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
//extern class_Nm Nm;

/*****************************************************/
/* EOF                                               */
/*****************************************************/

