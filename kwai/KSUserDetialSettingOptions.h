//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface KSUserDetialSettingOptions : NSObject
{
    NSString *_privacy_user;
    NSString *_privacy_location;
    NSString *_message_deny;
    NSString *_comment_deny;
    NSString *_download_deny;
}

@property(retain, nonatomic) NSString *download_deny; // @synthesize download_deny=_download_deny;
@property(retain, nonatomic) NSString *comment_deny; // @synthesize comment_deny=_comment_deny;
@property(retain, nonatomic) NSString *message_deny; // @synthesize message_deny=_message_deny;
@property(retain, nonatomic) NSString *privacy_location; // @synthesize privacy_location=_privacy_location;
@property(retain, nonatomic) NSString *privacy_user; // @synthesize privacy_user=_privacy_user;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

