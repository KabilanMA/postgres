CREATE FUNCTION mutation_testing(text)
RETURNS text
AS 'MODULE_PATHNAME', 'mutation_testing'
LANGUAGE C STABLE STRICT;