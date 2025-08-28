
#include "postgres.h"
#include "fmgr.h"
#include "funcapi.h"

PG_MODULE_MAGIC_EXT(
					.name = "mutation_testing",
					.version = PG_VERSION
);

PG_FUNCTION_INFO_V1(mutation_testing);
Datum
mutation_testing(PG_FUNCTION_ARGS)
{
    text *query = PG_GETARG_TEXT_PP(0);

    // For now just echo back the query string
    PG_RETURN_TEXT_P(query);
}