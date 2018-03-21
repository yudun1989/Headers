//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface CNPackageTraceDetailItem : TBJSONModel
{
    NSString *_sectionIcon;
    NSString *_section;
    NSString *_tpCode;
    long long _tpId;
    NSString *_tpName;
    NSString *_time;
    NSString *_desc;
    NSString *_standerdDesc;
    NSString *_message;
    NSString *_action;
    NSString *_mailNo;
    NSString *_operator;
    NSString *_operatorContact;
    NSString *_city;
    NSString *_cityCode;
    NSString *_district;
    NSString *_facilityName;
    NSString *_facilityType;
    NSString *_facilityCode;
    NSString *_orderCode;
}

@property(retain, nonatomic) NSString *orderCode; // @synthesize orderCode=_orderCode;
@property(retain, nonatomic) NSString *facilityCode; // @synthesize facilityCode=_facilityCode;
@property(retain, nonatomic) NSString *facilityType; // @synthesize facilityType=_facilityType;
@property(retain, nonatomic) NSString *facilityName; // @synthesize facilityName=_facilityName;
@property(retain, nonatomic) NSString *district; // @synthesize district=_district;
@property(retain, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *operatorContact; // @synthesize operatorContact=_operatorContact;
@property(retain, nonatomic) NSString *operator; // @synthesize operator=_operator;
@property(retain, nonatomic) NSString *mailNo; // @synthesize mailNo=_mailNo;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *standerdDesc; // @synthesize standerdDesc=_standerdDesc;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *tpName; // @synthesize tpName=_tpName;
@property(nonatomic) long long tpId; // @synthesize tpId=_tpId;
@property(retain, nonatomic) NSString *tpCode; // @synthesize tpCode=_tpCode;
@property(retain, nonatomic) NSString *section; // @synthesize section=_section;
@property(retain, nonatomic) NSString *sectionIcon; // @synthesize sectionIcon=_sectionIcon;
- (void).cxx_destruct;

@end

