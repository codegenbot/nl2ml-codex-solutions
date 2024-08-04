def bf(planet1, planet2):
    planets = ["Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"]
    if planet1 not in planets or planet2 not in planets:
        return ()
    start_index = planets.index(planet1)
    end_index = planets.index(planet2)
    if start_index < end_index:
        return tuple(sorted(planets[start_index + 1 : end_index]))
    else:
        return tuple(sorted(planets[end_index + 1 : start_index], reverse=True))