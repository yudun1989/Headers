//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKHttpRequest.h"

@class NSString;

@interface MovieSDKListDataRequest : MovieSDKHttpRequest
{
    long long _getListRequestType;
    unsigned long long _page;
    unsigned long long _count;
}

@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long page; // @synthesize page=_page;
@property(nonatomic) long long getListRequestType; // @synthesize getListRequestType=_getListRequestType;
- (id)params;
@property(readonly, nonatomic) NSString *countStr;
@property(readonly, nonatomic) NSString *pageStr;
@property(readonly, nonatomic) long long getListSupportType;
- (id)init;

@end

