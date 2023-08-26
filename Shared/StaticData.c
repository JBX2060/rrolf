#include <Shared/StaticData.h>

#include <math.h>
#include <stdio.h>

#include <Shared/Utilities.h>

// clang-format off
struct rr_petal_data RR_PETAL_DATA[rr_petal_id_max] = {
    {rr_petal_id_no_petal, rr_rarity_id_common, 0.0f, 0.0f, 0.0f, 0, 0, {0, 0, 0, 0, 0, 0, 0}},
    {rr_petal_id_basic, rr_rarity_id_common, 10.0f, 15.0f, 0.0f, 50, 0, {1, 1, 1, 1, 1, 1, 1}},
    {rr_petal_id_pellet, rr_rarity_id_common, 13.0f, 5.0f, 0.0f, 15, 0, {1, 2, 2, 3, 3, 5, 5}},
    {rr_petal_id_fossil, rr_rarity_id_common, 10.0f, 75.0f, 0.0f, 100, 0, {1, 1, 1, 1, 1, 1, 1}},
    {rr_petal_id_stinger, rr_rarity_id_common, 75.0f, 3.0f, 10.0f, 188, 0, {1, 1, 1, 1, 1, 3, 5}},
    {rr_petal_id_light, rr_rarity_id_rare, 8.0f, 5.0f, 15.0f, 20, 0, {1, 1, 1, 1, 1, 2, 2}},
    {rr_petal_id_shell, rr_rarity_id_rare, 3.5f, 8.0f, 15.0f, 38, 13, {1, 1, 1, 1, 1, 1, 1}},
    {rr_petal_id_peas, rr_rarity_id_rare, 20.0f, 8.0f, 8.0f, 13, 12, {4, 4, 4, 4, 4, 4, 5}},
    {rr_petal_id_leaf, rr_rarity_id_unusual, 8.0f, 12.0f, 8.0f, 25, 0, {1, 1, 1, 1, 1, 2, 2}},
    {rr_petal_id_egg, rr_rarity_id_unusual, 1.0f, 20.0f, 0.0f, 25, 75, {1, 1, 1, 1, 1, 1, 1}},
    {rr_petal_id_magnet, rr_rarity_id_rare, 2.0f, 15.0f, 0.0f, 38, 0, {1, 1, 1, 1, 1, 1, 1}},
    {rr_petal_id_uranium, rr_rarity_id_rare, 5.0f, 10.0f, 0.0f, 50, 0, {1, 1, 1, 1, 1, 1, 1}},
    {rr_petal_id_feather, rr_rarity_id_common, 1.0f, 3.0f, 0.0f, 25, 0, {1, 1, 1, 1, 1, 1, 1}},
    {rr_petal_id_azalea, rr_rarity_id_common, 5.0f, 10.0f, 0.0f, 75, 25, {1, 1, 1, 1, 1, 1, 1}},
    {rr_petal_id_bone, rr_rarity_id_common, 5.0f, 25.0f, 0.0f, 68, 0, {1, 1, 1, 1, 1, 1, 1}},
    {rr_petal_id_web, rr_rarity_id_rare, 5.0f, 5.0f, 0.0f, 50, 13, {1, 1, 1, 1, 1, 1, 1}},
    {rr_petal_id_seed, rr_rarity_id_legendary, 1.0f, 20.0f, 0.0f, 63, 1, {1, 1, 1, 1, 1, 1, 1}},
    {rr_petal_id_gravel, rr_rarity_id_unusual, 18.0f, 10.0f, 0.0f, 25, 13, {1, 2, 2, 2, 3, 3, 4}},
    {rr_petal_id_club, rr_rarity_id_common, 3.5f, 450.0f, 0.0f, 250, 0, {1, 1, 1, 1, 1, 1, 1}},
    {rr_petal_id_crest, rr_rarity_id_rare, 0.0f, 0.0f, 0.0f, 0, 0, {0, 0, 0, 0, 0, 0, 0}},
    {rr_petal_id_droplet, rr_rarity_id_common, 15.0f, 5.0f, 0.0f, 50, 0, {1, 1, 1, 1, 1, 1, 1}},
    {rr_petal_id_beak, rr_rarity_id_unusual, 12.0f, 10.0f, 0.0f, 68, 0, {1, 1, 1, 1, 1, 1, 1}},
    {rr_petal_id_lightning, rr_rarity_id_unusual, 16.0f, 4.0f, 0.0f, 50, 25, {1, 1, 1, 1, 1, 1, 1}},
    {rr_petal_id_stick, rr_rarity_id_rare, 4.0f, 8.0f, 0.0f, 50, 0, {1, 1, 1, 1, 1, 1, 1}},
    {rr_petal_id_kelp, rr_rarity_id_common, 5.0f, 10.0f, 0.0f, 75, 25, {1, 1, 1, 1, 1, 1, 1}},
    {rr_petal_id_fish_egg, rr_rarity_id_unusual, 1.0f, 2.0f, 0.0f, 25, 25, {1, 1, 3, 3, 3, 3, 3}},
    {rr_petal_id_scales, rr_rarity_id_common, 6.0f, 5.0f, 0.0f, 75, 0, {1, 1, 1, 1, 1, 1, 1}},
};    

