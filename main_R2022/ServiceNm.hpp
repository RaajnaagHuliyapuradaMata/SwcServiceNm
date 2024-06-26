#pragma once
/******************************************************************************/
/* File   : ServiceNm.hpp                                                            */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstServiceNm.hpp"
#include "CfgServiceNm.hpp"
#include "ServiceNm_core.hpp"
#include "infServiceNm_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceNm:
      INTERFACES_EXPORTED_SERVICENM
      public abstract_module
   ,  public class_ServiceNm_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstServiceNm_Type* lptrConst = (ConstServiceNm_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICENM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICENM_CONST,       SERVICENM_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICENM_CONFIG_DATA, SERVICENM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICENM_CODE) DeInitFunction (void);
      FUNC(void, SERVICENM_CODE) MainFunction   (void);
      SERVICENM_CORE_FUNCTIONALITIES
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
extern VAR(module_ServiceNm, SERVICENM_VAR) ServiceNm;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

