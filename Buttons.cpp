#include "Buttons.h"
#include "Header.h"



void pressingButtons() {
    Linked_list dairy;
    Linked_list Produce;
    Linked_list Dry;
    Linked_list Protien;


    sf::Texture replacement;
    replacement.loadFromFile("replacement.png");
    sf::RenderWindow window(sf::VideoMode(1400, 900), "SFML works!");
    sf::Event event;
    sf::Sprite background;
    sf::Texture backgroundTexture;
    backgroundTexture.loadFromFile("BackgroundPlaid.jpg");
    background.setTexture(backgroundTexture);
    background.setScale(2, 2);
    sf::Sprite plate;
    sf::Texture plateText;
    plateText.loadFromFile("plate.png");
    plate.setTexture(plateText);
    plate.setPosition(-400, 100);
    plate.setScale(0.9, 0.9);
    sf::Sprite plate2;
    plate2.setTexture(plateText);
    plate2.setPosition(1140, 100);
    plate2.setScale(0.9, 0.9);


    sf::Texture t;
    t.loadFromFile("pngegg.png");
    /*sf::Sprite s;
    s.setTexture(t);
    s.setOrigin(sf::Vector2f(300, 300));
    s.setPosition(sf::Vector2f(300, 300));
    s.setScale(sf::Vector2f(0.1, 0.1));*/



    sf::Font font;
    font.loadFromFile("Bonello-Regular.otf");
    sf::Text instructions;
    instructions.setFont(font);
    instructions.setOutlineColor(sf::Color::Black);
    instructions.setOutlineThickness(4);
    instructions.setPosition(500, 200);
    instructions.setString("Welcome To the recipie Finder!");
    sf::Text instructions1;
    instructions1.setFont(font);
    instructions1.setString("Select the ingredients you have, and we will find a recipie for you!");
    instructions1.setOutlineColor(sf::Color::Black);
    instructions1.setOutlineThickness(4);
    instructions1.setScale(0.7, 0.7);
    instructions1.setPosition(400, 300);
    sf::Text instructions2;
    instructions2.setFont(font);
    instructions2.setString("Press [spacebar] to continue");
    instructions2.setOutlineColor(sf::Color::Black);
    instructions2.setOutlineThickness(4);
    instructions2.setPosition(500, 400);


    buttonArray pink;
    pink.setSprites(t);
    buttons milk;
    milk.setString("milk");
    sf::Text m = milk.singlebutton(360 + 10, 230 + 10);
    m.setFont(font);
    buttons cheese;
    cheese.setString("cheese");
    sf::Text Ch = cheese.singlebutton(360 + 10, 310 + 15);
    Ch.setFont(font);
    int n = 0;
    buttons butter;
    butter.setString("butter");
    sf::Text bu = butter.singlebutton(360 + 10, 385 + 15);
    bu.setFont(font);

    buttons heavyCream;
    heavyCream.setString("heavycream");
    sf::Text hc = heavyCream.singlebutton(360, 460 + 15);
    hc.setFont(font);

    buttons butterMilk;
    butterMilk.setString("buttermilk");
    sf::Text BM = butterMilk.singlebutton(360, 535 + 15);
    BM.setFont(font);
    buttons carrots;
    carrots.setString("carrot");
    sf::Text car = carrots.singlebutton(560 + 10, 230 + 15);
    car.setFont(font);

    buttons potatoes;
    potatoes.setString("potatoes");
    sf::Text pot = potatoes.singlebutton(560 + 10, 305 + 15);
    pot.setFont(font);


    buttons lettuce;
    lettuce.setString("lettuce");
    sf::Text let = lettuce.singlebutton(560 + 10, 380+15);
    let.setFont(font);


    buttons tomatos;
    tomatos.setString("tomatos");
    sf::Text tom = tomatos.singlebutton(560+10, 455+15);
    tom.setFont(font);


    buttons onions;
    onions.setString("onions");
    sf::Text oni = onions.singlebutton(560+10, 530+15);
    oni.setFont(font);


    buttons greenBeans;
    greenBeans.setString("green beans");
    sf::Text gB = greenBeans.singlebutton(560+10, 605+15);
    gB.setFont(font);


    buttons garlicCloves;
    garlicCloves.setString("garlic cloves");
    sf::Text gC = garlicCloves.singlebutton(560+10, 680+15);
    gC.setFont(font);


    buttons mushrooms;
    mushrooms.setString("mushrooms");
    sf::Text mush = mushrooms.singlebutton(560+10, 755+15);
    mush.setFont(font);

    ///////////////////////////////////////////DRY

    buttons noodles;
    noodles.setString("noodles");
    sf::Text nood = noodles.singlebutton(760+10, 230+15);
    nood.setFont(font);


    buttons rice;
    rice.setString("rice");
    sf::Text ric = rice.singlebutton(760+10, 305+15);
    ric.setFont(font);


    buttons bread;
    bread.setString("bread");
    sf::Text bre = bread.singlebutton(760+10, 380+15);
    bre.setFont(font);


    buttons buns;
    buns.setString("buns");
    sf::Text bun = buns.singlebutton(760+10, 455+15);
    bun.setFont(font);


    buttons nuts;
    nuts.setString("nuts");
    sf::Text nut = nuts.singlebutton(760+10, 530+15);
    nut.setFont(font);


    buttons flour;
    flour.setString("flour");
    sf::Text flo = flour.singlebutton(760+10, 605+15);
    flo.setFont(font);


    buttons cereal;
    cereal.setString("cerael");
    sf::Text cer = cereal.singlebutton(760+10, 680+15);
    cer.setFont(font);

    //////////////////////////////////////////////////////PROTEIN

    buttons beef;
    beef.setString("beef");
    sf::Text bef = beef.singlebutton(960+10, 230+15);
    bef.setFont(font);


    buttons chicken;
    chicken.setString("chicken");
    sf::Text chk = chicken.singlebutton(960+10, 305+15);
    chk.setFont(font);


    buttons beans;
    beans.setString("beans");
    sf::Text bea = beans.singlebutton(960+10, 380+15);
    bea.setFont(font);


    buttons fish;
    fish.setString("fish");
    sf::Text fsh = fish.singlebutton(960+10, 455+15);
    fsh.setFont(font);


    buttons pork;
    pork.setString("pork");
    sf::Text prk = pork.singlebutton(960+10, 530+15);
    prk.setFont(font);


    buttons bacon;
    bacon.setString("bacon");
    sf::Text bac = bacon.singlebutton(960+10, 605+15);
    bac.setFont(font);


    buttons lunchmeat;
    lunchmeat.setString("lunchmeat");
    sf::Text lnchm = lunchmeat.singlebutton(960+10, 680+15);
    lnchm.setFont(font);


    buttons tofu;
    tofu.setString("tofu");
    sf::Text tfu = tofu.singlebutton(960+10, 755+15);
    tfu.setFont(font);


    sf::CircleShape circle;
    circle.setFillColor(sf::Color::Red);
    circle.setRadius(12);
    circle.setPosition(sf::Vector2f(700, 100));


    while (window.isOpen()) {
        while (window.pollEvent(event))

        {
            if (event.type == sf::Event::Closed) { // if closed
                window.close();
            }
            if (n == 0) {
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {

                    n = 1;
                }
                window.draw(background);
                window.draw(instructions);
                window.draw(instructions1);
                window.draw(instructions2);
                window.draw(plate2);
                window.draw(plate);
                window.display();

            }


            else if (circle.getFillColor() != sf::Color::White && n == 1) {
                if (sf::Event::MouseButtonPressed) {
                    if (event.mouseButton.button == sf::Mouse::Left) {
                        if (milk.returningGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {
                            pink.checkingForChanges(replacement, milk.getRectangle());


                            //milk.setInt(milk.getint() + 1);
                            dairy.populate(milk.returnString());

                        }
                        if (cheese.returningGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {


                            dairy.populate(cheese.returnString());
                            pink.checkingForChanges(replacement, cheese.getRectangle());


                            //milk.setInt(milk.getint() + 1);


                        }
                        if (butter.returningGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {


                            dairy.populate(butter.returnString());
                            pink.checkingForChanges(replacement, butter.getRectangle());

                            //milk.setInt(milk.getint() + 1);


                        }
                        if (butterMilk.returningGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {


                            dairy.populate(butterMilk.returnString());
                            pink.checkingForChanges(replacement, butterMilk.getRectangle());


                            //milk.setInt(milk.getint() + 1);


                        }
                        if (heavyCream.returningGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {


                            dairy.populate(heavyCream.returnString());
                            pink.checkingForChanges(replacement, heavyCream.getRectangle());




                        }
                        if (circle.getGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {

                            circle.setFillColor(sf::Color::White);


                        }
                        if (carrots.returningGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {
                            Produce.populate(carrots.returnString());

                            pink.checkingForChanges(replacement, carrots.getRectangle());



                        }
                        if (potatoes.returningGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {

                            Produce.populate(potatoes.returnString());
                            pink.checkingForChanges(replacement, potatoes.getRectangle());


                        }

                        if (lettuce.returningGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {

                            Produce.populate(lettuce.returnString());
                            pink.checkingForChanges(replacement, lettuce.getRectangle());


                        }

                        if (tomatos.returningGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {

                            Produce.populate(tomatos.returnString());
                            pink.checkingForChanges(replacement, tomatos.getRectangle());


                        }

                        if (onions.returningGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {

                            Produce.populate(onions.returnString());

                            pink.checkingForChanges(replacement, onions.getRectangle());

                        }

                        if (greenBeans.returningGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {

                            Produce.populate(greenBeans.returnString());

                            pink.checkingForChanges(replacement, greenBeans.getRectangle());

                        }

                        if (garlicCloves.returningGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {

                            Produce.populate(garlicCloves.returnString());
                            pink.checkingForChanges(replacement, garlicCloves.getRectangle());


                        }

                        if (mushrooms.returningGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {

                            Produce.populate(mushrooms.returnString());
                            pink.checkingForChanges(replacement, mushrooms.getRectangle());


                        }

                        if (noodles.returningGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {

                            Dry.populate(noodles.returnString());

                            pink.checkingForChanges(replacement, noodles.getRectangle());

                        }

                        if (rice.returningGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {

                            Dry.populate(rice.returnString());
                            pink.checkingForChanges(replacement, rice.getRectangle());


                        }

                        if (bread.returningGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {

                            Dry.populate(bread.returnString());

                            pink.checkingForChanges(replacement, bread.getRectangle());

                        }

                        if (buns.returningGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {

                            Dry.populate(buns.returnString());
                            pink.checkingForChanges(replacement, buns.getRectangle());


                        }

                        if (nuts.returningGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {

                            Dry.populate(nuts.returnString());

                            pink.checkingForChanges(replacement, nuts.getRectangle());

                        }

                        if (flour.returningGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {

                            Dry.populate(flour.returnString());
                            pink.checkingForChanges(replacement, flour.getRectangle());


                        }

                        if (cereal.returningGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {

                            Dry.populate(cereal.returnString());
                            pink.checkingForChanges(replacement, cereal.getRectangle());


                        }

                        /////////////////////////////////////PROTEIN

                        if (beef.returningGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {

                            Protien.populate(beef.returnString());
                            pink.checkingForChanges(replacement, beef.getRectangle());


                        }

                        if (chicken.returningGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {

                            Protien.populate(chicken.returnString());
                            pink.checkingForChanges(replacement, chicken.getRectangle());


                        }

                        if (beans.returningGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {

                            Protien.populate(beans.returnString());

                            pink.checkingForChanges(replacement, beans.getRectangle());

                        }

                        if (fish.returningGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {

                            Protien.populate(fish.returnString());
                            pink.checkingForChanges(replacement, fish.getRectangle());


                        }

                        if (pork.returningGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {

                            Protien.populate(pork.returnString());
                            pink.checkingForChanges(replacement, pork.getRectangle());



                        }

                        if (bacon.returningGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {

                            Protien.populate(bacon.returnString());
                            pink.checkingForChanges(replacement, bacon.getRectangle());


                        }

                        if (lunchmeat.returningGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {

                            Protien.populate(lunchmeat.returnString());
                            pink.checkingForChanges(replacement, lunchmeat.getRectangle());


                        }

                        if (tofu.returningGlobalBounds().contains(sf::Mouse::getPosition(window).x,
                            sf::Mouse::getPosition(window).y)) {

                            Protien.populate(tofu.returnString());
                            pink.checkingForChanges(replacement, tofu.getRectangle());


                        }

                    }
                    window.draw(background);
                    //pink.printingSprites(window);
                    window.draw(circle);
                    window.draw(milk.getRectangle());
                    window.draw(heavyCream.getRectangle());
                    window.draw(cheese.getRectangle());
                    window.draw(butterMilk.getRectangle());
                    window.draw(butter.getRectangle());
                    window.draw(carrots.getRectangle());
                    window.draw(potatoes.getRectangle());
                    window.draw(lettuce.getRectangle());
                    window.draw(tomatos.getRectangle());
                    window.draw(onions.getRectangle());
                    window.draw(greenBeans.getRectangle());
                    window.draw(garlicCloves.getRectangle());
                    window.draw(mushrooms.getRectangle());
                    window.draw(noodles.getRectangle());
                    window.draw(rice.getRectangle());
                    window.draw(bread.getRectangle());
                    window.draw(buns.getRectangle());
                    window.draw(nuts.getRectangle());
                    window.draw(flour.getRectangle());
                    window.draw(cereal.getRectangle());
                    window.draw(beef.getRectangle());
                    window.draw(chicken.getRectangle());
                    window.draw(beans.getRectangle());
                    window.draw(fish.getRectangle());
                    window.draw(pork.getRectangle());
                    window.draw(bacon.getRectangle());
                    window.draw(lunchmeat.getRectangle());
                    window.draw(tofu.getRectangle());
                    pink.printingSprites(window);
                    window.draw(plate2);
                    window.draw(plate);
                    window.draw(pot);
                    window.draw(let);
                    window.draw(oni);
                    window.draw(gB);
                    window.draw(gC);
                    window.draw(mush);
                    window.draw(nood);
                    window.draw(ric);
                    window.draw(bre);
                    window.draw(bun);
                    window.draw(nut);
                    window.draw(flo);
                    window.draw(cer);
                    window.draw(bef);
                    window.draw(chk);
                    window.draw(bea);
                    window.draw(fsh);
                    window.draw(prk);
                    window.draw(bac);
                    window.draw(lnchm);
                    window.draw(tfu);
                    window.draw(m);
                    window.draw(bu);
                    window.draw(hc);
                    window.draw(Ch);
                    window.draw(BM);
                    window.draw(car);
                    window.display();

                }
              


            }
            else {
                 //sf::Text tt = Recipie_options(dairy, Produce, Dry, Protien);
                 //window.draw(tt);
                 sf::Text i;
                 i.setFont(font);
                 i.setOutlineColor(sf::Color::Black);
                 i.setOutlineThickness(4);
                 i.setPosition(500, 200);
                 i.setString("Recipie goes here!");
                 //window.draw(i);
                 window.draw(background);
                 window.draw(i);
                 window.draw(plate2);
                 window.draw(plate);
                 window.display();
             }
        }
    }
}