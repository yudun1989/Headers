//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPNetPacket.h"

@class NSString;

@interface AMPUserRelationshipPacket : AMPNetPacket
{
    NSString *_targetUserId;
}

@property(copy, nonatomic) NSString *targetUserId; // @synthesize targetUserId=_targetUserId;
- (void).cxx_destruct;
- (id)generateMtopBody;
- (id)generateMtopHeader;
- (id)initWithTargetUserId:(id)arg1;

@end

