//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol WXNativeSecurityProtocol;

@interface TCMS4IOSUtils : NSObject
{
    unsigned long long _logLevel;
    CDUnknownBlockType _logImplBlock;
    CDUnknownBlockType _reachableBlock;
    id <WXNativeSecurityProtocol> _nativeSecurity;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <WXNativeSecurityProtocol> nativeSecurity; // @synthesize nativeSecurity=_nativeSecurity;
@property(copy, nonatomic) CDUnknownBlockType reachableBlock; // @synthesize reachableBlock=_reachableBlock;
@property(copy, nonatomic) CDUnknownBlockType logImplBlock; // @synthesize logImplBlock=_logImplBlock;
@property(nonatomic) unsigned long long logLevel; // @synthesize logLevel=_logLevel;
- (void).cxx_destruct;
- (_Bool)isReachable;
- (void)destroyAddrinfoHead:(struct addrinfo *)arg1;
- (struct addrinfo *)createAddrinfoHeadWithHostName:(id)arg1 port:(unsigned short)arg2 errorCode:(int *)arg3 errorInfo:(id *)arg4;
@property(readonly, nonatomic) NSString *localSocketPath;
- (id)init;

@end