struct rr_mob_data RR_MOB_DATA[rr_mob_id_max] = {
    {rr_mob_id_triceratops, rr_rarity_id_rare, 45, 15, 30.0f, {}},
    {rr_mob_id_trex, rr_rarity_id_epic, 30, 25, 32.0f, {}},
    {rr_mob_id_fern, rr_rarity_id_common, 10, 5, 24.0f, {}},
    {rr_mob_id_tree, rr_rarity_id_rare, 50, 5, 60.0f, {}},
    {rr_mob_id_pteranodon, rr_rarity_id_common, 30, 20, 20.0f, {}},
    {rr_mob_id_dakotaraptor, rr_rarity_id_unusual, 35, 10, 25.0f, {}},
    {rr_mob_id_pachycephalosaurus, rr_rarity_id_common, 30, 15, 20.0f, {}},
    {rr_mob_id_ornithomimus, rr_rarity_id_common, 20, 10, 20.0f, {}},
    {rr_mob_id_ankylosaurus, rr_rarity_id_rare, 40, 10, 30.0f, {}},
    {rr_mob_id_meteor, rr_rarity_id_rare, 200, 8, 32.0f, {}},
    {rr_mob_id_quetzalcoatlus, rr_rarity_id_unusual, 75, 10, 28.0f, {}},
    {rr_mob_id_pectinodon, rr_rarity_id_rare, 35, 10, 24.0f, {}},
    {rr_mob_id_edmontosaurus, rr_rarity_id_epic, 50, 10, 30.0f, {}},

    {rr_mob_id_king_mackarel, rr_rarity_id_common, 30, 10, 30.0f, {}},
    {rr_mob_id_sea_snail, rr_rarity_id_common, 30, 10, 23.0f, {}},
    {rr_mob_id_seagull, rr_rarity_id_common, 30, 10, 25.0f, {}},
    {rr_mob_id_kelp, rr_rarity_id_common, 30, 10, 25.0f, {}}
};

// zeach's numbers from the pinned screenshot of the old scaling
struct rr_petal_rarity_scale RR_PETAL_RARITY_SCALE[rr_rarity_id_max] = {
    {1,   1},
    {1.5, 1.8},
    {2.4, 3.0},
    {3.5, 4.5},
    {6.0, 7.2},
    {12.0, 18.0},
    {25.0, 54.0},
};

struct rr_mob_rarity_scale RR_MOB_RARITY_SCALING[rr_rarity_id_max] = {
    {1.0, 1.0, 1.0},
    {2.5, 1.3, 1.2},
    {5.6, 1.6, 1.5}, 
    {15,  2.5, 1.8},
    {50,  4.0, 2.5},
    {100, 7.0, 4.0},
    {250, 15,  6.0},
};
// clang-format on

uint32_t RR_RARITY_COLORS[rr_rarity_id_max] = {
    0xff7eef6d, 0xffffe65d, 0xff4d52e3, 0xff861fde,
    0xffde1f1f, 0xff1fdbde, 0xffff2b75};
char const *RR_RARITY_NAMES[rr_rarity_id_max] = {
    "Common", "Uncommon", "Rare", "Epic", "Legendary", "Mythic", "Exotic"};
