/**********************************************************************

  enc/encdb.c -

  $Author$
  created at: Mon Apr  7 15:51:31 2008

  Copyright (C) 2008 Yukihiro Matsumoto

**********************************************************************/

int rb_encdb_replicate(const char *alias, const char *orig);
int rb_encdb_alias(const char *alias, const char *orig);
int rb_encdb_dummy(const char *name);
void rb_encdb_declare(const char *name);
#define ENC_REPLICATE(name, orig) rb_encdb_replicate(name, orig)
#define ENC_ALIAS(name, orig) rb_encdb_alias(name, orig)
#define ENC_DUMMY(name) rb_encdb_dummy(name)
#define ENC_DEFINE(name) rb_encdb_declare(name)

void
Init_encdb(void)
{
#include "encdb.h"
}