#ifndef __NEURON_CORE_H__
#define __NEURON_CORE_H__

#include "ProcessingElement.h"

class NeuronCore : public ProcessingElement {
public:
    NeuronCore(sc_module_name name) : ProcessingElement(name) {
        // TODO: add constructor
    }

    // Override canShot() method
    virtual bool canShot(Packet& packet) override;
};

#endif // __NEURON_CORE_H__
