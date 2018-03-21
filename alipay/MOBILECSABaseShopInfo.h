//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MOBILECSAToString.h"

@class NSArray, NSString;

@interface MOBILECSABaseShopInfo : MOBILECSAToString
{
    NSString *_shopId;
    NSString *_pid;
    NSString *_brandId;
    NSString *_branchName;
    NSString *_branchLogo;
    NSString *_shopName;
    NSString *_coverUrl;
    double _score;
    NSString *_averagePrice;
    NSString *_categoryDesc;
    NSString *_slogan;
    NSString *_industry;
    NSString *_address;
    NSString *_distance;
    NSString *_taxiUrl;
    double _longitude;
    double _latitude;
    NSArray *_telNos;
    NSString *_recommendGoods;
    NSString *_rootCategory;
    NSString *_cityId;
}

+ (Class)telNosElementClass;
@property(retain, nonatomic) NSString *cityId; // @synthesize cityId=_cityId;
@property(retain, nonatomic) NSString *rootCategory; // @synthesize rootCategory=_rootCategory;
@property(retain, nonatomic) NSString *recommendGoods; // @synthesize recommendGoods=_recommendGoods;
@property(retain, nonatomic) NSArray *telNos; // @synthesize telNos=_telNos;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *taxiUrl; // @synthesize taxiUrl=_taxiUrl;
@property(retain, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *industry; // @synthesize industry=_industry;
@property(retain, nonatomic) NSString *slogan; // @synthesize slogan=_slogan;
@property(retain, nonatomic) NSString *categoryDesc; // @synthesize categoryDesc=_categoryDesc;
@property(retain, nonatomic) NSString *averagePrice; // @synthesize averagePrice=_averagePrice;
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(retain, nonatomic) NSString *branchLogo; // @synthesize branchLogo=_branchLogo;
@property(retain, nonatomic) NSString *branchName; // @synthesize branchName=_branchName;
@property(retain, nonatomic) NSString *brandId; // @synthesize brandId=_brandId;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;

@end

