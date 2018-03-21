//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

#import <QQMainProject/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface PluginModel : QQModel <NSCopying>
{
    NSString *_strPluginPkgName;
    int _pluginVersion;
    short _resSubType;
    short _lanType;
    short _priority;
    NSString *_strResName;
    NSString *_strResDesc;
    NSString *_strBigPicUrl;
    NSString *_strSmallPicUrl;
    NSString *_strQQUin;
    NSString *_strQQNick;
    NSString *_strPluginEntranceName;
    NSString *_strPluginEntranceUrl;
    NSMutableArray *_setArray;
    _Bool _isEnable;
    _Bool _isNew;
    _Bool _isDisable;
    _Bool _isSwitchoff;
    unsigned long long _ullSwitchModifyTS;
    _Bool _forceDisplay;
    int _section;
    NSString *_strSimpleDes;
    int _pluginType;
    _Bool _needShowNew;
    _Bool _showNewForNewUser;
    NSString *_pluginSetTips;
    NSString *_pluginBgColor;
    NSString *_pluginIconUrl;
    NSString *_pluginDetailDesc;
    int _xo;
    _Bool isPushEnabled;
    _Bool _fullConfig;
    unsigned int resID;
}

@property(copy, nonatomic) NSString *pluginDetailDesc; // @synthesize pluginDetailDesc=_pluginDetailDesc;
@property(copy, nonatomic) NSString *pluginIconUrl; // @synthesize pluginIconUrl=_pluginIconUrl;
@property(copy, nonatomic) NSString *pluginBgColor; // @synthesize pluginBgColor=_pluginBgColor;
@property(copy, nonatomic) NSString *pluginSetTips; // @synthesize pluginSetTips=_pluginSetTips;
@property(nonatomic) _Bool showNewForNewUser; // @synthesize showNewForNewUser=_showNewForNewUser;
@property(nonatomic) _Bool needShowNew; // @synthesize needShowNew=_needShowNew;
@property(nonatomic) int pluginType; // @synthesize pluginType=_pluginType;
@property(nonatomic) int section; // @synthesize section=_section;
@property(nonatomic) _Bool forceDisplay; // @synthesize forceDisplay=_forceDisplay;
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(nonatomic) _Bool isEnable; // @synthesize isEnable=_isEnable;
@property(retain, nonatomic) NSMutableArray *setArray; // @synthesize setArray=_setArray;
@property(nonatomic) _Bool fullConfig; // @synthesize fullConfig=_fullConfig;
@property(copy, nonatomic) NSString *strPluginEntranceUrl; // @synthesize strPluginEntranceUrl=_strPluginEntranceUrl;
@property(copy, nonatomic) NSString *strPluginEntranceName; // @synthesize strPluginEntranceName=_strPluginEntranceName;
@property(copy, nonatomic) NSString *strQQNick; // @synthesize strQQNick=_strQQNick;
@property(copy, nonatomic) NSString *strQQUin; // @synthesize strQQUin=_strQQUin;
@property(copy, nonatomic) NSString *strSmallPicUrl; // @synthesize strSmallPicUrl=_strSmallPicUrl;
@property(copy, nonatomic) NSString *strBigPicUrl; // @synthesize strBigPicUrl=_strBigPicUrl;
@property(copy, nonatomic) NSString *strResDesc; // @synthesize strResDesc=_strResDesc;
@property(copy, nonatomic) NSString *strResName; // @synthesize strResName=_strResName;
@property(nonatomic) short priority; // @synthesize priority=_priority;
@property(nonatomic) short lanType; // @synthesize lanType=_lanType;
@property(nonatomic) short resSubType; // @synthesize resSubType=_resSubType;
@property(nonatomic) int pluginVersion; // @synthesize pluginVersion=_pluginVersion;
@property(copy, nonatomic) NSString *strPluginPkgName; // @synthesize strPluginPkgName=_strPluginPkgName;
@property(nonatomic) unsigned long long ullSwitchModifyTS; // @synthesize ullSwitchModifyTS=_ullSwitchModifyTS;
@property(nonatomic) _Bool isSwitchoff; // @synthesize isSwitchoff=_isSwitchoff;
@property(nonatomic) _Bool isDisable; // @synthesize isDisable=_isDisable;
@property(copy, nonatomic) NSString *strSimpleDes; // @synthesize strSimpleDes=_strSimpleDes;
@property(nonatomic) _Bool isPushEnabled; // @synthesize isPushEnabled;
@property(nonatomic) unsigned int resID; // @synthesize resID;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

