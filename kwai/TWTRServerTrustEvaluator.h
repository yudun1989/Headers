//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TWTRServerTrustEvaluator : NSObject
{
    NSArray *_pinnedPublicKeys;
}

+ (void)cacheValidCertificateChain:(struct __SecTrust *)arg1;
+ (_Bool)isCertificateChainCached:(struct __SecTrust *)arg1;
+ (void)hexDecode:(const char *)arg1 decoded:(char *)arg2;
+ (_Bool)isPinnedSPKI:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSArray *pinnedPublicKeys; // @synthesize pinnedPublicKeys=_pinnedPublicKeys;
- (void).cxx_destruct;
- (_Bool)evaluateServerTrust:(struct __SecTrust *)arg1 forDomain:(id)arg2;

@end