char const *RR_PETAL_NAMES[rr_petal_id_max] = {
    "Secret", "Basic", "Pellet", "Fossil",   "Spikes",  "Light", "Shell",
    "Peas",   "Leaf",  "Egg",    "Magnet", "Uranium", "Feather", "Azalea",
    "Bone",   "Slime",   "Seed",   "Gravel", "Club", "Crest", "Droplet",
    "Beak", "Lightning", "Stick", "Kelp", "Egg", "Scales"};
char const *RR_PETAL_DESCRIPTIONS[rr_petal_id_max] = {
    0,
    "It's just a petal",
    "Low damage, but there's lots",
    "It came from a dino",
    "Ow that hurts",
    "Makes your petals lighter so they spin faster",
    "Poor snail",
    "Splits in 4. Or maybe 5 if you're a pro",
    "Heals you gradually",
    "Spawns a pet dinosaur to protect you",
    "Increases loot pickup radius. Does not stack",
    "Does low damage to mobs in a large range. Slowly damages yourself",
    "It's so light it increases your movement speed. Does not stack",
    "It heals you",
    "Gives the player armor. Stacks with itself",
    "Web",
    "What does this one do",
    "Tiny rocks that stay on the ground and trip dinos",
    "Heavy and sturdy",
    "Increases your FOV. Does not stack",
    "This mysterious petal reverses your petal rotation",
    "Stuns mobs and prevents them from moving",
    "A stunning display",
    "It burns",
    "Pets love to eat this",
    "Koi there",
    "An interesting petal. Only takes 1 damage per hit"
};

char const *RR_MOB_NAMES[rr_mob_id_max] = {"Triceratops",
                                           "T-Rex",
                                           "Fern",
                                           "Tree",
                                           "Pteranodon",
                                           "Dakotaraptor",
                                           "Pachycephalosaurus",
                                           "Ornithomimus",
                                           "Ankylosaurus",
                                           "Meteor",
                                           "Quetzalcoatlus",
                                           "Pectinodon",
                                           "Edmontosaurus",
                                           "King Mackarel",
                                           "Sea Snail",
                                           "Seagull",
                                           "Kelp"};

uint32_t RR_MOB_DIFFICULTY_COEFFICIENTS[rr_mob_id_max] = {9,  10, 2, 4, 20,
                                                          12, 9,  3, 10, 1, 8, 8, 10, 9};
double RR_HELL_CREEK_MOB_ID_RARITY_COEFFICIENTS[rr_mob_id_max] = {50, 100, 30, 1.5, 25,
                                                       25, 20, 25, 25, 0.5, 75, 25, 25};

double RR_OCEAN_MOB_ID_RARITY_COEFFICIENTS[rr_mob_id_max] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 5};
                                            
double RR_MOB_WAVE_RARITY_COEFFICIENTS[rr_rarity_id_ultra + 2] = {
    0, 1, 5, 8, 15, 30, 100, 500};

double RR_DROP_RARITY_COEFFICIENTS[rr_rarity_id_ultra + 2] = {
    0, 1, 12, 20, 25, 150, 250, 50};
static double RR_MOB_LOOT_RARITY_COEFFICIENTS[rr_rarity_id_ultra + 1] = {
    3, 3, 5, 16, 20, 25, 50};

