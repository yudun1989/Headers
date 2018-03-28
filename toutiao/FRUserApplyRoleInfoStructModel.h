//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber;

@interface FRUserApplyRoleInfoStructModel : JSONModel
{
    NSNumber *_owner_forum_length;
    NSNumber *_apply_owner_forum_length;
    NSNumber *_vice_owner_forum_length;
    NSNumber *_apply_vice_owner_forum_length;
    NSNumber *_user_to_forum_owner;
    NSNumber *_user_to_forum_vice_owner;
}

@property(retain, nonatomic) NSNumber *user_to_forum_vice_owner; // @synthesize user_to_forum_vice_owner=_user_to_forum_vice_owner;
@property(retain, nonatomic) NSNumber *user_to_forum_owner; // @synthesize user_to_forum_owner=_user_to_forum_owner;
@property(retain, nonatomic) NSNumber *apply_vice_owner_forum_length; // @synthesize apply_vice_owner_forum_length=_apply_vice_owner_forum_length;
@property(retain, nonatomic) NSNumber *vice_owner_forum_length; // @synthesize vice_owner_forum_length=_vice_owner_forum_length;
@property(retain, nonatomic) NSNumber *apply_owner_forum_length; // @synthesize apply_owner_forum_length=_apply_owner_forum_length;
@property(retain, nonatomic) NSNumber *owner_forum_length; // @synthesize owner_forum_length=_owner_forum_length;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

