#pragma once
/******************************************************************************/
/* File   : ServiceNm_core.hpp                                                       */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_ServiceNm.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define NM_CORE_FUNCTIONALITIES                                                \
              FUNC(void, NM_CODE) PassiveServiceStartUp                  (void);      \
              FUNC(void, NM_CODE) NetworkRequest                  (void);      \
              FUNC(void, NM_CODE) NetworkRelease                  (void);      \
              FUNC(void, NM_CODE) DisableServiceCommunication            (void);      \
              FUNC(void, NM_CODE) EnableServiceCommunication             (void);      \
              FUNC(void, NM_CODE) GetPduData                      (void);      \
              FUNC(void, NM_CODE) GetUserData                     (void);      \
              FUNC(void, NM_CODE) SetUserData                     (void);      \
              FUNC(void, NM_CODE) RepeateMessageRequest           (void);      \
              FUNC(void, NM_CODE) GetNodeIdentifier               (void);      \
              FUNC(void, NM_CODE) GetLocalNodeIdentifier          (void);      \
              FUNC(void, NM_CODE) CheckRemoteSleepIndication      (void);      \
              FUNC(void, NM_CODE) GetState                        (void);      \
              FUNC(void, NM_CODE) CbNetworkStartIndication        (void);      \
              FUNC(void, NM_CODE) CbNetworkMode                   (void);      \
              FUNC(void, NM_CODE) CbBusSleepMode                  (void);      \
              FUNC(void, NM_CODE) CbPrepareBusSleepMode           (void);      \
              FUNC(void, NM_CODE) CbRemoteSleepIndication         (void);      \
              FUNC(void, NM_CODE) CbRemoteSleepMcalCancellation       (void);      \
              FUNC(void, NM_CODE) CbSynchronizationPoint          (void);      \
              FUNC(void, NM_CODE) CbCoordReadyToSleepIndication   (void);      \
              FUNC(void, NM_CODE) CbCoordReadyToSleepMcalCancellation (void);      \
              FUNC(void, NM_CODE) CbServicePduRxIndication               (void);      \
              FUNC(void, NM_CODE) CbStateChangeNotification       (void);      \
              FUNC(void, NM_CODE) CbRepeateMessageIndication      (void);      \
              FUNC(void, NM_CODE) CbTxTimeoutException            (void);      \
              FUNC(void, NM_CODE) CbCarWakeUpIndication           (void);      \
              FUNC(void, NM_CODE) CalloutCarWakeUp                (void);      \

#define NM_CORE_FUNCTIONALITIES_VIRTUAL                                        \
      virtual FUNC(void, NM_CODE) PassiveServiceStartUp                  (void) = 0;  \
      virtual FUNC(void, NM_CODE) NetworkRequest                  (void) = 0;  \
      virtual FUNC(void, NM_CODE) NetworkRelease                  (void) = 0;  \
      virtual FUNC(void, NM_CODE) DisableServiceCommunication            (void) = 0;  \
      virtual FUNC(void, NM_CODE) EnableServiceCommunication             (void) = 0;  \
      virtual FUNC(void, NM_CODE) GetPduData                      (void) = 0;  \
      virtual FUNC(void, NM_CODE) GetUserData                     (void) = 0;  \
      virtual FUNC(void, NM_CODE) SetUserData                     (void) = 0;  \
      virtual FUNC(void, NM_CODE) RepeateMessageRequest           (void) = 0;  \
      virtual FUNC(void, NM_CODE) GetNodeIdentifier               (void) = 0;  \
      virtual FUNC(void, NM_CODE) GetLocalNodeIdentifier          (void) = 0;  \
      virtual FUNC(void, NM_CODE) CheckRemoteSleepIndication      (void) = 0;  \
      virtual FUNC(void, NM_CODE) GetState                        (void) = 0;  \
      virtual FUNC(void, NM_CODE) CbNetworkStartIndication        (void) = 0;  \
      virtual FUNC(void, NM_CODE) CbNetworkMode                   (void) = 0;  \
      virtual FUNC(void, NM_CODE) CbBusSleepMode                  (void) = 0;  \
      virtual FUNC(void, NM_CODE) CbPrepareBusSleepMode           (void) = 0;  \
      virtual FUNC(void, NM_CODE) CbRemoteSleepIndication         (void) = 0;  \
      virtual FUNC(void, NM_CODE) CbRemoteSleepMcalCancellation       (void) = 0;  \
      virtual FUNC(void, NM_CODE) CbSynchronizationPoint          (void) = 0;  \
      virtual FUNC(void, NM_CODE) CbCoordReadyToSleepIndication   (void) = 0;  \
      virtual FUNC(void, NM_CODE) CbCoordReadyToSleepMcalCancellation (void) = 0;  \
      virtual FUNC(void, NM_CODE) CbServicePduRxIndication               (void) = 0;  \
      virtual FUNC(void, NM_CODE) CbStateChangeNotification       (void) = 0;  \
      virtual FUNC(void, NM_CODE) CbRepeateMessageIndication      (void) = 0;  \
      virtual FUNC(void, NM_CODE) CbTxTimeoutException            (void) = 0;  \
      virtual FUNC(void, NM_CODE) CbCarWakeUpIndication           (void) = 0;  \
      virtual FUNC(void, NM_CODE) CalloutCarWakeUp                (void) = 0;  \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_ServiceNm_Functionality{
   public:
      NM_CORE_FUNCTIONALITIES_VIRTUAL
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

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

