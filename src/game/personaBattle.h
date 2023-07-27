extern s8 gSelectedBattleCommand;
extern s8 gSelectedSkillIndex;
extern s16 gBattleOptionRotationTimer;
extern char *optionText[];
extern char *optionDescriptionText[];
extern u16 gPersonaMenuFlags;
extern s8 gSelectedEnemy;
extern u8 gSelectorCooldown;

enum PersonaMenuFlags {
    PERSONA_MENU_FLAGS_NONE         = /* 0x0000 */ (0 <<  0),
    PERSONA_MENU_FLAGS_MAIN_TEXT    = /* 0x0001 */ (1 <<  0),
    PERSONA_MENU_FLAGS_ATTACK_TEXT  = /* 0x0002 */ (1 <<  1),
    PERSONA_MENU_FLAGS_SKILL_TEXT  = /* 0x0004 */ (1 <<  2),

};