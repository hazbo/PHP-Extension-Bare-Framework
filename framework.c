#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include "php.h"
#include "php_framework.h"

static function_entry framework_functions[] = {
    PHP_FE(test, NULL)
    {NULL, NULL, NULL}
};

zend_module_entry framework_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
    STANDARD_MODULE_HEADER,
#endif
    PHP_FRAMEWORK_EXTNAME,
    framework_functions,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
#if ZEND_MODULE_API_NO >= 20010901
    PHP_FRAMEWORK_VERSION,
#endif
    STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_FRAMEWORK
ZEND_GET_MODULE(framework)
#endif

PHP_FUNCTION(test)
{
    RETURN_STRING("Test String", 1);
}