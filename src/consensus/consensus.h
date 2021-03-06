// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2018 The Bitcoin Core developers
// Copyright (c) 2019 Megacoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef MEGACOIN_CONSENSUS_CONSENSUS_H
#define MEGACOIN_CONSENSUS_CONSENSUS_H

#include <stdlib.h>
#include <stdint.h>

/** The maximum allowed size for a serialized block, in bytes (only for buffer size limits) */
static const unsigned int MAX_BLOCK_SERIALIZED_SIZE = 20000000; // Megacoin
/** The maximum allowed weight for a block, see BIP 141 (network rule) */
static const unsigned int MAX_BLOCK_WEIGHT = 20000000; // Megacoin
/** The maximum allowed number of signature check operations in a block (network rule) */
static const int64_t MAX_BLOCK_SIGOPS_COST = 500000; // Megacoin
/** Coinbase transaction outputs can only be spent after this number of new blocks (network rule) */
static const int COINBASE_MATURITY = 100;
static const int COINBASE_MATURITY_2 = 4032; // One Week
/**Algoswitch Megacoin */
static const unsigned int HASH_FORK_TIME_1 = 1588842000; //05/07/2020 @ 9:00am (UTC)
static const unsigned int HASH_FORK_TIME_2 = 1591131463;
static const unsigned int SKIPP_NBITS = 1257000;
static const unsigned int UNEXPECTED_WITNESS = 1500000;
static const unsigned int FORK_MATURITY_2 = 1260800; //Not used

static const int WITNESS_SCALE_FACTOR = 4;

static const size_t MIN_TRANSACTION_WEIGHT = WITNESS_SCALE_FACTOR * 60; // 60 is the lower bound for the size of a valid serialized CTransaction
static const size_t MIN_SERIALIZABLE_TRANSACTION_WEIGHT = WITNESS_SCALE_FACTOR * 10; // 10 is the lower bound for the size of a serialized CTransaction

/** Flags for nSequence and nLockTime locks */
/** Interpret sequence numbers as relative lock-time constraints. */
static constexpr unsigned int LOCKTIME_VERIFY_SEQUENCE = (1 << 0);
/** Use GetMedianTimePast() instead of nTime for end point timestamp. */
static constexpr unsigned int LOCKTIME_MEDIAN_TIME_PAST = (1 << 1);

#endif // MEGACOIN_CONSENSUS_CONSENSUS_H
