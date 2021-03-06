/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2014 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_STATE_H
#define LCF_RPG_STATE_H

// Headers
#include <string>

/**
 * RPG::State class.
 */
namespace RPG {
	class State {
	public:
		enum Persistence {
			Persistence_ends = 0,
			Persistence_persists = 1
		};
		enum Restriction {
			Restriction_normal = 0,
			Restriction_do_nothing = 1,
			Restriction_attack_enemy = 2,
			Restriction_attack_ally = 3
		};
		enum AffectType {
			AffectType_half = 0,
			AffectType_double = 1,
			AffectType_nothing = 2
		};
		enum ChangeType {
			ChangeType_lose = 0,
			ChangeType_gain = 1,
			ChangeType_nothing = 2
		};

		State();

		int ID;
		std::string name;
		int type;
		int color;
		int priority;
		int restriction;
		int a_rate;
		int b_rate;
		int c_rate;
		int d_rate;
		int e_rate;
		int hold_turn;
		int auto_release_prob;
		int release_by_damage;
		int affect_type;
		bool affect_attack;
		bool affect_defense;
		bool affect_spirit;
		bool affect_agility;
		int reduce_hit_ratio;
		bool avoid_attacks;
		bool reflect_magic;
		bool cursed;
		int battler_animation_id;
		bool restrict_skill;
		int restrict_skill_level;
		bool restrict_magic;
		int restrict_magic_level;
		int hp_change_type;
		int sp_change_type;
		std::string message_actor;
		std::string message_enemy;
		std::string message_already;
		std::string message_affected;
		std::string message_recovery;
		int hp_change_max;
		int hp_change_val;
		int hp_change_map_val;
		int hp_change_map_steps;
		int sp_change_max;
		int sp_change_val;
		int sp_change_map_val;
		int sp_change_map_steps;
	};
}

#endif
