//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface AliLaucherEnviroment : NSObject
{
    NSObject<OS_dispatch_queue> *_runEnvir;
}

+ (void)releaseInstance;
+ (id)shareInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *runEnvir; // @synthesize runEnvir=_runEnvir;
- (void).cxx_destruct;
- (void)addDelayedTask:(CDUnknownBlockType)arg1;
- (void)addTask:(CDUnknownBlockType)arg1;
- (id)init;

@end

