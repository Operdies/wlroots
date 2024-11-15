#ifndef UTIL_TIME_H
#define UTIL_TIME_H

#include <stdint.h>
#include <time.h>

static const long NSEC_PER_SEC = 1000000000;

/**
 * Get the current time, in milliseconds.
 */
int64_t get_current_time_msec(void);

/**
 * Convert a timespec to milliseconds.
 */
int64_t timespec_to_msec(const struct timespec *a);

/**
 * Convert a timespec to nanoseconds.
 */
int64_t timespec_to_nsec(const struct timespec *a);

/**
 * Convert nanoseconds to a timespec.
 */
void timespec_from_nsec(struct timespec *r, int64_t nsec);

/**
 * Subtracts timespec `b` from timespec `a`, and stores the difference in `r`.
 */
void timespec_sub(struct timespec *r, const struct timespec *a,
		const struct timespec *b);

#endif
