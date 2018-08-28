#ifndef BLAKE512_H
#define BLAKE512_H

#include "miner.h"

extern int blake512_test(unsigned char *pdata, const unsigned char *ptarget, uint32_t nonce);
extern void precalc_hash_blake512(dev_blk_ctx *blk, uint32_t *state, uint32_t *pdata);
extern void blake512_regenhash(struct work *work);

#endif /* BLAKE512_H */