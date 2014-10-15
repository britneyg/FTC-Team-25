task main()
{
	direction dir;
	dir=get_dir_to_beacon(void);

	while (true){
		dir=get_dir_to_beacon;

		switch (dir){
			case right:
			dir right;
			nxtDisplayTextLine(count,"right")
			break;
			}

			case Left:
			dir_left;
			nxtDisplayTextLine(count,"left")
			break;

			case Center:
			dir_center;
			nxtDisplayTextLine(count,"center")
			break;
		}
	}
