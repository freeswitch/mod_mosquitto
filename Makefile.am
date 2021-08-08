-include $(top_srcdir)/build/modmake.rulesam
AUTOMAKE_OPTIONS = foreign subdir-objects
MODNAME=mod_mosquitto

LIBS := $(if $(switch_builddir),$(switch_builddir)/libfreeswitch.la,)

if HAVE_MOSQUITTO

mod_LTLIBRARIES = mod_mosquitto.la
mod_mosquitto_la_SOURCES  = mosquitto_mosq.c mosquitto_events.c mosquitto_utils.c mosquitto_config.c mosquitto_cli.c mod_mosquitto.c
mod_mosquitto_la_CFLAGS   = $(AM_CFLAGS) $(FREESWITCH_CFLAGS) $(OPENSSL_CFLAGS) $(MOSQUITTO_CFLAGS)
mod_mosquitto_la_LDFLAGS  = -avoid-version -module -no-undefined -shared $(FREESWITCH_LIBS) $(OPENSSL_LIBS) $(MOSQUITTO_LIBS)
mod_mosquitto_la_LIBADD   = $(LIBS)

noinst_PROGRAMS = test/test_mod_mosquitto
test_test_mod_mosquitto_CFLAGS = $(AM_CFLAGS) $(FREESWITCH_CFLAGS) -DSWITCH_TEST_BASE_DIR_FOR_CONF=\"${abs_builddir}/test\" -DSWITCH_TEST_BASE_DIR_OVERRIDE=\"${abs_builddir}/test\"
test_test_mod_mosquitto_LDFLAGS = -avoid-version -no-undefined $(FREESWITCH_LIBS)

TESTS = $(noinst_PROGRAMS)

else
install: error
all: error
error:
    $(error You must install libmosquitto1 and libmosquitto-dev to build this module)
endif