# contrib/mutation_testing/Makefile
MODULES = mutation_testing

EXTENSION = mutation_testing
DATA = mutation_testing--1.0.sql
PGFILEDESC = "mutation_testing - do mutation testing on a database"

REGRESS = mutation_testing

LDFLAGS_SL += $(filter -lm, $(LIBS))

ifdef USE_PGXS
PG_CONFIG = pg_config
PGXS := $(shell $(PG_CONFIG) --pgxs)
include $(PGXS)
else
subdir = contrib/mutation_testing
top_builddir = ../..
include $(top_builddir)/src/Makefile.global
include $(top_srcdir)/contrib/contrib-global.mk
endif
