//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTSettingGeneralEntry.h"

@class NSString;

@interface TTSettingMineTabEntry : TTSettingGeneralEntry
{
    _Bool _isImportantMessage;
    NSString *_iconName;
    NSString *_avatarUrlString;
    NSString *_userAuthInfo;
    NSString *_msgID;
    NSString *_actionType;
    NSString *_lastImageUrl;
    NSString *_tips;
    NSString *_followChannelTips;
    NSString *_userName;
    NSString *_action;
    double _lastClickedTimeInterval;
    CDUnknownBlockType _switchChangedBlock;
}

+ (void)nightModeSwitchValueChanged:(id)arg1;
+ (void)openKepler:(id)arg1;
+ (void)setSwitchChangedBlockForEntry:(id)arg1;
+ (void)extraStatisticsForEntry:(id)arg1;
+ (void)setUpdateBlockForEntry:(id)arg1;
+ (void)setEnterBlockForEntry:(id)arg1;
+ (void)setBlockForEntry:(id)arg1;
+ (void)openURLForEntry:(id)arg1 clearHint:(_Bool)arg2;
+ (id)settingsEntry;
+ (id)feedbackEntry;
+ (id)gossipEntry;
+ (id)ttMallEntry;
+ (id)privateLetterEntry;
+ (id)messageEntry;
+ (id)workLibraryEntryInterceptor:(id)arg1;
+ (id)workLibraryEntry;
+ (id)getWorkLibraryEntryUrlString:(id)arg1;
+ (id)followEntry;
+ (id)iPadMomentEntry;
+ (id)iPadHistoryEntry;
+ (id)iPadFavorEntry;
+ (id)iPadNightModeEntry;
+ (id)iPhoneTopFunctionEntry;
+ (id)initWithEntryType:(unsigned long long)arg1;
@property(copy, nonatomic) CDUnknownBlockType switchChangedBlock; // @synthesize switchChangedBlock=_switchChangedBlock;
@property(nonatomic) double lastClickedTimeInterval; // @synthesize lastClickedTimeInterval=_lastClickedTimeInterval;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(nonatomic) _Bool isImportantMessage; // @synthesize isImportantMessage=_isImportantMessage;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *followChannelTips; // @synthesize followChannelTips=_followChannelTips;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(copy, nonatomic) NSString *lastImageUrl; // @synthesize lastImageUrl=_lastImageUrl;
@property(copy, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(copy, nonatomic) NSString *msgID; // @synthesize msgID=_msgID;
@property(copy, nonatomic) NSString *userAuthInfo; // @synthesize userAuthInfo=_userAuthInfo;
@property(copy, nonatomic) NSString *avatarUrlString; // @synthesize avatarUrlString=_avatarUrlString;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

