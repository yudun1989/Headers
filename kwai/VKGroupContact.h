//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VKApiObject.h"

@class NSNumber, NSString;

@interface VKGroupContact : VKApiObject
{
    NSNumber *_user_id;
    NSString *_desc;
    NSString *_email;
}

@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSNumber *user_id; // @synthesize user_id=_user_id;
- (void).cxx_destruct;

@end

