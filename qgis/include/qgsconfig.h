
// QGSCONFIG.H

#ifndef QGSCONFIG_H
#define QGSCONFIG_H

// Version must be specified according to
// <int>.<int>.<int>-<any text>.
// or else upgrading old project file will not work
// reliably.
#define VERSION "2.6.1-Brighton"

//used in vim src/core/qgis.cpp
//The way below should work but it resolves to a number like 0110 which the compiler treats as octal I think
//because debuggin it out shows the decimal number 72 which results in incorrect version status.
//As a short term fix I (Tim) am defining the version in top level cmake. It would be good to 
//reinstate this more generic approach below at some point though
//#define VERSION_INT 261
#define VERSION_INT 20601
#define ABISYM(x) x ## 20601
//used in main.cpp and anywhere else where the release name is needed
#define RELEASE_NAME "Brighton"

#define QGIS_PLUGIN_SUBDIR "plugins"
#define QGIS_DATA_SUBDIR "."
#define QGIS_LIBEXEC_SUBDIR "."
#define QGIS_LIB_SUBDIR "lib"
#define CMAKE_INSTALL_PREFIX "C:/Program Files/qgis2.6.1"
#define CMAKE_SOURCE_DIR "C:/Goshawk"

#define QSCINTILLA_VERSION_STR "2.6.2"

#if defined( __APPLE__ )
//used by Mac to find system or bundle resources relative to amount of bundling
#define QGIS_MACAPP_BUNDLE 
#endif

#define QT_PLUGINS_DIR "C:/Qt/4.8.0/plugins"
#define OSG_PLUGINS_PATH ""

/* #undef USING_NMAKE */

#define HAVE_POSTGRESQL

#define HAVE_SPATIALITE

#define HAVE_MSSQL

#define HAVE_ORACLE

/* #undef HAVE_PYTHON */

/* #undef HAVE_TOUCH */

/* #undef HAVE_OSGEARTHQT */

/* #undef MAPSERVER_SKIP_ECW */

#endif

