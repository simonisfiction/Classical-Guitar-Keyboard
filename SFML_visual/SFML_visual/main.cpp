#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <iomanip>

int main()
{
	// Create the main window
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window", sf::Style::Default);
	
	

	sf::Music music;
	if (!music.openFromFile("Music/Triumph.ogg"))
		return -1;
//	music.play();

	//////////////// 
	// A
	sf::SoundBuffer a2note;
	if (!a2note.loadFromFile("SoundEffects/a2sound.ogg"))
		return -1;

	sf::Sound a2noteSound;
	a2noteSound.setBuffer(a2note);

	//A2 sharp
	sf::SoundBuffer as2note;
	if (!as2note.loadFromFile("SoundEffects/as2sound.ogg"))
		return -1;

	sf::Sound as2noteSound;
	as2noteSound.setBuffer(as2note);

	//B2
	sf::SoundBuffer b2note;
	if (!b2note.loadFromFile("SoundEffects/b2sound.ogg"))
		return -1;

	sf::Sound b2noteSound;
	b2noteSound.setBuffer(b2note);
	
	//C2
	sf::SoundBuffer c2note;
	if (!c2note.loadFromFile("SoundEffects/c2sound.ogg"))
		return -1;

	sf::Sound c2noteSound;
	c2noteSound.setBuffer(c2note);

	//C2 sharp
	sf::SoundBuffer cs2note;
	if (!cs2note.loadFromFile("SoundEffects/cs2sound.ogg"))
		return -1;

	sf::Sound cs2noteSound;
	cs2noteSound.setBuffer(cs2note);

	//D2
	sf::SoundBuffer d2note;
	if (!d2note.loadFromFile("SoundEffects/d2sound.ogg"))
		return -1;

	sf::Sound d2noteSound;
	d2noteSound.setBuffer(d2note);

	//D2 Sharp
	sf::SoundBuffer ds2note;
	if (!ds2note.loadFromFile("SoundEffects/ds2sound.ogg"))
		return -1;

	sf::Sound ds2noteSound;
	ds2noteSound.setBuffer(ds2note);

	//E2
	sf::SoundBuffer e2note;
	if (!e2note.loadFromFile("SoundEffects/e2sound.ogg"))
		return -1;

	sf::Sound e2noteSound;
	e2noteSound.setBuffer(e2note);

	//F2
	sf::SoundBuffer f2note;
	if (!f2note.loadFromFile("SoundEffects/f2sound.ogg"))
		return -1;

	sf::Sound f2noteSound;
	f2noteSound.setBuffer(f2note);

	//F2 Sharp
	sf::SoundBuffer fs2note;
	if (!fs2note.loadFromFile("SoundEffects/fs2sound.ogg"))
		return -1;

	sf::Sound fs2noteSound;
	fs2noteSound.setBuffer(fs2note);

	//G2
	sf::SoundBuffer g2note;
	if (!g2note.loadFromFile("SoundEffects/g2sound.ogg"))
		return -1;

	sf::Sound g2noteSound;
	g2noteSound.setBuffer(g2note);

	//G2 Sharp
	sf::SoundBuffer gs2note;
	if (!gs2note.loadFromFile("SoundEffects/gs2sound.ogg"))
		return -1;

	sf::Sound gs2noteSound;
	gs2noteSound.setBuffer(gs2note);


	// A3
	sf::SoundBuffer a3note;
	if (!a3note.loadFromFile("SoundEffects/a3sound.ogg"))
		return -1;

	sf::Sound a3noteSound;
	a3noteSound.setBuffer(a3note);

	//A3sharp
	sf::SoundBuffer as3note;
	if (!as3note.loadFromFile("SoundEffects/as3sound.ogg"))
		return -1;

	sf::Sound as3noteSound;
	as3noteSound.setBuffer(as3note);

	//B3
	sf::SoundBuffer b3note;
	if (!b3note.loadFromFile("SoundEffects/b3sound.ogg"))
		return -1;

	sf::Sound b3noteSound;
	b3noteSound.setBuffer(b3note);

	//C3
	sf::SoundBuffer c3note;
	if (!c3note.loadFromFile("SoundEffects/c3sound.ogg"))
		return -1;

	sf::Sound c3noteSound;
	c3noteSound.setBuffer(c3note);

	//C3 sharp
	sf::SoundBuffer cs3note;
	if (!cs3note.loadFromFile("SoundEffects/cs3sound.ogg"))
		return -1;

	sf::Sound cs3noteSound;
	cs3noteSound.setBuffer(cs3note);

	//D3
	sf::SoundBuffer d3note;
	if (!d3note.loadFromFile("SoundEffects/d3sound.ogg"))
		return -1;

	sf::Sound d3noteSound;
	d3noteSound.setBuffer(d3note);

	//D3 Sharp
	sf::SoundBuffer ds3note;
	if (!ds3note.loadFromFile("SoundEffects/ds3sound.ogg"))
		return -1;

	sf::Sound ds3noteSound;
	ds3noteSound.setBuffer(ds3note);

	//E3
	sf::SoundBuffer e3note;
	if (!e3note.loadFromFile("SoundEffects/e3sound.ogg"))
		return -1;

	sf::Sound e3noteSound;
	e3noteSound.setBuffer(e3note);

	//F3
	sf::SoundBuffer f3note;
	if (!f3note.loadFromFile("SoundEffects/f3sound.ogg"))
		return -1;

	sf::Sound f3noteSound;
	f3noteSound.setBuffer(f3note);

	//F3 Sharp
	sf::SoundBuffer fs3note;
	if (!fs3note.loadFromFile("SoundEffects/fs3sound.ogg"))
		return -1;

	sf::Sound fs3noteSound;
	fs3noteSound.setBuffer(fs3note);

	//G3
	sf::SoundBuffer g3note;
	if (!g3note.loadFromFile("SoundEffects/g3sound.ogg"))
		return -1;

	sf::Sound g3noteSound;
	g3noteSound.setBuffer(g3note);

	//G3 Sharp
	sf::SoundBuffer gs3note;
	if (!gs3note.loadFromFile("SoundEffects/gs3sound.ogg"))
		return -1;

	sf::Sound gs3noteSound;
	gs3noteSound.setBuffer(gs3note);

	// A4
	sf::SoundBuffer a4note;
	if (!a4note.loadFromFile("SoundEffects/a4sound.ogg"))
		return -1;

	sf::Sound a4noteSound;
	a4noteSound.setBuffer(a4note);

	//A3sharp
	sf::SoundBuffer as4note;
	if (!as4note.loadFromFile("SoundEffects/as4sound.ogg"))
		return -1;

	sf::Sound as4noteSound;
	as4noteSound.setBuffer(as4note);

	//B3
	sf::SoundBuffer b4note;
	if (!b4note.loadFromFile("SoundEffects/b4sound.ogg"))
		return -1;

	sf::Sound b4noteSound;
	b4noteSound.setBuffer(b4note);

	//C3
	sf::SoundBuffer c4note;
	if (!c4note.loadFromFile("SoundEffects/c4sound.ogg"))
		return -1;

	sf::Sound c4noteSound;
	c4noteSound.setBuffer(c4note);

	//C3 sharp
	sf::SoundBuffer cs4note;
	if (!cs4note.loadFromFile("SoundEffects/cs4sound.ogg"))
		return -1;

	sf::Sound cs4noteSound;
	cs4noteSound.setBuffer(cs4note);

	//D3
	sf::SoundBuffer d4note;
	if (!d4note.loadFromFile("SoundEffects/d4sound.ogg"))
		return -1;

	sf::Sound d4noteSound;
	d4noteSound.setBuffer(d4note);

	//D3 Sharp
	sf::SoundBuffer ds4note;
	if (!ds4note.loadFromFile("SoundEffects/ds4sound.ogg"))
		return -1;

	sf::Sound ds4noteSound;
	ds4noteSound.setBuffer(ds4note);

	//E3
	sf::SoundBuffer e4note;
	if (!e4note.loadFromFile("SoundEffects/e4sound.ogg"))
		return -1;

	sf::Sound e4noteSound;
	e4noteSound.setBuffer(e4note);



	//sound effects
	sf::SoundBuffer buffer;
	if (!buffer.loadFromFile("SoundEffects/Click.ogg"))
		return -1;

	sf::Sound sound;
	sound.setBuffer(buffer);

	// Start the game loop
	while (window.isOpen())
	{
		// Process events
		sf::Event event;
		window.setKeyRepeatEnabled(false);


		while (window.pollEvent(event))
		{
			window.clear(sf::Color::Black);
			window.display();
			// Close window: exit
			if (event.type == sf::Event::Closed)
				window.close();
			if (event.type == sf::Event::Resized)
			{
				std::cout << std::left << std::setw(10) << "Width: " << event.size.width << std::endl;
				std::cout << std::setw(10) << "Height: " << event.size.height << std::endl;
			}
			if (event.type == sf::Event::KeyPressed)
				std::cout << std::left << std::setw(20) << "Key pressed: " << event.KeyPressed;
			if (event.type == sf::Event::TextEntered)
			{
				if (event.text.unicode < 128)
					std::cout << "ASCII character typed: " << static_cast<char>(event.text.unicode) << std::endl;
				if (static_cast<char>(event.text.unicode) == 122) //z
					a2noteSound.play();
				if (static_cast<char>(event.text.unicode) == 115) //s
					as2noteSound.play();
				if (static_cast<char>(event.text.unicode) == 120) //x
					b2noteSound.play();
				if (static_cast<char>(event.text.unicode) == 99) //c
					c2noteSound.play();
				if (static_cast<char>(event.text.unicode) == 102) //f
					cs2noteSound.play();
				if (static_cast<char>(event.text.unicode) == 118) //v
					d2noteSound.play(); 
				if (static_cast<char>(event.text.unicode) == 103) //g
					ds2noteSound.play();
				if (static_cast<char>(event.text.unicode) == 98) //b
					e2noteSound.play();
				if (static_cast<char>(event.text.unicode) == 110) //n
					f2noteSound.play();
				if (static_cast<char>(event.text.unicode) == 106)//j
					fs2noteSound.play();
				if (static_cast<char>(event.text.unicode) == 109)//m
					g2noteSound.play();
					

				if (static_cast<char>(event.text.unicode) == 107)//k
					gs2noteSound.play();
				if (static_cast<char>(event.text.unicode) == 44)//,
					a3noteSound.play();
				if (static_cast<char>(event.text.unicode) == 108)//l
					as3noteSound.play();
				if (static_cast<char>(event.text.unicode) == 46)//.
					b3noteSound.play();
				if (static_cast<char>(event.text.unicode) == 113)//q
					c3noteSound.play();
				if (static_cast<char>(event.text.unicode) == 50) //2
					cs3noteSound.play();
				if (static_cast<char>(event.text.unicode) == 119)//w
					d3noteSound.play();
				if (static_cast<char>(event.text.unicode) == 51 )//3
					ds3noteSound.play();
				if (static_cast<char>(event.text.unicode) == 101)//e
					e3noteSound.play();
				if (static_cast<char>(event.text.unicode) == 114)//r
					f3noteSound.play();


				if (static_cast<char>(event.text.unicode) == 53)//5
					fs3noteSound.play();
				if (static_cast<char>(event.text.unicode) == 116)//t
					g3noteSound.play();
				if (static_cast<char>(event.text.unicode) == 54)//6
					gs3noteSound.play();
				if (static_cast<char>(event.text.unicode) == 121)//y
					a4noteSound.play();
				if (static_cast<char>(event.text.unicode) == 55)//7
					as4noteSound.play();
				if (static_cast<char>(event.text.unicode) == 117)//u
					b4noteSound.play();
				if (static_cast<char>(event.text.unicode) == 105)//i
					c4noteSound.play();
				if (static_cast<char>(event.text.unicode) == 57)//9
					cs4noteSound.play();
				if (static_cast<char>(event.text.unicode) == 111)//o
					d4noteSound.play();
				if (static_cast<char>(event.text.unicode) == 48)//0
					ds4noteSound.play();
				if (static_cast<char>(event.text.unicode) == 112)//0
					e4noteSound.play();
			}



			
			if (event.type == sf::Event::KeyPressed)
			{
				if (event.key.code == sf::Keyboard::Escape)
				{
					
					std::cout << "the escape key was pressed" << std::endl;
					std::cout << "control:" << event.key.control << std::endl;
					std::cout << "alt:" << event.key.alt << std::endl;
					std::cout << "shift:" << event.key.shift << std::endl;
					std::cout << "system:" << event.key.system << std::endl; 
				}
			}
			if (event.type == sf::Event::MouseButtonPressed)
			{
		

				if (event.mouseButton.button == sf::Mouse::Right)
				{

					std::cout << "the right button was pressed" << std::endl;
					std::cout << "mouse x: " << event.mouseButton.x << std::endl;
					std::cout << "mouse y: " << event.mouseButton.y << std::endl;
				}
				else  if (event.mouseButton.button == sf::Mouse::Left)
				{
			
					sound.play();

				}
			
			}

		}	

	}
	return EXIT_SUCCESS;
}

