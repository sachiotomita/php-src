/* 
   +----------------------------------------------------------------------+
   | PHP version 4.0                                                      |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997, 1998, 1999, 2000 The PHP Group                   |
   +----------------------------------------------------------------------+
   | This source file is subject to version 2.02 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available at through the world-wide-web at                           |
   | http://www.php.net/license/2_02.txt.                                 |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Authors: Rasmus Lerdorf <rasmus@lerdorf.on.ca>                       |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

#ifndef HTML_H
#define HTML_H

void register_html_constants(INIT_FUNC_ARGS);

PHP_FUNCTION(htmlspecialchars);
PHP_FUNCTION(htmlentities);
PHP_FUNCTION(get_html_translation_table);

PHPAPI char *php_escape_html_entities(unsigned char *old, int oldlen, int *newlen, int all);

#endif /* HTML_H */
