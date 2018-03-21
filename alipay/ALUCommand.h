//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface ALUCommand : NSObject
{
    long long _commandType;
    long long _scopeType;
    NSString *_targetClassName;
    NSDictionary *_extParams;
}

+ (id)cmdWithCommandType:(long long)arg1 onTargetClassName:(id)arg2 scopeType:(long long)arg3 extParams:(id)arg4;
+ (id)cmdWithCommandType:(long long)arg1 onTargetClassName:(id)arg2 scopeType:(long long)arg3;
@property(readonly, nonatomic) NSDictionary *extParams; // @synthesize extParams=_extParams;
@property(retain, nonatomic) NSString *targetClassName; // @synthesize targetClassName=_targetClassName;
@property(readonly, nonatomic) long long scopeType; // @synthesize scopeType=_scopeType;
@property(readonly, nonatomic) long long commandType; // @synthesize commandType=_commandType;
- (void).cxx_destruct;
- (id)initWithCommandType:(long long)arg1 onTargetClassName:(id)arg2 scopeType:(long long)arg3 extParams:(id)arg4;
- (id)initWithCommandType:(long long)arg1 onTargetClassName:(id)arg2 scopeType:(long long)arg3;

@end

