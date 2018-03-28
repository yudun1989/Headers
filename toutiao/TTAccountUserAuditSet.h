//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class TTAccountMediaUserAuditEntity, TTAccountUserAuditEntity, TTAccountVerifiedUserAuditEntity;

@interface TTAccountUserAuditSet : NSObject <NSCopying, NSSecureCoding>
{
    TTAccountUserAuditEntity *_currentUserEntity;
    TTAccountVerifiedUserAuditEntity *_verifiedUserAuditEntity;
    TTAccountMediaUserAuditEntity *_pgcUserAuditEntity;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)isUGCUser;
+ (_Bool)isPGCUser;
@property(retain, nonatomic) TTAccountMediaUserAuditEntity *pgcUserAuditEntity; // @synthesize pgcUserAuditEntity=_pgcUserAuditEntity;
@property(retain, nonatomic) TTAccountVerifiedUserAuditEntity *verifiedUserAuditEntity; // @synthesize verifiedUserAuditEntity=_verifiedUserAuditEntity;
@property(retain, nonatomic) TTAccountUserAuditEntity *currentUserEntity; // @synthesize currentUserEntity=_currentUserEntity;
- (void).cxx_destruct;
- (id)toOriginalDictionary;
- (id)toDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithUserModel:(id)arg1;
- (void)setUserAvatarURLString:(id)arg1;
- (void)setUserDescription:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)userAvatarURLString;
- (id)userDescription;
- (id)username;
- (id)showingUserAvatarURLString;
- (id)showingUserDescription;
- (id)showingUsername;
- (_Bool)modifyUserInfoEnabled;
- (_Bool)isAuditing;
- (_Bool)isAuditingUGCUser;

@end

