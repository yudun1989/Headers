//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTLongLinkBase : NSObject
{
}

+ (_Bool)isSkeyExist:(id)arg1 biz:(id)arg2 keyDicId:(id)arg3;
+ (id)getCdidKey;
+ (void)saveCdidKey:(id)arg1;
+ (void)removeDicCompensateKeyWithKeyDicId:(id)arg1 bucketKey:(id)arg2;
+ (id)getDicWithMessageCompensateKey;
+ (void)saveDicWithMessageCompensateKey:(id)arg1;
+ (id)getDicWithMessageKey;
+ (void)saveDicWithMessageKey:(id)arg1;
+ (void)initialize;

@end

