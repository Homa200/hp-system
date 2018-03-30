    LifeBar lifeBarPlayer;
    if(hp == 50)
        {
            lifeBarPlayer.update(50);
            lifeBarPlayer.draw(window);
        }

            if(hp == 60)
        {
            lifeBarPlayer.update(60);
            lifeBarPlayer.draw(window);
        }

            if(hp == 70)
        {
            lifeBarPlayer.update(70);
            lifeBarPlayer.draw(window);
        }

            if(hp == 80)
        {
            lifeBarPlayer.update(80);
            lifeBarPlayer.draw(window);
        }

            if(hp >= 100)
        {
            lifeBarPlayer.update(100);
            lifeBarPlayer.draw(window);
        }

            if(hp == 40)
        {
            lifeBarPlayer.update(40);
            lifeBarPlayer.draw(window);
        }

            if(hp == 30)
        {
            lifeBarPlayer.update(30);
            lifeBarPlayer.draw(window);
        }
            if(hp <= 20)
        {
            lifeBarPlayer.update(10);
            lifeBarPlayer.draw(window);
        }
            if(hp <= 0)
        {
            window.close();
        }

		window.display();
