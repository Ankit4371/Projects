
# [Artificial neural network](https://en.wikipedia.org/wiki/Artificial_neural_network)

An artificial neural network (ANN) is the component of artificial intelligence that is meant to simulate the functioning  
of a human brain.

Artificial Neural Networks can be best viewed as weighted directed graphs, where the nodes are formed by the artificial  
neurons and the connection between the neuron outputs and neuron inputs can be represented by the directed edges with   
weights. The Artificial Neural Network receives the input signal from the external world in the form of a pattern and   
image in the form of a vector. These inputs are then mathematically designated by the notations x(n) for every n number  
of inputs.

Each of the input is then multiplied by its corresponding weights (these weights are the details used by the artificial   
neural networks to solve a certain problem). In general terms, these weights typically represent the strength of the   
interconnection amongst neurons inside the artificial neural network. All the weighted inputs are summed up inside the   
computing unit (yet another artificial neuron).

If the weighted sum equates to zero, a bias is added to make the output non-zero or else to scale up to the system’s   
response. Bias has the weight and the input to it is always equal to 1. Here the sum of weighted inputs can be in the range  
of 0 to positive infinity. To keep the response in the limits of the desired value, a certain threshold value is benchmarked.  
And then the sum of weighted inputs is passed through the activation function.

![](https://www.tutorialspoint.com/artificial_intelligence/images/atypical_ann.jpg)

## Characteristics of Artificial Neural Network

* It is neurally implemented mathematical model
* It contains huge number of interconnected processing elements called neurons to do all operations
* Information stored in the neurons are basically the weighted linkage of neurons
* The input signals arrive at the processing elements through connections and connecting weights.
* It has the ability to learn , recall and generalize from the given data by suitable assignment and adjustment of weights.
* The collective behavior of the neurons describes its computational power, and no single neuron carries specific information .

## Input layer:
The Input layers contain those artificial neurons (termed as units) which are to receive input from the outside world. This  
is where the actual learning on the network happens, or recognition happens else it will process.

## Output layer:
The output layers contain units that respond to the information that is fed into the system and also whether it learned any task  
or not.

## Hidden layer:
The hidden layers are mentioned hidden in between input layers and the output layers. The only job of a hidden layer is to   
transform the input into something meaningful that the output layer/unit can use in some way.

**Most of the artificial neural networks are all interconnected, which means that each of the hidden layers is individually   
connected to the neurons in its input layer and also to its output layer leaving nothing to hang in the air. This makes it possible   
for a complete learning process and also learning occurs to the maximum when the weights inside the artificial neural network get   
updated after each iteration.**
