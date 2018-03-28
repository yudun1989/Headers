//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTApiParameter.h"

@class NSString;

@interface TTVideoFollowParameter : TTApiParameter
{
    NSString *_to_user_id;
    NSString *_account_id;
    NSString *_account_type;
    NSString *_device_id;
    NSString *_user_id;
}

@property(retain, nonatomic) NSString *user_id; // @synthesize user_id=_user_id;
@property(retain, nonatomic) NSString *device_id; // @synthesize device_id=_device_id;
@property(retain, nonatomic) NSString *account_type; // @synthesize account_type=_account_type;
@property(copy, nonatomic) NSString *account_id; // @synthesize account_id=_account_id;
@property(copy, nonatomic) NSString *to_user_id; // @synthesize to_user_id=_to_user_id;
- (void).cxx_destruct;
- (id)requestModel;

@end

