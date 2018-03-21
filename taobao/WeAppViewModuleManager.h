//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, WeAppNetwork;

@interface WeAppViewModuleManager : NSObject
{
    WeAppNetwork *_network;
    NSMutableDictionary *_publicModules;
    NSMutableDictionary *_innerModules;
}

+ (id)getModuleVerify;
@property(retain, nonatomic) NSMutableDictionary *innerModules; // @synthesize innerModules=_innerModules;
@property(retain, nonatomic) NSMutableDictionary *publicModules; // @synthesize publicModules=_publicModules;
@property(nonatomic) __weak WeAppNetwork *network; // @synthesize network=_network;
- (void).cxx_destruct;
- (void)updateModule;
- (void)setInnerViewModules:(id)arg1;
- (void)setPublicViewModules:(id)arg1;
- (void)setupModulestyleBinding:(id)arg1 byConfig:(id)arg2;
- (void)setupModuleDataBinding:(id)arg1 byConfig:(id)arg2;
- (id)setupModuleMap:(id)arg1 byConfig:(id)arg2;
- (id)getModuleByConfig:(id)arg1;
- (void)addModules:(id)arg1;
- (id)initWithPage:(id)arg1;

@end

