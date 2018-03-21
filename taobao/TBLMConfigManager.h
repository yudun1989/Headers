//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;
@protocol ConfigCenterProtocalForLayerManager;

@interface TBLMConfigManager : NSObject
{
    _Bool _isConfigInitial;
    id <ConfigCenterProtocalForLayerManager> _configCenterInstance;
    NSDictionary *_pageToBizConfigDict;
}

@property(copy, nonatomic) NSDictionary *pageToBizConfigDict; // @synthesize pageToBizConfigDict=_pageToBizConfigDict;
@property(nonatomic) _Bool isConfigInitial; // @synthesize isConfigInitial=_isConfigInitial;
@property(retain, nonatomic) id <ConfigCenterProtocalForLayerManager> configCenterInstance; // @synthesize configCenterInstance=_configCenterInstance;
- (void).cxx_destruct;
- (id)getBizConfigForPage:(id)arg1;
- (void)configAnalyseFinished;
- (id)generateBizConfigForID:(id)arg1;
- (id)getConfigByKey:(id)arg1;
- (void)analyseConfigWithCertainJSON:(_Bool)arg1;
- (id)initWithConfigCenter:(id)arg1;

@end

