// neural_net_tutorial.cpp

class Net
{
	public:
		Net(topology);
		void feedForward(inputVals);
		void backProp(targetVals);
		void getResults(resultvals) const;
	private:

};

int main()
{
	Net myNet(topology);
	
	myNet.feedForward(inputVals);
	myNet.backProp(targetVals);
	myNet.getResults(resultsVals);

}
