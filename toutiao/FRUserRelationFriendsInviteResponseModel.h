//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTResponseModel.h"

@class FRInviteFriendsDataStructModel, NSString;
@protocol Optional;

@interface FRUserRelationFriendsInviteResponseModel : TTResponseModel
{
    NSString *_message;
    FRInviteFriendsDataStructModel *_data;
    NSString<Optional> *_error_tips;
}

@property(retain, nonatomic) NSString<Optional> *error_tips; // @synthesize error_tips=_error_tips;
@property(retain, nonatomic) FRInviteFriendsDataStructModel *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

