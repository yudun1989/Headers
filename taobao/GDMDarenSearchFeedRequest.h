//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDMMtopRequest.h"

@class NSArray;

@interface GDMDarenSearchFeedRequest : GDMMtopRequest
{
    NSArray *_feedArray;
}

@property(retain) NSArray *feedArray; // @synthesize feedArray=_feedArray;
- (void).cxx_destruct;
- (void)startLoadMoreFeedByKeyWord:(id)arg1 timestamp:(id)arg2 itemId:(id)arg3 finishBlock:(CDUnknownBlockType)arg4;
- (void)startSearchFeedsByKeyWord:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (_Bool)procResultDataFromJson:(id)arg1;
- (id)methodName;

@end

