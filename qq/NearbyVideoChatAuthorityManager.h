//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, QQOIDBSSORequest;

@interface NearbyVideoChatAuthorityManager : NSObject
{
    _Bool _isRequestingAuthority;
    _Bool _isRequestingReport;
    QQOIDBSSORequest *_authorityReq;
    NSArray *_authResults;
    QQOIDBSSORequest *_reportReq;
}

+ (id)sharedInstance;
@property(retain, nonatomic) QQOIDBSSORequest *reportReq; // @synthesize reportReq=_reportReq;
@property(nonatomic) _Bool isRequestingReport; // @synthesize isRequestingReport=_isRequestingReport;
@property(retain, nonatomic) NSArray *authResults; // @synthesize authResults=_authResults;
@property(nonatomic) _Bool isRequestingAuthority; // @synthesize isRequestingAuthority=_isRequestingAuthority;
@property(retain, nonatomic) QQOIDBSSORequest *authorityReq; // @synthesize authorityReq=_authorityReq;
- (void).cxx_destruct;
- (void)requestAuthorityWithFilterType:(unsigned long long)arg1;
- (void)reportWithUin:(unsigned long long)arg1 reportType:(unsigned int)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)getAuthorityWithType:(unsigned int)arg1;
- (void)loadAuthority;

@end

