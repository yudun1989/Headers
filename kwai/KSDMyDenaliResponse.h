//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSUBaseResponse.h"

@class KSDRecordsResponse, NSArray, NSDictionary, NSNumber, NSString;

@interface KSDMyDenaliResponse : KSUBaseResponse
{
    int _sentPhotoNum;
    int _receivedPhotoNum;
    NSString *_coverUrl;
    NSNumber *_totalRedpacks;
    NSNumber *_availableRedpacks;
    NSArray *_rollingBanners;
    NSArray *_photos;
    KSDRecordsResponse *_sentPhotos;
    KSDRecordsResponse *_receivedPhotos;
    long long _totalFen;
    long long _balance;
    NSNumber *_couponNum;
    NSDictionary *_notice;
    NSNumber *_resType;
    NSString *_activityId;
    NSString *_receivedReachLimit;
}

+ (id)mj_objectClassInArray;
@property(copy, nonatomic) NSString *receivedReachLimit; // @synthesize receivedReachLimit=_receivedReachLimit;
@property(copy, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSNumber *resType; // @synthesize resType=_resType;
@property(copy, nonatomic) NSDictionary *notice; // @synthesize notice=_notice;
@property(retain, nonatomic) NSNumber *couponNum; // @synthesize couponNum=_couponNum;
@property(nonatomic) long long balance; // @synthesize balance=_balance;
@property(nonatomic) long long totalFen; // @synthesize totalFen=_totalFen;
@property(retain, nonatomic) KSDRecordsResponse *receivedPhotos; // @synthesize receivedPhotos=_receivedPhotos;
@property(retain, nonatomic) KSDRecordsResponse *sentPhotos; // @synthesize sentPhotos=_sentPhotos;
@property(nonatomic) int receivedPhotoNum; // @synthesize receivedPhotoNum=_receivedPhotoNum;
@property(nonatomic) int sentPhotoNum; // @synthesize sentPhotoNum=_sentPhotoNum;
@property(copy, nonatomic) NSArray *photos; // @synthesize photos=_photos;
@property(copy, nonatomic) NSArray *rollingBanners; // @synthesize rollingBanners=_rollingBanners;
@property(retain, nonatomic) NSNumber *availableRedpacks; // @synthesize availableRedpacks=_availableRedpacks;
@property(retain, nonatomic) NSNumber *totalRedpacks; // @synthesize totalRedpacks=_totalRedpacks;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
- (void).cxx_destruct;

@end

