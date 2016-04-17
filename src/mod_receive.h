/*
* Filter that receives the response and returns, to be used from sub-requests
* Lucian Plesea
* (C) 2015
*/
#if !defined(RECEIVE_H)
#include <httpd.h>
#include <http_config.h>
#include <http_request.h>
#include "receive_context.h"

#if defined(WIN32)
#define CMD_FUNC (cmd_func)
#endif

#if defined( APLOG_USE_MODULE )
APLOG_USE_MODULE(receive);
#endif

// the only exported symbol
extern module AP_MODULE_DECLARE_DATA retile_module;

#endif