//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface NWAisle : NSObject
{
    _Bool _encrypt;
    _Bool _auth;
    NSString *_publickey;
    NSString *_protocol;
    NSString *_ip;
    unsigned long long _port;
}

@property(nonatomic) _Bool auth; // @synthesize auth=_auth;
@property(nonatomic) _Bool encrypt; // @synthesize encrypt=_encrypt;
@property(nonatomic) unsigned long long port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(retain, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) NSString *publickey; // @synthesize publickey=_publickey;
- (void).cxx_destruct;
- (id)init;

@end

