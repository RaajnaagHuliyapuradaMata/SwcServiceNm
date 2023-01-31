#pragma once
/******************************************************************************/
/* File   : ServiceNm_Version.hpp                                             */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

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
/* EOF                                                                        */
/******************************************************************************/

