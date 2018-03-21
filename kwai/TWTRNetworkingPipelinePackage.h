//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, NSURLRequest;
@protocol TWTRSessionStore;

@interface TWTRNetworkingPipelinePackage : NSObject <NSCopying>
{
    NSURLRequest *_request;
    id <TWTRSessionStore> _sessionStore;
    NSString *_userID;
    CDUnknownBlockType _callback;
}

+ (id)packageWithRequest:(id)arg1 sessionStore:(id)arg2 userID:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(readonly, copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(readonly, nonatomic) id <TWTRSessionStore> sessionStore; // @synthesize sessionStore=_sessionStore;
@property(readonly, copy, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequest:(id)arg1 sessionStore:(id)arg2 userID:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

