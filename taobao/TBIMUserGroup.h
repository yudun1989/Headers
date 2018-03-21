//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBIMUserAMP.h"

#import "TBIMGroupUserAdapter-Protocol.h"

@class NSString, TBAMPGroupUser;

@interface TBIMUserGroup : TBIMUserAMP <TBIMGroupUserAdapter>
{
    TBAMPGroupUser *_groupUserdata;
}

@property(retain, nonatomic) TBAMPGroupUser *groupUserdata; // @synthesize groupUserdata=_groupUserdata;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)tagStyle;
- (id)uTag;
- (int)userType;
- (int)uType;
- (id)getDisplayName;
- (id)typeImageName;
- (unsigned long long)getIdentity;
- (id)getGroupId;
- (id)getNick;
- (id)getGroupNick;
- (_Bool)hasNoticeAuth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

