using namespace std;

class bmi{
	public:
		string getCate();
		double getBMI();
		void bmi(double hei, int wei);
	private:
		double height;
		int weight;
		double BMI;
};
