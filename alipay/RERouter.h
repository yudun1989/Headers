//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface RERouter : NSObject
{
    NSMutableArray *_routerRules;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableArray *routerRules; // @synthesize routerRules=_routerRules;
- (void).cxx_destruct;
- (void)addMonitorPoint:(id)arg1;
- (void)performRouter:(id)arg1 launchOptions:(id)arg2 isResume:(_Bool)arg3;
- (void)exitRouter;
- (id)init;

@end

