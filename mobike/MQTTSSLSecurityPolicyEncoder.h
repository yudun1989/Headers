//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQTTCFSocketEncoder.h"

@class MQTTSSLSecurityPolicy, NSString;

@interface MQTTSSLSecurityPolicyEncoder : MQTTCFSocketEncoder
{
    _Bool _securityPolicyApplied;
    MQTTSSLSecurityPolicy *_securityPolicy;
    NSString *_securityDomain;
}

@property(nonatomic) _Bool securityPolicyApplied; // @synthesize securityPolicyApplied=_securityPolicyApplied;
@property(retain, nonatomic) NSString *securityDomain; // @synthesize securityDomain=_securityDomain;
@property(retain, nonatomic) MQTTSSLSecurityPolicy *securityPolicy; // @synthesize securityPolicy=_securityPolicy;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (_Bool)applySSLSecurityPolicy:(id)arg1 withEvent:(unsigned long long)arg2;
- (id)init;

@end

