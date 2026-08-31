#include "rtsyn/internal/rthybrid_hindmarsh_rose_1984_neuron.h"
#include "rtsyn/internal/rthybrid_hindmarsh_rose_1984_neuron/read_state.h"
rtsyn_abi_status_t RTSYN_ABI_CALL rtsyn_rthybrid_hindmarsh_rose_1984_neuron_read_state(const void *instance, uint32_t state_index, void *out_value)
{
    const rtsyn_rthybrid_hindmarsh_rose_1984_neuron_instance_t *self = (const rtsyn_rthybrid_hindmarsh_rose_1984_neuron_instance_t *)instance;
    if (!self || !out_value) return RTSYN_ABI_STATUS_INVALID_ARGUMENT;
    switch (state_index) {

    case RTSYN_RTHYBRID_HINDMARSH_ROSE_1984_NEURON_STATE_X: *(double *)out_value = self->x; return RTSYN_ABI_STATUS_OK;
    case RTSYN_RTHYBRID_HINDMARSH_ROSE_1984_NEURON_STATE_Y: *(double *)out_value = self->y; return RTSYN_ABI_STATUS_OK;
    case RTSYN_RTHYBRID_HINDMARSH_ROSE_1984_NEURON_STATE_Z: *(double *)out_value = self->z; return RTSYN_ABI_STATUS_OK;

    default:
        return RTSYN_ABI_STATUS_INVALID_ARGUMENT;
    }
}
