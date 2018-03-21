//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, TBCPhotoBrowseModel;

@protocol TBRDPBDataTransferProtocol <NSObject>
@property(retain, nonatomic) NSDictionary *commonTrackParams;
@property(retain, nonatomic) NSDictionary *pageTrackParams;
@property(copy, nonatomic) NSString *pageName;
@property(retain, nonatomic) NSDictionary *requestParams;
@property(retain, nonatomic) id localData;

@optional
- (TBCPhotoBrowseModel *)tbc_mFromModel:(id)arg1;
- (void)requestDataWithParams:(id)arg1 complete:(void (^)(NSArray *, NSArray *, NSDictionary *, _Bool, Error *))arg2;
- (void)transferLocalDataComplete:(void (^)(NSArray *, NSArray *, long long))arg1;
@end

