#ifndef _LOGGING_H
#define _LOGGING_H

#define DEBUG
#include <osmocom/core/logging.h>

enum {
	DRSL,
	DRR,
	DPLMN,
	DCS,
	DNB,
	DMM,
	DCC,
	DSS,
	DSMS,
	DMNCC,
	DMEAS,
	DPAG,
	DL1C,
	DSAP,
	DSUM,
	DSIM,
	DGPS,
<<<<<<< HEAD
	DMOB,
	DPRIM,
	DLUA,
=======
	DTRX,
	DAPP,
>>>>>>> sylvain/testing
};

extern const struct log_info log_info;

#endif /* _LOGGING_H */
