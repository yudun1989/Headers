//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTResponseMessage.h"

@class TTIMGroupMessageListIDL;

@interface TTIMGetGroupMessageResponse : TTResponseMessage
{
    TTIMGroupMessageListIDL *_groupMsgListIDL;
}

@property(retain, nonatomic) TTIMGroupMessageListIDL *groupMsgListIDL; // @synthesize groupMsgListIDL=_groupMsgListIDL;
- (void).cxx_destruct;
- (void)updateGroupMsgListIDLFromHttpModel:(id)arg1;
- (void)extractProto:(id)arg1;
- (id)init;

@end

