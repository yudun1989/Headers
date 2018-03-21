//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL, TBRule, TBShopRuleManager;

@interface TBShopUrlControl : NSObject
{
    NSString *_configGroupName;
    TBShopRuleManager *_ruleManager;
    NSURL *_curUrl;
    TBRule *_matchRule;
    NSString *_curStrUrl;
    NSString *_host;
    NSString *_bizType;
}

@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSString *curStrUrl; // @synthesize curStrUrl=_curStrUrl;
@property(retain, nonatomic) TBRule *matchRule; // @synthesize matchRule=_matchRule;
@property(retain, nonatomic) NSURL *curUrl; // @synthesize curUrl=_curUrl;
@property(retain, nonatomic) TBShopRuleManager *ruleManager; // @synthesize ruleManager=_ruleManager;
@property(retain, nonatomic) NSString *configGroupName; // @synthesize configGroupName=_configGroupName;
- (void).cxx_destruct;
- (id)fixedHost4rule:(id)arg1;
- (_Bool)regexMatch:(id)arg1 patten:(id)arg2;
- (void)ruleSetingsChanged;
- (void)checkUpdateRuleFile;
- (_Bool)matchRuleSet:(id)arg1;
- (_Bool)matchRuel:(id)arg1;
- (id)handleUrl:(id)arg1;
- (id)notifyName;
- (void)dealloc;
- (id)initWithConfigGroupName:(id)arg1 bizType:(id)arg2 resourceRuleVer:(id)arg3 ruleJson:(CDUnknownBlockType)arg4;

@end

