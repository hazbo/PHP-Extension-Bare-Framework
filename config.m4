PHP_ARG_ENABLE(framework, whether to enable framework support,
[ --enable-framework   Enable Framework support])

if test "$PHP_FRAMEWORK" = "yes"; then
	AC_DEFINE(HAVE_FRAMEWORK, 1, [Whether you have Framework])
	PHP_NEW_EXTENSION(framework, framework.c, $ext_shared)
fi