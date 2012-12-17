#ifndef PHP_HELLO_H
#define PHP_FRAMEWORK 1
#define PHP_FRAMEWORK_VERSION "1.0"
#define PHP_FRAMEWORK_EXTNAME "framework"

PHP_FUNCTION(test);

extern zend_module_entry hello_module_entry;
#define phpext_hello_ptr &hello_module_entry

#endif