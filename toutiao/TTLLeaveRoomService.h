//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTLAbstractService.h"

@class NSString;

@interface TTLLeaveRoomService : TTLAbstractService
{
    NSString *_roomID;
}

@property(retain, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
- (void).cxx_destruct;
- (void)leaveRoomWithRoomID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)constructParameter;
- (id)requestPath;

@end

