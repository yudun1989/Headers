//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PMBizManager : NSObject
{
    _Bool _isInit;
    NSMutableDictionary *_bizDict;
}

+ (id)key:(long long)arg1;
+ (void)registerBizClass:(Class)arg1;
+ (void)registerBiz:(long long)arg1 tag:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (void)registerBiz:(long long)arg1 callback:(CDUnknownBlockType)arg2;
+ (long long)msgFetchMode:(long long)arg1;
+ (void)setMsgFetchMode:(long long)arg1 mode:(long long)arg2;
+ (long long)subscribeMode:(long long)arg1;
+ (CDUnknownBlockType)getBizCallback:(long long)arg1 tag:(id)arg2;
+ (CDUnknownBlockType)getBizCallback:(long long)arg1;
+ (id)getBizAllCallback:(long long)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *bizDict; // @synthesize bizDict=_bizDict;
@property(nonatomic) _Bool isInit; // @synthesize isInit=_isInit;
- (void).cxx_destruct;

@end

