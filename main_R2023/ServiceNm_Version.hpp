#pragma once
/******************************************************************************/
/* File   : ServiceNm_Version.hpp                                             */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
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