static void init_game_coefficients()
{
    double sum = 1;
    double sum2 = 1;
    for (uint64_t a = 1; a <= rr_rarity_id_ultra; ++a)
    {
        sum += (RR_DROP_RARITY_COEFFICIENTS[a + 1] =
                    RR_DROP_RARITY_COEFFICIENTS[a] /
                    RR_DROP_RARITY_COEFFICIENTS[a + 1]);
        sum2 += (RR_MOB_WAVE_RARITY_COEFFICIENTS[a + 1] =
                     RR_MOB_WAVE_RARITY_COEFFICIENTS[a] /
                     RR_MOB_WAVE_RARITY_COEFFICIENTS[a + 1]);
        RR_MOB_LOOT_RARITY_COEFFICIENTS[a] *=
            RR_MOB_LOOT_RARITY_COEFFICIENTS[a - 1];
    }
    for (uint64_t a = 1; a <= rr_rarity_id_ultra + 1; ++a)
    {
        RR_DROP_RARITY_COEFFICIENTS[a] = RR_DROP_RARITY_COEFFICIENTS[a] / sum +
                                         RR_DROP_RARITY_COEFFICIENTS[a - 1];
        RR_MOB_WAVE_RARITY_COEFFICIENTS[a] =
            RR_MOB_WAVE_RARITY_COEFFICIENTS[a] / sum2 +
            RR_MOB_WAVE_RARITY_COEFFICIENTS[a - 1];
    }
    RR_DROP_RARITY_COEFFICIENTS[rr_rarity_id_ultra + 1] = 1;
    for (uint64_t mob = 1; mob < rr_mob_id_max; ++mob)
    {
        RR_HELL_CREEK_MOB_ID_RARITY_COEFFICIENTS[mob] +=
            RR_HELL_CREEK_MOB_ID_RARITY_COEFFICIENTS[mob - 1];
        RR_OCEAN_MOB_ID_RARITY_COEFFICIENTS[mob] +=
            RR_OCEAN_MOB_ID_RARITY_COEFFICIENTS[mob - 1];
    }
    for (uint64_t mob = 0; mob < rr_mob_id_max; ++mob)
    {
        RR_HELL_CREEK_MOB_ID_RARITY_COEFFICIENTS[mob] /=
            RR_HELL_CREEK_MOB_ID_RARITY_COEFFICIENTS[rr_mob_id_max - 1];
        RR_OCEAN_MOB_ID_RARITY_COEFFICIENTS[mob] /=
            RR_OCEAN_MOB_ID_RARITY_COEFFICIENTS[rr_mob_id_max - 1];
    }
}

static void init_loot_table(struct rr_loot_data *data, uint8_t id, float seed)
{
    data->id = id;
    for (uint64_t mob = 0; mob <= rr_rarity_id_ultra; ++mob)
    {
        uint64_t cap = mob;
        if (mob < rr_rarity_id_mythic)
            cap = mob;
        else
            cap = mob - 1;

        for (uint64_t drop = 0; drop <= cap + 1; ++drop)
        {
            double end =
                drop == cap + 1 ? 1 : RR_DROP_RARITY_COEFFICIENTS[drop];
            if (cap < RR_PETAL_DATA[id].min_rarity)
                end = 1;
            else if (drop < RR_PETAL_DATA[id].min_rarity)
                end = RR_DROP_RARITY_COEFFICIENTS[RR_PETAL_DATA[id].min_rarity];
            data->loot_table[mob][drop] =
                pow(1 - (1 - end) * seed, RR_MOB_LOOT_RARITY_COEFFICIENTS[mob]);
        }
    }
}

