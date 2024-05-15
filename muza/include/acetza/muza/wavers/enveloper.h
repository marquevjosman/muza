#pragma once

#include "acetza/muza/types.h"
#include "acetza/muza/wave.h"
#include "acetza/muza/wavers/waver.h"

struct WvEnveloper {
  mz_waver_t *waver;
  mz_attack_t attack;
  mz_hold_t hold;
  mz_decay_t decay;
  mz_sustain_t sustain;
  mz_release_t release;
  mz_transformer_t attack_transformer;
  mz_transformer_t decay_transformer;
  mz_transformer_t release_transformer;
};

typedef struct WvEnveloper mz_enveloper_t;

extern mz_enveloper_t mz_enveloper_default;

void mz_enveloper_build(mz_enveloper_t *enveloper, mz_waver_t *waver,
                        mz_attack_t attack, mz_hold_t hold, mz_decay_t decay,
                        mz_sustain_t sustain, mz_release_t release,
                        mz_transformer_t attack_transformer,
                        mz_transformer_t decay_transformer,
                        mz_transformer_t release_transformer);

void mz_enveloper_wave(mz_enveloper_t *enveloper, mz_wave_t *wave);

void mz_enveloper_copy(mz_enveloper_t *enveloper, mz_enveloper_t *other);
