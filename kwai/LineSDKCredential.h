//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LineSDKAccessToken, NSOrderedSet;

@interface LineSDKCredential : NSObject
{
    LineSDKAccessToken *_accessToken;
    NSOrderedSet *_permissions;
}

@property(retain, nonatomic) NSOrderedSet *permissions; // @synthesize permissions=_permissions;
@property(retain, nonatomic) LineSDKAccessToken *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAccessToken:(id)arg1 permissions:(id)arg2;

@end