static void init_loot_tables()
{
    init_loot_table(&RR_MOB_DATA[rr_mob_id_triceratops].loot[0],
                    rr_petal_id_fossil, 0.1);
    init_loot_table(&RR_MOB_DATA[rr_mob_id_triceratops].loot[1],
                    rr_petal_id_leaf, 0.15);

    init_loot_table(&RR_MOB_DATA[rr_mob_id_trex].loot[0], rr_petal_id_bone,
                    0.2);
    init_loot_table(&RR_MOB_DATA[rr_mob_id_trex].loot[1], rr_petal_id_stinger,
                    0.1);
    init_loot_table(&RR_MOB_DATA[rr_mob_id_trex].loot[2], rr_petal_id_egg,
                    0.025);

    init_loot_table(&RR_MOB_DATA[rr_mob_id_fern].loot[0], rr_petal_id_azalea,
                    0.1);
    init_loot_table(&RR_MOB_DATA[rr_mob_id_fern].loot[1], rr_petal_id_leaf,
                    0.25);

    init_loot_table(&RR_MOB_DATA[rr_mob_id_tree].loot[0], rr_petal_id_peas,
                    0.3);
    init_loot_table(&RR_MOB_DATA[rr_mob_id_tree].loot[1], rr_petal_id_leaf,
                    0.5);
    init_loot_table(&RR_MOB_DATA[rr_mob_id_tree].loot[2], rr_petal_id_seed,
                    0.04);

    init_loot_table(&RR_MOB_DATA[rr_mob_id_pteranodon].loot[0],
                    rr_petal_id_shell, 0.05);
    init_loot_table(&RR_MOB_DATA[rr_mob_id_pteranodon].loot[1],
                    rr_petal_id_beak, 0.15);

    init_loot_table(&RR_MOB_DATA[rr_mob_id_dakotaraptor].loot[0],
                    rr_petal_id_feather, 0.1);
    init_loot_table(&RR_MOB_DATA[rr_mob_id_dakotaraptor].loot[1],
                    rr_petal_id_crest, 0.05);

    init_loot_table(&RR_MOB_DATA[rr_mob_id_pachycephalosaurus].loot[0],
                    rr_petal_id_light, 0.05);
    init_loot_table(&RR_MOB_DATA[rr_mob_id_pachycephalosaurus].loot[1],
                    rr_petal_id_pellet, 0.1);

    init_loot_table(&RR_MOB_DATA[rr_mob_id_ornithomimus].loot[0],
                    rr_petal_id_pellet, 0.15);
    init_loot_table(&RR_MOB_DATA[rr_mob_id_ornithomimus].loot[1],
                    rr_petal_id_feather, 0.05);

    init_loot_table(&RR_MOB_DATA[rr_mob_id_ankylosaurus].loot[0],
                    rr_petal_id_club, 0.1);
    init_loot_table(&RR_MOB_DATA[rr_mob_id_ankylosaurus].loot[1],
                    rr_petal_id_gravel, 0.05);
    
    init_loot_table(&RR_MOB_DATA[rr_mob_id_meteor].loot[0],
                    rr_petal_id_magnet, 1);
    init_loot_table(&RR_MOB_DATA[rr_mob_id_meteor].loot[1],
                    rr_petal_id_uranium, 0.25);
    init_loot_table(&RR_MOB_DATA[rr_mob_id_meteor].loot[2],
                    rr_petal_id_lightning, 0.2);
    
    init_loot_table(&RR_MOB_DATA[rr_mob_id_quetzalcoatlus].loot[0],
                    rr_petal_id_droplet, 0.15);
    init_loot_table(&RR_MOB_DATA[rr_mob_id_quetzalcoatlus].loot[1],
                    rr_petal_id_fossil, 0.05);
    init_loot_table(&RR_MOB_DATA[rr_mob_id_quetzalcoatlus].loot[2],
                    rr_petal_id_beak, 0.1);
    
    init_loot_table(&RR_MOB_DATA[rr_mob_id_pectinodon].loot[0],
                    rr_petal_id_stick, 0.1);
    init_loot_table(&RR_MOB_DATA[rr_mob_id_pectinodon].loot[1],
                    rr_petal_id_feather, 0.05);
    
    init_loot_table(&RR_MOB_DATA[rr_mob_id_edmontosaurus].loot[0],
                    rr_petal_id_leaf, 0.05);
    init_loot_table(&RR_MOB_DATA[rr_mob_id_edmontosaurus].loot[1],
                    rr_petal_id_fossil, 0.1);
    init_loot_table(&RR_MOB_DATA[rr_mob_id_edmontosaurus].loot[2],
                    rr_petal_id_peas, 0.1);
    
    init_loot_table(&RR_MOB_DATA[rr_mob_id_king_mackarel].loot[0],
                    rr_petal_id_fish_egg, 0.1);
    init_loot_table(&RR_MOB_DATA[rr_mob_id_king_mackarel].loot[1],
                    rr_petal_id_scales, 1);

    init_loot_table(&RR_MOB_DATA[rr_mob_id_sea_snail].loot[0],
                    rr_petal_id_shell, 0.1);
    init_loot_table(&RR_MOB_DATA[rr_mob_id_sea_snail].loot[1],
                    rr_petal_id_web, 0.1);

    init_loot_table(&RR_MOB_DATA[rr_mob_id_seagull].loot[0],
                    rr_petal_id_feather, 0.1);
    init_loot_table(&RR_MOB_DATA[rr_mob_id_seagull].loot[1],
                    rr_petal_id_beak, 0.1);

    init_loot_table(&RR_MOB_DATA[rr_mob_id_kelp].loot[0],
                    rr_petal_id_kelp, 0.1);
}

