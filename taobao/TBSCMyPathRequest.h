//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBMTOPBaseRequest.h"

@class NSString;

@interface TBSCMyPathRequest : TBMTOPBaseRequest
{
    _Bool _isUmp;
    NSString *_time;
    long long _page;
    long long _pageSize;
    long long _cat1;
    NSString *_scm;
    NSString *_appName;
    NSString *_wangwang;
    NSString *_email;
    NSString *_userId;
}

@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *wangwang; // @synthesize wangwang=_wangwang;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(nonatomic) _Bool isUmp; // @synthesize isUmp=_isUmp;
@property(nonatomic) long long cat1; // @synthesize cat1=_cat1;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
- (void).cxx_destruct;
- (id)init;

@end

