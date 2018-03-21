//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface ArkAIConfig : NSObject
{
    _Bool _checkUnread;
    _Bool _showAppIcon;
    _Bool _turnOn;
    _Bool _serverDisable;
    _Bool _serverMsgFlowDisable;
    _Bool _serverInputDisable;
    _Bool _atbabyqDisable;
    _Bool _graybarDisable;
    _Bool _termsSwitch;
    int _bubbleCloseTime;
    int _arkServiceType;
    int _blackbarAppearNumPerDay;
    int _blackbarAppearDays;
    int _babyqBubbleDuration;
    int _cardNum;
    int _cardPerAppNum;
    int _graybarType;
    int _graybarAppearNum;
    int _reportNum;
    NSString *_watermarkTips;
    NSArray *_inputGuideTips;
    NSString *_noresultTips;
    NSArray *_noresultItems;
    NSArray *_graybarConfigs;
    NSString *_termsUrl;
    NSString *_termsText;
}

+ (id)genPerUinKey:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) _Bool termsSwitch; // @synthesize termsSwitch=_termsSwitch;
@property(copy, nonatomic) NSString *termsText; // @synthesize termsText=_termsText;
@property(copy, nonatomic) NSString *termsUrl; // @synthesize termsUrl=_termsUrl;
@property(nonatomic) int reportNum; // @synthesize reportNum=_reportNum;
@property(copy, nonatomic) NSArray *graybarConfigs; // @synthesize graybarConfigs=_graybarConfigs;
@property(nonatomic) int graybarAppearNum; // @synthesize graybarAppearNum=_graybarAppearNum;
@property(nonatomic) int graybarType; // @synthesize graybarType=_graybarType;
@property(nonatomic) _Bool graybarDisable; // @synthesize graybarDisable=_graybarDisable;
@property(copy, nonatomic) NSArray *noresultItems; // @synthesize noresultItems=_noresultItems;
@property(copy, nonatomic) NSString *noresultTips; // @synthesize noresultTips=_noresultTips;
@property(nonatomic) int cardPerAppNum; // @synthesize cardPerAppNum=_cardPerAppNum;
@property(nonatomic) int cardNum; // @synthesize cardNum=_cardNum;
@property(nonatomic) int babyqBubbleDuration; // @synthesize babyqBubbleDuration=_babyqBubbleDuration;
@property(copy, nonatomic) NSArray *inputGuideTips; // @synthesize inputGuideTips=_inputGuideTips;
@property(nonatomic) int blackbarAppearDays; // @synthesize blackbarAppearDays=_blackbarAppearDays;
@property(nonatomic) int blackbarAppearNumPerDay; // @synthesize blackbarAppearNumPerDay=_blackbarAppearNumPerDay;
@property(copy, nonatomic) NSString *watermarkTips; // @synthesize watermarkTips=_watermarkTips;
@property(nonatomic) int arkServiceType; // @synthesize arkServiceType=_arkServiceType;
@property(nonatomic) _Bool atbabyqDisable; // @synthesize atbabyqDisable=_atbabyqDisable;
@property(nonatomic) _Bool serverInputDisable; // @synthesize serverInputDisable=_serverInputDisable;
@property(nonatomic) _Bool serverMsgFlowDisable; // @synthesize serverMsgFlowDisable=_serverMsgFlowDisable;
@property(nonatomic) _Bool serverDisable; // @synthesize serverDisable=_serverDisable;
@property(nonatomic) _Bool turnOn; // @synthesize turnOn=_turnOn;
@property(nonatomic) _Bool showAppIcon; // @synthesize showAppIcon=_showAppIcon;
@property(nonatomic) int bubbleCloseTime; // @synthesize bubbleCloseTime=_bubbleCloseTime;
@property(nonatomic) _Bool checkUnread; // @synthesize checkUnread=_checkUnread;
- (void).cxx_destruct;
- (_Bool)showAppAuthorizationSetting;
- (id)getShowAPPIDList;
- (_Bool)setAIDictConfig:(id)arg1;
- (id)getAIDictConfig;
- (_Bool)isArkServiceEnabled;
- (_Bool)isAtBabyqEnabled;
- (_Bool)isReportEnabled;
- (_Bool)isInputEnabled;
- (_Bool)isMsgFlowEnabled;
- (_Bool)isEnabled;
- (void)setArkMsgAnalyzeList:(id)arg1 keyName:(id)arg2;
- (void)setArkMsgAnalyzeKeyWord:(id)arg1 keyName:(id)arg2;
- (void)setArkMsgAnalyzeDisable:(id)arg1 keyName:(id)arg2;
- (id)loadArrayAppSettingWithKeyName:(id)arg1;
- (id)loadStringAppSettingWithKeyName:(id)arg1;
- (int)loadIntAppSettingWithKeyName:(id)arg1;
- (_Bool)loadBoolAppSettingWithKeyName:(id)arg1;
- (void)loadArkMsgAppSetting;
- (void)onLoginSuccess;
- (_Bool)checkTurnOn;
- (id)init;

@end

