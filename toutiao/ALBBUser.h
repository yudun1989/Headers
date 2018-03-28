//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ALBBUser : NSObject
{
    NSString *_nick;
    NSString *_avatarUrl;
    NSString *_openId;
    NSString *_openSid;
    NSString *_topAccessToken;
    NSString *_topAuthCode;
}

@property(readonly, copy, nonatomic) NSString *topAuthCode; // @synthesize topAuthCode=_topAuthCode;
@property(readonly, copy, nonatomic) NSString *topAccessToken; // @synthesize topAccessToken=_topAccessToken;
@property(readonly, copy, nonatomic) NSString *openSid; // @synthesize openSid=_openSid;
@property(readonly, copy, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(readonly, copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(readonly, copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
- (void).cxx_destruct;
- (id)ALBBUserDescription;
- (id)initWithNick:(id)arg1 avatarUrl:(id)arg2 openId:(id)arg3 openSid:(id)arg4 topAccessToken:(id)arg5 topAuthCode:(id)arg6;

@end

