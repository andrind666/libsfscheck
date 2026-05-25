#include "authenticity_engine.h"

int AuthenticityEngine::calculate(
        bool fakeCPU,
        bool fakeRAM,
        bool fakeStorage,
        bool refurbish,
        bool rooted) {

    int score = 100;

    if (fakeCPU) score -= 30;
    if (fakeRAM) score -= 20;
    if (fakeStorage) score -= 20;
    if (refurbish) score -= 15;
    if (rooted) score -= 10;

    if (score < 0)
        score = 0;

    return score;
}
