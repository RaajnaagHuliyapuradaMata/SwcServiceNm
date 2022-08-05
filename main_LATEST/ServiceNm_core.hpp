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
#define SERVICENM_CORE_FUNCTIONALITIES                                                \
              FUNC(void, SERVICENM_CODE) PassiveServiceStartUp                  (void);      \
              FUNC(void, SERVICENM_CODE) NetworkRequest                  (void);      \
              FUNC(void, SERVICENM_CODE) NetworkRelease                  (void);      \
              FUNC(void, SERVICENM_CODE) DisableServiceCommunication            (void);      \
              FUNC(void, SERVICENM_CODE) EnableServiceCommunication             (void);      \
              FUNC(void, SERVICENM_CODE) GetPduData                      (void);      \
              FUNC(void, SERVICENM_CODE) GetUserData                     (void);      \
              FUNC(void, SERVICENM_CODE) SetUserData                     (void);      \
              FUNC(void, SERVICENM_CODE) RepeateMessageRequest           (void);      \
              FUNC(void, SERVICENM_CODE) GetNodeIdentifier               (void);      \
              FUNC(void, SERVICENM_CODE) GetLocalNodeIdentifier          (void);      \
              FUNC(void, SERVICENM_CODE) CheckRemoteSleepIndication      (void);      \
              FUNC(void, SERVICENM_CODE) GetState                        (void);      \
              FUNC(void, SERVICENM_CODE) CbNetworkStartIndication        (void);      \
              FUNC(void, SERVICENM_CODE) CbNetworkMode                   (void);      \
              FUNC(void, SERVICENM_CODE) CbBusSleepMode                  (void);      \
              FUNC(void, SERVICENM_CODE) CbPrepareBusSleepMode           (void);      \
              FUNC(void, SERVICENM_CODE) CbRemoteSleepIndication         (void);      \
              FUNC(void, SERVICENM_CODE) CbRemoteSleepMcalCancellation       (void);      \
              FUNC(void, SERVICENM_CODE) CbSynchronizationPoint          (void);      \
              FUNC(void, SERVICENM_CODE) CbCoordReadyToSleepIndication   (void);      \
              FUNC(void, SERVICENM_CODE) CbCoordReadyToSleepMcalCancellation (void);      \
              FUNC(void, SERVICENM_CODE) CbServicePduRxIndication               (void);      \
              FUNC(void, SERVICENM_CODE) CbStateChangeNotification       (void);      \
              FUNC(void, SERVICENM_CODE) CbRepeateMessageIndication      (void);      \
              FUNC(void, SERVICENM_CODE) CbTxTimeoutException            (void);      \
              FUNC(void, SERVICENM_CODE) CbCarWakeUpIndication           (void);      \
              FUNC(void, SERVICENM_CODE) CalloutCarWakeUp                (void);      \

#define SERVICENM_CORE_FUNCTIONALITIES_VIRTUAL                                        \
      virtual FUNC(void, SERVICENM_CODE) PassiveServiceStartUp                  (void) = 0;  \
      virtual FUNC(void, SERVICENM_CODE) NetworkRequest                  (void) = 0;  \
      virtual FUNC(void, SERVICENM_CODE) NetworkRelease                  (void) = 0;  \
      virtual FUNC(void, SERVICENM_CODE) DisableServiceCommunication            (void) = 0;  \
      virtual FUNC(void, SERVICENM_CODE) EnableServiceCommunication             (void) = 0;  \
      virtual FUNC(void, SERVICENM_CODE) GetPduData                      (void) = 0;  \
      virtual FUNC(void, SERVICENM_CODE) GetUserData                     (void) = 0;  \
      virtual FUNC(void, SERVICENM_CODE) SetUserData                     (void) = 0;  \
      virtual FUNC(void, SERVICENM_CODE) RepeateMessageRequest           (void) = 0;  \
      virtual FUNC(void, SERVICENM_CODE) GetNodeIdentifier               (void) = 0;  \
      virtual FUNC(void, SERVICENM_CODE) GetLocalNodeIdentifier          (void) = 0;  \
      virtual FUNC(void, SERVICENM_CODE) CheckRemoteSleepIndication      (void) = 0;  \
      virtual FUNC(void, SERVICENM_CODE) GetState                        (void) = 0;  \
      virtual FUNC(void, SERVICENM_CODE) CbNetworkStartIndication        (void) = 0;  \
      virtual FUNC(void, SERVICENM_CODE) CbNetworkMode                   (void) = 0;  \
      virtual FUNC(void, SERVICENM_CODE) CbBusSleepMode                  (void) = 0;  \
      virtual FUNC(void, SERVICENM_CODE) CbPrepareBusSleepMode           (void) = 0;  \
      virtual FUNC(void, SERVICENM_CODE) CbRemoteSleepIndication         (void) = 0;  \
      virtual FUNC(void, SERVICENM_CODE) CbRemoteSleepMcalCancellation       (void) = 0;  \
      virtual FUNC(void, SERVICENM_CODE) CbSynchronizationPoint          (void) = 0;  \
      virtual FUNC(void, SERVICENM_CODE) CbCoordReadyToSleepIndication   (void) = 0;  \
      virtual FUNC(void, SERVICENM_CODE) CbCoordReadyToSleepMcalCancellation (void) = 0;  \
      virtual FUNC(void, SERVICENM_CODE) CbServicePduRxIndication               (void) = 0;  \
      virtual FUNC(void, SERVICENM_CODE) CbStateChangeNotification       (void) = 0;  \
      virtual FUNC(void, SERVICENM_CODE) CbRepeateMessageIndication      (void) = 0;  \
      virtual FUNC(void, SERVICENM_CODE) CbTxTimeoutException            (void) = 0;  \
      virtual FUNC(void, SERVICENM_CODE) CbCarWakeUpIndication           (void) = 0;  \
      virtual FUNC(void, SERVICENM_CODE) CalloutCarWakeUp                (void) = 0;  \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_ServiceNm_Functionality{
   public:
      SERVICENM_CORE_FUNCTIONALITIES_VIRTUAL
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

