//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVFSPrivateStore, NSString;

@interface AVFSPrivateCache : NSObject
{
    AVFSPrivateStore *_privateStore;
    NSString *_moduleName;
}

@property(readonly, copy) NSString *moduleName; // @synthesize moduleName=_moduleName;
- (void).cxx_destruct;
- (void)updateTimeForKey:(id)arg1 extendKey:(id)arg2 source:(unsigned long long)arg3;
- (id)cleanItems:(long long)arg1 limitSize:(long long)arg2;
- (long long)totalSize;
- (void)removeKey:(id)arg1 extendKey:(id)arg2 source:(unsigned long long)arg3;
- (void)setKey:(id)arg1 extendKey:(id)arg2 size:(long long)arg3 options:(unsigned long long)arg4 source:(unsigned long long)arg5;
- (id)initWithModule:(id)arg1;

@end

