//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSToString.h"

@class NSString;

@interface MSValidatePasswordRequest : MSToString
{
    NSString *_loginId;
    NSString *_password;
    NSString *_encryType;
    NSString *_passwordType;
}

@property(retain, nonatomic) NSString *passwordType; // @synthesize passwordType=_passwordType;
@property(retain, nonatomic) NSString *encryType; // @synthesize encryType=_encryType;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *loginId; // @synthesize loginId=_loginId;
- (void).cxx_destruct;

@end

