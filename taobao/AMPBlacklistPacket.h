//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPNetPacket.h"

@interface AMPBlacklistPacket : AMPNetPacket
{
    long long _pageNo;
    long long _pageSize;
}

@property(readonly, nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(readonly, nonatomic) long long pageNo; // @synthesize pageNo=_pageNo;
- (id)generateMtopBody;
- (id)generateMtopHeader;
- (id)initWithPageNo:(long long)arg1 pageSize:(long long)arg2;

@end

