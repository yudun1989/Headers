//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SimpleUserInfo, SimpleUserSigInfo;

@interface SimpleDataCenter : NSObject
{
    SimpleUserInfo *sUserInfo_;
    SimpleUserSigInfo *sUserSigInfo_;
}

+ (id)sharedInstance;
@property(retain, nonatomic) SimpleUserSigInfo *sUserSigInfo_; // @synthesize sUserSigInfo_;
@property(retain, nonatomic) SimpleUserInfo *sUserInfo_; // @synthesize sUserInfo_;
- (void).cxx_destruct;
- (void)updateSig:(id)arg1 st:(id)arg2 gtkey_st:(id)arg3;
- (void)setUserInfo:(id)arg1 Uid:(unsigned int)arg2 NickName:(id)arg3;
- (id)init;

@end

