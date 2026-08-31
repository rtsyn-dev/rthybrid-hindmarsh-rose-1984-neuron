#include <stdlib.h>
#include "rtsyn/internal/rthybrid_hindmarsh_rose_1984_neuron.h"
#include "rtsyn/internal/rthybrid_hindmarsh_rose_1984_neuron/destroy.h"
void RTSYN_ABI_CALL rtsyn_rthybrid_hindmarsh_rose_1984_neuron_destroy(void *instance)
{
    free((rtsyn_rthybrid_hindmarsh_rose_1984_neuron_instance_t *)instance);
}
