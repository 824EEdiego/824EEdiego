class Engineer{
	private:
		int HP;
		int Defense;
		int Energy;//bullet
		int Xcoord;//Xcoordinate
		int Ycoord;
		int Velocity;//optional
		Weapon SelfArmory[2];//contain two weapon
		
		//血條 
	
//		above all have maximum limit
//		int Speed;

	public:
		Engineer(int HP, int Defense, int Energy, int Xcoordinate
					int Ycoordinate ,int Velocity );
		
		void get_HP();//read HP and display on window
		void get_Defense();//read Defense and display on window
		void get_Energy();
		
		void set_HP();//using when attacked by monsters or get 補包 
		void set_Defense(); //using when attacked by monsters or get 補包 
		
		void WeaponGroundChanging();//change weapon with that on the ground
		void WeaponChoosing();//choose which weapon we use	
		
		void InterateWithMoster(Class_name of monster);	//包含怪物和角色攻擊頻率 、 
		
};


class Weapon{
	friend void EnergyConsume(EE_freshman&);//every weapon has different EnergyConsume  感覺會用到friend 
	
	private:
		int Attack;
		int Durability;
		int Xcoord;
		int Ycoord;
		
		
	public:
//		AttackRange()
		double FireFrequence();
		void get_Attack();//display attack
		void get_Durability();//display Durability
		void set_Durability();
		
		
};


