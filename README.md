# Concept

A simple space trading game in the style of the original Elite.

## TODO

### Generate the map
	
	* populate it with star systems
	* decide resource scarcity for each
	* set market prices
	* simulate govenment, natural disasters, resource mining operations, etc

## Markets

	* bonds / ZC bonds
	* stocks / equities
	* options
	* futures
	* indices
	* ETF (Exchange Traded Funds)
	* commodities

## Ships

	* base ships
	* extend with guns, better drives, improved AI, longer range communications
	* robots for unloading

## Trade Hubs

Since it's costly to enter a gravity well of any decent size most trading will be done with orbital platforms, captive asteroids, wrecks of massive ships, etc.

Each trade hub will have one or more markets, probably just the one to simplify the game code a bit.

## Trade Parameters

You can go fast or you can go cheap, but you can't go both. Fuel burns at the start and end of journeys will need to be factored into the price of goods.

Ships that are unmanned are preferred since this allows them to accelerate for long periods at multiples of gravity without killing the people in them. Slave ships are an obvious exception to this and will account for some part of the very high price of slaves.

Random encounters by pirates and space debris might cause shifts in the markets due to shortages of goods.

Supply and demand will play a part in market rates.

Planets might be better suited to organic materials than space stations.

There is no such thing as artificial gravity or faster than light travel. Single exception is the quantum entangled bits that form a part of their galactic wide internet. A new receiver has to be delivered to the region the slow way first in order to achieve this faster than light transmission of information. Bandwidth is limited and costly.

## Stock Exchange

Consider writing a fully fledged exchange system in GoLang. It should be capable of serving several hundred transactions concurrently. It could be fleshed out later if needed. This can be self hosted and be an optional component allowing guilds of players or groups to have server level infrastructure.

Game server is responsible to write transactions. Client is allowed read transactions.

## Tech Tree Advancement

Each community will have it's own level of tech advancement based on it's resources available,
population (skills, health, etc), and past achievements.

They will need to trade for materials / tech that can help advance them through a tech tree.

NOTE: each period builds on previous periods. Some goods will drop in value at the start of
the next period, others are evergreen and persist for the rest of the tree. By default,
anything they make is also considered available for sale.

Rough plan:
	* stone age - good for looters and slavers to set up trade posts
		* SOCIAL CHANGE
		* MAKE
			* religion
		* SELL
			* slaves
			* natural drugs
			* precursors for biotech weapons i.e. novel viruses
		* BUY
			* small amounts of luxury lifestyle goods for the slavers
			* colonisation goods e.g. habitats
			* weapons
			* restraints
			* alcohol
			* drugs
			* sex workers
	* bronze age - much the same as above
		* SOCIAL CHANGE
		* MAKE
			* wheel
		* SELL
			* metals
			* minerals
			* jewelery
			* cloth / clothing
			* mercenaries
		* BUY
			* pen + paper
			* engineering items - building pyramids / ziggurats
	* iron age
		* SOCIAL CHANGE
			* rise of the kings
		* MAKE
			* early farming implements
			* carts drawn by animals
		* SELL
			* harder metals
		* BUY
			* advance farming implements
	* classical age
		* SOCIAL CHANGE
			* world conquest
		* MAKE
			* maths
			* alchemy
			* shipping
			* clocks
			* Antikythera mechanism
			* orary
			* ceramincs
			* mills
			* siege weapons
			* art / theatre
			* cultural artifacts
			* books
			* pornograhy
		* SELL
			* grain
			* alcohol
		* BUY
	* medieval
		* SOCIAL CHANGE
		* MAKE
			* heavy machinery
			* astrolabe
		* SELL
		* BUY
	* pre-industrial
		* SOCIAL CHANGE
		* MAKE
			* physics
			* mass printed media
		* SELL
		* BUY
	* industrial
		* SOCIAL CHANGE
			* job unheaval / change in availability
			* workers rights movements
			* rise of the billionaires
		* MAKE
			* steam power
			* internal combustion engine
			* refrigeration
			* factories
			* basic communications
			* electricity
			* safe lighting and heating
			* early medicine
			* chemistry
		* SELL
		* BUY
	* post-industrial
		* SOCIAL CHANGE
			* more leisure time
		* MAKE
			* synthetic drugs
			* microwave ovens
			* conveniences
			* wifi
			* radar
			* nuclear weapons
			* nuclear power
		* SELL
		* BUY
	* information age
		* SOCIAL CHANGE
			* social and political schism / division
			* world wide exchange of ideas
			* post truth
			* astro-turfing
			* bot farms
			* troll farms
		* MAKE
			* computers
			* computer games
			* design tools e.g. CAD
			* databases
			* spreadsheets
			* word processing
			* CAT scan
			* MRI
			* Simulation software
		* SELL
		* BUY
	* AI age
		* SOCIAL CHANGE
			* mass unemployment
			* widespread poverty
			* social unrest
			* the singularity
			* faster pace of development
		* MAKE
			* AI slop
		* SELL
		* BUY
	* space age
		* SOCIAL CHANGE
		* MAKE
			* satelites
			* space station
			* moonshot
			* marsshot
			* space tourism
		* SELL
		* BUY
	* space colonisation
		* SOCIAL CHANGE
			* disapora
			* terraforming
		* MAKE
			* space shipping
			* asteroid mining
			* ice "mining" in the ice belt
			* terraforming equipment
		* SELL
		* BUY
	* sublimation
		* SOCIAL CHANGE
			* we're done with this material world of illusions
		* MAKE
			* nothing
		* SELL
			* nothing
		* BUY
			* nothing

By tailoring the markets to their current needs it can make it more interesting and a little
more coherent.

NOTE: They might be in two stages at once or overlapping from one to another. They are not exclusive and a
direct line forward.

## References

[Periods and Eras](https://www.weaversnest.org/human-history/periods-and-eras)
