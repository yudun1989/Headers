//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface AAMSAuthInfo : NSObject
{
    NSString *_authId;
    NSString *_title;
    NSString *_targetLogo;
    NSString *_content;
    NSString *_authType;
}

@property(retain, nonatomic) NSString *authType; // @synthesize authType=_authType;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *targetLogo; // @synthesize targetLogo=_targetLogo;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *authId; // @synthesize authId=_authId;
- (void).cxx_destruct;

@end

