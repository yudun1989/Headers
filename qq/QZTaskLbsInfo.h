//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZoneModel.h>

@class NSMutableDictionary, NSString;

@interface QZTaskLbsInfo : QZoneModel
{
}

+ (id)convertFromLbsModel:(id)arg1;
- (id)convertToQZJLbsInfo;

// Remaining properties
@property(retain, nonatomic) NSString *lbsAddress; // @dynamic lbsAddress;
@property(nonatomic) long long lbsID; // @dynamic lbsID;
@property(retain, nonatomic) NSString *lbsIDString; // @dynamic lbsIDString;
@property(retain, nonatomic) NSString *lbsName; // @dynamic lbsName;
@property(nonatomic) long long lbsType; // @dynamic lbsType;
@property(retain, nonatomic) NSString *lbsX; // @dynamic lbsX;
@property(retain, nonatomic) NSString *lbsY; // @dynamic lbsY;
@property(nonatomic) long long poiOrderType; // @dynamic poiOrderType;
@property(nonatomic) long long poiPosition; // @dynamic poiPosition;
@property(nonatomic) long long poiType; // @dynamic poiType;
@property(retain, nonatomic) NSMutableDictionary *userInfo; // @dynamic userInfo;

@end

