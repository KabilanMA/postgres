# Copyright (c) 2022-2025, PostgreSQL Global Development Group

mutation_testing_sources = files(
  'mutation_testing.c',
)

if host_system == 'windows'
  mutation_testing_sources += rc_lib_gen.process(win32ver_rc, extra_args: [
    '--NAME', 'mutation_testing',
    '--FILEDESC', 'mutation_testing - do mutation testing on a database',])
endif

mutation_testing = shared_module('mutation_testing',
  mutation_testing_sources,
  kwargs: contrib_mod_args,
)
contrib_targets += mutation_testing

install_data(
  'mutation_testing--1.0.sql',
  'mutation_testing.control',
  kwargs: contrib_data_args,
)