static void init_maze()
{
    #define offset(a,b) \
    ((x + a < 0 || y + b < 0 || x + a >= RR_MAZE_DIM/2 || y + b >= RR_MAZE_DIM/2) ? 0 : RR_MAZE_TEMPLATE_HELL_CREEK[x+a][y+b])

    for (int32_t x = 0; x < RR_MAZE_DIM/2; ++x)
    {
        for (int32_t y = 0; y < RR_MAZE_DIM/2; ++y)
        {
            //top left
            uint8_t this_tile = RR_MAZE_TEMPLATE_HELL_CREEK[x][y];
            uint8_t top = offset(0,-1);
            uint8_t bottom = offset(0,1);
            if (this_tile)
            {
                if (top == 0)
                {
                    if (offset(-1,0) == 0)
                        RR_MAZE_HELL_CREEK[x*2][y*2] = 7;
                    else
                        RR_MAZE_HELL_CREEK[x*2][y*2] = this_tile;
                    if (offset(1,0) == 0)
                        RR_MAZE_HELL_CREEK[x*2+1][y*2] = 5;
                    else
                        RR_MAZE_HELL_CREEK[x*2+1][y*2] = this_tile;
                }
                else
                {
                    RR_MAZE_HELL_CREEK[x*2][y*2] = this_tile;
                    RR_MAZE_HELL_CREEK[x*2+1][y*2] = this_tile;
                }
                if (bottom == 0)
                {
                    if (offset(-1,0) == 0)
                        RR_MAZE_HELL_CREEK[x*2][y*2+1] = 6;
                    else
                        RR_MAZE_HELL_CREEK[x*2][y*2+1] = this_tile;
                    if (offset(1,0) == 0)
                        RR_MAZE_HELL_CREEK[x*2+1][y*2+1] = 4;
                    else
                        RR_MAZE_HELL_CREEK[x*2+1][y*2+1] = this_tile;
                }
                else
                {
                    RR_MAZE_HELL_CREEK[x*2][y*2+1] = this_tile;
                    RR_MAZE_HELL_CREEK[x*2+1][y*2+1] = this_tile;
                }
            }
            else
            {
                if (top)
                {
                    if (offset(-1,0) && offset(-1,-1))
                        RR_MAZE_HELL_CREEK[x*2][y*2] = 15;
                    else
                        RR_MAZE_HELL_CREEK[x*2][y*2] = this_tile;
                    if (offset(1,0) && offset(1,-1))
                        RR_MAZE_HELL_CREEK[x*2+1][y*2] = 13;
                    else
                        RR_MAZE_HELL_CREEK[x*2+1][y*2] = this_tile;
                }
                else
                {
                    RR_MAZE_HELL_CREEK[x*2][y*2] = this_tile;
                    RR_MAZE_HELL_CREEK[x*2+1][y*2] = this_tile;
                }
                if (bottom)
                {
                    if (offset(-1,0) && offset(-1,1))
                        RR_MAZE_HELL_CREEK[x*2][y*2+1] = 14;
                    else
                        RR_MAZE_HELL_CREEK[x*2][y*2+1] = this_tile;
                    if (offset(1,0) && offset(1,1))
                        RR_MAZE_HELL_CREEK[x*2+1][y*2+1] = 12;
                    else
                        RR_MAZE_HELL_CREEK[x*2+1][y*2+1] = this_tile;
                }
                else
                {
                    RR_MAZE_HELL_CREEK[x*2][y*2+1] = this_tile;
                    RR_MAZE_HELL_CREEK[x*2+1][y*2+1] = this_tile;
                }
            }
        }
    }
}

void rr_static_data_init()
{
    init_game_coefficients();
    init_loot_tables();
    init_maze();
}

double xp_to_reach_level(uint32_t level)
{
    //xp it takes from level - 1 to level
    if (level <= 60)
        return level * pow(1.18, level);
    double base = level * pow(1.18, 60);
    for (uint32_t i = 60; i < level; ++i)
    {
        base *= rr_fclamp(1.18 - 0.01 * (i - 60), 1.1, 1.18);
    }
    return base;
}

uint8_t RR_MAZE_TEMPLATE_HELL_CREEK[RR_MAZE_DIM/2][RR_MAZE_DIM/2] = {
    {0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1},
    {0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1},
    {0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1},
    {0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 0},
    {0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0},
    {0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0},
    {0, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1},
    {0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1},
    {0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1},
    {0, 1, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1},
    {0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
    {0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0},
    {0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0},
    {1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1},
    {1, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
    {1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 0},
    {1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1},
    {0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0}
};

uint8_t RR_MAZE_HELL_CREEK[RR_MAZE_DIM][RR_MAZE_DIM] = {0};
