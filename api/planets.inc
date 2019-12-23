<?php

const PLANETS = array(
    array(
        "position" => 1,
        "name" => "Mercury",
        "aphelion" => "69,816,900",
        "perihelion" => "46,001,200",
        "length_day" => "58d 15h 30m",
        "length_year" => "88d",
        "logo" => "http://planeto.al/images/mercury.png",
        "cover" => "http://planeto.al/images/cover/mercury.jpg",
        "moons" => array(
            "total" => 0,
            "list" => array()
        ),
        "short_description" => "Mercury is the smallest and innermost planet in the Solar System.",
        "description" => "Mercury is the smallest and innermost planet in the Solar System. Its orbit around the Sun takes only 87.97 days, the shortest of all the planets in the Solar System. It is named after the Roman deity Mercury, the messenger of the gods.\n\nLike Venus, Mercury orbits the Sun within Earth's orbit as an inferior planet, and its apparent distance from the Sun as viewed from Earth never exceeds 28°. This proximity to the Sun means the planet can only be seen near the western horizon after sunset or eastern horizon before sunrise, usually in twilight. At this time, it may appear as a bright star-like object, but is often far more difficult to observe than Venus. The planet telescopically displays the complete range of phases, similar to Venus and the Moon, as it moves in its inner orbit relative to Earth, which recurs over its synodic period of approximately 116 days.\n\nMercury rotates in a way that is unique in the Solar System. It is tidally locked with the Sun in a 3:2 spin-orbit resonance, meaning that relative to the fixed stars, it rotates on its axis exactly three times for every two revolutions it makes around the Sun. As seen from the Sun, in a frame of reference that rotates with the orbital motion, it appears to rotate only once every two Mercurian years. An observer on Mercury would therefore see only one day every two Mercurian years."
    ),
    array(
        "position" => 2,
        "name" => "Venus",
        "aphelion" => "108,939,000",
        "perihelion" => "107,477,000",
        "length_day" => "116d 18h",
        "length_year" => "225d",
        "logo" => "http://planeto.al/images/venus.png",
        "cover" => "http://planeto.al/images/cover/venus.jpg",
        "moons" => array(
            "total" => 0,
            "list" => array()
        ),
        "short_description" => "Venus is the second planet from the Sun.",
        "description" => "Venus is the second planet from the Sun. It is named after the Roman goddess of love and beauty. As the second-brightest natural object in the night sky after the Moon, Venus can cast shadows and, rarely, is visible to the naked eye in broad daylight. Venus lies within Earth's orbit, and so never appears to venture far from the Sun, setting in the west just after dusk and rising in the east a bit before dawn. Venus orbits the Sun every 224.7 Earth days. With a rotation period of 243 Earth days, it takes longer to rotate about its axis than any planet in the Solar System and goes in the opposite direction to all but Uranus (meaning the Sun rises in the west and sets in the east). Venus does not have any natural satellites, a distinction it shares only with Mercury among planets in the Solar System.\n\nVenus is a terrestrial planet and is sometimes called Earth's \"sister planet\" because of their similar size, mass, proximity to the Sun, and bulk composition. It is radically different from Earth in other respects. It has the densest atmosphere of the four terrestrial planets, consisting of more than 96% carbon dioxide. The atmospheric pressure at the planet's surface is 92 times that of Earth, or roughly the pressure found 900 m (3,000 ft) underwater on Earth. Venus is by far the hottest planet in the Solar System, with a mean surface temperature of 735 K (462 °C; 863 °F), even though Mercury is closer to the Sun. Venus is shrouded by an opaque layer of highly reflective clouds of sulfuric acid, preventing its surface from being seen from space in visible light. It may have had water oceans in the past, but these would have vaporized as the temperature rose due to a runaway greenhouse effect. The water has probably photodissociated, and the free hydrogen has been swept into interplanetary space by the solar wind because of the lack of a planetary magnetic field. Venus's surface is a dry desertscape interspersed with slab-like rocks and is periodically resurfaced by volcanism."
    ),
    array(
        "position" => 3,
        "name" => "Earth",
        "aphelion" => "152,100,000",
        "perihelion" => "147,095,000",
        "length_day" => "24h",
        "length_year" => "365d",
        "logo" => "http://planeto.al/images/earth.png",
        "cover" => "http://planeto.al/images/cover/earth.jpg",
        "moons" => array(
            "total" => 1,
            "list" => array("The Moon")
        ),
        "short_description" => "Earth is the third planet from the Sun and the only astronomical object known to harbor life.",
        "description" => "Earth is the third planet from the Sun and the only astronomical object known to harbor life. According to radiometric dating and other sources of evidence, Earth formed over 4.5 billion years ago. Earth's gravity interacts with other objects in space, especially the Sun and the Moon, which is Earth's only natural satellite. Earth orbits around the Sun in 365.265 days, a period known as an Earth sidereal year. During this time, Earth rotates about its axis about 366.265 times.\n\nEarth's axis of rotation is tilted with respect to its orbital plane, producing seasons on Earth. The gravitational interaction between Earth and the Moon causes tides, stabilizes Earth's orientation on its axis, and gradually slows its rotation. Earth is the densest planet in the Solar System and the largest and most massive of the four rocky planets.\n\nEarth's lithosphere is divided into several rigid tectonic plates that migrate across the surface over many millions of years. About 71% of Earth's surface is covered with water, mostly by oceans. The remaining 29% is land consisting of continents and islands that together contain many lakes, rivers and other sources of water that contribute to the hydrosphere. The majority of Earth's polar regions are covered in ice, including the Antarctic ice sheet and the sea ice of the Arctic ice pack. Earth's interior remains active with a solid iron inner core, a liquid outer core that generates the Earth's magnetic field and a convecting mantle that drives plate tectonics."
    ),
    array(
        "position" => 4,
        "name" => "Mars",
        "aphelion" => "249,200,000",
        "perihelion" => "206,700,000",
        "length_day" => "1d 0h 37m",
        "length_year" => "687d",
        "logo" => "http://planeto.al/images/mars.png",
        "cover" => "http://planeto.al/images/cover/mars.jpg",
        "moons" => array(
            "total" => 2,
            "list" => array("Phobos", "Deimos")
        ),
        "short_description" => "Mars is the fourth planet from the Sun and the second-smallest planet in the Solar System after Mercury.",
        "description" => "Mars is the fourth planet from the Sun and the second-smallest planet in the Solar System after Mercury. In English, Mars carries a name of the Roman god of war and is often referred to as the 'Red Planet'. The latter refers to the effect of the iron oxide prevalent on Mars' surface, which gives it a reddish appearance distinctive among the astronomical bodies visible to the naked eye. Mars is a terrestrial planet with a thin atmosphere, having surface features reminiscent both of the impact craters of the Moon and the valleys, deserts, and polar ice caps of Earth.\nThe days and seasons are likewise comparable to those of Earth, because the rotational period as well as the tilt of the rotational axis relative to the ecliptic plane are very similar. Mars is the site of Olympus Mons, the largest volcano and highest known mountain in the Solar System, and of Valles Marineris, one of the largest canyons in the Solar System. The smooth Borealis basin in the northern hemisphere covers 40% of the planet and may be a giant impact feature. Mars has two moons, Phobos and Deimos, which are small and irregularly shaped. These may be captured asteroids, similar to 5261 Eureka, a Mars trojan."
    ),
    array(
        "position" => 5,
        "name" => "Jupiter",
        "aphelion" => "816,620,000",
        "perihelion" => "740,520,000",
        "length_day" => "0d 9h 56m",
        "length_year" => "12y",
        "logo" => "http://planeto.al/images/jupiter.png",
        "cover" => "http://planeto.al/images/cover/jupiter.png",
        "moons" => array(
            "total" => 79,
            "list" => array("Io", "Europa", "Callisto" ,"Ganymede")
        ),
        "short_description" => "Jupiter is the fifth planet from the Sun and the largest in the Solar System.",
        "description" => "Jupiter is the fifth planet from the Sun and the largest in the Solar System. It is a gas giant with a mass one-thousandth that of the Sun, but two-and-a-half times that of all the other planets in the Solar System combined. Jupiter is one of the brightest objects visible to the naked eye in the night sky, and has been known to all ancient civilizations since before recorded history. It is named after the Roman god Jupiter. When viewed from Earth, Jupiter can be bright enough for its reflected light to cast shadows, and is on average the third-brightest natural object in the night sky after the Moon and Venus.\n\nJupiter is primarily composed of hydrogen with a quarter of its mass being helium, though helium comprises only about a tenth of the number of molecules. It may also have a rocky core of heavier elements, but like the other giant planets, Jupiter lacks a well-defined solid surface. Because of its rapid rotation, the planet's shape is that of an oblate spheroid (it has a slight but noticeable bulge around the equator). The outer atmosphere is visibly segregated into several bands at different latitudes, resulting in turbulence and storms along their interacting boundaries. A prominent result is the Great Red Spot, a giant storm that is known to have existed since at least the 17th century when it was first seen by telescope. Surrounding Jupiter is a faint planetary ring system and a powerful magnetosphere. Jupiter has 79 known moons, including the four large Galilean moons discovered by Galileo Galilei in 1610. Ganymede, the largest of these, has a diameter greater than that of the planet Mercury."
    ),
    array(
        "position" => 6,
        "name" => "Saturn",
        "aphelion" => "1,514.5 mln",
        "perihelion" => "1,352.5 mln",
        "length_day" => "0d 10h 42m",
        "length_year" => "29y",
        "logo" => "http://planeto.al/images/saturn.png",
        "cover" => "http://planeto.al/images/cover/saturn.jpg",
        "moons" => array(
            "total" => 53,
            "list" => array("Titan", "Enceladus", "Mimas", "Tethys")
        ),
        "short_description" => "Saturn is the sixth planet from the Sun and the second-largest in the Solar System, after Jupiter.",
        "description" => "Saturn is the sixth planet from the Sun and the second-largest in the Solar System, after Jupiter. It is a gas giant with an average radius about nine times that of Earth. It has only one-eighth the average density of Earth; however, with its larger volume, Saturn is over 95 times more massive. Saturn is named after the Roman god of wealth and agriculture; its astronomical symbol (♄) represents the god's sickle.\n\nSaturn's interior is most likely composed of a core of iron–nickel and rock (silicon and oxygen compounds). This core is surrounded by a deep layer of metallic hydrogen, an intermediate layer of liquid hydrogen and liquid helium, and finally a gaseous outer layer. Saturn has a pale yellow hue due to ammonia crystals in its upper atmosphere. An electrical current within the metallic hydrogen layer is thought to give rise to Saturn's planetary magnetic field, which is weaker than Earth's, but has a magnetic moment 580 times that of Earth due to Saturn's larger size. Saturn's magnetic field strength is around one-twentieth of Jupiter's. The outer atmosphere is generally bland and lacking in contrast, although long-lived features can appear. Wind speeds on Saturn can reach 1,800 km/h (1,100 mph; 500 m/s), higher than on Jupiter, but not as high as those on Neptune."
    ),
    array(
        "position" => 7,
        "name" => "Uranus",
        "aphelion" => "3,008.4 mln",
        "perihelion" => "2,742.1 mln",
        "length_day" => "0d 17h 14m",
        "length_year" => "84y",
        "logo" => "http://planeto.al/images/uranus.png",
        "cover" => "http://planeto.al/images/cover/uranus.jpg",
        "moons" => array(
            "total" => 27,
            "list" => array("Umbriel", "Oberon", "Titania", "Puck", "Desdemona", "Cressida")
        ),
        "short_description" => "Uranus is the seventh planet from the Sun. It has the third-largest planetary radius and fourth-largest planetary mass in the Solar System.",
        "description" => "Uranus (from the Latin name Ūranus for the Greek god Οὐρανός) is the seventh planet from the Sun. It has the third-largest planetary radius and fourth-largest planetary mass in the Solar System. Uranus is similar in composition to Neptune, and both have bulk chemical compositions which differ from that of the larger gas giants Jupiter and Saturn. For this reason, scientists often classify Uranus and Neptune as \"ice giants\" to distinguish them from the gas giants. Uranus' atmosphere is similar to Jupiter's and Saturn's in its primary composition of hydrogen and helium, but it contains more \"ices\" such as water, ammonia, and methane, along with traces of other hydrocarbons. It has the coldest planetary atmosphere in the Solar System, with a minimum temperature of 49 K (−224 °C; −371 °F), and has a complex, layered cloud structure with water thought to make up the lowest clouds and methane the uppermost layer of clouds. The interior of Uranus is mainly composed of ices and rock.\n\nLike the other giant planets, Uranus has a ring system, a magnetosphere, and numerous moons. The Uranian system has a unique configuration because its axis of rotation is tilted sideways, nearly into the plane of its solar orbit. Its north and south poles, therefore, lie where most other planets have their equators. In 1986, images from Voyager 2 showed Uranus as an almost featureless planet in visible light, without the cloud bands or storms associated with the other giant planets. Observations from Earth have shown seasonal change and increased weather activity as Uranus approached its equinox in 2007. Wind speeds can reach 250 metres per second (900 km/h; 560 mph)."
    ),
    array(
        "position" => 8,
        "name" => "Neptune",
        "aphelion" => "4,537.3 mln",
        "perihelion" => "4,459.5 mln",
        "length_day" => "0d 16h 6m",
        "length_year" => "165y",
        "logo" => "http://planeto.al/images/neptune.png",
        "cover" => "http://planeto.al/images/cover/neptune.jpg",
        "moons" => array(
            "total" => 14,
            "list" => array("Triton", "Thalassa", "Naida", "Hipppcamp", "Proteus", "Despina")
        ),
        "short_description" => "Neptune is the eighth and farthest known planet from the Sun in the Solar System.",
        "description" => "Neptune is the eighth and farthest known planet from the Sun in the Solar System. In the Solar System, it is the fourth-largest planet by diameter, the third-most-massive planet, and the densest giant planet. Neptune is 17 times the mass of Earth, slightly more massive than its near-twin Uranus. Neptune is denser and physically smaller than Uranus because its greater mass causes more gravitational compression of its atmosphere. Neptune orbits the Sun once every 164.8 years at an average distance of 30.1 au (4.5 billion km; 2.8 billion mi). It is named after the Roman god of the sea and has the astronomical symbol ♆, a stylised version of the god Neptune's trident.\n\nNeptune is not visible to the unaided eye and is the only planet in the Solar System found by mathematical prediction rather than by empirical observation. Unexpected changes in the orbit of Uranus led Alexis Bouvard to deduce that its orbit was subject to gravitational perturbation by an unknown planet. The position of Neptune was subsequently calculated from Bouvard's observations, independently, by John Couch Adams and Urbain Le Verrier after his death. Neptune was subsequently observed with a telescope on 23 September 1846 by Johann Galle within a degree of the position predicted by Le Verrier. Its largest moon, Triton, was discovered shortly thereafter, though none of the planet's remaining known 13 moons were located telescopically until the 20th century. The planet's distance from Earth gives it a very small apparent size, making it challenging to study with Earth-based telescopes. Neptune was visited by Voyager 2, when it flew by the planet on 25 August 1989. The advent of the Hubble Space Telescope and large ground-based telescopes with adaptive optics has recently allowed for additional detailed observations from afar."
    ),
    array(
        "position" => 9,
        "name" => "Moon",
        "perigee" => "362,600",
        "apogee" => "405,400",
        "length_day" => "29d 12h",
        "length_year" => "27d",
        "logo" => "http://planeto.al/images/moon.png",
        "cover" => "http://planeto.al/images/cover/moon.png",
        "moons" => array(
            "total" => 0,
            "list" => array()
        ),
        "short_description" => "The Moon is an astronomical body that orbits Earth as its only natural satellite.",
        "description" => "The Moon is an astronomical body that orbits Earth as its only natural satellite. It is the fifth-largest satellite in the Solar System, and the largest among planetary satellites relative to the size of the planet that it orbits (its primary). The Moon is, after Jupiter's satellite Io, the second-densest satellite in the Solar System among those whose densities are known.\n\nThe Moon is thought to have formed about 4.51 billion years ago, not long after Earth. The most widely accepted explanation is that the Moon formed from the debris left over after a giant impact between Earth and a Mars-sized body called Theia. New research of Moon rocks, although not rejecting the Theia hypothesis, suggests that the Moon may be older than previously thought.\n\nThe Moon is in synchronous rotation with Earth, and thus always shows the same side to Earth, the near side. The near side is marked by dark volcanic maria that fill the spaces between the bright ancient crustal highlands and the prominent impact craters. After the Sun, the Moon is the second-brightest regularly visible celestial object in Earth's sky. Its surface is actually dark, although compared to the night sky it appears very bright, with a reflectance just slightly higher than that of worn asphalt. Its gravitational influence produces the ocean tides, body tides, and the slight lengthening of the day."
    ),
    array(
        "position" => 10,
        "name" => "Pluto",
        "aphelion" => "7,375.9 mln",
        "perihelion" => "4,436.7 mln",
        "length_day" => "29d 12h",
        "length_year" => "27d",
        "logo" => "http://planeto.al/images/pluto.png",
        "cover" => "http://planeto.al/images/cover/pluto.png",
        "moons" => array(
            "total" => 5,
            "list" => array("Charon", "Nix", "Hydra", "Styx", "Kerberos")
        ),
        "short_description" => "Pluto is a dwarf planet in the Kuiper belt, a ring of bodies beyond the orbit of Neptune.",
        "description" => "Pluto (minor planet designation: 134340 Pluto) is a dwarf planet in the Kuiper belt, a ring of bodies beyond the orbit of Neptune. It was the first Kuiper belt object to be discovered and is the largest known plutoid (or ice dwarf).\n\nPluto was discovered by Clyde Tombaugh in 1930 as the ninth planet from the Sun. After 1992, its status as a planet was questioned following the discovery of several objects of similar size in the Kuiper belt. In 2005, Eris, a dwarf planet in the scattered disc which is 27% more massive than Pluto, was discovered. This led the International Astronomical Union (IAU) to define the term \"planet\" formally in 2006, during their 26th General Assembly. That definition excluded Pluto and reclassified it as a dwarf planet."
    )
);